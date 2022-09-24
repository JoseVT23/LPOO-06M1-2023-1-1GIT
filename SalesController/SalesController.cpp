#include "pch.h"

#include "SalesController.h"


int SalesController::Controller::AddProduct(Product^ product)
{
    productList->Add(product);
    return 1;
}

int SalesController::Controller::UpdateProduct(Product^ product)
{
    for (int i = 0; i < productList->Count; i++)
        if (product->Id == productList[i]->Id) {
            productList[i] = product;
            return 1;
        }
    return 0;
}

int SalesController::Controller::DeleteProduct(int productId)
{
    for (int i = 0; i < productList->Count; i++)
        if (productId == productList[i]->Id) {
            productList->RemoveAt(i);
            return 1;
        }
    return 0;
}

List<Product^>^ SalesController::Controller::QueryAllProducts()
{
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
