#pragma once

#include "ProductSearchForm.h"
#include "CustomerForm.h"
#include "Resource.h"

namespace SalesApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SaleForm
	/// </summary>
	public ref class SaleForm : public System::Windows::Forms::Form
	{
	private:
		Customer^ customer;
	public:
		SaleForm(void)
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
		~SaleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txtCustomer;
	private: System::Windows::Forms::Button^ btnSearchCustomer;
	private: System::Windows::Forms::Button^ btnAddProduct;
	private: System::Windows::Forms::Button^ btnDeleteProduct;
	private: System::Windows::Forms::DataGridView^ dgvDetails;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtTax;
	private: System::Windows::Forms::TextBox^ txtTotal;
	private: System::Windows::Forms::TextBox^ txtSubtotal;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnRegisterSale;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ subTotal;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtDate;
	private: System::Windows::Forms::Button^ btnAddCustomer;
	private: System::Windows::Forms::Label^ lblCustomerData;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtCustomer = (gcnew System::Windows::Forms::TextBox());
			this->btnSearchCustomer = (gcnew System::Windows::Forms::Button());
			this->btnAddProduct = (gcnew System::Windows::Forms::Button());
			this->btnDeleteProduct = (gcnew System::Windows::Forms::Button());
			this->dgvDetails = (gcnew System::Windows::Forms::DataGridView());
			this->productId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->subTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtTax = (gcnew System::Windows::Forms::TextBox());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->txtSubtotal = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnRegisterSale = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtDate = (gcnew System::Windows::Forms::TextBox());
			this->btnAddCustomer = (gcnew System::Windows::Forms::Button());
			this->lblCustomerData = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetails))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cliente:";
			// 
			// txtCustomer
			// 
			this->txtCustomer->Location = System::Drawing::Point(90, 46);
			this->txtCustomer->Name = L"txtCustomer";
			this->txtCustomer->Size = System::Drawing::Size(238, 20);
			this->txtCustomer->TabIndex = 1;
			this->txtCustomer->Text = L"Digite DNI";
			this->txtCustomer->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnSearchCustomer
			// 
			this->btnSearchCustomer->Location = System::Drawing::Point(337, 45);
			this->btnSearchCustomer->Name = L"btnSearchCustomer";
			this->btnSearchCustomer->Size = System::Drawing::Size(75, 23);
			this->btnSearchCustomer->TabIndex = 2;
			this->btnSearchCustomer->Text = L"Buscar";
			this->btnSearchCustomer->UseVisualStyleBackColor = true;
			this->btnSearchCustomer->Click += gcnew System::EventHandler(this, &SaleForm::btnSearchCustomer_Click);
			// 
			// btnAddProduct
			// 
			this->btnAddProduct->Location = System::Drawing::Point(105, 104);
			this->btnAddProduct->Name = L"btnAddProduct";
			this->btnAddProduct->Size = System::Drawing::Size(139, 23);
			this->btnAddProduct->TabIndex = 3;
			this->btnAddProduct->Text = L"Agregar producto";
			this->btnAddProduct->UseVisualStyleBackColor = true;
			this->btnAddProduct->Click += gcnew System::EventHandler(this, &SaleForm::btnAddProduct_Click);
			// 
			// btnDeleteProduct
			// 
			this->btnDeleteProduct->Location = System::Drawing::Point(290, 104);
			this->btnDeleteProduct->Name = L"btnDeleteProduct";
			this->btnDeleteProduct->Size = System::Drawing::Size(151, 23);
			this->btnDeleteProduct->TabIndex = 4;
			this->btnDeleteProduct->Text = L"Eliminar producto";
			this->btnDeleteProduct->UseVisualStyleBackColor = true;
			// 
			// dgvDetails
			// 
			this->dgvDetails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDetails->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->productId,
					this->productName, this->productPrice, this->quantity, this->subTotal
			});
			this->dgvDetails->Location = System::Drawing::Point(12, 133);
			this->dgvDetails->Name = L"dgvDetails";
			this->dgvDetails->Size = System::Drawing::Size(517, 126);
			this->dgvDetails->TabIndex = 5;
			this->dgvDetails->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SaleForm::dgvDetails_CellValueChanged);
			// 
			// productId
			// 
			this->productId->HeaderText = L"Id";
			this->productId->Name = L"productId";
			this->productId->Width = 30;
			// 
			// productName
			// 
			this->productName->HeaderText = L"Nombre";
			this->productName->Name = L"productName";
			this->productName->Width = 270;
			// 
			// productPrice
			// 
			this->productPrice->HeaderText = L"Precio";
			this->productPrice->Name = L"productPrice";
			this->productPrice->Width = 50;
			// 
			// quantity
			// 
			this->quantity->HeaderText = L"Cantidad";
			this->quantity->Name = L"quantity";
			this->quantity->Width = 60;
			// 
			// subTotal
			// 
			this->subTotal->HeaderText = L"SubTotal";
			this->subTotal->Name = L"subTotal";
			this->subTotal->Width = 60;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(392, 326);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Total:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(392, 300);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"I.G.V.";
			// 
			// txtTax
			// 
			this->txtTax->Location = System::Drawing::Point(445, 293);
			this->txtTax->Name = L"txtTax";
			this->txtTax->ReadOnly = true;
			this->txtTax->Size = System::Drawing::Size(84, 20);
			this->txtTax->TabIndex = 8;
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(445, 319);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->ReadOnly = true;
			this->txtTotal->Size = System::Drawing::Size(84, 20);
			this->txtTotal->TabIndex = 9;
			this->txtTotal->Text = L"0";
			// 
			// txtSubtotal
			// 
			this->txtSubtotal->Location = System::Drawing::Point(445, 267);
			this->txtSubtotal->Name = L"txtSubtotal";
			this->txtSubtotal->ReadOnly = true;
			this->txtSubtotal->Size = System::Drawing::Size(84, 20);
			this->txtSubtotal->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(392, 270);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Subtotal:";
			// 
			// btnRegisterSale
			// 
			this->btnRegisterSale->Location = System::Drawing::Point(23, 316);
			this->btnRegisterSale->Name = L"btnRegisterSale";
			this->btnRegisterSale->Size = System::Drawing::Size(159, 23);
			this->btnRegisterSale->TabIndex = 12;
			this->btnRegisterSale->Text = L"Registrar venta";
			this->btnRegisterSale->UseVisualStyleBackColor = true;
			this->btnRegisterSale->Click += gcnew System::EventHandler(this, &SaleForm::btnRegisterSale_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(41, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Fecha:";
			// 
			// txtDate
			// 
			this->txtDate->Location = System::Drawing::Point(90, 12);
			this->txtDate->Name = L"txtDate";
			this->txtDate->ReadOnly = true;
			this->txtDate->Size = System::Drawing::Size(154, 20);
			this->txtDate->TabIndex = 14;
			// 
			// btnAddCustomer
			// 
			this->btnAddCustomer->Location = System::Drawing::Point(428, 46);
			this->btnAddCustomer->Name = L"btnAddCustomer";
			this->btnAddCustomer->Size = System::Drawing::Size(84, 23);
			this->btnAddCustomer->TabIndex = 15;
			this->btnAddCustomer->Text = L"+ Cliente";
			this->btnAddCustomer->UseVisualStyleBackColor = true;
			this->btnAddCustomer->Click += gcnew System::EventHandler(this, &SaleForm::btnAddCustomer_Click);
			// 
			// lblCustomerData
			// 
			this->lblCustomerData->Location = System::Drawing::Point(90, 75);
			this->lblCustomerData->Name = L"lblCustomerData";
			this->lblCustomerData->Size = System::Drawing::Size(238, 23);
			this->lblCustomerData->TabIndex = 16;
			this->lblCustomerData->Text = L"Sin cliente";
			this->lblCustomerData->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// SaleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 361);
			this->Controls->Add(this->lblCustomerData);
			this->Controls->Add(this->btnAddCustomer);
			this->Controls->Add(this->txtDate);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnRegisterSale);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtSubtotal);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->txtTax);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dgvDetails);
			this->Controls->Add(this->btnDeleteProduct);
			this->Controls->Add(this->btnAddProduct);
			this->Controls->Add(this->btnSearchCustomer);
			this->Controls->Add(this->txtCustomer);
			this->Controls->Add(this->label1);
			this->Name = L"SaleForm";
			this->Text = L"Venta realizada por";
			this->Load += gcnew System::EventHandler(this, &SaleForm::SaleForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetails))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAddProduct_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductSearchForm^ productForm = gcnew ProductSearchForm(this);
		productForm->ShowDialog();
	}
	public: Void AddProductToSalesDetails(Product^ p) {
		dgvDetails->Rows->Add(gcnew array<String^> {
				Convert::ToString(p->Id),
				p->Name,
				Convert::ToString(p->Price),
				"1",
				Convert::ToString(p->Price)
			});
		RefreshTotalAmounts();
	}

		  Void SetCustomer(Customer^ cust) {
			  this->customer = cust;
			  txtCustomer->Text = cust->DocNumber;
			  lblCustomerData->Text = this->customer->DocNumber + " - " +
					cust->Name + " " + ((Natural^)cust)->LastName;
		  }

	private: Void RefreshTotalAmounts() {
		double total = 0;
		for (int i = 0; i < dgvDetails->RowCount - 1; i++)
			total += Double::Parse(dgvDetails->Rows[i]->Cells[4]->Value->ToString());
		txtSubtotal->Text = "" + (total * (1-IGV));
		txtTax->Text = "" + (total * IGV);
		txtTotal->Text = "" + total;
	}

