#include "pch.h"

#include "SalesController.h"

using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

void SalesController::Controller::PersistProducts() {
    /* //En formato de archivo de texto plano
    StreamWriter^ sw = gcnew StreamWriter("Products.txt");
    for (int i = 0; i < productList->Count; i++) {
        sw->WriteLine(productList[i]->Id + "," + productList[i]->Name + "," +
            productList[i]->Description + ","+ productList[i]->Price + ","+
            productList[i]->Stock);
    }
    sw->Close();
    */
    /* //En formato de archivo XML
    XmlSerializer^ writer = gcnew XmlSerializer(productList->GetType());
    StreamWriter^ sw = gcnew StreamWriter("Products.xml");
    writer->Serialize(sw, productList);
    sw->Close();
    */
    //En formato de archivo binario
    Stream^ stream = File::Open("Products.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, productList);
    stream->Close();
}

int SalesController::Controller::AddProduct(Product^ product)
{
    productList->Add(product);
    PersistProducts();
    return 1;
}

int SalesController::Controller::UpdateProduct(Product^ product)
{
    for (int i = 0; i < productList->Count; i++)
        if (product->Id == productList[i]->Id) {
            productList[i] = product;
            PersistProducts();
            return 1;
        }
    return 0;
}

int SalesController::Controller::DeleteProduct(int productId)
{
    for (int i = 0; i < productList->Count; i++)
        if (productId == productList[i]->Id) {
            productList->RemoveAt(i);
            PersistProducts();
            return 1;
        }
    return 0;
}

void SalesController::Controller::LoadProductsData() {
    productList = gcnew List<Product^>();
    /* //Lectura desde un archivo de texto plano
    StreamReader^ sr = gcnew StreamReader("Products.txt");
    while (!sr->EndOfStream) {
        Product^ p = gcnew Product();
        String^ line = sr->ReadLine();

        array<String^>^ data = line->Split(',');
        p->Id = Convert::ToInt32( data[0]);
        p->Name = data[1];
        p->Description = data[2];
        p->Price = Convert::ToDouble(data[3]);
        p->Stock = Int32::Parse(data[4]);
        p->Status = 'A';
        productList->Add(p);
    }
    */
    /* //Lectura desde un XML
    XmlSerializer^ reader = gcnew XmlSerializer(productList->GetType());
    StreamReader^ sr = gcnew StreamReader("Products.xml");
    productList = (List<Product^>^)reader->Deserialize(sr);
    */
    //Lectura desde un archivo binario
    Stream^ sr = File::Open("Products.bin", FileMode::Open);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    productList = (List<Product^>^)bFormatter->Deserialize(sr);

    sr->Close();
}

List<Product^>^ SalesController::Controller::QueryProductsByNameOrDescription(String^ value)
{
    LoadProductsData();
    List<Product^> ^ newProductList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Name->Contains(value) || 
            productList[i]->Description->Contains(value))
            newProductList->Add(productList[i]);
    }
    return newProductList;
}

List<Product^>^ SalesController::Controller::QueryAllProducts()
{
    LoadProductsData();
    List<Product^>^ activeProductsList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++){
        if (productList[i]->Status == 'A') {
            activeProductsList->Add(productList[i]);
        }
    }
    return activeProductsList;
}

Product^ SalesController::Controller::QueryProductById(int productId)
{
    for (int i = 0; i < productList->Count; i++)
        if (productId == productList[i]->Id) {
            return productList[i];
        }
    return nullptr;
}

Employee^ SalesController::Controller::Login(String^ username, String^ password)
{
    Employee^ employee;
    LoadSalesmenData();
    for (int i = 0; i < salesmanList->Count; i++) {
        if (username == salesmanList[i]->Username &&
            password == salesmanList[i]->Password) {
            employee = salesmanList[i];
            return employee;
        }
    }
    return employee;
}

void SalesController::Controller::RegisterSale(Sale^ sale)
{
    salesList->Add(sale);
    PersistSales();
}

int SalesController::Controller::QueryLastSaleId()
{
    LoadSalesData();
    int lastSaleId = 0;
    for (int i = 0; i < salesList->Count; i++) {
        if (salesList[i]->Id > lastSaleId)
            lastSaleId = salesList[i]->Id;
    }
    return lastSaleId;
}

List<Sale^>^ SalesController::Controller::QueryAllSales()
{
    LoadSalesData();
    return salesList;
}

