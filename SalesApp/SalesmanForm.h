#pragma once
#include "ComboBoxItem.h"

namespace SalesApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesModel;
	using namespace SalesController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de SalesmanForm
	/// </summary>
	public ref class SalesmanForm : public System::Windows::Forms::Form
	{
	public:
		SalesmanForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SalesmanForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtId;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::RadioButton^ rbtnMale;
	private: System::Windows::Forms::GroupBox^ gBoxGender;
	private: System::Windows::Forms::RadioButton^ rbtFemale;
	private: System::Windows::Forms::TextBox^ txtSalary;
	private: System::Windows::Forms::TextBox^ txtQuota;
	private: System::Windows::Forms::ComboBox^ cmbStore;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvSalesmen;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SalesmanId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quota;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::Label^ label10;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SalesmanForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->rbtnMale = (gcnew System::Windows::Forms::RadioButton());
			this->gBoxGender = (gcnew System::Windows::Forms::GroupBox());
			this->rbtFemale = (gcnew System::Windows::Forms::RadioButton());
			this->txtSalary = (gcnew System::Windows::Forms::TextBox());
			this->txtQuota = (gcnew System::Windows::Forms::TextBox());
			this->cmbStore = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvSalesmen = (gcnew System::Windows::Forms::DataGridView());
			this->SalesmanId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quota = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->gBoxGender->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSalesmen))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id (*)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre (*)";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(140, 37);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(167, 20);
			this->txtId->TabIndex = 2;
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->archivoToolStripMenuItem,
					this->reporteToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(607, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nuevoToolStripMenuItem.Image")));
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesmanForm::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editarToolStripMenuItem.Image")));
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->editarToolStripMenuItem->Text = L"Editar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesmanForm::editarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesmanForm::salirToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->consultasToolStripMenuItem });
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// consultasToolStripMenuItem
			// 
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			this->consultasToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesmanForm::consultasToolStripMenuItem_Click);
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(140, 94);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(167, 20);
			this->txtFirstName->TabIndex = 4;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(419, 94);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(167, 20);
			this->txtLastName->TabIndex = 5;
			// 
			// rbtnMale
			// 
			this->rbtnMale->AutoSize = true;
			this->rbtnMale->Location = System::Drawing::Point(6, 14);
			this->rbtnMale->Name = L"rbtnMale";
			this->rbtnMale->Size = System::Drawing::Size(73, 17);
			this->rbtnMale->TabIndex = 6;
			this->rbtnMale->TabStop = true;
			this->rbtnMale->Text = L"Masculino";
			this->rbtnMale->UseVisualStyleBackColor = true;
			// 
			// gBoxGender
			// 
			this->gBoxGender->Controls->Add(this->rbtFemale);
			this->gBoxGender->Controls->Add(this->rbtnMale);
			this->gBoxGender->Location = System::Drawing::Point(140, 198);
			this->gBoxGender->Name = L"gBoxGender";
			this->gBoxGender->Size = System::Drawing::Size(167, 42);
			this->gBoxGender->TabIndex = 7;
			this->gBoxGender->TabStop = false;
			// 
			// rbtFemale
			// 
			this->rbtFemale->AutoSize = true;
			this->rbtFemale->Location = System::Drawing::Point(94, 15);
			this->rbtFemale->Name = L"rbtFemale";
			this->rbtFemale->Size = System::Drawing::Size(71, 17);
			this->rbtFemale->TabIndex = 7;
			this->rbtFemale->TabStop = true;
			this->rbtFemale->Text = L"Femenino";
			this->rbtFemale->UseVisualStyleBackColor = true;
			// 
			// txtSalary
			// 
			this->txtSalary->Location = System::Drawing::Point(419, 240);
			this->txtSalary->Name = L"txtSalary";
			this->txtSalary->Size = System::Drawing::Size(167, 20);
			this->txtSalary->TabIndex = 8;
			// 
			// txtQuota
			// 
			this->txtQuota->Location = System::Drawing::Point(140, 245);
			this->txtQuota->Name = L"txtQuota";
			this->txtQuota->Size = System::Drawing::Size(167, 20);
			this->txtQuota->TabIndex = 9;
			// 
			// cmbStore
			// 
			this->cmbStore->FormattingEnabled = true;
			this->cmbStore->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Camacho", L"Los Olivos", L"Puruchuco" });
			this->cmbStore->Location = System::Drawing::Point(140, 64);
			this->cmbStore->Name = L"cmbStore";
			this->cmbStore->Size = System::Drawing::Size(167, 21);
			this->cmbStore->TabIndex = 10;
			this->cmbStore->SelectedIndexChanged += gcnew System::EventHandler(this, &SalesmanForm::cmbStore_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Tienda (*)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(317, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Apellido paterno (*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 215);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Género (*)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(319, 242);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Salario S/. (*)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 247);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Meta de ventas S/. (*)";
			// 
			// btnAdd
			// 
			this->btnAdd->Enabled = false;
			this->btnAdd->Location = System::Drawing::Point(64, 277);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(132, 23);
			this->btnAdd->TabIndex = 16;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &SalesmanForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Enabled = false;
			this->btnUpdate->Location = System::Drawing::Point(230, 277);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(141, 23);
			this->btnUpdate->TabIndex = 17;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &SalesmanForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Enabled = false;
			this->btnDelete->Location = System::Drawing::Point(403, 277);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(140, 23);
			this->btnDelete->TabIndex = 18;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &SalesmanForm::btnDelete_Click);
			// 
			// dgvSalesmen
			// 
			this->dgvSalesmen->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSalesmen->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->SalesmanId,
					this->Name, this->LastName, this->username, this->quota
			});
			this->dgvSalesmen->Location = System::Drawing::Point(22, 315);
			this->dgvSalesmen->Name = L"dgvSalesmen";
			this->dgvSalesmen->Size = System::Drawing::Size(564, 152);
			this->dgvSalesmen->TabIndex = 19;
			this->dgvSalesmen->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SalesmanForm::dgvSalesmen_CellClick);
			// 
			// SalesmanId
			// 
			this->SalesmanId->HeaderText = L"Id";
			this->SalesmanId->Name = L"SalesmanId";
			this->SalesmanId->Width = 30;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nombre";
			this->Name->Name = L"Name";
			this->Name->Width = 115;
			// 
			// LastName
			// 
			this->LastName->HeaderText = L"Apellido";
			this->LastName->Name = L"LastName";
			this->LastName->Width = 130;
			// 
			// username
			// 
			this->username->HeaderText = L"Usuario";
			this->username->Name = L"username";
			this->username->Width = 140;
			// 
			// quota
			// 
			this->quota->HeaderText = L"Meta de venta";
			this->quota->Name = L"quota";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(319, 37);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Usuario (*)";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(419, 37);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(167, 20);
			this->txtUsername->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(318, 68);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Contraseña(*)";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(419, 65);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(167, 20);
			this->txtPassword->TabIndex = 23;
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(386, 174);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(200, 20);
			this->dtpBirthday->TabIndex = 39;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(285, 177);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(95, 13);
			this->label24->TabIndex = 38;
			this->label24->Text = L"Fec. nacimiento (*)";
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(140, 146);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(446, 20);
			this->txtEmail->TabIndex = 37;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(28, 149);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(45, 13);
			this->label16->TabIndex = 36;
			this->label16->Text = L"Email (*)";
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(140, 174);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(133, 20);
			this->txtPhoneNumber->TabIndex = 35;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(28, 177);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(62, 13);
			this->label14->TabIndex = 34;
			this->label14->Text = L"Teléfono (*)";
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(140, 120);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(446, 20);
			this->txtAddress->TabIndex = 33;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(28, 123);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Dirección (*)";
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(419, 208);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(100, 20);
			this->txtDNI->TabIndex = 41;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(319, 212);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 13);
			this->label10->TabIndex = 40;
			this->label10->Text = L"DNI (*)";
			// 
			// SalesmanForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(607, 479);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->dtpBirthday);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dgvSalesmen);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmbStore);
			this->Controls->Add(this->txtQuota);
			this->Controls->Add(this->txtSalary);
			this->Controls->Add(this->gBoxGender);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Text = L"Vendedores";
			this->Load += gcnew System::EventHandler(this, &SalesmanForm::SalesmanForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->gBoxGender->ResumeLayout(false);
			this->gBoxGender->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSalesmen))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Salesman^ s = gcnew Salesman();
	try {
		if (txtUsername->Text->Trim() == "") {
			MessageBox::Show("El nombre del usuario no debe estar vacío.");
			return;
		}
		if (txtPassword->Text->Trim() == "") {
			MessageBox::Show("El password del usuario no debe estar vacío.");
			return;
		}
		if (txtUsername->Text->Trim() == "") {
			MessageBox::Show("El nombre del usuario no debe estar vacío.");
			return;
		}
		if (txtLastName->Text->Trim() == "") {
			MessageBox::Show("El apellido del vendedor no debe estar vacío.");
			return;
		}
		if (txtSalary->Text->Trim() == "") {
			MessageBox::Show("El salario del vendedor no debe estar vacío.");
			return;
		}
		if (txtQuota->Text->Trim() == "") {
			MessageBox::Show("La meta de ventas del vendedor no debe estar vacío.");
			return;
		}
		if (txtAddress->Text->Trim() == "") {
			MessageBox::Show("La dirección del vendedor no debe estar vacío.");
			return;
		}
		if (txtPhoneNumber->Text->Trim() == "") {
			MessageBox::Show("El teléfono del vendedor no debe estar vacío.");
			return;
		}
		if (txtEmail->Text->Trim() == "") {
			MessageBox::Show("La correo del vendedor no debe estar vacío.");
			return;
		}
		if (txtDNI->Text->Trim() == "") {
			MessageBox::Show("El DNI del vendedor no debe estar vacío.");
			return;
		}
		if (cmbStore->SelectedIndex < 0) {
			MessageBox::Show("Una tienda debe estar seleccionada.");
			return;
		}

		s->Id = Int32::Parse(txtId->Text);
		s->Username = txtUsername->Text;
		s->Password = txtPassword->Text;
		s->Name = txtFirstName->Text;
		s->LastName = txtLastName->Text;
		s->Salary= Double::Parse(txtSalary->Text);
		s->Quota = Double::Parse(txtQuota->Text);
		s->Gender = rbtnMale->Checked ? 'M' : 'F';
		s->Address = txtAddress->Text;
		s->PhoneNumber = txtPhoneNumber->Text;
		s->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");
		s->Email = txtEmail->Text;
		s->DocNumber = txtDNI->Text;
		//s->Store = Controller::QueryStoreById(((ComboBoxItem^)cmbStore->Items[cmbStore->SelectedIndex])->Value);
		Controller::AddSalesman(s);
		RefreshDGVSalesmen();
		btnAdd->Enabled = true;
		ClearControls();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Envíe el error al área de TI.");
		return;
	}
}
private: System::Void consultasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DisableControls();
}
	Void DisableControls() {
		   txtId->ReadOnly = true;
		   txtFirstName->ReadOnly = true;
		   txtLastName->ReadOnly = true;
		   txtSalary->ReadOnly = true;
		   txtQuota->ReadOnly = true;
		   btnAdd->Enabled = false;
		   btnUpdate->Enabled = false;
		   btnDelete->Enabled = false;
	}
	Void EnableControls() {
		txtId->ReadOnly = false;
		txtFirstName->ReadOnly = false;
		txtLastName->ReadOnly = false;
		txtSalary->ReadOnly = false;
		txtQuota->ReadOnly = false;
		btnAdd->Enabled = true;
		btnUpdate->Enabled = true;
		btnDelete->Enabled = true;
	}

	Void RefreshDGVSalesmen() {
		List <Salesman^>^ salesmenList = Controller::QueryAllSalesmen();
		dgvSalesmen->Rows->Clear();
		if (salesmenList != nullptr)
			for (int i = 0; i < salesmenList->Count; i++) {
				dgvSalesmen->Rows->Add(gcnew array<String^> {
					"" + salesmenList[i]->Id,
						salesmenList[i]->Name,
						salesmenList[i]->LastName,
						salesmenList[i]->Username,
						"" + salesmenList[i]->Quota
				});
			}
	}

	void ClearControls() {
		txtId->Text = "";
		txtFirstName->Text = "";
		txtLastName->Text = "";
		txtPassword->Text = "";
		txtQuota->Text = "";
		txtSalary->Text = "";
		txtUsername->Text = "";
		txtAddress->Text = "";
		txtPhoneNumber->Text = "";
		txtEmail->Text = "";
		txtDNI->Text = "";
	}

