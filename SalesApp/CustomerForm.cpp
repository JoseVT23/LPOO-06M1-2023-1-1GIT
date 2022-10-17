#include "pch.h"
#include "CustomerForm.h"
#include "SaleForm.h"

using namespace SalesApp;

using namespace System::Collections::Generic;

Void SalesApp::CustomerForm::RefreshPersonsDGV()
{
	List <Natural^>^ personList = Controller::QueryAllNaturals();
	dgvPersons->Rows->Clear();
	for (int i = 0; i < personList->Count; i++) {
		dgvPersons->Rows->Add(gcnew array<String^> {
			"" + personList[i]->Id,
				personList[i]->Name,
				personList[i]->LastName,
				personList[i]->Email,
				personList[i]->PhoneNumber
		});
	}
	return Void();
}

System::Void SalesApp::CustomerForm::dgvPersons_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (dgvPersons->CurrentCell != nullptr &&
		dgvPersons->CurrentCell->Value != nullptr &&
		dgvPersons->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvPersons->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvPersons->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		int personId = Int32::Parse(a);
		Customer^ customer = Controller::QueryCustomerById(personId);
		//MessageBox::Show(customer->ToString()); //Polimorfismo

		if (customer != nullptr && customer->GetType() == Natural::typeid) {
			if (UseType == 'S') {
				//¿Cómo enviamos al formulario de la venta los datos del cliente?
				//Rpta. Mediante una referencia al formulario de la venta (SaleForm).
				((SaleForm^)RefSaleForm)->SetCustomer(customer);
			}
			else {
				txtPersonId->Text = "" + customer->Id;
				rbtnMasc->Checked = dynamic_cast<Natural^>(customer)->Gender == 'M';
				rbtnFem->Checked = dynamic_cast<Natural^>(customer)->Gender == 'F';
				txtFirstName->Text = dynamic_cast<Natural^>(customer)->Name;
				txtLastName->Text = dynamic_cast<Natural^>(customer)->LastName;
				txtDNI->Text = dynamic_cast<Natural^>(customer)->DocNumber;
				txtEmail->Text = dynamic_cast<Natural^>(customer)->Email;
				txtAddress->Text = customer->Address;
				txtPhoneNumber->Text = customer->PhoneNumber;
				dtpBirthday->Value = DateTime::Parse(dynamic_cast<Natural^>(customer)->Birthday);
				txtPersonPoints->Text = "" + customer->CustomerPoints;
			}
		}
	}

}

Void CustomerForm::RefreshCompaniesDGV() {
	List <Company^>^ companyList = Controller::QueryAllCompanies();
	dgvCompanies->Rows->Clear();
	for (int i = 0; i < companyList->Count; i++) {
		dgvCompanies->Rows->Add(gcnew array<String^> {
			"" + companyList[i]->Id,
				companyList[i]->Name,
				companyList[i]->DocNumber,
				companyList[i]->PhoneNumber
		});
	}
	return Void();
}

System::Void SalesApp::CustomerForm::dgvCompanies_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (dgvCompanies->CurrentCell != nullptr &&
		dgvCompanies->CurrentCell->Value != nullptr &&
		dgvCompanies->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvCompanies->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvCompanies->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		int personId = Int32::Parse(a);
		Customer^ customer = Controller::QueryCustomerById(personId);
		//MessageBox::Show(customer->ToString());
		if (customer->GetType() == Company::typeid) {
			txtCompanyId->Text = "" + customer->Id;
			txtCompanyName->Text = dynamic_cast<Company^>(customer)->Name;
			txtWebPage->Text = dynamic_cast<Company^>(customer)->WebPage;
			txtRUC->Text = dynamic_cast<Company^>(customer)->DocNumber;
			//txtLegalDepartment->Text = dynamic_cast<Company^>(customer)->LegalDepartment;
			txtCompanyAddress->Text = customer->Address;
			txtCompanyPhoneNumber->Text = customer->PhoneNumber;
			txtCompanyEmail->Text = customer->Email;
			txtCompanyPoints->Text = "" + customer->CustomerPoints;
			txtAgent->Text = dynamic_cast<Company^>(customer)->Agent;
			//dtpCreationDate->Value = DateTime::Parse(customer->Birthday);
		}
	}

}

Void CustomerForm::ClearControls() {
	txtPersonId->Text = "";
	//txtPersonId->ReadOnly = true;
	txtFirstName->Text = "";
	txtDNI->Text = "";
	txtLastName->Text = "";
	txtAddress->Text = "";
	txtPhoneNumber->Text = "";
	txtEmail->Text = "";
	txtCompanyId->Text = "";
	//txtCompanyId->ReadOnly = true;
	txtRUC->Text = "";
	txtCompanyName->Text = "";
	txtCompanyAddress->Text = "";
	txtCompanyPhoneNumber->Text = "";
	//txtLegalDepartment->Text = "";
	txtWebPage->Text = "";
	txtCompanyEmail->Text = "";
	txtPersonPoints->Text = "0";
	txtCompanyPoints->Text = "0";
}