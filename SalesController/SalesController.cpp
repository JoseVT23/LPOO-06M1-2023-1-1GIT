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
    if (username == "jbaldeon" && password == "password") {
        employee = gcnew Employee();
        employee->Id = 1;
        employee->Name = "Johan";
        employee->Email = "johan.baldeon@pucp.edu.pe";
        employee->Address = "Elm Street 666";
        employee->DocNumber = "66666666";
        employee->PhoneNumber = "999999999";
        employee->Salary = 4500;
        employee->Username = "jbaldeon";
    }
    return employee;
}

int SalesController::Controller::AddCustomer(Customer^ customer)
{   
    customer->Status = 'A';
    customerList->Add(customer);
    return 1;
}

int SalesController::Controller::UpdateCustomer(Customer^ customer)
{
    for (int i = 0; i < customerList->Count; i++)
        if (customer->Id == customerList[i]->Id) {
            customer->Status = 'A';
            customerList[i] = customer;
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
            return 1;
        }
    return 0;
}

List<Customer^>^ SalesController::Controller::QueryAllCustomers() {
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
    List<Company^>^ activeCompanyList = gcnew List<Company^>();
    for (int i = 0; i < customerList->Count; i++) {
        if (customerList[i]->Status == 'A' && customerList[i]->GetType() == Company::typeid) {
            activeCompanyList->Add((Company^)customerList[i]);
        }
    }
    return activeCompanyList;
}

Customer^ SalesController::Controller::QueryCustomerById(int customerId) {
    for (int i = 0; i < customerList->Count; i++)
        if (customerId == customerList[i]->Id) {
            return customerList[i];
        }
    return nullptr;
}

int SalesController::Controller::AddSalesman(Salesman^ salesman)
{
    salesman->Status = 'A';
    salesmanList->Add(salesman);
    return 1;
}

int SalesController::Controller::UpdateSalesman(Salesman^ salesman)
{
    for (int i = 0; i < salesmanList->Count; i++)
        if (salesman->Id == salesmanList[i]->Id) {
            salesman->Status = 'A';
            salesmanList[i] = salesman;
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
            return 1;
        }
    return 0;
}

List<Salesman^>^ SalesController::Controller::QueryAllSalesmen()
{
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