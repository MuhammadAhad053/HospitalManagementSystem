#pragma once

#include "Doctor.h"
#include "Wallet.h"
#include "Schedule.h"

namespace HospitalManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DoctorDashboard
	/// </summary>
	public ref class DoctorDashboard : public System::Windows::Forms::Form
	{
	private: 
		Doctor^ currentDoctor;
	public:
		DoctorDashboard(Doctor^ doctor)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			labelUserID->Text = doctor->id.ToString();
			labelName->Text = doctor->firstName + " " + doctor->lastName;
			DateTime today = DateTime::Now;
			DateTime dob = DateTime::Parse(doctor->dateofBirth);
			int age = today.Year - dob.Year;
			if (today.Month < dob.Month || (today.Month == dob.Month && today.Day < dob.Day)) {
				age--; // Adjust if birthday hasn't occurred yet this year
			}
			labelAge->Text = age.ToString();
			labelGender->Text = doctor->gender;
			labelDOB->Text = doctor->dateofBirth;
			labelEmail->Text = doctor->email;
			labelPhone->Text = doctor->phoneNumber;
			labelDepartment->Text = doctor->department;
			labelSpecialization->Text = doctor->specialization;
			labelExperience->Text = doctor->experienceYears.ToString();

			currentDoctor = doctor;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DoctorDashboard()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panelMain;
	private: System::Windows::Forms::Panel^ panelProfile;



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ buttonWallet;

	private: System::Windows::Forms::Button^ buttonPatientsScheduled;

	private: System::Windows::Forms::Label^ labelName;


	private: System::Windows::Forms::Label^ labelPhone;
	private: System::Windows::Forms::Label^ labelEmail;
	private: System::Windows::Forms::Label^ labelDOB;
	private: System::Windows::Forms::Label^ labelGender;
	private: System::Windows::Forms::Label^ labelAge;
	private: System::Windows::Forms::Label^ labelUserID;
	private: System::Windows::Forms::Button^ buttonScheduleUpdate;

	private: System::Windows::Forms::Label^ labelSchedule;
	private: System::Windows::Forms::PictureBox^ pictureBox;

	private: System::Windows::Forms::Label^ labelExperience;

	private: System::Windows::Forms::Label^ labelSpecialization;

	private: System::Windows::Forms::Label^ labelDepartment;
	private: System::Windows::Forms::Panel^ panelTop;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnBack;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DoctorDashboard::typeid));
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->buttonWallet = (gcnew System::Windows::Forms::Button());
			this->buttonScheduleUpdate = (gcnew System::Windows::Forms::Button());
			this->buttonPatientsScheduled = (gcnew System::Windows::Forms::Button());
			this->panelProfile = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->labelExperience = (gcnew System::Windows::Forms::Label());
			this->labelSpecialization = (gcnew System::Windows::Forms::Label());
			this->labelDepartment = (gcnew System::Windows::Forms::Label());
			this->labelSchedule = (gcnew System::Windows::Forms::Label());
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
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->panelMain->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->panelProfile->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panelMain
			// 
			this->panelMain->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelMain.BackgroundImage")));
			this->panelMain->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelMain->Controls->Add(this->panel1);
			this->panelMain->Controls->Add(this->buttonWallet);
			this->panelMain->Controls->Add(this->buttonScheduleUpdate);
			this->panelMain->Controls->Add(this->buttonPatientsScheduled);
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
			this->pictureBox->Location = System::Drawing::Point(357, 12);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(76, 73);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox->TabIndex = 7;
			this->pictureBox->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(438, 23);
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
			this->label7->Location = System::Drawing::Point(439, 58);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 19);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Danish is a charya\r\n";
			// 
			// buttonWallet
			// 
			this->buttonWallet->BackColor = System::Drawing::Color::Transparent;
			this->buttonWallet->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->buttonWallet->FlatAppearance->BorderSize = 2;
			this->buttonWallet->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->buttonWallet->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->buttonWallet->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonWallet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->buttonWallet->ForeColor = System::Drawing::Color::White;
			this->buttonWallet->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonWallet.Image")));
			this->buttonWallet->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonWallet->Location = System::Drawing::Point(414, 357);
			this->buttonWallet->Name = L"buttonWallet";
			this->buttonWallet->Size = System::Drawing::Size(785, 115);
			this->buttonWallet->TabIndex = 0;
			this->buttonWallet->Text = L"View your wallet \r\n";
			this->buttonWallet->UseVisualStyleBackColor = false;
			this->buttonWallet->Click += gcnew System::EventHandler(this, &DoctorDashboard::buttonWallet_Click);
			// 
			// buttonScheduleUpdate
			// 
			this->buttonScheduleUpdate->BackColor = System::Drawing::Color::Transparent;
			this->buttonScheduleUpdate->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->buttonScheduleUpdate->FlatAppearance->BorderSize = 2;
			this->buttonScheduleUpdate->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->buttonScheduleUpdate->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->buttonScheduleUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonScheduleUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->buttonScheduleUpdate->ForeColor = System::Drawing::Color::White;
			this->buttonScheduleUpdate->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonScheduleUpdate.Image")));
			this->buttonScheduleUpdate->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonScheduleUpdate->Location = System::Drawing::Point(415, 199);
			this->buttonScheduleUpdate->Name = L"buttonScheduleUpdate";
			this->buttonScheduleUpdate->Size = System::Drawing::Size(785, 115);
			this->buttonScheduleUpdate->TabIndex = 0;
			this->buttonScheduleUpdate->Text = L"Update your Schedule";
			this->buttonScheduleUpdate->UseVisualStyleBackColor = false;
			this->buttonScheduleUpdate->Click += gcnew System::EventHandler(this, &DoctorDashboard::buttonScheduleUpdate_Click);
			// 
			// buttonPatientsScheduled
			// 
			this->buttonPatientsScheduled->BackColor = System::Drawing::Color::Transparent;
			this->buttonPatientsScheduled->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->buttonPatientsScheduled->FlatAppearance->BorderSize = 2;
			this->buttonPatientsScheduled->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->buttonPatientsScheduled->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->buttonPatientsScheduled->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPatientsScheduled->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->buttonPatientsScheduled->ForeColor = System::Drawing::Color::White;
			this->buttonPatientsScheduled->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonPatientsScheduled.Image")));
			this->buttonPatientsScheduled->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonPatientsScheduled->Location = System::Drawing::Point(415, 43);
			this->buttonPatientsScheduled->Name = L"buttonPatientsScheduled";
			this->buttonPatientsScheduled->Size = System::Drawing::Size(785, 115);
			this->buttonPatientsScheduled->TabIndex = 0;
			this->buttonPatientsScheduled->Text = L"View list of scheduled Patients";
			this->buttonPatientsScheduled->UseVisualStyleBackColor = false;
			// 
			// panelProfile
			// 
			this->panelProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panelProfile->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelProfile.BackgroundImage")));
			this->panelProfile->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelProfile->Controls->Add(this->button7);
			this->panelProfile->Controls->Add(this->labelExperience);
			this->panelProfile->Controls->Add(this->labelSpecialization);
			this->panelProfile->Controls->Add(this->labelDepartment);
			this->panelProfile->Controls->Add(this->labelSchedule);
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
			this->button7->Location = System::Drawing::Point(236, 563);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(92, 36);
			this->button7->TabIndex = 4;
			this->button7->Text = L"Log out";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &DoctorDashboard::button7_Click);
			// 
			// labelExperience
			// 
			this->labelExperience->AutoSize = true;
			this->labelExperience->BackColor = System::Drawing::Color::Transparent;
			this->labelExperience->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Light", 14));
			this->labelExperience->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelExperience->Location = System::Drawing::Point(170, 424);
			this->labelExperience->Name = L"labelExperience";
			this->labelExperience->Size = System::Drawing::Size(99, 26);
			this->labelExperience->TabIndex = 9;
			this->labelExperience->Text = L"experience";
			this->labelExperience->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelSpecialization
			// 
			this->labelSpecialization->AutoSize = true;
			this->labelSpecialization->BackColor = System::Drawing::Color::Transparent;
			this->labelSpecialization->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Light", 14));
			this->labelSpecialization->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelSpecialization->Location = System::Drawing::Point(145, 398);
			this->labelSpecialization->Name = L"labelSpecialization";
			this->labelSpecialization->Size = System::Drawing::Size(118, 26);
			this->labelSpecialization->TabIndex = 8;
			this->labelSpecialization->Text = L"specialization";
			this->labelSpecialization->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelDepartment
			// 
			this->labelDepartment->AutoSize = true;
			this->labelDepartment->BackColor = System::Drawing::Color::Transparent;
			this->labelDepartment->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Light", 14));
			this->labelDepartment->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelDepartment->Location = System::Drawing::Point(141, 372);
			this->labelDepartment->Name = L"labelDepartment";
			this->labelDepartment->Size = System::Drawing::Size(107, 26);
			this->labelDepartment->TabIndex = 7;
			this->labelDepartment->Text = L"department";
			this->labelDepartment->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelSchedule
			// 
			this->labelSchedule->AutoSize = true;
			this->labelSchedule->BackColor = System::Drawing::Color::Transparent;
			this->labelSchedule->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Light", 14));
			this->labelSchedule->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelSchedule->Location = System::Drawing::Point(132, 450);
			this->labelSchedule->Name = L"labelSchedule";
			this->labelSchedule->Size = System::Drawing::Size(82, 26);
			this->labelSchedule->TabIndex = 6;
			this->labelSchedule->Text = L"schedule";
			this->labelSchedule->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
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
			this->label1->Size = System::Drawing::Size(148, 260);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Name : \r\nAge :\r\nGender : \r\nDOB :\r\nEmail :\r\nPhone :\r\nDepartment:\r\nSpecialization:\r"
				L"\nExperience Years:\r\nAvailability : ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panelTop->Controls->Add(this->pictureBox2);
			this->panelTop->Controls->Add(this->label4);
			this->panelTop->Controls->Add(this->label2);
			this->panelTop->Controls->Add(this->btnBack);
			this->panelTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTop->Location = System::Drawing::Point(0, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(1264, 70);
			this->panelTop->TabIndex = 3;
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
			this->label2->Size = System::Drawing::Size(228, 33);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Doctor Dashboard";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::Transparent;
			this->btnBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack.BackgroundImage")));
			this->btnBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnBack->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnBack->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnBack->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Location = System::Drawing::Point(12, 12);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(47, 42);
			this->btnBack->TabIndex = 0;
			this->btnBack->UseVisualStyleBackColor = false;
			// 
			// DoctorDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panelTop);
			this->Controls->Add(this->panelProfile);
			this->Controls->Add(this->panelMain);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->Name = L"DoctorDashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DoctorDashboard";
			this->panelMain->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->panelProfile->ResumeLayout(false);
			this->panelProfile->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelTop->ResumeLayout(false);
			this->panelTop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void buttonWallet_Click(System::Object^ sender, System::EventArgs^ e) {
		Wallet^ wallet = gcnew Wallet(currentDoctor);
		this->Hide();
		wallet->ShowDialog();
		this->Show();
	}
	private: System::Void buttonScheduleUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		Schedule^ schedule = gcnew Schedule(currentDoctor);
		this->Hide();
		schedule->ShowDialog();
		this->Show();
	}
};
}