void SalesController::Controller::PersistSales()
{
    //En formato de archivo binario
    Stream^ stream = File::Open("Sales.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, salesList);
    stream->Close();
}

void SalesController::Controller::LoadSalesData()
{
    salesList = gcnew List<Sale^>();
    //Lectura desde un archivo binario
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Sales.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        salesList = (List<Sale^>^)bFormatter->Deserialize(sr);
    }
    catch (FileNotFoundException^ ex) {
    }
    catch (Exception^ ex) {
    }
    finally {
        if (sr != nullptr) sr->Close();
    }
}

int SalesController::Controller::AddCustomer(Customer^ customer)
{   
    customer->Status = 'A';
    customerList->Add(customer);
    PersistCustomers();
    return 1;
}

int SalesController::Controller::UpdateCustomer(Customer^ customer)
{
    for (int i = 0; i < customerList->Count; i++)
        if (customer->Id == customerList[i]->Id) {
            customer->Status = 'A';
            customerList[i] = customer;
            PersistCustomers();
            return 1;
        }
    return 0;
}

int SalesController::Controller::DeleteCustomer(int customerId)
{
    for (int i = 0; i < customerList->Count; i++)
        if (customerId == customerList[i]->Id) {
            customerList[i]->Status = 'I';
            //customerList->RemoveAt(i);
            PersistCustomers();
            return 1;
        }
    return 0;
}

List<Customer^>^ SalesController::Controller::QueryAllCustomers() {
    LoadCustomersData();
    List<Customer^>^ activeCustomerList = gcnew List<Customer^>();
    for (int i = 0; i < customerList->Count; i++) {
        if (customerList[i]->Status == 'A') {
            activeCustomerList->Add(customerList[i]);
        }
    }
    return activeCustomerList;
}

List<Natural^>^ SalesController::Controller::QueryAllNaturals()
{
    LoadCustomersData();
    List<Natural^>^ activeNaturalList = gcnew List<Natural^>();
    for (int i = 0; i < customerList->Count; i++) {
        if (customerList[i]->Status == 'A' && customerList[i]->GetType() == Natural::typeid) {
            activeNaturalList->Add((Natural^)customerList[i]);
        }
    }
    return activeNaturalList;
}

List<Company^>^ SalesController::Controller::QueryAllCompanies()
{
    LoadCustomersData();
    List<Company^>^ activeCompanyList = gcnew List<Company^>();
    for (int i = 0; i < customerList->Count; i++) {
        if (customerList[i]->Status == 'A' && customerList[i]->GetType() == Company::typeid) {
            activeCompanyList->Add((Company^)customerList[i]);
        }
    }
    return activeCompanyList;
}

Customer^ SalesController::Controller::QueryCustomerById(int customerId) {
    LoadCustomersData();
    for (int i = 0; i < customerList->Count; i++)
        if (customerId == customerList[i]->Id) {
            return customerList[i];
        }
    return nullptr;
}

Customer^ SalesController::Controller::QueryCustomerByDNI(String^ dni)
{
    LoadCustomersData();
    for (int i = 0; i < customerList->Count; i++)
        if (dni == customerList[i]->DocNumber) {
            return customerList[i];
        }
    return nullptr;
}

void SalesController::Controller::PersistCustomers()
{
    //En formato de archivo binario
    Stream^ stream = File::Open("Customers.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, customerList);
    stream->Close();

}

void SalesController::Controller::LoadCustomersData()
{
    customerList = gcnew List<Customer^>();
    //Lectura desde un archivo binario
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Customers.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        customerList = (List<Customer^>^)bFormatter->Deserialize(sr);
    }
    catch (FileNotFoundException^ ex) {
    }
    catch (Exception^ ex) {
    }
    finally {
        if (sr != nullptr) sr->Close();
    }
}

