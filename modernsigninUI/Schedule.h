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




	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ tbMon;





	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ lbSunday;

	private: System::Windows::Forms::Label^ lbSaturday;

	private: System::Windows::Forms::Label^ lbFriday;

	private: System::Windows::Forms::Label^ lbThursday;

	private: System::Windows::Forms::Label^ lbWednesday;

	private: System::Windows::Forms::Label^ lbTuesday;

	private: System::Windows::Forms::Label^ lbMonday;














	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ tbSun;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ tbSat;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ tbFri;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ tbThur;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ tbWed;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ tbTue;
	private: System::Windows::Forms::Label^ label2;




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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->tbSun = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->tbSat = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->tbFri = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->tbThur = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tbWed = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tbTue = (gcnew System::Windows::Forms::TextBox());
			this->lbSunday = (gcnew System::Windows::Forms::Label());
			this->lbSaturday = (gcnew System::Windows::Forms::Label());
			this->lbFriday = (gcnew System::Windows::Forms::Label());
			this->lbThursday = (gcnew System::Windows::Forms::Label());
			this->lbWednesday = (gcnew System::Windows::Forms::Label());
			this->lbTuesday = (gcnew System::Windows::Forms::Label());
			this->lbMonday = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tbMon = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
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
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->button14);
			this->panel2->Controls->Add(this->panel9);
			this->panel2->Controls->Add(this->panel8);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->lbSunday);
			this->panel2->Controls->Add(this->lbSaturday);
			this->panel2->Controls->Add(this->lbFriday);
			this->panel2->Controls->Add(this->lbThursday);
			this->panel2->Controls->Add(this->lbWednesday);
			this->panel2->Controls->Add(this->lbTuesday);
			this->panel2->Controls->Add(this->lbMonday);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 70);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1264, 611);
			this->panel2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(1099, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 25);
			this->label2->TabIndex = 44;
			this->label2->Text = L"Save Changes";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(1126, 15);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(73, 78);
			this->button14->TabIndex = 43;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Schedule::button14_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel9->Controls->Add(this->tbSun);
			this->panel9->Location = System::Drawing::Point(706, 481);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(312, 36);
			this->panel9->TabIndex = 26;
			// 
			// tbSun
			// 
			this->tbSun->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbSun->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbSun->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 18.25F));
			this->tbSun->ForeColor = System::Drawing::Color::Silver;
			this->tbSun->Location = System::Drawing::Point(30, 1);
			this->tbSun->Name = L"tbSun";
			this->tbSun->Size = System::Drawing::Size(262, 33);
			this->tbSun->TabIndex = 0;
			this->tbSun->Text = L"Time (eg 10am - 4pm)";
			this->tbSun->Enter += gcnew System::EventHandler(this, &Schedule::tbSun_Enter);
			this->tbSun->Leave += gcnew System::EventHandler(this, &Schedule::tbSun_Leave);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel8->Controls->Add(this->tbSat);
			this->panel8->Location = System::Drawing::Point(706, 429);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(312, 36);
			this->panel8->TabIndex = 26;
			// 
			// tbSat
			// 
			this->tbSat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbSat->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbSat->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 18.25F));
			this->tbSat->ForeColor = System::Drawing::Color::Silver;
			this->tbSat->Location = System::Drawing::Point(30, 1);
			this->tbSat->Name = L"tbSat";
			this->tbSat->Size = System::Drawing::Size(262, 33);
			this->tbSat->TabIndex = 0;
			this->tbSat->Text = L"Time (eg 10am - 4pm)";
			this->tbSat->Enter += gcnew System::EventHandler(this, &Schedule::tbSat_Enter);
			this->tbSat->Leave += gcnew System::EventHandler(this, &Schedule::tbSat_Leave);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel7->Controls->Add(this->tbFri);
			this->panel7->Location = System::Drawing::Point(706, 378);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(312, 36);
			this->panel7->TabIndex = 26;
			// 
			// tbFri
			// 
			this->tbFri->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbFri->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbFri->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 18.25F));
			this->tbFri->ForeColor = System::Drawing::Color::Silver;
			this->tbFri->Location = System::Drawing::Point(30, 1);
			this->tbFri->Name = L"tbFri";
			this->tbFri->Size = System::Drawing::Size(262, 33);
			this->tbFri->TabIndex = 0;
			this->tbFri->Text = L"Time (eg 10am - 4pm)";
			this->tbFri->Enter += gcnew System::EventHandler(this, &Schedule::tbFri_Enter);
			this->tbFri->Leave += gcnew System::EventHandler(this, &Schedule::tbFri_Leave);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel6->Controls->Add(this->tbThur);
			this->panel6->Location = System::Drawing::Point(706, 327);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(312, 36);
			this->panel6->TabIndex = 26;
			// 
			// tbThur
			// 
			this->tbThur->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbThur->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbThur->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 18.25F));
			this->tbThur->ForeColor = System::Drawing::Color::Silver;
			this->tbThur->Location = System::Drawing::Point(30, 1);
			this->tbThur->Name = L"tbThur";
			this->tbThur->Size = System::Drawing::Size(262, 33);
			this->tbThur->TabIndex = 0;
			this->tbThur->Text = L"Time (eg 10am - 4pm)";
			this->tbThur->Enter += gcnew System::EventHandler(this, &Schedule::tbThur_Enter);
			this->tbThur->Leave += gcnew System::EventHandler(this, &Schedule::tbThur_Leave);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel5->Controls->Add(this->tbWed);
			this->panel5->Location = System::Drawing::Point(706, 276);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(312, 36);
			this->panel5->TabIndex = 26;
			// 
			// tbWed
			// 
			this->tbWed->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbWed->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbWed->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 18.25F));
			this->tbWed->ForeColor = System::Drawing::Color::Silver;
			this->tbWed->Location = System::Drawing::Point(30, 1);
			this->tbWed->Name = L"tbWed";
			this->tbWed->Size = System::Drawing::Size(262, 33);
			this->tbWed->TabIndex = 0;
			this->tbWed->Text = L"Time (eg 10am - 4pm)";
			this->tbWed->Enter += gcnew System::EventHandler(this, &Schedule::tbWed_Enter);
			this->tbWed->Leave += gcnew System::EventHandler(this, &Schedule::tbWed_Leave);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel3->Controls->Add(this->tbTue);
			this->panel3->Location = System::Drawing::Point(706, 224);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(312, 36);
			this->panel3->TabIndex = 26;
			// 
			// tbTue
			// 
			this->tbTue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbTue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbTue->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 18.25F));
			this->tbTue->ForeColor = System::Drawing::Color::Silver;
			this->tbTue->Location = System::Drawing::Point(30, 1);
			this->tbTue->Name = L"tbTue";
			this->tbTue->Size = System::Drawing::Size(262, 33);
			this->tbTue->TabIndex = 0;
			this->tbTue->Text = L"Time (eg 10am - 4pm)";
			this->tbTue->Enter += gcnew System::EventHandler(this, &Schedule::tbTue_Enter);
			this->tbTue->Leave += gcnew System::EventHandler(this, &Schedule::tbTue_Leave);
			// 
			// lbSunday
			// 
			this->lbSunday->BackColor = System::Drawing::Color::Transparent;
			this->lbSunday->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSunday->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbSunday->Location = System::Drawing::Point(454, 482);
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
			this->lbSaturday->Location = System::Drawing::Point(454, 430);
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
			this->lbFriday->Location = System::Drawing::Point(454, 379);
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
			this->lbThursday->Location = System::Drawing::Point(454, 328);
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
			this->lbWednesday->Location = System::Drawing::Point(454, 277);
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
			this->lbTuesday->Location = System::Drawing::Point(454, 225);
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
			this->lbMonday->Location = System::Drawing::Point(454, 171);
			this->lbMonday->Name = L"lbMonday";
			this->lbMonday->Size = System::Drawing::Size(200, 36);
			this->lbMonday->TabIndex = 30;
			this->lbMonday->Text = L"10am - 4pm";
			this->lbMonday->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label14->Location = System::Drawing::Point(266, 482);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(182, 36);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Sunday :";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label13->Location = System::Drawing::Point(266, 430);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(182, 36);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Saturday :";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label12->Location = System::Drawing::Point(266, 379);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(182, 36);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Friday :";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label11->Location = System::Drawing::Point(266, 328);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(182, 36);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Thursday :";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label10->Location = System::Drawing::Point(266, 277);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(182, 36);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Wednesday :";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label7->Location = System::Drawing::Point(266, 225);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(182, 36);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Tuesday :";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(266, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 36);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Monday :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel4->Controls->Add(this->tbMon);
			this->panel4->Location = System::Drawing::Point(706, 170);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(312, 36);
			this->panel4->TabIndex = 25;
			// 
			// tbMon
			// 
			this->tbMon->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbMon->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbMon->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 18.25F));
			this->tbMon->ForeColor = System::Drawing::Color::Silver;
			this->tbMon->Location = System::Drawing::Point(30, 1);
			this->tbMon->Name = L"tbMon";
			this->tbMon->Size = System::Drawing::Size(262, 33);
			this->tbMon->TabIndex = 0;
			this->tbMon->Text = L"Time (eg 10am - 4pm)";
			this->tbMon->Enter += gcnew System::EventHandler(this, &Schedule::tbMon_Enter);
			this->tbMon->Leave += gcnew System::EventHandler(this, &Schedule::tbMon_Leave);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Location = System::Drawing::Point(290, 60);
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
			this->Name = L"Schedule";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Schedule";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		String^ mon = nullptr;
		String^ tue = nullptr;
		String^ wed = nullptr;
		String^ thur = nullptr;
		String^ fri = nullptr;
		String^ sat = nullptr;
		String^ sun = nullptr;
	private: System::Void tbMon_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbMon->Text == "Time (eg 10am - 4pm)") {
			tbMon->Text = "";
		}
	}	
	private: System::Void tbMon_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbMon->Text == "") {
			tbMon->Text = "Time (eg 10am - 4pm)";
		}
	}
	private: System::Void tbTue_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbTue->Text == "Time (eg 10am - 4pm)") {
			tbTue->Text = "";
		}
	}
	private: System::Void tbTue_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbTue->Text == "") {
			tbTue->Text = "Time (eg 10am - 4pm)";
		}
	}
	private: System::Void tbWed_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbWed->Text == "Time (eg 10am - 4pm)") {
			tbWed->Text = "";
		}
	}
	private: System::Void tbWed_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbWed->Text == "") {
			tbWed->Text = "Time (eg 10am - 4pm)";
		}
	}
	private: System::Void tbThur_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbThur->Text == "Time (eg 10am - 4pm)") {
			tbThur->Text = "";
		}
	}
	private: System::Void tbThur_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbThur->Text == "") {
			tbThur->Text = "Time (eg 10am - 4pm)";
		}
	}
	private: System::Void tbFri_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbFri->Text == "Time (eg 10am - 4pm)") {
			tbFri->Text = "";
		}
	}
	private: System::Void tbFri_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbFri->Text == "") {
			tbFri->Text = "Time (eg 10am - 4pm)";
		}
	}
	private: System::Void tbSat_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbSat->Text == "Time (eg 10am - 4pm)") {
			tbSat->Text = "";
		}
	}
	private: System::Void tbSat_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbSat->Text == "") {
			tbSat->Text = "Time (eg 10am - 4pm)";
		}
	}
	private: System::Void tbSun_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbSun->Text == "Time (eg 10am - 4pm)") {
			tbSun->Text = "";
		}
	}
	private: System::Void tbSun_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbSun->Text == "") {
			tbSun->Text = "Time (eg 10am - 4pm)";
		}
	}
	private: System::Void btProfile_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=test;Integrated Security=True;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);

		try {
			sqlConn->Open();

			String^ sqlQuery = "UPDATE Doctor SET ";
			List<String^>^ updates = gcnew List<String^>();

			SqlCommand^ command = gcnew SqlCommand();
			command->Connection = sqlConn;

			if (tbMon->Text != "Time (eg 10am - 4pm)") {
				updates->Add("monday = @mon");
				command->Parameters->AddWithValue("@mon", tbMon->Text);
				currentDoctor->mon = tbMon->Text;
			}
			if (tbTue->Text != "Time (eg 10am - 4pm)") {
				updates->Add("tuesday = @tue");
				command->Parameters->AddWithValue("@tue", tbTue->Text);
				currentDoctor->tue = tbTue->Text;
			}
			if (tbWed->Text != "Time (eg 10am - 4pm)") {
				updates->Add("wednesday = @wed");
				command->Parameters->AddWithValue("@wed", tbWed->Text);
				currentDoctor->wed = tbWed->Text;
			}
			if (tbThur->Text != "Time (eg 10am - 4pm)") {
				updates->Add("thursday = @thur");
				command->Parameters->AddWithValue("@thur", tbThur->Text);
				currentDoctor->thur = tbThur->Text;
			}
			if (tbFri->Text != "Time (eg 10am - 4pm)") {
				updates->Add("friday = @fri");
				command->Parameters->AddWithValue("@fri", tbFri->Text);
				currentDoctor->fri = tbFri->Text;
			}
			if (tbSat->Text != "Time (eg 10am - 4pm)") {
				updates->Add("saturday = @sat");
				command->Parameters->AddWithValue("@sat", tbSat->Text);
				currentDoctor->sat = tbSat->Text;
			}
			if (tbSun->Text != "Time (eg 10am - 4pm)") {
				updates->Add("sunday = @sun");
				command->Parameters->AddWithValue("@sun", tbSun->Text);
				currentDoctor->sun = tbSun->Text;
			}

			if (updates->Count == 0) {
				MessageBox::Show("No fields changed.");
				sqlConn->Close();
				return;
			}

			sqlQuery += String::Join(", ", updates);
			sqlQuery += " WHERE Id = @id";
			command->CommandText = sqlQuery;
			command->Parameters->AddWithValue("@id", currentDoctor->id);

			command->ExecuteNonQuery();

			sqlConn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Couldn't Connect to DataBase.\n" + ex->Message);
		}

		lbMonday->Text = currentDoctor->mon;
		lbTuesday->Text = currentDoctor->tue;
		lbWednesday->Text = currentDoctor->wed;
		lbThursday->Text = currentDoctor->thur;
		lbFriday->Text = currentDoctor->fri;
		lbSaturday->Text = currentDoctor->sat;
		lbSunday->Text = currentDoctor->sun;
	}
};
}
