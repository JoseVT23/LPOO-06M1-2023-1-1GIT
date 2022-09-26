#pragma once

using namespace System;
using namespace SalesModel;
using namespace System::Collections::Generic;
using namespace System::IO;

namespace SalesController {
	public ref class Controller
	{
		private:
			// con el término static se pueden definir variables de clase o atributos estáticos.
			static List <Product^>^ productList = gcnew List<Product^>(); // Lista de Productos
			static List <Customer^>^ customerList = gcnew List<Customer^>(); // Lista de clientes
			static List <Salesman^>^ salesmanList = gcnew List<Salesman^>(); // Lista de vendedores
			static List <StoreManager^>^ storeManagerList = gcnew List<StoreManager^>(); // Lista de gerentes de tienda
			static List <Supervisor^>^ supervisorList = gcnew List<Supervisor^>(); // Lista de supervisores de tienda
		public:
		/* Static se usa definir miembros que se pueden invocar
		sin necesidad de contar con una instancia de la clase. */
			//Métodos CRUD de Product
			static int AddProduct(Product ^product); //Métodos estáticos o de clase
			static int UpdateProduct(Product^ product);
			static int DeleteProduct(int productId);
			static List <Product^>^ QueryAllProducts();
			static Product^ QueryProductById(int productId);
			static void PersistProducts();
			static void LoadProductsData();
			
			//Métodos CRUD de Customer
			static int AddCustomer(Customer^);
			static int UpdateCustomer(Customer^);
			static int DeleteCustomer(int customerId);
			static List<Customer^>^ QueryAllCustomers();
			static List<Natural^>^ QueryAllNaturals();
			static List<Company^>^ QueryAllCompanies();
			static Customer^ QueryCustomerById(int customerId);

			//Métodos CRUD de Salesman
			static int AddSalesman(Salesman^);
			static int UpdateSalesman(Salesman^);
			static int DeleteSalesman(int salesmanId);
			static Salesman^ QuerySalesmanById(int salesmanId);
			static List<Salesman^>^ QueryAllSalesmen();
			static List<String^>^ QueryAllStores();

			//Métodos CRUD de StoreManager
			static int AddStoreManager(StoreManager^);
			static int UpdateStoreManager(StoreManager^);
			static int DeleteStoreManager(int storeManagerId);
			static StoreManager^ QueryStoreManagerById(int storeManagerId);
			static List<StoreManager^>^ QueryAllStoreManagers();

			//Métodos CRUD de Supervisor
			static int AddSupervisor(Supervisor^);
			static int UpdateSupervisor(Supervisor^);
			static int DeleteSupervisor(int supervisorId);
			static Supervisor^ QuerySupervisorById(int supervisorId);
			static List<Supervisor^>^ QueryAllSupervisors();

			//Autenticación de usuario
			static Employee^ Login(String ^username, String^ password);
	};
}
