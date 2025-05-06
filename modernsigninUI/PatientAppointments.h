#pragma once

namespace HospitalManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PatientAppointments
	/// </summary>
	public ref class PatientAppointments : public System::Windows::Forms::Form
	{
	public:
		PatientAppointments(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PatientAppointments()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ rdPatient1;
	private: System::Windows::Forms::RadioButton^ rdDoctor1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btProfile;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button7;









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PatientAppointments::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->rdPatient1 = (gcnew System::Windows::Forms::RadioButton());
			this->rdDoctor1 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btProfile = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel10);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 244);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1264, 367);
			this->panel2->TabIndex = 6;
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Controls->Add(this->button2);
			this->panel5->Controls->Add(this->pictureBox3);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Location = System::Drawing::Point(822, 27);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(315, 317);
			this->panel5->TabIndex = 37;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Semibold", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::RosyBrown;
			this->button2->Location = System::Drawing::Point(210, 269);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 36);
			this->button2->TabIndex = 38;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(91, 23);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(129, 111);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 43;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(31, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(162, 28);
			this->label3->TabIndex = 42;
			this->label3->Text = L"*Doctor Name*";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(32, 181);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(200, 63);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Day: *Day*\r\nTiming : 10am-11am\r\nSpecialization : Cardiologist\r\n";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->pictureBox1);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Location = System::Drawing::Point(477, 27);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(315, 317);
			this->panel4->TabIndex = 37;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Semibold", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::RosyBrown;
			this->button1->Location = System::Drawing::Point(210, 269);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 36);
			this->button1->TabIndex = 38;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(91, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(129, 111);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 43;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(31, 153);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 28);
			this->label1->TabIndex = 42;
			this->label1->Text = L"*Doctor Name*";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(32, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 63);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Day: *Day*\r\nTiming : 10am-11am\r\nSpecialization : Cardiologist\r\n";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel10
			// 
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel10->Controls->Add(this->button7);
			this->panel10->Controls->Add(this->pictureBox8);
			this->panel10->Controls->Add(this->label17);
			this->panel10->Controls->Add(this->label18);
			this->panel10->Location = System::Drawing::Point(129, 27);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(315, 317);
			this->panel10->TabIndex = 37;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Semibold", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::RosyBrown;
			this->button7->Location = System::Drawing::Point(210, 269);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(92, 36);
			this->button7->TabIndex = 38;
			this->button7->Text = L"Cancel";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox8->Location = System::Drawing::Point(91, 23);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(129, 111);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 43;
			this->pictureBox8->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label17->Location = System::Drawing::Point(31, 153);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(162, 28);
			this->label17->TabIndex = 42;
			this->label17->Text = L"*Doctor Name*";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(32, 181);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(200, 63);
			this->label18->TabIndex = 36;
			this->label18->Text = L"Day: *Day*\r\nTiming : 10am-11am\r\nSpecialization : Cardiologist\r\n";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->radioButton5);
			this->panel3->Controls->Add(this->radioButton2);
			this->panel3->Controls->Add(this->radioButton4);
			this->panel3->Controls->Add(this->radioButton3);
			this->panel3->Controls->Add(this->radioButton1);
			this->panel3->Controls->Add(this->rdPatient1);
			this->panel3->Controls->Add(this->rdDoctor1);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 70);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1264, 611);
			this->panel3->TabIndex = 8;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::Color::Transparent;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->ForeColor = System::Drawing::Color::White;
			this->radioButton5->Location = System::Drawing::Point(837, 163);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(80, 25);
			this->radioButton5->TabIndex = 38;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Sunday";
			this->radioButton5->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(740, 163);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(91, 25);
			this->radioButton2->TabIndex = 39;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Saturday";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::Transparent;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->ForeColor = System::Drawing::Color::White;
			this->radioButton4->Location = System::Drawing::Point(565, 163);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(92, 25);
			this->radioButton4->TabIndex = 35;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Thursday";
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Transparent;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(356, 163);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(85, 25);
			this->radioButton3->TabIndex = 40;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Tuesday";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(663, 163);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(71, 25);
			this->radioButton1->TabIndex = 36;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Friday";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// rdPatient1
			// 
			this->rdPatient1->AutoSize = true;
			this->rdPatient1->BackColor = System::Drawing::Color::Transparent;
			this->rdPatient1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdPatient1->ForeColor = System::Drawing::Color::White;
			this->rdPatient1->Location = System::Drawing::Point(451, 163);
			this->rdPatient1->Name = L"rdPatient1";
			this->rdPatient1->Size = System::Drawing::Size(108, 25);
			this->rdPatient1->TabIndex = 41;
			this->rdPatient1->TabStop = true;
			this->rdPatient1->Text = L"Wednesday";
			this->rdPatient1->UseVisualStyleBackColor = false;
			// 
			// rdDoctor1
			// 
			this->rdDoctor1->AutoSize = true;
			this->rdDoctor1->BackColor = System::Drawing::Color::Transparent;
			this->rdDoctor1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdDoctor1->ForeColor = System::Drawing::Color::White;
			this->rdDoctor1->Location = System::Drawing::Point(265, 163);
			this->rdDoctor1->Name = L"rdDoctor1";
			this->rdDoctor1->Size = System::Drawing::Size(85, 25);
			this->rdDoctor1->TabIndex = 37;
			this->rdDoctor1->TabStop = true;
			this->rdDoctor1->Text = L"Monday";
			this->rdDoctor1->UseVisualStyleBackColor = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Location = System::Drawing::Point(524, 132);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(145, 28);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Select day(s):";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label11->Location = System::Drawing::Point(279, 48);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(706, 47);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Booked Appointments for *Patient Name*";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->btProfile);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1264, 70);
			this->panel1->TabIndex = 7;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(1194, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(58, 45);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 27;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Light", 10));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(1162, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 19);
			this->label4->TabIndex = 26;
			this->label4->Text = L"HMS\r\n";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btProfile
			// 
			this->btProfile->BackColor = System::Drawing::Color::Transparent;
			this->btProfile->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btProfile.BackgroundImage")));
			this->btProfile->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btProfile->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btProfile->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btProfile->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btProfile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btProfile->Location = System::Drawing::Point(12, 12);
			this->btProfile->Name = L"btProfile";
			this->btProfile->Size = System::Drawing::Size(55, 50);
			this->btProfile->TabIndex = 17;
			this->btProfile->UseVisualStyleBackColor = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18.25F, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(471, 24);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(278, 33);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Booked Appointments";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PatientAppointments
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"PatientAppointments";
			this->Text = L"PatientAppointments";
			this->panel2->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
