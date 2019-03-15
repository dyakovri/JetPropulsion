#pragma once

namespace JetPropulsion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Window
	/// </summary>
	public ref class Window : public System::Windows::Forms::Form
	{
	public:
		Window(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  HeightChart;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  VelocityChart;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  MassChart;
	protected:


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  rMass;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  fMass;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  fCons;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  fVel;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::NumericUpDown^  pMass;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  StartButton;

	private: System::Windows::Forms::Button^  StopButton;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::NumericUpDown^  pRadius;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  AccelChart;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea13 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea14 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea15 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea16 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->HeightChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->VelocityChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->MassChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rMass = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->fMass = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->fCons = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->fVel = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pMass = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->StopButton = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pRadius = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->AccelChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HeightChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VelocityChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MassChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rMass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fMass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fCons))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fVel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pMass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pRadius))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AccelChart))->BeginInit();
			this->SuspendLayout();
			// 
			// HeightChart
			// 
			this->HeightChart->BackColor = System::Drawing::SystemColors::Control;
			this->HeightChart->BorderlineColor = System::Drawing::Color::Transparent;
			chartArea13->AxisX->Maximum = 1;
			chartArea13->AxisX->Minimum = -1;
			chartArea13->AxisY->Minimum = 0;
			chartArea13->Name = L"ChartArea1";
			this->HeightChart->ChartAreas->Add(chartArea13);
			this->HeightChart->Dock = System::Windows::Forms::DockStyle::Left;
			this->HeightChart->Location = System::Drawing::Point(0, 0);
			this->HeightChart->Name = L"HeightChart";
			this->HeightChart->Padding = System::Windows::Forms::Padding(3);
			this->HeightChart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series16->ChartArea = L"ChartArea1";
			series16->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series16->Name = L"Series1";
			series16->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series16->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series17->ChartArea = L"ChartArea1";
			series17->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series17->Name = L"Series2";
			this->HeightChart->Series->Add(series16);
			this->HeightChart->Series->Add(series17);
			this->HeightChart->Size = System::Drawing::Size(219, 544);
			this->HeightChart->TabIndex = 0;
			// 
			// VelocityChart
			// 
			this->VelocityChart->BackColor = System::Drawing::SystemColors::Control;
			this->VelocityChart->BorderlineColor = System::Drawing::Color::Transparent;
			chartArea14->AxisX->Title = L"t, s";
			chartArea14->AxisY->Title = L"V, m/s";
			chartArea14->Name = L"VelocityChart";
			this->VelocityChart->ChartAreas->Add(chartArea14);
			this->VelocityChart->Location = System::Drawing::Point(225, 12);
			this->VelocityChart->Name = L"VelocityChart";
			this->VelocityChart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series18->ChartArea = L"VelocityChart";
			series18->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series18->Name = L"Series1";
			series18->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series18->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->VelocityChart->Series->Add(series18);
			this->VelocityChart->Size = System::Drawing::Size(412, 170);
			this->VelocityChart->TabIndex = 1;
			// 
			// MassChart
			// 
			this->MassChart->BackColor = System::Drawing::SystemColors::Control;
			this->MassChart->BorderlineColor = System::Drawing::Color::Transparent;
			chartArea15->AxisX->Minimum = 0;
			chartArea15->AxisX->Title = L"t, s";
			chartArea15->AxisY->Title = L"m, kg";
			chartArea15->Name = L"ChartArea1";
			this->MassChart->ChartAreas->Add(chartArea15);
			this->MassChart->Location = System::Drawing::Point(225, 364);
			this->MassChart->Name = L"MassChart";
			this->MassChart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series19->ChartArea = L"ChartArea1";
			series19->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series19->Name = L"Series1";
			series19->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series19->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->MassChart->Series->Add(series19);
			this->MassChart->Size = System::Drawing::Size(412, 170);
			this->MassChart->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(653, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Масса ракеты";
			// 
			// rMass
			// 
			this->rMass->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->rMass->Location = System::Drawing::Point(656, 28);
			this->rMass->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->rMass->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->rMass->Name = L"rMass";
			this->rMass->Size = System::Drawing::Size(120, 20);
			this->rMass->TabIndex = 4;
			this->rMass->ThousandsSeparator = true;
			this->rMass->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 33750, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(782, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"кг";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(782, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"кг";
			// 
			// fMass
			// 
			this->fMass->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->fMass->Location = System::Drawing::Point(656, 76);
			this->fMass->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->fMass->Name = L"fMass";
			this->fMass->Size = System::Drawing::Size(120, 20);
			this->fMass->TabIndex = 7;
			this->fMass->ThousandsSeparator = true;
			this->fMass->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 247000, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(653, 60);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Масса топлива";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(782, 127);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"кг/с";
			// 
			// fCons
			// 
			this->fCons->Location = System::Drawing::Point(656, 125);
			this->fCons->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->fCons->Name = L"fCons";
			this->fCons->Size = System::Drawing::Size(120, 20);
			this->fCons->TabIndex = 10;
			this->fCons->ThousandsSeparator = true;
			this->fCons->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 55810, 0, 0, 0 });
			this->fCons->ValueChanged += gcnew System::EventHandler(this, &Window::fCons_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(653, 109);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Расход топлива";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(782, 189);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"м/с";
			// 
			// fVel
			// 
			this->fVel->DecimalPlaces = 1;
			this->fVel->Location = System::Drawing::Point(656, 187);
			this->fVel->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->fVel->Name = L"fVel";
			this->fVel->Size = System::Drawing::Size(120, 20);
			this->fVel->TabIndex = 13;
			this->fVel->ThousandsSeparator = true;
			this->fVel->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 81, 0, 0, 65536 });
			this->fVel->ValueChanged += gcnew System::EventHandler(this, &Window::fVel_ValueChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(653, 158);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(138, 26);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Относительная скорость \r\nотделяющихся частиц";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(760, 250);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"10^20 кг";
			// 
			// pMass
			// 
			this->pMass->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->pMass->Location = System::Drawing::Point(656, 248);
			this->pMass->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->pMass->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->pMass->Name = L"pMass";
			this->pMass->Size = System::Drawing::Size(98, 20);
			this->pMass->TabIndex = 16;
			this->pMass->ThousandsSeparator = true;
			this->pMass->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6000, 0, 0, 0 });
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(653, 232);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(86, 13);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Масса планеты";
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(656, 460);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(155, 23);
			this->StartButton->TabIndex = 18;
			this->StartButton->Text = L"Запуск";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &Window::StartButton_Click);
			// 
			// StopButton
			// 
			this->StopButton->Enabled = false;
			this->StopButton->Location = System::Drawing::Point(656, 489);
			this->StopButton->Name = L"StopButton";
			this->StopButton->Size = System::Drawing::Size(155, 23);
			this->StopButton->TabIndex = 18;
			this->StopButton->Text = L"Остановка";
			this->StopButton->UseVisualStyleBackColor = true;
			this->StopButton->Click += gcnew System::EventHandler(this, &Window::StopButton_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Window::timer1_Tick);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(760, 299);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"м";
			// 
			// pRadius
			// 
			this->pRadius->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->pRadius->Location = System::Drawing::Point(656, 297);
			this->pRadius->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->pRadius->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->pRadius->Name = L"pRadius";
			this->pRadius->Size = System::Drawing::Size(98, 20);
			this->pRadius->TabIndex = 20;
			this->pRadius->ThousandsSeparator = true;
			this->pRadius->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6400, 0, 0, 0 });
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(653, 281);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(86, 13);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Масса планеты";
			// 
			// AccelChart
			// 
			this->AccelChart->BackColor = System::Drawing::SystemColors::Control;
			this->AccelChart->BorderlineColor = System::Drawing::Color::Transparent;
			chartArea16->AxisX->Minimum = 0;
			chartArea16->AxisX->Title = L"t, s";
			chartArea16->AxisY->Title = L"a, m/s2";
			chartArea16->Name = L"ChartArea1";
			this->AccelChart->ChartAreas->Add(chartArea16);
			this->AccelChart->Location = System::Drawing::Point(225, 188);
			this->AccelChart->Name = L"AccelChart";
			this->AccelChart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series20->ChartArea = L"ChartArea1";
			series20->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series20->Name = L"Series1";
			series20->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series20->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->AccelChart->Series->Add(series20);
			this->AccelChart->Size = System::Drawing::Size(412, 170);
			this->AccelChart->TabIndex = 2;
			// 
			// Window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(823, 544);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pRadius);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->StopButton);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pMass);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->fVel);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->fCons);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->fMass);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->rMass);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->AccelChart);
			this->Controls->Add(this->MassChart);
			this->Controls->Add(this->VelocityChart);
			this->Controls->Add(this->HeightChart);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(839, 583);
			this->MinimumSize = System::Drawing::Size(839, 583);
			this->Name = L"Window";
			this->ShowIcon = false;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HeightChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VelocityChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MassChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rMass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fMass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fCons))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fVel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pMass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pRadius))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AccelChart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void StartButton_Click(System::Object^  sender, System::EventArgs^  e);
		//private: System::Void PauseButton_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void StopButton_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void fCons_ValueChanged(System::Object^  sender, System::EventArgs^  e);
		private: System::Void fVel_ValueChanged(System::Object^  sender, System::EventArgs^  e);
		private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
	};
}
