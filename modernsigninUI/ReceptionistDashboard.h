#pragma once

#include "Receptionist.h"

namespace HospitalManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReceptionistDashboard
	/// </summary>
	public ref class ReceptionistDashboard : public System::Windows::Forms::Form
	{
	public:
		ReceptionistDashboard(Receptionist^ receptionist)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			labelUserID->Text = receptionist->id.ToString();
			labelName->Text = receptionist->firstName + " " + receptionist->lastName;
			DateTime today = DateTime::Now;
			DateTime dob = DateTime::Parse(receptionist->dateofBirth);
			int age = today.Year - dob.Year;
			if (today.Month < dob.Month || (today.Month == dob.Month && today.Day < dob.Day)) {
				age--; // Adjust if birthday hasn't occurred yet this year
			}
			labelAge->Text = age.ToString();
			labelGender->Text = receptionist->gender;
			labelDOB->Text = receptionist->dateofBirth;
			labelEmail->Text = receptionist->email;
			labelPhone->Text = receptionist->phoneNumber;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ReceptionistDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelTop;
	private: System::Windows::Forms::Panel^ panelMain;
	private: System::Windows::Forms::Panel^ panelProfile;

	private: System::Windows::Forms::Button^ btProfile;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ buttonBalance;

	private: System::Windows::Forms::Button^ buttonPatients;

	private: System::Windows::Forms::Label^ labelName;


	private: System::Windows::Forms::Label^ labelPhone;
	private: System::Windows::Forms::Label^ labelEmail;
	private: System::Windows::Forms::Label^ labelDOB;
	private: System::Windows::Forms::Label^ labelGender;
	private: System::Windows::Forms::Label^ labelAge;
	private: System::Windows::Forms::Label^ labelUserID;
	private: System::Windows::Forms::Button^ buttonAppointments;
	private: System::Windows::Forms::PictureBox^ pictureBox;
	private: System::Windows::Forms::Button^ button7;




	private: System::ComponentModel::IContainer^ components;






	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ReceptionistDashboard::typeid));
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btProfile = (gcnew System::Windows::Forms::Button());
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->buttonBalance = (gcnew System::Windows::Forms::Button());
			this->buttonAppointments = (gcnew System::Windows::Forms::Button());
			this->buttonPatients = (gcnew System::Windows::Forms::Button());
			this->panelProfile = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->labelUserID = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelPhone = (gcnew System::Windows::Forms::Label());
			this->labelEmail = (gcnew System::Windows::Forms::Label());
			this->labelDOB = (gcnew System::Windows::Forms::Label());
			this->labelGender = (gcnew System::Windows::Forms::Label());
			this->labelAge = (gcnew System::Windows::Forms::Label());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panelMain->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->panelProfile->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panelTop->Controls->Add(this->pictureBox2);
			this->panelTop->Controls->Add(this->label4);
			this->panelTop->Controls->Add(this->label2);
			this->panelTop->Controls->Add(this->btProfile);
			this->panelTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTop->Location = System::Drawing::Point(0, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(1264, 70);
			this->panelTop->TabIndex = 0;
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
			this->pictureBox2->TabIndex = 5;
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
			this->label4->TabIndex = 3;
			this->label4->Text = L"HMS\r\n";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(520, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(294, 33);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Receptionist Dashboard";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->btProfile->Size = System::Drawing::Size(47, 42);
			this->btProfile->TabIndex = 0;
			this->btProfile->UseVisualStyleBackColor = false;
			// 
			// panelMain
			// 
			this->panelMain->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelMain.BackgroundImage")));
			this->panelMain->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelMain->Controls->Add(this->panel1);
			this->panelMain->Controls->Add(this->buttonBalance);
			this->panelMain->Controls->Add(this->buttonAppointments);
			this->panelMain->Controls->Add(this->buttonPatients);
			this->panelMain->Location = System::Drawing::Point(0, 70);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(1264, 611);
			this->panelMain->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel1->Controls->Add(this->pictureBox);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 514);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1264, 97);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox
			// 
			this->pictureBox->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox.Image")));
			this->pictureBox->Location = System::Drawing::Point(356, 12);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(76, 73);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox->TabIndex = 6;
			this->pictureBox->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(438, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 26);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Did you know \?";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 10.25F));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(439, 56);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 19);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Danish is a charya\r\n";
			// 
			// buttonBalance
			// 
			this->buttonBalance->BackColor = System::Drawing::Color::Transparent;
			this->buttonBalance->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->buttonBalance->FlatAppearance->BorderSize = 2;
			this->buttonBalance->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->buttonBalance->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->buttonBalance->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->buttonBalance->ForeColor = System::Drawing::Color::White;
			this->buttonBalance->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonBalance.Image")));
			this->buttonBalance->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonBalance->Location = System::Drawing::Point(414, 357);
			this->buttonBalance->Name = L"buttonBalance";
			this->buttonBalance->Size = System::Drawing::Size(785, 115);
			this->buttonBalance->TabIndex = 0;
			this->buttonBalance->Text = L"Manage account Balance\r\n";
			this->buttonBalance->UseVisualStyleBackColor = false;
			// 
			// buttonAppointments
			// 
			this->buttonAppointments->BackColor = System::Drawing::Color::Transparent;
			this->buttonAppointments->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->buttonAppointments->FlatAppearance->BorderSize = 2;
			this->buttonAppointments->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->buttonAppointments->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->buttonAppointments->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAppointments->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->buttonAppointments->ForeColor = System::Drawing::Color::White;
			this->buttonAppointments->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonAppointments.Image")));
			this->buttonAppointments->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonAppointments->Location = System::Drawing::Point(415, 199);
			this->buttonAppointments->Name = L"buttonAppointments";
			this->buttonAppointments->Size = System::Drawing::Size(785, 115);
			this->buttonAppointments->TabIndex = 0;
			this->buttonAppointments->Text = L"View booked Appointments";
			this->buttonAppointments->UseVisualStyleBackColor = false;
			// 
			// buttonPatients
			// 
			this->buttonPatients->BackColor = System::Drawing::Color::Transparent;
			this->buttonPatients->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->buttonPatients->FlatAppearance->BorderSize = 2;
			this->buttonPatients->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->buttonPatients->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->buttonPatients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPatients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->buttonPatients->ForeColor = System::Drawing::Color::White;
			this->buttonPatients->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonPatients.Image")));
			this->buttonPatients->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonPatients->Location = System::Drawing::Point(415, 43);
			this->buttonPatients->Name = L"buttonPatients";
			this->buttonPatients->Size = System::Drawing::Size(785, 115);
			this->buttonPatients->TabIndex = 0;
			this->buttonPatients->Text = L"View list of scheduled Patients";
			this->buttonPatients->UseVisualStyleBackColor = false;
			// 
			// panelProfile
			// 
			this->panelProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panelProfile->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelProfile.BackgroundImage")));
			this->panelProfile->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelProfile->Controls->Add(this->button7);
			this->panelProfile->Controls->Add(this->labelUserID);
			this->panelProfile->Controls->Add(this->pictureBox1);
			this->panelProfile->Controls->Add(this->label3);
			this->panelProfile->Controls->Add(this->labelPhone);
			this->panelProfile->Controls->Add(this->labelEmail);
			this->panelProfile->Controls->Add(this->labelDOB);
			this->panelProfile->Controls->Add(this->labelGender);
			this->panelProfile->Controls->Add(this->labelAge);
			this->panelProfile->Controls->Add(this->labelName);
			this->panelProfile->Controls->Add(this->label1);
			this->panelProfile->Location = System::Drawing::Point(0, 70);
			this->panelProfile->Name = L"panelProfile";
			this->panelProfile->Size = System::Drawing::Size(341, 611);
			this->panelProfile->TabIndex = 2;
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
			this->button7->Location = System::Drawing::Point(235, 561);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(92, 36);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Log out";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &ReceptionistDashboard::button7_Click);
			// 
			// labelUserID
			// 
			this->labelUserID->AutoSize = true;
			this->labelUserID->BackColor = System::Drawing::Color::Transparent;
			this->labelUserID->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Light", 10));
			this->labelUserID->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelUserID->Location = System::Drawing::Point(146, 161);
			this->labelUserID->Name = L"labelUserID";
			this->labelUserID->Size = System::Drawing::Size(20, 19);
			this->labelUserID->TabIndex = 5;
			this->labelUserID->Text = L"id";
			this->labelUserID->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(103, 58);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(120, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Light", 10));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(99, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 19);
			this->label3->TabIndex = 3;
			this->label3->Text = L"userID : ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelPhone
			// 
			this->labelPhone->AutoSize = true;
			this->labelPhone->BackColor = System::Drawing::Color::Transparent;
			this->labelPhone->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Light", 14));
			this->labelPhone->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelPhone->Location = System::Drawing::Point(94, 346);
			this->labelPhone->Name = L"labelPhone";
			this->labelPhone->Size = System::Drawing::Size(64, 26);
			this->labelPhone->TabIndex = 3;
			this->labelPhone->Text = L"phone";
			this->labelPhone->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelEmail
			// 
			this->labelEmail->AutoSize = true;
			this->labelEmail->BackColor = System::Drawing::Color::Transparent;
			this->labelEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Light", 14));
			this->labelEmail->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelEmail->Location = System::Drawing::Point(88, 320);
			this->labelEmail->Name = L"labelEmail";
			this->labelEmail->Size = System::Drawing::Size(55, 26);
			this->labelEmail->TabIndex = 3;
			this->labelEmail->Text = L"email";
			this->labelEmail->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelDOB
			// 
			this->labelDOB->AutoSize = true;
			this->labelDOB->BackColor = System::Drawing::Color::Transparent;
			this->labelDOB->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Light", 14));
			this->labelDOB->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelDOB->Location = System::Drawing::Point(79, 294);
			this->labelDOB->Name = L"labelDOB";
			this->labelDOB->Size = System::Drawing::Size(45, 26);
			this->labelDOB->TabIndex = 3;
			this->labelDOB->Text = L"dob";
			this->labelDOB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelGender
			// 
			this->labelGender->AutoSize = true;
			this->labelGender->BackColor = System::Drawing::Color::Transparent;
			this->labelGender->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Light", 14));
			this->labelGender->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelGender->Location = System::Drawing::Point(105, 268);
			this->labelGender->Name = L"labelGender";
			this->labelGender->Size = System::Drawing::Size(70, 26);
			this->labelGender->TabIndex = 3;
			this->labelGender->Text = L"gender";
			this->labelGender->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelAge
			// 
			this->labelAge->AutoSize = true;
			this->labelAge->BackColor = System::Drawing::Color::Transparent;
			this->labelAge->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Light", 14));
			this->labelAge->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelAge->Location = System::Drawing::Point(77, 242);
			this->labelAge->Name = L"labelAge";
			this->labelAge->Size = System::Drawing::Size(42, 26);
			this->labelAge->TabIndex = 3;
			this->labelAge->Text = L"age";
			this->labelAge->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->BackColor = System::Drawing::Color::Transparent;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Light", 14));
			this->labelName->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelName->Location = System::Drawing::Point(92, 216);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(57, 26);
			this->labelName->TabIndex = 3;
			this->labelName->Text = L"name";
			this->labelName->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Light", 14));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(27, 216);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 156);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Name : \r\nAge :\r\nGender : \r\nDOB :\r\nEmail :\r\nPhone :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ReceptionistDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panelProfile);
			this->Controls->Add(this->panelMain);
			this->Controls->Add(this->panelTop);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->Name = L"ReceptionistDashboard";
			this->Text = L"ReceptionistDashboard";
			this->panelTop->ResumeLayout(false);
			this->panelTop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panelMain->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->panelProfile->ResumeLayout(false);
			this->panelProfile->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
