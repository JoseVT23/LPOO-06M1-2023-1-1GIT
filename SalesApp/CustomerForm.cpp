#include "pch.h"
#include "CustomerForm.h"

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