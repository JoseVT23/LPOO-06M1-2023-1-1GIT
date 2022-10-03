#include "pch.h"
#include "ProductSearchForm.h"
#include "SaleForm.h"

System::Void SalesApp::ProductSearchForm::dgvProducts_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
		if (e->RowIndex < 0) return;
		if (e->RowIndex >= 0) {
			String^ productId = dgvProducts->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			Product^ p = Controller::QueryProductById(Int32::Parse(productId));
			((SaleForm^)refForm)->AddProductToSalesDetails(p);
		}
		this->Close();
}