private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableControls();
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;
	ClearControls();
}
private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableControls();
	btnAdd->Enabled = false;
	btnUpdate->Enabled = true;
	btnDelete->Enabled = true;
}
	   /*
	   void FillCmbStores() {
		   cmbStore->Items->Clear();
		   List <Store^>^ storeList = SalesManager::QueryAllStores();
		   for (int i = 0; i < storeList->Count; i++) {
			   cmbStore->Items->Add(gcnew ComboBoxItem(storeList[i]->Name, storeList[i]->Id));
		   }
	   }
	   */
private: System::Void SalesmanForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//FillCmbStores();
	RefreshDGVSalesmen();
}
private: System::Void cmbStore_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvSalesmen_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvSalesmen->CurrentCell != nullptr &&
		dgvSalesmen->CurrentCell->Value != nullptr &&
		dgvSalesmen->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvSalesmen->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvSalesmen->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		int salesmanId = Int32::Parse(a);
		Salesman^ s = Controller::QuerySalesmanById(salesmanId);
		txtId->Text = "" + s->Id;
		txtUsername->Text = s->Username;
		
		/*
		for (int i = 0; i < cmbStore->Items->Count; i++) {
			ComboBoxItem^ cmbi = ((ComboBoxItem^)cmbStore->Items[i]);
			if (cmbi->Value == s->Store->Id) {
				cmbStore->SelectedIndex = i;
				break;
			}
		}
		*/
		rbtnMale->Checked = s->Gender == 'M';
		rbtFemale->Checked = s->Gender == 'F';
		txtFirstName->Text = s->Name;
		txtLastName->Text = s->LastName;
		txtQuota->Text = "" + s->Quota;
		txtSalary->Text = "" + s->Salary;
		txtAddress->Text = s->Address;
		txtPhoneNumber->Text = s->PhoneNumber;
		txtDNI->Text = s->DocNumber;
		txtQuota->Text = "" + s->Quota;
		txtEmail->Text = s->Email;
		dtpBirthday->Value = DateTime::Parse(s->Birthday);
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtId->Text->Trim()->Equals(""))
		MessageBox::Show("Debe seleccionar un vendedor.");
	else
		Controller::DeleteSalesman(Int32::Parse(txtId->Text));
	RefreshDGVSalesmen();
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvSalesmen->CurrentCell != nullptr &&
		dgvSalesmen->CurrentCell->Value != nullptr &&
		dgvSalesmen->CurrentCell->Value->ToString() != "" &&
		!txtId->Text->Trim()->Equals("")) {
		
		Salesman^ s = gcnew Salesman();
		try {
			if (txtUsername->Text->Trim() == "") {
				MessageBox::Show("El nombre del usuario no debe estar vacío.");
				return;
			}
			if (txtPassword->Text->Trim() == "") {
				MessageBox::Show("El password del usuario no debe estar vacío.");
				return;
			}
			if (txtUsername->Text->Trim() == "") {
				MessageBox::Show("El nombre del usuario no debe estar vacío.");
				return;
			}
			if (txtLastName->Text->Trim() == "") {
				MessageBox::Show("El apellido del vendedor no debe estar vacío.");
				return;
			}
			if (txtSalary->Text->Trim() == "") {
				MessageBox::Show("El salario del vendedor no debe estar vacío.");
				return;
			}
			if (txtQuota->Text->Trim() == "") {
				MessageBox::Show("La meta de ventas del vendedor no debe estar vacío.");
				return;
			}
			if (txtAddress->Text->Trim() == "") {
				MessageBox::Show("La dirección del vendedor no debe estar vacío.");
				return;
			}
			if (txtPhoneNumber->Text->Trim() == "") {
				MessageBox::Show("El teléfono del vendedor no debe estar vacío.");
				return;
			}
			if (txtEmail->Text->Trim() == "") {
				MessageBox::Show("La correo del vendedor no debe estar vacío.");
				return;
			}
			if (txtDNI->Text->Trim() == "") {
				MessageBox::Show("El DNI del vendedor no debe estar vacío.");
				return;
			}
			if (cmbStore->SelectedIndex < 0) {
				MessageBox::Show("Una tienda debe estar seleccionada.");
				return;
			}

			s->Id = Int32::Parse(txtId->Text);
			s->Username = txtUsername->Text;
			s->Password = txtPassword->Text;
			s->Name = txtFirstName->Text;
			s->LastName = txtLastName->Text;
			s->Salary = Double::Parse(txtSalary->Text);
			s->Quota = Double::Parse(txtQuota->Text);
			s->Gender = rbtnMale->Checked ? 'M' : 'F';
			s->Address = txtAddress->Text;
			s->PhoneNumber = txtPhoneNumber->Text;
			s->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");
			s->Email = txtEmail->Text;
			s->DocNumber = txtDNI->Text;
			//s->Store = Controller::QueryStoreById(((ComboBoxItem^)cmbStore->Items[cmbStore->SelectedIndex])->Value);
			Controller::UpdateSalesman(s);
			RefreshDGVSalesmen();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "No se guardó la tienda por error en los datos.");
			return;
		}
	}
}
};
}
