#pragma once

namespace HospitalManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for WalletManagement
	/// </summary>
	public ref class WalletManagement : public System::Windows::Forms::Form
	{
	public:
		WalletManagement(void)
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
		~WalletManagement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btProfile;
	private: System::Windows::Forms::Panel^ panel2;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ tbAmount;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ tbAccount2;

	private: System::Windows::Forms::Label^ label6;







	private: System::Windows::Forms::Button^ button2;




	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::RadioButton^ rdDoctor2;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ rdPatient2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::RadioButton^ rdPatient1;

	private: System::Windows::Forms::RadioButton^ rdDoctor1;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ tbAccount;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel6;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ lbAmount;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WalletManagement::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btProfile = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->rdPatient1 = (gcnew System::Windows::Forms::RadioButton());
			this->rdDoctor1 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tbAccount = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->lbAmount = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rdPatient2 = (gcnew System::Windows::Forms::RadioButton());
			this->rdDoctor2 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tbAccount2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tbAmount = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->btProfile);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1264, 70);
			this->panel1->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18.25F, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(513, 24);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(252, 33);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Wallet Management";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->btProfile->TabIndex = 8;
			this->btProfile->UseVisualStyleBackColor = false;
			this->btProfile->Click += gcnew System::EventHandler(this, &WalletManagement::btProfile_Click);
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
			this->pictureBox2->TabIndex = 7;
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
			this->label4->TabIndex = 6;
			this->label4->Text = L"HMS\r\n";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->rdPatient1);
			this->panel2->Controls->Add(this->rdDoctor1);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->rdPatient2);
			this->panel2->Controls->Add(this->rdDoctor2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 70);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1264, 611);
			this->panel2->TabIndex = 0;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label13->Location = System::Drawing::Point(163, 370);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(190, 26);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Amount in Numbers";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel7->Controls->Add(this->pictureBox3);
			this->panel7->Controls->Add(this->label7);
			this->panel7->Controls->Add(this->label12);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel7->Location = System::Drawing::Point(0, 513);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1264, 98);
			this->panel7->TabIndex = 26;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(50, 13);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(76, 73);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(132, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(227, 26);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Can\'t find your User ID \?";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 10.25F));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(133, 50);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(433, 19);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Your User ID can be seen from under the avatar in your profile menu.";
			// 
			// rdPatient1
			// 
			this->rdPatient1->AutoSize = true;
			this->rdPatient1->BackColor = System::Drawing::Color::Transparent;
			this->rdPatient1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdPatient1->ForeColor = System::Drawing::Color::White;
			this->rdPatient1->Location = System::Drawing::Point(434, 153);
			this->rdPatient1->Name = L"rdPatient1";
			this->rdPatient1->Size = System::Drawing::Size(77, 25);
			this->rdPatient1->TabIndex = 25;
			this->rdPatient1->TabStop = true;
			this->rdPatient1->Text = L"Patient";
			this->rdPatient1->UseVisualStyleBackColor = false;
			// 
			// rdDoctor1
			// 
			this->rdDoctor1->AutoSize = true;
			this->rdDoctor1->BackColor = System::Drawing::Color::Transparent;
			this->rdDoctor1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdDoctor1->ForeColor = System::Drawing::Color::White;
			this->rdDoctor1->Location = System::Drawing::Point(351, 153);
			this->rdDoctor1->Name = L"rdDoctor1";
			this->rdDoctor1->Size = System::Drawing::Size(77, 25);
			this->rdDoctor1->TabIndex = 24;
			this->rdDoctor1->TabStop = true;
			this->rdDoctor1->Text = L"Doctor";
			this->rdDoctor1->UseVisualStyleBackColor = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Location = System::Drawing::Point(163, 151);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(158, 26);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Select user type:";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(168, 280);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(342, 59);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Check";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &WalletManagement::button1_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel5->Controls->Add(this->tbAccount);
			this->panel5->Location = System::Drawing::Point(168, 223);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(342, 35);
			this->panel5->TabIndex = 22;
			// 
			// tbAccount
			// 
			this->tbAccount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbAccount->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbAccount->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12.25F));
			this->tbAccount->ForeColor = System::Drawing::Color::Silver;
			this->tbAccount->Location = System::Drawing::Point(12, 5);
			this->tbAccount->Name = L"tbAccount";
			this->tbAccount->Size = System::Drawing::Size(292, 22);
			this->tbAccount->TabIndex = 0;
			this->tbAccount->Text = L"Account (eg: WXYZ-12345)";
			this->tbAccount->Enter += gcnew System::EventHandler(this, &WalletManagement::tbAccount_Enter);
			this->tbAccount->Leave += gcnew System::EventHandler(this, &WalletManagement::tbAccount_Leave);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label10->Location = System::Drawing::Point(163, 191);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(215, 26);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Enter Account Number";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel6->Controls->Add(this->lbAmount);
			this->panel6->Location = System::Drawing::Point(168, 408);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(342, 35);
			this->panel6->TabIndex = 20;
			// 
			// lbAmount
			// 
			this->lbAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAmount->ForeColor = System::Drawing::Color::Silver;
			this->lbAmount->Location = System::Drawing::Point(7, 7);
			this->lbAmount->Name = L"lbAmount";
			this->lbAmount->Size = System::Drawing::Size(329, 23);
			this->lbAmount->TabIndex = 0;
			this->lbAmount->Text = L"XXXXXXXX";
			this->lbAmount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label11->Location = System::Drawing::Point(160, 88);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(406, 47);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Check Account balance";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(754, 350);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(310, 21);
			this->label2->TabIndex = 16;
			this->label2->Text = L"( To deduct balance, enter a negative value )";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// rdPatient2
			// 
			this->rdPatient2->AutoSize = true;
			this->rdPatient2->BackColor = System::Drawing::Color::Transparent;
			this->rdPatient2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdPatient2->ForeColor = System::Drawing::Color::White;
			this->rdPatient2->Location = System::Drawing::Point(981, 151);
			this->rdPatient2->Name = L"rdPatient2";
			this->rdPatient2->Size = System::Drawing::Size(77, 25);
			this->rdPatient2->TabIndex = 15;
			this->rdPatient2->TabStop = true;
			this->rdPatient2->Text = L"Patient";
			this->rdPatient2->UseVisualStyleBackColor = false;
			// 
			// rdDoctor2
			// 
			this->rdDoctor2->AutoSize = true;
			this->rdDoctor2->BackColor = System::Drawing::Color::Transparent;
			this->rdDoctor2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdDoctor2->ForeColor = System::Drawing::Color::White;
			this->rdDoctor2->Location = System::Drawing::Point(898, 151);
			this->rdDoctor2->Name = L"rdDoctor2";
			this->rdDoctor2->Size = System::Drawing::Size(77, 25);
			this->rdDoctor2->TabIndex = 14;
			this->rdDoctor2->TabStop = true;
			this->rdDoctor2->Text = L"Doctor";
			this->rdDoctor2->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(717, 151);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 26);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Select user type:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(913, 384);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 59);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Proceed";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &WalletManagement::button2_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel4->Controls->Add(this->tbAccount2);
			this->panel4->Location = System::Drawing::Point(722, 223);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(342, 35);
			this->panel4->TabIndex = 11;
			// 
			// tbAccount2
			// 
			this->tbAccount2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbAccount2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbAccount2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12.25F));
			this->tbAccount2->ForeColor = System::Drawing::Color::Silver;
			this->tbAccount2->Location = System::Drawing::Point(12, 5);
			this->tbAccount2->Name = L"tbAccount2";
			this->tbAccount2->Size = System::Drawing::Size(292, 22);
			this->tbAccount2->TabIndex = 0;
			this->tbAccount2->Text = L"Account (eg: WXYZ-12345)";
			this->tbAccount2->Enter += gcnew System::EventHandler(this, &WalletManagement::tbAccount2_Enter);
			this->tbAccount2->Leave += gcnew System::EventHandler(this, &WalletManagement::tbAccount2_Leave);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(717, 191);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(215, 26);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Enter Account Number";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel3->Controls->Add(this->tbAmount);
			this->panel3->Location = System::Drawing::Point(722, 312);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(342, 35);
			this->panel3->TabIndex = 9;
			// 
			// tbAmount
			// 
			this->tbAmount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbAmount->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12.25F));
			this->tbAmount->ForeColor = System::Drawing::Color::Silver;
			this->tbAmount->Location = System::Drawing::Point(12, 5);
			this->tbAmount->Name = L"tbAmount";
			this->tbAmount->Size = System::Drawing::Size(292, 22);
			this->tbAmount->TabIndex = 0;
			this->tbAmount->Text = L"Amount (in numbers)";
			this->tbAmount->Enter += gcnew System::EventHandler(this, &WalletManagement::tbAmount_Enter);
			this->tbAmount->Leave += gcnew System::EventHandler(this, &WalletManagement::tbAmount_Leave);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(714, 88);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(395, 47);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Add or Deduct balance";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(717, 281);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(316, 26);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Enter the Amount you want to add";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// WalletManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"WalletManagement";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WalletManagement";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=test;Integrated Security=True;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);

	private: System::Void btProfile_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double^ amount = nullptr;
		if ((!rdDoctor1->Checked && !rdPatient1->Checked) || tbAccount->Text == "") {
			MessageBox::Show("Enter all Fields");
		}
		else {
			String^ role = nullptr;
			if (rdDoctor1->Checked)
				role = "Doctor";
			else
				role = "Patient";

			String^ account = tbAccount->Text;

			String^ sqlQuery = "SELECT wallet FROM " + role + " WHERE account = @acc";
			SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);

			sqlConn->Open();

			command->Parameters->AddWithValue("@acc", account);
				
			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read()) {
				amount = reader->GetDouble(reader->GetOrdinal("wallet"));
			}
			else {
				MessageBox::Show(role + " not found with the given Account Number");
			}

			sqlConn->Close();
		}
		if (amount != nullptr)
			lbAmount->Text = amount->ToString();
		else
			lbAmount->Text = "XXXXXXXX";
	}
	private: System::Void tbAccount_Enter(System::Object^ sender, System::EventArgs^ e) {
		tbAccount->Text = "";
	}
	private: System::Void tbAccount_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbAccount->Text == "")
			tbAccount->Text = "Account (eg: WXYZ-12345)";
	}

	private: System::Void tbAccount2_Enter(System::Object^ sender, System::EventArgs^ e) {
		tbAccount2->Text = "";
	}

	private: System::Void tbAccount2_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbAccount2->Text == "")
			tbAccount2->Text = "Account(eg: WXYZ - 12345)";
	}
	private: System::Void tbAmount_Enter(System::Object^ sender, System::EventArgs^ e) {
		tbAmount->Text = "";
	}
	private: System::Void tbAmount_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbAmount->Text == "")
			tbAmount->Text = "Amount (in numbers)";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ account = tbAccount2->Text;
		String^ amountText = tbAmount->Text;
		double^ amount = Convert::ToDouble(amountText);

		if ((!rdDoctor2->Checked && !rdPatient2->Checked) || account == "" || amountText == "") {
			MessageBox::Show("Enter all Fields");
		}
		else {
			String^ role = nullptr;

			if (rdDoctor2->Checked)
				role = "Doctor";
			else
				role = "Patient";

			String^ sqlQuery = "UPDATE " + role + " SET wallet = wallet + @amount WHERE account = @acc";
			SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);

			sqlConn->Open();

			command->Parameters->AddWithValue("@amount", amount);
			command->Parameters->AddWithValue("@acc", account);
			command->ExecuteNonQuery();

			sqlQuery = "SELECT lastName FROM " + role + " WHERE account = @acc";
			command = gcnew SqlCommand(sqlQuery, sqlConn);
	
			command->Parameters->AddWithValue("@acc", account);
			SqlDataReader^ reader = command->ExecuteReader();

			String^ name = nullptr;

			if (reader->Read()) {
				name = reader->GetString(reader->GetOrdinal("lastName"));
				MessageBox::Show("Successfully Added/Deducted " + amount + " from " + name + "'s Account");
			}
			else {
				MessageBox::Show(role + " not found with the given Account Number");
			}

			sqlConn->Close();

		}
	}
};
}