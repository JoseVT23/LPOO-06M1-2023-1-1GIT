#pragma once

namespace SalesApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace SalesModel;
	using namespace SalesController;

	/// <summary>
	/// Resumen de SalesGraphicsForm
	/// </summary>
	public ref class SalesGraphicsForm : public System::Windows::Forms::Form
	{
	public:
		SalesGraphicsForm(void)
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
		~SalesGraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartSales;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ pieChartSales;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SalesGraphicsForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->chartSales = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pieChartSales = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSales))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pieChartSales))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(367, 39);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// chartSales
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartSales->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartSales->Legends->Add(legend1);
			this->chartSales->Location = System::Drawing::Point(12, 128);
			this->chartSales->Name = L"chartSales";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Monto";
			this->chartSales->Series->Add(series1);
			this->chartSales->Size = System::Drawing::Size(404, 300);
			this->chartSales->TabIndex = 1;
			this->chartSales->Text = L"chart1";
			// 
			// pieChartSales
			// 
			chartArea2->Name = L"ChartArea1";
			this->pieChartSales->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->pieChartSales->Legends->Add(legend2);
			this->pieChartSales->Location = System::Drawing::Point(443, 128);
			this->pieChartSales->Name = L"pieChartSales";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Monto";
			this->pieChartSales->Series->Add(series2);
			this->pieChartSales->Size = System::Drawing::Size(399, 300);
			this->pieChartSales->TabIndex = 2;
			this->pieChartSales->Text = L"chart2";
			// 
			// SalesGraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(885, 463);
			this->Controls->Add(this->pieChartSales);
			this->Controls->Add(this->chartSales);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"SalesGraphicsForm";
			this->Text = L"SalesGraphicsForm";
			this->Load += gcnew System::EventHandler(this, &SalesGraphicsForm::SalesGraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSales))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pieChartSales))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SalesGraphicsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Sale^>^ salesList = Controller::QueryAllSales();
		for (int i = 0; i < salesList->Count; i++) {
			chartSales->Series["Monto"]->Points->Add(salesList[i]->Total);
			chartSales->Series["Monto"]->Points[i]->AxisLabel = salesList[i]->Customer->Name;
			chartSales->Series["Monto"]->Points[i]->Label = Convert::ToString(salesList[i]->Total);

			pieChartSales->Series["Monto"]->Points->Add(salesList[i]->Total);			
			pieChartSales->Series["Monto"]->Points[i]->LegendText = salesList[i]->Customer->Name;
			pieChartSales->Series["Monto"]->Points[i]->Label = Convert::ToString(salesList[i]->Total);

		}
	}
};
}
