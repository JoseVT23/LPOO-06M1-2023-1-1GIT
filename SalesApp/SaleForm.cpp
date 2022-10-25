#include "pch.h"
#include "SaleForm.h"
#include "SalesMainForm.h"

System::Void SalesApp::SaleForm::SaleForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	txtDate->Text = DateTime::Now.ToString("dd/MM/yyyy");
	this->Text = "Venta realizada por " + SalesMainForm::salesman->Name + " " + SalesMainForm::salesman->LastName;
}

System::Void SalesApp::SaleForm::btnRegisterSale_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblCustomerData->Text == "Sin cliente") {
		customer = Controller::QueryCustomerById(0);
	}
	if (dgvDetails->Rows->Count == 0 || txtTotal->Text->Trim() == "0") {
		MessageBox::Show("Tiene que agregar un producto");
		return;
	}
	Sale^ sale = gcnew Sale();
	sale->Id = Controller::QueryLastSaleId() + 1;
	sale->Customer = customer;
	sale->TxnDate = txtDate->Text;
	sale->Salesman = SalesMainForm::salesman;
	sale->Total = Double::Parse(txtTotal->Text);
	sale->SaleDetails = gcnew List<SaleDetail^>();
	//Recorrer todos las filas del grid para armar los detalles de venta
	//y añadir cada detalle de venta a SaleDetails
	for (int i = 0; i < dgvDetails->RowCount - 1; i++) {
		SaleDetail^ saleDetail = gcnew SaleDetail();
		int productId = Int32::Parse(dgvDetails->Rows[i]->Cells[0]->Value->ToString());
		saleDetail->Id = i + 1;
		saleDetail->Product = Controller::QueryProductById(productId);
		saleDetail->UnitPrice = Convert::ToDouble(dgvDetails->Rows[i]->Cells[2]->Value->ToString());
		saleDetail->Quantity = Convert::ToInt32(dgvDetails->Rows[i]->Cells[3]->Value->ToString());
		saleDetail->SubTotal = Convert::ToDouble(dgvDetails->Rows[i]->Cells[4]->Value->ToString());
		sale->SaleDetails->Add(saleDetail);
	}
	// 
	//Completar el RegisterSale
	Controller::RegisterSale(sale);
	MessageBox::Show("Se ha registrado la venta exitosamente.");

}
