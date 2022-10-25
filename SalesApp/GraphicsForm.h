#pragma once
#define PI_2 360

namespace SalesApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de GraphicsForm
	/// </summary>
	public ref class GraphicsForm : public System::Windows::Forms::Form
	{
	public:
		array < PointF>^ arrPoints = gcnew array<PointF>( 2 * PI_2);
		array < PointF>^ arrRosePoints = gcnew array<PointF>(PI_2);
		int mid_x;
		int counter = 2;

	private: System::Windows::Forms::Timer^ timer1;
	public:
		int mid_y;
		GraphicsForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			//Llenado del arreglo:
			mid_x = pictureBox1->Width / 2;
			mid_y = pictureBox1->Height / 2;
			for (int i = 0; i < 2 * PI_2; i++) {
				arrPoints[i] = PointF(mid_x - PI_2 + i, mid_y + 100 * Math::Sin(3 * (i - 300) * Math::PI / 180));
			}
			for (int i = 0; i < PI_2; i++) {
				arrRosePoints[i] = PointF(mid_x + 100 * Math::Sin(2*i*Math::PI/180)*Math::Cos(i*Math::PI/180),
								mid_y + 100*Math::Sin(2*i*Math::PI/180)*Math::Sin(i*Math::PI/180));
			}
			timer1->Start();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~GraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(867, 518);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GraphicsForm::pictureBox1_Paint);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &GraphicsForm::timer1_Tick);
			// 
			// GraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(867, 518);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"GraphicsForm";
			this->Text = L"GraphicsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Paint(System::Object^ sender, 
											System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		

		Color color = Color::Blue;
		Pen^ pen = gcnew Pen(color);
		g->DrawLine(pen, 0, pictureBox1->Height / 2, pictureBox1->Width, pictureBox1->Height / 2);
		g->DrawLine(pen, pictureBox1->Width/2, 0, pictureBox1->Width/2, pictureBox1->Height);
		g->DrawString("X", gcnew System::Drawing::Font("Arial", 10), System::Drawing::Brushes::Black,
						0, pictureBox1->Bottom / 2);
		g->DrawString("Y", gcnew System::Drawing::Font("Arial", 10), System::Drawing::Brushes::Black,
			pictureBox1->Right / 2, pictureBox1->Top);
		//g->DrawCurve(pen, arrPoints);
		g->DrawCurve(pen, arrPoints, 0, counter - 1);
		g->DrawCurve(pen, arrRosePoints);
		g->DrawEllipse(pen, 50, 10, 150, 150);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (counter < 2 * PI_2) {
			counter++;
			pictureBox1->Invalidate();
		}
		else {
			timer1->Stop();
			timer1->Enabled = false;
		}
	}
};
}
