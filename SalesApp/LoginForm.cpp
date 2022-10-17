#include "pch.h"
#include "LoginForm.h"
#include "SalesMainForm.h"

System::Void SalesApp::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{
    Employee^ emp = Controller::Login(txtUsername->Text, txtPassword->Text);
	if (emp != nullptr) {
		MessageBox::Show("Bienvenido " + emp->Name);
		SalesMainForm::salesman = (Salesman^)emp;
		this->Close();
	}
	else {
		MessageBox::Show("Usuario y contraseña incorrectos.");
	}
}