private: System::Void dgvDetails_CellValueChanged(System::Object^ sender, 
		System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvDetails->Columns[e->ColumnIndex]->Name == "quantity") {
		dgvDetails->Rows[e->RowIndex]->Cells[4]->Value =
			Int32::Parse(dgvDetails->CurrentCell->Value->ToString())*
			Double::Parse(dgvDetails->Rows[e->RowIndex]->Cells[2]->Value->ToString());
		RefreshTotalAmounts();
	}
}
private: System::Void SaleForm_Load(System::Object^ sender, System::EventArgs^ e);

private: System::Void btnSearchCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
	customer = Controller::QueryCustomerByDNI(txtCustomer->Text);
	if (customer != nullptr) {
		if (customer->GetType() == Natural::typeid)
			lblCustomerData->Text = customer->DocNumber + " - " + customer->Name +
								" " + ((Natural^)customer)->LastName;
		else 
			lblCustomerData->Text = customer->DocNumber + " - " + customer->Name;
	}
	else {
		MessageBox::Show("Cliente no encontrado!");
	}
}
private: System::Void btnAddCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
	CustomerForm^ customerForm = gcnew CustomerForm();
	customerForm->UseType = 'S';
	customerForm->RefSaleForm = this;
	customerForm->ShowDialog();
}
private: System::Void btnRegisterSale_Click(System::Object^ sender, System::EventArgs^ e);
};
}
