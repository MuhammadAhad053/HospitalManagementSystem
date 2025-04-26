#pragma once

#include "Doctor.h"

namespace HospitalManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Schedule
	/// </summary>
	public ref class Schedule : public System::Windows::Forms::Form
	{
	private:
		Doctor^ currentDoctor = nullptr;
	public:
		Schedule(Doctor^ doctor)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lbMonday->Text = doctor->mon;
			lbTuesday->Text = doctor->tue;
			lbWednesday->Text = doctor->wed;
			lbThursday->Text = doctor->thur;
			lbFriday->Text = doctor->fri;
			lbSaturday->Text = doctor->sat;
			lbSunday->Text = doctor->sun;

			label8->Text += doctor->lastName;

			this->currentDoctor = doctor;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Schedule()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btProfile;
	private: System::Windows::Forms::Label^ label8;











	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lbTue;


	private: System::Windows::Forms::Label^ lbMon;
	private: System::Windows::Forms::Label^ lbWed;
	private: System::Windows::Forms::Label^ lbSun;




	private: System::Windows::Forms::Label^ lbSat;

	private: System::Windows::Forms::Label^ lbFri;

	private: System::Windows::Forms::Label^ lbThur;

	private: System::Windows::Forms::Label^ lbSunday;

	private: System::Windows::Forms::Label^ lbSaturday;

	private: System::Windows::Forms::Label^ lbFriday;

	private: System::Windows::Forms::Label^ lbThursday;

	private: System::Windows::Forms::Label^ lbWednesday;

	private: System::Windows::Forms::Label^ lbTuesday;

	private: System::Windows::Forms::Label^ lbMonday;
	private: System::Windows::Forms::Button^ btSave;
































	private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Button^ btMon;
private: System::Windows::Forms::Button^ btSun;


private: System::Windows::Forms::Button^ btSat;

private: System::Windows::Forms::Button^ btFri;

private: System::Windows::Forms::Button^ btThur;

private: System::Windows::Forms::Button^ btWed;

private: System::Windows::Forms::Button^ btTue;

private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ lbEdit;
private: System::Windows::Forms::DomainUpDown^ start;



private: System::Windows::Forms::DomainUpDown^ startTime;
private: System::Windows::Forms::DomainUpDown^ end;



private: System::Windows::Forms::DomainUpDown^ endTime;

private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Button^ btConfirm;
private: System::Windows::Forms::Button^ btDiscard;
private: System::Windows::Forms::CheckBox^ cbNotAvailable;









	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Schedule::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btProfile = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->cbNotAvailable = (gcnew System::Windows::Forms::CheckBox());
			this->btDiscard = (gcnew System::Windows::Forms::Button());
			this->btConfirm = (gcnew System::Windows::Forms::Button());
			this->end = (gcnew System::Windows::Forms::DomainUpDown());
			this->endTime = (gcnew System::Windows::Forms::DomainUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->start = (gcnew System::Windows::Forms::DomainUpDown());
			this->startTime = (gcnew System::Windows::Forms::DomainUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbEdit = (gcnew System::Windows::Forms::Label());
			this->btSun = (gcnew System::Windows::Forms::Button());
			this->btSat = (gcnew System::Windows::Forms::Button());
			this->btFri = (gcnew System::Windows::Forms::Button());
			this->btThur = (gcnew System::Windows::Forms::Button());
			this->btWed = (gcnew System::Windows::Forms::Button());
			this->btTue = (gcnew System::Windows::Forms::Button());
			this->btMon = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btSave = (gcnew System::Windows::Forms::Button());
			this->lbSunday = (gcnew System::Windows::Forms::Label());
			this->lbSaturday = (gcnew System::Windows::Forms::Label());
			this->lbFriday = (gcnew System::Windows::Forms::Label());
			this->lbThursday = (gcnew System::Windows::Forms::Label());
			this->lbWednesday = (gcnew System::Windows::Forms::Label());
			this->lbTuesday = (gcnew System::Windows::Forms::Label());
			this->lbMonday = (gcnew System::Windows::Forms::Label());
			this->lbSun = (gcnew System::Windows::Forms::Label());
			this->lbSat = (gcnew System::Windows::Forms::Label());
			this->lbFri = (gcnew System::Windows::Forms::Label());
			this->lbThur = (gcnew System::Windows::Forms::Label());
			this->lbWed = (gcnew System::Windows::Forms::Label());
			this->lbTue = (gcnew System::Windows::Forms::Label());
			this->lbMon = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
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
			this->panel1->TabIndex = 0;
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
			this->btProfile->Click += gcnew System::EventHandler(this, &Schedule::btProfile_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18.25F, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(578, 24);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 33);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Schedule";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SteelBlue;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->btSun);
			this->panel2->Controls->Add(this->btSat);
			this->panel2->Controls->Add(this->btFri);
			this->panel2->Controls->Add(this->btThur);
			this->panel2->Controls->Add(this->btWed);
			this->panel2->Controls->Add(this->btTue);
			this->panel2->Controls->Add(this->btMon);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->btSave);
			this->panel2->Controls->Add(this->lbSunday);
			this->panel2->Controls->Add(this->lbSaturday);
			this->panel2->Controls->Add(this->lbFriday);
			this->panel2->Controls->Add(this->lbThursday);
			this->panel2->Controls->Add(this->lbWednesday);
			this->panel2->Controls->Add(this->lbTuesday);
			this->panel2->Controls->Add(this->lbMonday);
			this->panel2->Controls->Add(this->lbSun);
			this->panel2->Controls->Add(this->lbSat);
			this->panel2->Controls->Add(this->lbFri);
			this->panel2->Controls->Add(this->lbThur);
			this->panel2->Controls->Add(this->lbWed);
			this->panel2->Controls->Add(this->lbTue);
			this->panel2->Controls->Add(this->lbMon);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->ForeColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(0, 70);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1264, 611);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->cbNotAvailable);
			this->panel3->Controls->Add(this->btDiscard);
			this->panel3->Controls->Add(this->btConfirm);
			this->panel3->Controls->Add(this->end);
			this->panel3->Controls->Add(this->endTime);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->start);
			this->panel3->Controls->Add(this->startTime);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->lbEdit);
			this->panel3->Location = System::Drawing::Point(723, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(538, 608);
			this->panel3->TabIndex = 52;
			this->panel3->Visible = false;
			// 
			// cbNotAvailable
			// 
			this->cbNotAvailable->AutoSize = true;
			this->cbNotAvailable->BackColor = System::Drawing::Color::Transparent;
			this->cbNotAvailable->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbNotAvailable->ForeColor = System::Drawing::Color::White;
			this->cbNotAvailable->Location = System::Drawing::Point(190, 387);
			this->cbNotAvailable->Name = L"cbNotAvailable";
			this->cbNotAvailable->Size = System::Drawing::Size(148, 29);
			this->cbNotAvailable->TabIndex = 55;
			this->cbNotAvailable->Text = L"Not Available";
			this->cbNotAvailable->UseVisualStyleBackColor = false;
			// 
			// btDiscard
			// 
			this->btDiscard->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btDiscard->FlatAppearance->BorderSize = 0;
			this->btDiscard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btDiscard->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->btDiscard->ForeColor = System::Drawing::Color::Silver;
			this->btDiscard->Location = System::Drawing::Point(164, 497);
			this->btDiscard->Name = L"btDiscard";
			this->btDiscard->Size = System::Drawing::Size(203, 33);
			this->btDiscard->TabIndex = 54;
			this->btDiscard->Text = L"Discard";
			this->btDiscard->UseVisualStyleBackColor = false;
			this->btDiscard->Click += gcnew System::EventHandler(this, &Schedule::btDiscard_Click);
			// 
			// btConfirm
			// 
			this->btConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->btConfirm->FlatAppearance->BorderSize = 0;
			this->btConfirm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btConfirm->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->btConfirm->ForeColor = System::Drawing::Color::Black;
			this->btConfirm->Location = System::Drawing::Point(164, 447);
			this->btConfirm->Name = L"btConfirm";
			this->btConfirm->Size = System::Drawing::Size(203, 33);
			this->btConfirm->TabIndex = 53;
			this->btConfirm->Text = L"Confirm";
			this->btConfirm->UseVisualStyleBackColor = false;
			this->btConfirm->Click += gcnew System::EventHandler(this, &Schedule::btConfirm_Click);
			// 
			// end
			// 
			this->end->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->end->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->end->ForeColor = System::Drawing::Color::Silver;
			this->end->Items->Add(L"AM");
			this->end->Items->Add(L"PM");
			this->end->Location = System::Drawing::Point(284, 333);
			this->end->Name = L"end";
			this->end->ReadOnly = true;
			this->end->SelectedIndex = 0;
			this->end->Size = System::Drawing::Size(120, 29);
			this->end->TabIndex = 6;
			this->end->Text = L"AM";
			this->end->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->end->Wrap = true;
			// 
			// endTime
			// 
			this->endTime->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->endTime->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->endTime->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->endTime->ForeColor = System::Drawing::Color::Silver;
			this->endTime->Items->Add(L"1");
			this->endTime->Items->Add(L"2");
			this->endTime->Items->Add(L"3");
			this->endTime->Items->Add(L"4");
			this->endTime->Items->Add(L"5");
			this->endTime->Items->Add(L"6");
			this->endTime->Items->Add(L"7");
			this->endTime->Items->Add(L"8");
			this->endTime->Items->Add(L"9");
			this->endTime->Items->Add(L"10");
			this->endTime->Items->Add(L"11");
			this->endTime->Items->Add(L"12");
			this->endTime->Location = System::Drawing::Point(132, 333);
			this->endTime->Name = L"endTime";
			this->endTime->ReadOnly = true;
			this->endTime->SelectedIndex = 0;
			this->endTime->Size = System::Drawing::Size(120, 29);
			this->endTime->TabIndex = 5;
			this->endTime->Text = L"1";
			this->endTime->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->endTime->Wrap = true;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(111, 276);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(322, 47);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Ending Time:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// start
			// 
			this->start->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->start->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->start->ForeColor = System::Drawing::Color::Silver;
			this->start->Items->Add(L"AM");
			this->start->Items->Add(L"PM");
			this->start->Location = System::Drawing::Point(281, 214);
			this->start->Name = L"start";
			this->start->ReadOnly = true;
			this->start->SelectedIndex = 0;
			this->start->Size = System::Drawing::Size(120, 29);
			this->start->TabIndex = 3;
			this->start->Text = L"AM";
			this->start->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->start->Wrap = true;
			// 
			// startTime
			// 
			this->startTime->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->startTime->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->startTime->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->startTime->ForeColor = System::Drawing::Color::Silver;
			this->startTime->Items->Add(L"1");
			this->startTime->Items->Add(L"2");
			this->startTime->Items->Add(L"3");
			this->startTime->Items->Add(L"4");
			this->startTime->Items->Add(L"5");
			this->startTime->Items->Add(L"6");
			this->startTime->Items->Add(L"7");
			this->startTime->Items->Add(L"8");
			this->startTime->Items->Add(L"9");
			this->startTime->Items->Add(L"10");
			this->startTime->Items->Add(L"11");
			this->startTime->Items->Add(L"12");
			this->startTime->Location = System::Drawing::Point(129, 214);
			this->startTime->Name = L"startTime";
			this->startTime->ReadOnly = true;
			this->startTime->SelectedIndex = 0;
			this->startTime->Size = System::Drawing::Size(120, 29);
			this->startTime->TabIndex = 2;
			this->startTime->Text = L"1";
			this->startTime->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->startTime->Wrap = true;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(108, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(322, 47);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Starting Time:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbEdit
			// 
			this->lbEdit->BackColor = System::Drawing::Color::Transparent;
			this->lbEdit->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEdit->ForeColor = System::Drawing::Color::White;
			this->lbEdit->Location = System::Drawing::Point(108, 87);
			this->lbEdit->Name = L"lbEdit";
			this->lbEdit->Size = System::Drawing::Size(322, 47);
			this->lbEdit->TabIndex = 0;
			this->lbEdit->Text = L"Edit ";
			this->lbEdit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btSun
			// 
			this->btSun->BackColor = System::Drawing::Color::Transparent;
			this->btSun->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btSun.BackgroundImage")));
			this->btSun->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btSun->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btSun->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btSun->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btSun->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btSun->Location = System::Drawing::Point(790, 500);
			this->btSun->Name = L"btSun";
			this->btSun->Size = System::Drawing::Size(53, 55);
			this->btSun->TabIndex = 51;
			this->btSun->UseVisualStyleBackColor = false;
			this->btSun->Click += gcnew System::EventHandler(this, &Schedule::btSun_Click_1);
			// 
			// btSat
			// 
			this->btSat->BackColor = System::Drawing::Color::Transparent;
			this->btSat->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btSat.BackgroundImage")));
			this->btSat->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btSat->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btSat->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btSat->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btSat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btSat->Location = System::Drawing::Point(790, 440);
			this->btSat->Name = L"btSat";
			this->btSat->Size = System::Drawing::Size(53, 55);
			this->btSat->TabIndex = 50;
			this->btSat->UseVisualStyleBackColor = false;
			this->btSat->Click += gcnew System::EventHandler(this, &Schedule::btSat_Click);
			// 
			// btFri
			// 
			this->btFri->BackColor = System::Drawing::Color::Transparent;
			this->btFri->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btFri.BackgroundImage")));
			this->btFri->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btFri->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btFri->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btFri->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btFri->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btFri->Location = System::Drawing::Point(790, 380);
			this->btFri->Name = L"btFri";
			this->btFri->Size = System::Drawing::Size(53, 55);
			this->btFri->TabIndex = 49;
			this->btFri->UseVisualStyleBackColor = false;
			this->btFri->Click += gcnew System::EventHandler(this, &Schedule::btFri_Click_1);
			// 
			// btThur
			// 
			this->btThur->BackColor = System::Drawing::Color::Transparent;
			this->btThur->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btThur.BackgroundImage")));
			this->btThur->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btThur->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btThur->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btThur->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btThur->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btThur->Location = System::Drawing::Point(790, 320);
			this->btThur->Name = L"btThur";
			this->btThur->Size = System::Drawing::Size(53, 55);
			this->btThur->TabIndex = 48;
			this->btThur->UseVisualStyleBackColor = false;
			this->btThur->Click += gcnew System::EventHandler(this, &Schedule::btThur_Click_1);
			// 
			// btWed
			// 
			this->btWed->BackColor = System::Drawing::Color::Transparent;
			this->btWed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btWed.BackgroundImage")));
			this->btWed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btWed->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btWed->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btWed->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btWed->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btWed->Location = System::Drawing::Point(790, 260);
			this->btWed->Name = L"btWed";
			this->btWed->Size = System::Drawing::Size(53, 55);
			this->btWed->TabIndex = 47;
			this->btWed->UseVisualStyleBackColor = false;
			this->btWed->Click += gcnew System::EventHandler(this, &Schedule::btWed_Click);
			// 
			// btTue
			// 
			this->btTue->BackColor = System::Drawing::Color::Transparent;
			this->btTue->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btTue.BackgroundImage")));
			this->btTue->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btTue->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btTue->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btTue->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btTue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btTue->Location = System::Drawing::Point(790, 200);
			this->btTue->Name = L"btTue";
			this->btTue->Size = System::Drawing::Size(53, 55);
			this->btTue->TabIndex = 46;
			this->btTue->UseVisualStyleBackColor = false;
			this->btTue->Click += gcnew System::EventHandler(this, &Schedule::btTue_Click);
			// 
			// btMon
			// 
			this->btMon->BackColor = System::Drawing::Color::Transparent;
			this->btMon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btMon.BackgroundImage")));
			this->btMon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btMon->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btMon->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btMon->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btMon->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btMon->Location = System::Drawing::Point(790, 140);
			this->btMon->Name = L"btMon";
			this->btMon->Size = System::Drawing::Size(53, 55);
			this->btMon->TabIndex = 45;
			this->btMon->UseVisualStyleBackColor = false;
			this->btMon->Click += gcnew System::EventHandler(this, &Schedule::btMon_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(14, 567);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 25);
			this->label2->TabIndex = 44;
			this->label2->Text = L"Save Changes";
			// 
			// btSave
			// 
			this->btSave->BackColor = System::Drawing::Color::Transparent;
			this->btSave->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btSave.BackgroundImage")));
			this->btSave->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btSave->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btSave->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btSave->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btSave->Location = System::Drawing::Point(41, 500);
			this->btSave->Name = L"btSave";
			this->btSave->Size = System::Drawing::Size(73, 78);
			this->btSave->TabIndex = 43;
			this->btSave->UseVisualStyleBackColor = false;
			this->btSave->Click += gcnew System::EventHandler(this, &Schedule::btSave_Click);
			// 
			// lbSunday
			// 
			this->lbSunday->BackColor = System::Drawing::Color::Transparent;
			this->lbSunday->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSunday->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbSunday->Location = System::Drawing::Point(578, 510);
			this->lbSunday->Name = L"lbSunday";
			this->lbSunday->Size = System::Drawing::Size(200, 36);
			this->lbSunday->TabIndex = 31;
			this->lbSunday->Text = L"10am - 4pm";
			this->lbSunday->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbSaturday
			// 
			this->lbSaturday->BackColor = System::Drawing::Color::Transparent;
			this->lbSaturday->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSaturday->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbSaturday->Location = System::Drawing::Point(578, 450);
			this->lbSaturday->Name = L"lbSaturday";
			this->lbSaturday->Size = System::Drawing::Size(200, 36);
			this->lbSaturday->TabIndex = 32;
			this->lbSaturday->Text = L"10am - 4pm";
			this->lbSaturday->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbFriday
			// 
			this->lbFriday->BackColor = System::Drawing::Color::Transparent;
			this->lbFriday->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbFriday->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbFriday->Location = System::Drawing::Point(578, 390);
			this->lbFriday->Name = L"lbFriday";
			this->lbFriday->Size = System::Drawing::Size(200, 36);
			this->lbFriday->TabIndex = 33;
			this->lbFriday->Text = L"10am - 4pm";
			this->lbFriday->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbThursday
			// 
			this->lbThursday->BackColor = System::Drawing::Color::Transparent;
			this->lbThursday->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbThursday->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbThursday->Location = System::Drawing::Point(578, 330);
			this->lbThursday->Name = L"lbThursday";
			this->lbThursday->Size = System::Drawing::Size(200, 36);
			this->lbThursday->TabIndex = 34;
			this->lbThursday->Text = L"10am - 4pm";
			this->lbThursday->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbWednesday
			// 
			this->lbWednesday->BackColor = System::Drawing::Color::Transparent;
			this->lbWednesday->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbWednesday->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbWednesday->Location = System::Drawing::Point(578, 270);
			this->lbWednesday->Name = L"lbWednesday";
			this->lbWednesday->Size = System::Drawing::Size(200, 36);
			this->lbWednesday->TabIndex = 35;
			this->lbWednesday->Text = L"10am - 4pm";
			this->lbWednesday->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbTuesday
			// 
			this->lbTuesday->BackColor = System::Drawing::Color::Transparent;
			this->lbTuesday->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTuesday->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbTuesday->Location = System::Drawing::Point(578, 210);
			this->lbTuesday->Name = L"lbTuesday";
			this->lbTuesday->Size = System::Drawing::Size(200, 36);
			this->lbTuesday->TabIndex = 36;
			this->lbTuesday->Text = L"10am - 4pm";
			this->lbTuesday->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbMonday
			// 
			this->lbMonday->BackColor = System::Drawing::Color::Transparent;
			this->lbMonday->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMonday->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbMonday->Location = System::Drawing::Point(578, 150);
			this->lbMonday->Name = L"lbMonday";
			this->lbMonday->Size = System::Drawing::Size(200, 36);
			this->lbMonday->TabIndex = 30;
			this->lbMonday->Text = L"10am - 4pm";
			this->lbMonday->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbSun
			// 
			this->lbSun->BackColor = System::Drawing::Color::Transparent;
			this->lbSun->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold));
			this->lbSun->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbSun->Location = System::Drawing::Point(390, 510);
			this->lbSun->Name = L"lbSun";
			this->lbSun->Size = System::Drawing::Size(182, 36);
			this->lbSun->TabIndex = 28;
			this->lbSun->Text = L"Sunday :";
			this->lbSun->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lbSat
			// 
			this->lbSat->BackColor = System::Drawing::Color::Transparent;
			this->lbSat->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold));
			this->lbSat->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbSat->Location = System::Drawing::Point(390, 450);
			this->lbSat->Name = L"lbSat";
			this->lbSat->Size = System::Drawing::Size(182, 36);
			this->lbSat->TabIndex = 28;
			this->lbSat->Text = L"Saturday :";
			this->lbSat->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lbFri
			// 
			this->lbFri->BackColor = System::Drawing::Color::Transparent;
			this->lbFri->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold));
			this->lbFri->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbFri->Location = System::Drawing::Point(390, 390);
			this->lbFri->Name = L"lbFri";
			this->lbFri->Size = System::Drawing::Size(182, 36);
			this->lbFri->TabIndex = 28;
			this->lbFri->Text = L"Friday :";
			this->lbFri->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lbThur
			// 
			this->lbThur->BackColor = System::Drawing::Color::Transparent;
			this->lbThur->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold));
			this->lbThur->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbThur->Location = System::Drawing::Point(390, 330);
			this->lbThur->Name = L"lbThur";
			this->lbThur->Size = System::Drawing::Size(182, 36);
			this->lbThur->TabIndex = 28;
			this->lbThur->Text = L"Thursday :";
			this->lbThur->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lbWed
			// 
			this->lbWed->BackColor = System::Drawing::Color::Transparent;
			this->lbWed->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold));
			this->lbWed->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbWed->Location = System::Drawing::Point(390, 270);
			this->lbWed->Name = L"lbWed";
			this->lbWed->Size = System::Drawing::Size(182, 36);
			this->lbWed->TabIndex = 28;
			this->lbWed->Text = L"Wednesday :";
			this->lbWed->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lbTue
			// 
			this->lbTue->BackColor = System::Drawing::Color::Transparent;
			this->lbTue->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold));
			this->lbTue->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbTue->Location = System::Drawing::Point(390, 210);
			this->lbTue->Name = L"lbTue";
			this->lbTue->Size = System::Drawing::Size(182, 36);
			this->lbTue->TabIndex = 28;
			this->lbTue->Text = L"Tuesday :";
			this->lbTue->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lbMon
			// 
			this->lbMon->BackColor = System::Drawing::Color::Transparent;
			this->lbMon->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold));
			this->lbMon->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbMon->Location = System::Drawing::Point(390, 150);
			this->lbMon->Name = L"lbMon";
			this->lbMon->Size = System::Drawing::Size(182, 36);
			this->lbMon->TabIndex = 26;
			this->lbMon->Text = L"Monday :";
			this->lbMon->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Location = System::Drawing::Point(280, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(700, 64);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Schedule for ";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Schedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Schedule";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Schedule";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=test;Integrated Security=True;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);

		void ShowEditor(String^ choice) {
			lbMon->Location = Point(140, 150);
			lbTue->Location = Point(140, 210);
			lbWed->Location = Point(140, 270);
			lbThur->Location = Point(140, 330);
			lbFri->Location = Point(140, 390);
			lbSat->Location = Point(140, 450);
			lbSun->Location = Point(140, 510);
			lbMonday->Location = Point(348, 150);
			lbTuesday->Location = Point(348, 210);
			lbWednesday->Location = Point(348, 270);
			lbThursday->Location = Point(348, 330);
			lbFriday->Location = Point(348, 390);
			lbSaturday->Location = Point(348, 450);
			lbSunday->Location = Point(348, 510);
			btMon->Location = Point(540, 140);
			btTue->Location = Point(540, 200);
			btWed->Location = Point(540, 260);
			btThur->Location = Point(540, 320);
			btFri->Location = Point(540, 380);
			btSat->Location = Point(540, 440);
			btSun->Location = Point(540, 500);

			label8->Location = Point(30, 40);

			lbEdit->Text += choice;

			panel3->Visible = true;
		}
		void HideEditor() {
			lbMon->Location = Point(140+250, 150);
			lbTue->Location = Point(140 + 250, 210);
			lbWed->Location = Point(140 + 250, 270);
			lbThur->Location = Point(140 + 250, 330);
			lbFri->Location = Point(140 + 250, 390);
			lbSat->Location = Point(140 + 250, 450);
			lbSun->Location = Point(140 + 250, 510);
			lbMonday->Location = Point(348 + 250, 150);
			lbTuesday->Location = Point(348 + 250, 210);
			lbWednesday->Location = Point(348 + 250, 270);
			lbThursday->Location = Point(348 + 250, 330);
			lbFriday->Location = Point(348 + 250, 390);
			lbSaturday->Location = Point(348 + 250, 450);
			lbSunday->Location = Point(348 + 250, 510);
			btMon->Location = Point(540 + 250, 140);
			btTue->Location = Point(540 + 250, 200);
			btWed->Location = Point(540 + 250, 260);
			btThur->Location = Point(540 + 250, 320);
			btFri->Location = Point(540 + 250, 380);
			btSat->Location = Point(540 + 250, 440);
			btSun->Location = Point(540 + 250, 500);

			label8->Location = Point(280, 40);

			lbEdit->Text = "Edit ";

			panel3->Visible = false;
		}
	private:
		String^ choice = nullptr;
		String^ mon = nullptr;
		String^ tue = nullptr;
		String^ wed = nullptr;
		String^ thur = nullptr;
		String^ fri = nullptr;
		String^ sat = nullptr;
		String^ sun = nullptr;
	private: System::Void btProfile_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btSave_Click(System::Object^ sender, System::EventArgs^ e) {
		mon = lbMonday->Text;
		tue = lbTuesday->Text;
		wed = lbWednesday->Text;
		thur = lbThursday->Text;
		fri = lbFriday->Text;
		sat = lbSaturday->Text;
		sun = lbSunday->Text;
		try{
			String^ sqlQuery = "UPDATE Doctor SET monday = @mon, tuesday = @tue, wednesday = @wed, thursday = @thur, friday = @fri, saturday = @sat, sunday = @sun WHERE Id = @id";
			SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);

			sqlConn->Open();

			command->Parameters->AddWithValue("@mon", mon);
			command->Parameters->AddWithValue("@tue", tue);
			command->Parameters->AddWithValue("@wed", wed);
			command->Parameters->AddWithValue("@thur", thur);
			command->Parameters->AddWithValue("@fri", fri);
			command->Parameters->AddWithValue("@sat", sat);
			command->Parameters->AddWithValue("@sun", sun);
			command->Parameters->AddWithValue("@id", currentDoctor->id);

			command->ExecuteNonQuery();

			sqlConn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Couldn't Connect to Database");
		}
		currentDoctor->mon = mon;
		currentDoctor->tue = tue;
		currentDoctor->wed = wed;
		currentDoctor->thur = thur;
		currentDoctor->fri = fri;
		currentDoctor->sat = sat;
		currentDoctor->sun = sun;

	}
	private: System::Void btMon_Click(System::Object^ sender, System::EventArgs^ e) {
		choice = "Monday";
		ShowEditor(choice);
	}
	private: System::Void btTue_Click(System::Object^ sender, System::EventArgs^ e) {
		choice = "Tuesday";
		ShowEditor(choice);
	}
	private: System::Void btWed_Click(System::Object^ sender, System::EventArgs^ e) {
		choice = "Wednesday";
		ShowEditor(choice);
	}
	private: System::Void btThur_Click_1(System::Object^ sender, System::EventArgs^ e) {
		choice = "Thursday";
		ShowEditor(choice);
	}
	private: System::Void btFri_Click_1(System::Object^ sender, System::EventArgs^ e) {
		choice = "Friday";
		ShowEditor(choice);
	}
	private: System::Void btSat_Click(System::Object^ sender, System::EventArgs^ e) {
		choice = "Saturday";
		ShowEditor(choice);
	}
	private: System::Void btSun_Click_1(System::Object^ sender, System::EventArgs^ e) {
		choice = "Sunday";
		ShowEditor(choice);
	}
	private: System::Void btConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ time = startTime->SelectedItem->ToString() + start->SelectedItem->ToString() + " - " + endTime->SelectedItem->ToString() + end->SelectedItem->ToString();

		if (cbNotAvailable->Checked == true)
			time = "N/A";

		if (choice == "Monday")
			lbMonday->Text = time;
		else if (choice == "Tuesday")
			lbTuesday->Text = time;
		else if (choice == "Wednesday")
			lbWednesday->Text = time;
		else if (choice == "Thursday")
			lbThursday->Text = time;
		else if (choice == "Friday")
			lbFriday->Text = time;
		else if (choice == "Saturday")
			lbSaturday->Text = time;
		else if (choice == "Sunday")
			lbSunday->Text = time;

		HideEditor();
	}
	private: System::Void btDiscard_Click(System::Object^ sender, System::EventArgs^ e) {
		choice = nullptr;
		HideEditor();
	}
};
}
