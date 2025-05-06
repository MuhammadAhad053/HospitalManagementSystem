#pragma once

namespace HospitalManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BookAppointment
	/// </summary>
	public ref class BookAppointment : public System::Windows::Forms::Form
	{
	public:
		BookAppointment(void)
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
		~BookAppointment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btProfile;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ rdPatient1;
	private: System::Windows::Forms::RadioButton^ rdDoctor1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ btnSignIn;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;













































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BookAppointment::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btProfile = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->rdPatient1 = (gcnew System::Windows::Forms::RadioButton());
			this->rdDoctor1 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel19->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel2->Controls->Add(this->panel19);
			this->panel2->Controls->Add(this->panel11);
			this->panel2->Controls->Add(this->panel18);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel17);
			this->panel2->Controls->Add(this->panel10);
			this->panel2->Controls->Add(this->panel16);
			this->panel2->Controls->Add(this->panel9);
			this->panel2->Controls->Add(this->panel15);
			this->panel2->Controls->Add(this->panel14);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel13);
			this->panel2->Controls->Add(this->panel8);
			this->panel2->Controls->Add(this->panel12);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 269);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1264, 412);
			this->panel2->TabIndex = 5;
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
			this->panel1->TabIndex = 4;
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
			this->label9->Location = System::Drawing::Point(488, 24);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(271, 33);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Book an Appointment";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 70);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1264, 199);
			this->panel3->TabIndex = 6;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label11->Location = System::Drawing::Point(311, 37);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(575, 47);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Available Slots for *Doctor Name*";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// rdPatient1
			// 
			this->rdPatient1->AutoSize = true;
			this->rdPatient1->BackColor = System::Drawing::Color::Transparent;
			this->rdPatient1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdPatient1->ForeColor = System::Drawing::Color::White;
			this->rdPatient1->Location = System::Drawing::Point(476, 137);
			this->rdPatient1->Name = L"rdPatient1";
			this->rdPatient1->Size = System::Drawing::Size(108, 25);
			this->rdPatient1->TabIndex = 32;
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
			this->rdDoctor1->Location = System::Drawing::Point(290, 137);
			this->rdDoctor1->Name = L"rdDoctor1";
			this->rdDoctor1->Size = System::Drawing::Size(85, 25);
			this->rdDoctor1->TabIndex = 31;
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
			this->label8->Location = System::Drawing::Point(549, 106);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(145, 28);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Select day(s):";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(688, 137);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(71, 25);
			this->radioButton1->TabIndex = 31;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Friday";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(765, 137);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(91, 25);
			this->radioButton2->TabIndex = 32;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Saturday";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Transparent;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(381, 137);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(85, 25);
			this->radioButton3->TabIndex = 32;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Tuesday";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::Transparent;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->ForeColor = System::Drawing::Color::White;
			this->radioButton4->Location = System::Drawing::Point(590, 137);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(92, 25);
			this->radioButton4->TabIndex = 31;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Thursday";
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::Color::Transparent;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->ForeColor = System::Drawing::Color::White;
			this->radioButton5->Location = System::Drawing::Point(862, 137);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(80, 25);
			this->radioButton5->TabIndex = 32;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Sunday";
			this->radioButton5->UseVisualStyleBackColor = false;
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Controls->Add(this->btnSignIn);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Location = System::Drawing::Point(25, 31);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(293, 75);
			this->panel4->TabIndex = 37;
			// 
			// btnSignIn
			// 
			this->btnSignIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->btnSignIn->FlatAppearance->BorderSize = 0;
			this->btnSignIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->btnSignIn->ForeColor = System::Drawing::Color::Black;
			this->btnSignIn->Location = System::Drawing::Point(203, 29);
			this->btnSignIn->Name = L"btnSignIn";
			this->btnSignIn->Size = System::Drawing::Size(76, 32);
			this->btnSignIn->TabIndex = 40;
			this->btnSignIn->Text = L"Book";
			this->btnSignIn->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(12, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(182, 52);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Controls->Add(this->button1);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Location = System::Drawing::Point(332, 31);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(293, 75);
			this->panel5->TabIndex = 37;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(203, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 32);
			this->button1->TabIndex = 40;
			this->button1->Text = L"Book";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 52);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->Controls->Add(this->button2);
			this->panel6->Controls->Add(this->label2);
			this->panel6->Location = System::Drawing::Point(639, 31);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(293, 75);
			this->panel6->TabIndex = 37;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(203, 29);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(76, 32);
			this->button2->TabIndex = 40;
			this->button2->Text = L"Book";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 52);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel7->Controls->Add(this->button3);
			this->panel7->Controls->Add(this->label3);
			this->panel7->Location = System::Drawing::Point(946, 31);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(293, 75);
			this->panel7->TabIndex = 37;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(203, 29);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(76, 32);
			this->button3->TabIndex = 40;
			this->button3->Text = L"Book";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(182, 52);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel8
			// 
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel8->Controls->Add(this->button4);
			this->panel8->Controls->Add(this->label6);
			this->panel8->Location = System::Drawing::Point(25, 122);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(293, 75);
			this->panel8->TabIndex = 37;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(203, 29);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(76, 32);
			this->button4->TabIndex = 40;
			this->button4->Text = L"Book";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(12, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(182, 52);
			this->label6->TabIndex = 36;
			this->label6->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel9
			// 
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel9->Controls->Add(this->button5);
			this->panel9->Controls->Add(this->label7);
			this->panel9->Location = System::Drawing::Point(639, 122);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(293, 75);
			this->panel9->TabIndex = 37;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(203, 29);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(76, 32);
			this->button5->TabIndex = 40;
			this->button5->Text = L"Book";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(12, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(182, 52);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel10
			// 
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel10->Controls->Add(this->button6);
			this->panel10->Controls->Add(this->label10);
			this->panel10->Location = System::Drawing::Point(332, 122);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(293, 75);
			this->panel10->TabIndex = 37;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(203, 29);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(76, 32);
			this->button6->TabIndex = 40;
			this->button6->Text = L"Book";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(12, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(182, 52);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel11
			// 
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel11->Controls->Add(this->button7);
			this->panel11->Controls->Add(this->label12);
			this->panel11->Location = System::Drawing::Point(946, 122);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(293, 75);
			this->panel11->TabIndex = 37;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(203, 29);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(76, 32);
			this->button7->TabIndex = 40;
			this->button7->Text = L"Book";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(12, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(182, 52);
			this->label12->TabIndex = 36;
			this->label12->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel12
			// 
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel12->Controls->Add(this->button8);
			this->panel12->Controls->Add(this->label13);
			this->panel12->Location = System::Drawing::Point(25, 214);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(293, 75);
			this->panel12->TabIndex = 37;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(203, 29);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(76, 32);
			this->button8->TabIndex = 40;
			this->button8->Text = L"Book";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(12, 9);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(182, 52);
			this->label13->TabIndex = 36;
			this->label13->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel13
			// 
			this->panel13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel13.BackgroundImage")));
			this->panel13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel13->Controls->Add(this->button9);
			this->panel13->Controls->Add(this->label14);
			this->panel13->Location = System::Drawing::Point(639, 214);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(293, 75);
			this->panel13->TabIndex = 37;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(203, 29);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(76, 32);
			this->button9->TabIndex = 40;
			this->button9->Text = L"Book";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(12, 9);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(182, 52);
			this->label14->TabIndex = 36;
			this->label14->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel14
			// 
			this->panel14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel14.BackgroundImage")));
			this->panel14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel14->Controls->Add(this->button10);
			this->panel14->Controls->Add(this->label15);
			this->panel14->Location = System::Drawing::Point(25, 305);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(293, 75);
			this->panel14->TabIndex = 37;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(203, 29);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(76, 32);
			this->button10->TabIndex = 40;
			this->button10->Text = L"Book";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(12, 9);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(182, 52);
			this->label15->TabIndex = 36;
			this->label15->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel15
			// 
			this->panel15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel15.BackgroundImage")));
			this->panel15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel15->Controls->Add(this->button11);
			this->panel15->Controls->Add(this->label16);
			this->panel15->Location = System::Drawing::Point(332, 214);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(293, 75);
			this->panel15->TabIndex = 37;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(203, 29);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(76, 32);
			this->button11->TabIndex = 40;
			this->button11->Text = L"Book";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(12, 9);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(182, 52);
			this->label16->TabIndex = 36;
			this->label16->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel16
			// 
			this->panel16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel16.BackgroundImage")));
			this->panel16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel16->Controls->Add(this->button12);
			this->panel16->Controls->Add(this->label17);
			this->panel16->Location = System::Drawing::Point(639, 305);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(293, 75);
			this->panel16->TabIndex = 37;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(203, 29);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(76, 32);
			this->button12->TabIndex = 40;
			this->button12->Text = L"Book";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(12, 9);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(182, 52);
			this->label17->TabIndex = 36;
			this->label17->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel17
			// 
			this->panel17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel17.BackgroundImage")));
			this->panel17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel17->Controls->Add(this->button13);
			this->panel17->Controls->Add(this->label18);
			this->panel17->Location = System::Drawing::Point(332, 305);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(293, 75);
			this->panel17->TabIndex = 37;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(203, 29);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(76, 32);
			this->button13->TabIndex = 40;
			this->button13->Text = L"Book";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(12, 9);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(182, 52);
			this->label18->TabIndex = 36;
			this->label18->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel18
			// 
			this->panel18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel18.BackgroundImage")));
			this->panel18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel18->Controls->Add(this->button14);
			this->panel18->Controls->Add(this->label19);
			this->panel18->Location = System::Drawing::Point(946, 214);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(293, 75);
			this->panel18->TabIndex = 37;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(203, 29);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(76, 32);
			this->button14->TabIndex = 40;
			this->button14->Text = L"Book";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(12, 9);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(182, 52);
			this->label19->TabIndex = 36;
			this->label19->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel19
			// 
			this->panel19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel19.BackgroundImage")));
			this->panel19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel19->Controls->Add(this->button15);
			this->panel19->Controls->Add(this->label20);
			this->panel19->Location = System::Drawing::Point(946, 305);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(293, 75);
			this->panel19->TabIndex = 37;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(203, 29);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(76, 32);
			this->button15->TabIndex = 40;
			this->button15->Text = L"Book";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(12, 9);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(182, 52);
			this->label20->TabIndex = 36;
			this->label20->Text = L"Day: *Day*\r\nTiming : 10am-11am";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BookAppointment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"BookAppointment";
			this->Text = L"BookAppointment";
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
