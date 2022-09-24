#pragma once

using namespace System;
using namespace SalesModel;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class Controller
	{
		private:
			static List <Product^>^ productList = gcnew List<Product^>(); // Variable de clase o atributo estático

		public:
		/* Static se usa definir miembros que se pueden invocar
		sin necesidad de contar con una instancia de la clase. */
			//Métodos para el CRUD de Product
			static int AddProduct(Product ^product); //Métodos estáticos o de clase
			static int UpdateProduct(Product^ product);
			static int DeleteProduct(int productId);
			static List <Product^>^ QueryAllProducts();
			static Product^ QueryProductById(int productId);
			
			//Autenticación de usuario
			static Employee^ Login(String ^username, String^ password);
	};
}
