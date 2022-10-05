#include "pch.h"
#include "SalesMainForm.h"

using namespace System;
using namespace SalesModel;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String ^> ^args){
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //SalesApp is your project name
    
    SalesApp::SalesMainForm form;
    Application::Run(% form);
    
    /*
    Product^ p1 = gcnew Product();
    p1->Id = 1;
    p1->Name = "Jabón Requesona";
    p1->Description = "Jabón de tocador que deja bien limpio.";
    p1->Price = 2.5;
 
    Product^ p2 = gcnew Product();
    p2->Id = 2;
    p2->Name = "Jabón Cayman";    
    p2->Description = "Jabón de tocador que deja bien limpio y con fragancia a flores.";
    p2->Price = 4.5;

    Product^ p3 = gcnew Product(p1);
    
    Customer^ c1 = gcnew Natural();
    // Natural^ n1 = gcnew Customer(); //Está mal
    c1->Id = 1;
    c1->Name = "Esteban Quito";
    c1->Address = "Elm Street 666";
    c1->DocNumber = "69696969";
    c1->Email = "esteban.quito@gmail.com";
    c1->PhoneNumber = "969696969";
    c1->CustomerPoints = 0;
    ((Natural^)c1)->Gender = 'M';

    Salesman^ s1 = gcnew Salesman();
    s1->Id = 1;
    s1->Name = "Zoila Baca";
    s1->Address = "Las Glorias 123";
    s1->DocNumber = "44444444";
    s1->PhoneNumber = "987654321";
    s1->Email = "zoila.baca@gmail.com";
    s1->Quota = 50000;
    s1->Salary = 3000;

    //Simulación de una venta
    Sale^ sale1 = gcnew Sale();
    sale1->Id = 1;
    sale1->TxnDate = "20220912";
    sale1->Total = 0;
    sale1->Status = 'A';
    sale1->Salesman = s1;
    sale1->Customer = c1;
    sale1->SaleDetails = gcnew List<SaleDetail^>();
    sale1->SaleDetails->Add(gcnew SaleDetail());
    sale1->SaleDetails[0]->Id = 1;
    sale1->SaleDetails[0]->Product = p1;
    sale1->SaleDetails[0]->Quantity = 2;
    sale1->SaleDetails[0]->UnitPrice = p1->Price * 0.75;
    sale1->SaleDetails[0]->SubTotal = sale1->SaleDetails[0]->Quantity *
                                      sale1->SaleDetails[0]->UnitPrice;
    sale1->SaleDetails->Add(gcnew SaleDetail());
    sale1->SaleDetails[1]->Id = 2;
    sale1->SaleDetails[1]->Product = p3;
    sale1->SaleDetails[1]->Quantity = 4;
    sale1->SaleDetails[1]->UnitPrice = sale1->SaleDetails[1]->Product->Price * 0.85;
    sale1->SaleDetails[1]->SubTotal = sale1->SaleDetails[1]->Quantity *
        sale1->SaleDetails[1]->UnitPrice;

    for (int i = 0; i < sale1->SaleDetails->Count; i++)
        sale1->Total += sale1->SaleDetails[i]->SubTotal;

    //Emisión de reporte de la venta realizada
    Console::WriteLine("Reporte de la venta:\n");
    Console::WriteLine("Fecha: " + sale1->TxnDate);
    Console::WriteLine("Vendedor: " + sale1->Salesman->Name);
    Console::WriteLine("Cliente (DNI y nombre): " + sale1->Customer->DocNumber + " - " + sale1->Customer->Name);
    Console::WriteLine("Detalles de venta:");
    for (int i = 0; i < sale1->SaleDetails->Count; i++) {
        
        Console::WriteLine((i+1) + " - " + sale1->SaleDetails[i]->Product->Name
            + " P.U.= " + sale1->SaleDetails[i]->Product->Price 
            + " Cant.= " + sale1->SaleDetails[i]->Quantity
            + " Subtotal= " + sale1->SaleDetails[i]->SubTotal);
    }

    Console::WriteLine("El total de la venta es: " + sale1->Total);
    */
    return 0;
}
