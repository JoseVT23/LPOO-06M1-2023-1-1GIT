#pragma once

namespace SalesApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesController;
	using namespace SalesModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de ProductSearchForm
	/// </summary>
	public ref class ProductSearchForm : public System::Windows::Forms::Form
	{
		Form^ refForm;
	public:
		ProductSearchForm(Form^ form)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			refForm = form;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ProductSearchForm()
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
	private: System::Windows::Forms::TextBox^ txtNameDescription;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::DataGridView^ dgvProducts;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;





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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtNameDescription = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre/Descripción:";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(133, 14);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(100, 20);
			this->txtId->TabIndex = 2;
			// 
			// txtNameDescription
			// 
			this->txtNameDescription->Location = System::Drawing::Point(133, 40);
			this->txtNameDescription->Name = L"txtNameDescription";
			this->txtNameDescription->Size = System::Drawing::Size(256, 20);
			this->txtNameDescription->TabIndex = 3;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(82, 76);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(97, 23);
			this->btnSearch->TabIndex = 4;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &ProductSearchForm::btnSearch_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(246, 76);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(96, 23);
			this->btnCancel->TabIndex = 5;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// dgvProducts
			// 
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Id, this->ProductName,
					this->Price, this->Stock
			});
			this->dgvProducts->Location = System::Drawing::Point(16, 109);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->Size = System::Drawing::Size(373, 150);
			this->dgvProducts->TabIndex = 6;
			this->dgvProducts->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductSearchForm::dgvProducts_CellClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			this->Id->Width = 30;
			// 
			// ProductName
			// 
			this->ProductName->HeaderText = L"Nombre";
			this->ProductName->Name = L"ProductName";
			this->ProductName->Width = 200;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Precio";
			this->Price->Name = L"Price";
			this->Price->Width = 40;
			// 
			// Stock
			// 
			this->Stock->HeaderText = L"Stock";
			this->Stock->Name = L"Stock";
			this->Stock->Width = 40;
			// 
			// ProductSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(408, 270);
			this->Controls->Add(this->dgvProducts);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtNameDescription);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ProductSearchForm";
			this->Text = L"Búsqueda de Productos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtId->Text->Trim() != "") {
			//Búsqueda de producto por el código ingresado por el usuario
			Product^ p = Controller::QueryProductById(Convert::ToInt32(txtId->Text->Trim()));
			//Se borran los datos del grid.
			dgvProducts->Rows->Clear();
			dgvProducts->Rows->Add(gcnew array<String^> {
				"" + p->Id,
					p->Name,
					Convert::ToString(p->Price),
					Convert::ToString(p->Stock)
			});
		}
		else {
			//Búsqueda de productos por el nombre o descripción ingresado por el usuario
			List<Product^> ^productList = Controller::QueryProductsByNameOrDescription(txtNameDescription->Text->Trim());
			//Se borran los datos del grid.
			dgvProducts->Rows->Clear();
			for (int i = 0; i < productList->Count; i++) {
				dgvProducts->Rows->Add(gcnew array<String^> {
					"" + productList[i]->Id,
						productList[i]->Name,
						Convert::ToString(productList[i]->Price),
						Convert::ToString(productList[i]->Stock)
				});
			}
		}

	}
private: System::Void dgvProducts_CellClick(System::Object^ sender,
	System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