void SalesController::Controller::PersistSalesmen() {
    //En formato de archivo binario
    Stream^ stream = File::Open("Salesmen.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, salesmanList);
    stream->Close();
}

void SalesController::Controller::LoadSalesmenData() {
    salesmanList = gcnew List<Salesman^>();
    //Lectura desde un archivo binario
    Stream^ sr=nullptr;
    try {
        sr = File::Open("Salesmen.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        salesmanList = (List<Salesman^>^)bFormatter->Deserialize(sr);
    }
    catch (FileNotFoundException^ ex) {
    }
    catch (Exception^ ex) {
    }
    finally {
        if (sr != nullptr ) sr->Close();
    }
    
}

int SalesController::Controller::AddSalesman(Salesman^ salesman)
{
    salesman->Status = 'A';
    salesmanList->Add(salesman);
    PersistSalesmen();
    return 1;
}

int SalesController::Controller::UpdateSalesman(Salesman^ salesman)
{
    for (int i = 0; i < salesmanList->Count; i++)
        if (salesman->Id == salesmanList[i]->Id) {
            salesman->Status = 'A';
            salesmanList[i] = salesman;
            PersistSalesmen();
            return 1;
        }
    return 0;
}

int SalesController::Controller::DeleteSalesman(int salesmanId)
{
    for (int i = 0; i < salesmanList->Count; i++)
        if (salesmanId == salesmanList[i]->Id) {
            //salesmanList->RemoveAt(i);
            salesmanList[i]->Status = 'I';
            PersistSalesmen();
            return 1;
        }
    return 0;
}

List<Salesman^>^ SalesController::Controller::QueryAllSalesmen()
{
    LoadSalesmenData();
    List<Salesman^>^ activeSalesmanList = gcnew List<Salesman^>();
    for (int i = 0; i < salesmanList->Count; i++) {
        if (salesmanList[i]->Status == 'A') {
            activeSalesmanList->Add(salesmanList[i]);
        }
    }
    return activeSalesmanList;
}

List<String^>^ SalesController::Controller::QueryAllStores()
{
    List <String^>^ storeList = gcnew List<String^>();
    StreamReader^ sr = gcnew StreamReader("Stores.txt");
    while (!sr->EndOfStream)
        storeList->Add(sr->ReadLine());
    sr->Close();
    return storeList;
}

Salesman^ SalesController::Controller::QuerySalesmanById(int salesmanId)
{
    for (int i = 0; i < salesmanList->Count; i++)
        if (salesmanId == salesmanList[i]->Id) {
            return salesmanList[i];
        }
    return nullptr;
}

int SalesController::Controller::AddStoreManager(StoreManager^ storeManager)
{
    storeManager->Status = 'A';
    storeManagerList->Add(storeManager);
    return 1;
}

int SalesController::Controller::UpdateStoreManager(StoreManager^ storeManager)
{
    for (int i = 0; i < storeManagerList->Count; i++)
        if (storeManager->Id == storeManagerList[i]->Id) {
            storeManager->Status = 'A';
            storeManagerList[i] = storeManager;
            return 1;
        }
    return 0;
}

int SalesController::Controller::DeleteStoreManager(int storeManagerId)
{
    for (int i = 0; i < storeManagerList->Count; i++)
        if (storeManagerId == storeManagerList[i]->Id) {
            storeManagerList[i]->Status = 'I';
            //storeManagerList->RemoveAt(i);
            return 1;
        }
    return 0;
}
//P
List<StoreManager^>^ SalesController::Controller::QueryAllStoreManagers()
{
    List<StoreManager^>^ activeStoreManagerList = gcnew List<StoreManager^>();
    for (int i = 0; i < storeManagerList->Count; i++) {
        if (storeManagerList[i]->Status == 'A') {
            activeStoreManagerList->Add(storeManagerList[i]);
        }
    }
    return activeStoreManagerList;
}

StoreManager^ SalesController::Controller::QueryStoreManagerById(int storeManagerId)
{
    for (int i = 0; i < storeManagerList->Count; i++)
        if (storeManagerId == storeManagerList[i]->Id) {
            return storeManagerList[i];
        }
    return nullptr;
}

int SalesController::Controller::AddSupervisor(Supervisor^ supervisor)
{
    supervisor->Status = 'A';
    supervisorList->Add(supervisor);
    return 1;
}

int SalesController::Controller::UpdateSupervisor(Supervisor^ supervisor)
{
    for (int i = 0; i < supervisorList->Count; i++)
        if (supervisor->Id == supervisorList[i]->Id) {
            supervisor->Status = 'A';
            supervisorList[i] = supervisor;
            return 1;
        }
    return 0;
}

int SalesController::Controller::DeleteSupervisor(int supervisorId)
{
    for (int i = 0; i < supervisorList->Count; i++)
        if (supervisorId == supervisorList[i]->Id) {
            supervisorList[i]->Status = 'I';
            //supervisorList->RemoveAt(i);
            return 1;
        }
    return 0;
}

List<Supervisor^>^ SalesController::Controller::QueryAllSupervisors()
{
    List<Supervisor^>^ activeSupervisorList = gcnew List<Supervisor^>();
    for (int i = 0; i < supervisorList->Count; i++) {
        if (supervisorList[i]->Status == 'A') {
            activeSupervisorList->Add(supervisorList[i]);
        }
    }
    return activeSupervisorList;
}

Supervisor^ SalesController::Controller::QuerySupervisorById(int supervisorId)
{
    for (int i = 0; i < supervisorList->Count; i++)
        if (supervisorId == supervisorList[i]->Id) {
            return supervisorList[i];
        }
    return nullptr;
}