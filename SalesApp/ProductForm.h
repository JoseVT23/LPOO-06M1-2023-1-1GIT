#pragma once

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
	/// Resumen de ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{
	public:
		ProductForm(void)
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
		~ProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoProductoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarProductoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::TextBox^ txtPrice;
	private: System::Windows::Forms::TextBox^ txtStock;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pbPhoto;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productStock;
	private: System::Windows::Forms::Button^ btnPhoto;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvProduct = (gcnew System::Windows::Forms::DataGridView());
			this->ProductId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnPhoto = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProduct))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(558, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoProductoToolStripMenuItem,
					this->modificarProductoToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoProductoToolStripMenuItem
			// 
			this->nuevoProductoToolStripMenuItem->Name = L"nuevoProductoToolStripMenuItem";
			this->nuevoProductoToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->nuevoProductoToolStripMenuItem->Text = L"Nuevo producto";
			this->nuevoProductoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProductForm::nuevoProductoToolStripMenuItem_Click);
			// 
			// modificarProductoToolStripMenuItem
			// 
			this->modificarProductoToolStripMenuItem->Name = L"modificarProductoToolStripMenuItem";
			this->modificarProductoToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->modificarProductoToolStripMenuItem->Text = L"Modificar producto";
			this->modificarProductoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProductForm::modificarProductoToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Id";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(125, 39);
			this->txtId->Name = L"txtId";
			this->txtId->ReadOnly = true;
			this->txtId->Size = System::Drawing::Size(131, 20);
			this->txtId->TabIndex = 2;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(125, 66);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(258, 20);
			this->txtName->TabIndex = 3;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(125, 93);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(258, 45);
			this->txtDescription->TabIndex = 4;
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(125, 144);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(131, 20);
			this->txtPrice->TabIndex = 5;
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(125, 171);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(131, 20);
			this->txtStock->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Descripción";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(37, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Precio";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(37, 178);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Stock";
			// 
			// pbPhoto
			// 
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhoto->Location = System::Drawing::Point(404, 39);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(135, 137);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPhoto->TabIndex = 11;
			this->pbPhoto->TabStop = false;
			// 
			// btnAdd
			// 
			this->btnAdd->Enabled = false;
			this->btnAdd->Location = System::Drawing::Point(40, 222);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(142, 23);
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ProductForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Enabled = false;
			this->btnUpdate->Location = System::Drawing::Point(226, 222);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(131, 23);
			this->btnUpdate->TabIndex = 13;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProductForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Enabled = false;
			this->btnDelete->Location = System::Drawing::Point(404, 222);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(118, 23);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ProductForm::btnDelete_Click);
			// 
			// dgvProduct
			// 
			this->dgvProduct->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProduct->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ProductId,
					this->productName, this->productPrice, this->productStock
			});
			this->dgvProduct->Location = System::Drawing::Point(16, 262);
			this->dgvProduct->Name = L"dgvProduct";
			this->dgvProduct->Size = System::Drawing::Size(523, 150);
			this->dgvProduct->TabIndex = 15;
			this->dgvProduct->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dgvProduct_CellClick);
			// 
			// ProductId
			// 
			this->ProductId->HeaderText = L"Id";
			this->ProductId->Name = L"ProductId";
			this->ProductId->Width = 50;
			// 
			// productName
			// 
			this->productName->HeaderText = L"Nombre";
			this->productName->Name = L"productName";
			this->productName->Width = 250;
			// 
			// productPrice
			// 
			this->productPrice->HeaderText = L"Precio";
			this->productPrice->Name = L"productPrice";
			this->productPrice->Width = 80;
			// 
			// productStock
			// 
			this->productStock->HeaderText = L"Stock";
			this->productStock->Name = L"productStock";
			this->productStock->Width = 99;
			// 
			// btnPhoto
			// 
			this->btnPhoto->Location = System::Drawing::Point(404, 183);
			this->btnPhoto->Name = L"btnPhoto";
			this->btnPhoto->Size = System::Drawing::Size(135, 23);
			this->btnPhoto->TabIndex = 16;
			this->btnPhoto->Text = L"Agregar foto";
			this->btnPhoto->UseVisualStyleBackColor = true;
			this->btnPhoto->Click += gcnew System::EventHandler(this, &ProductForm::btnPhoto_Click);
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 440);
			this->Controls->Add(this->btnPhoto);
			this->Controls->Add(this->dgvProduct);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ProductForm";
			this->Text = L"Mantenimiento de productos";
			this->Load += gcnew System::EventHandler(this, &ProductForm::ProductForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProduct))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public:
			void RefreshGrid() {
				List<Product^>^productList = Controller::QueryAllProducts();
				dgvProduct->Rows->Clear();
				for (int i = 0; i < productList->Count; i++) {
					dgvProduct->Rows->Add(gcnew array<String^>{
						"" + productList[i]->Id,
							productList[i]->Name,
						"" +productList[i]->Price,
						"" + productList[i]->Stock
					});
				}
			}

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Product^ p = gcnew Product();
		//p->Id = Int32::Parse(txtId->Text);
		p->Name = txtName->Text;
		p->Description = txtDescription->Text;
		p->Price = Double::Parse(txtPrice->Text);
		p->Stock = Int32::Parse(txtStock->Text);
		p->Status = 'A';
		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			p->Photo = ms->ToArray();
		}
		Controller::AddProduct(p);
		RefreshGrid();
		ClearControls();
	}

private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	Product^ p = gcnew Product();
	p->Id = Int32::Parse(txtId->Text);
	p->Name = txtName->Text;
	p->Description = txtDescription->Text;
	p->Price = Double::Parse(txtPrice->Text);
	p->Stock = Int32::Parse(txtStock->Text);
	p->Status = 'A';
	if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		p->Photo = ms->ToArray();
	}
	Controller::UpdateProduct(p);
	RefreshGrid();

}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult dr = MessageBox::Show("¿Está seguro de eliminar?", "Confirmación", MessageBoxButtons::YesNo);
	if (dr == System::Windows::Forms::DialogResult::Yes)
	{
		int productId = Int32::Parse(txtId->Text);
		Controller::DeleteProduct(productId);
		RefreshGrid();
		ClearControls();
	}
	else if (dr == System::Windows::Forms::DialogResult::No)
	{
		//do something else
	}

}
private: System::Void dgvProduct_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvProduct->SelectedCells[0]->RowIndex;
	int productId = Int32::Parse( dgvProduct->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Product^ p = Controller::QueryProductById(productId);
	//MessageBox::Show("Columna seleccionada:" + e->ColumnIndex);
	txtId->Text = "" +  p->Id;
	txtName->Text = p->Name;
	txtDescription->Text = p->Description;
	txtPrice->Text = "" + p->Price;
	txtStock->Text = "" + p->Stock;
	if (p->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
		pbPhoto->Image = Image::FromStream(ms);
	}
	else {
		pbPhoto->Image = nullptr;
		pbPhoto->Invalidate();
	}
}

	   void ClearControls() {
		   txtId->Clear();
		   txtName->Clear();
		   txtDescription->Clear();
		   txtPrice->Clear();
		   txtStock->Clear();
		   pbPhoto->Image = nullptr;
	   }

private: System::Void nuevoProductoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	btnAdd->Enabled = true;
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;
}
private: System::Void modificarProductoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAdd->Enabled = false;
	btnUpdate->Enabled = true;
	btnDelete->Enabled = true;
}
private: System::Void btnPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pbPhoto->Image = gcnew Bitmap(opnfd->FileName);
	}
}
private: System::Void ProductForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshGrid();
}
};
}
