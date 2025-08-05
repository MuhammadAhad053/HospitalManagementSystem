#pragma once

#include "DoctorPanel.h"

namespace HospitalManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Appointment
	/// </summary>
	public ref class Appointment : public System::Windows::Forms::Form
	{
	public:
		Appointment(void)
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
		~Appointment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btProfile;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ tbDoctorName;


	private: System::Windows::Forms::Panel^ panelProfile;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton1;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::DomainUpDown^ start;
	private: System::Windows::Forms::DomainUpDown^ startTime;
	private: System::Windows::Forms::FlowLayoutPanel^ DoctorPanelOutput;





















































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Appointment::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btProfile = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->DoctorPanelOutput = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tbDoctorName = (gcnew System::Windows::Forms::TextBox());
			this->panelProfile = (gcnew System::Windows::Forms::Panel());
			this->start = (gcnew System::Windows::Forms::DomainUpDown());
			this->startTime = (gcnew System::Windows::Forms::DomainUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelProfile->SuspendLayout();
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
			this->panel1->TabIndex = 1;
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
			this->btProfile->Click += gcnew System::EventHandler(this, &Appointment::btProfile_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18.25F, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(515, 24);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(183, 33);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Appointments";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 577);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1264, 104);
			this->panel2->TabIndex = 3;
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
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(132, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(147, 26);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Did you know \?";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 10.25F));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(133, 48);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(119, 19);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Danish is a charya";
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->DoctorPanelOutput);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->panelProfile);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 70);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1264, 611);
			this->panel3->TabIndex = 4;
			// 
			// DoctorPanelOutput
			// 
			this->DoctorPanelOutput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->DoctorPanelOutput->Location = System::Drawing::Point(325, 89);
			this->DoctorPanelOutput->Name = L"DoctorPanelOutput";
			this->DoctorPanelOutput->Size = System::Drawing::Size(888, 412);
			this->DoctorPanelOutput->TabIndex = 37;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel5->Controls->Add(this->pictureBox1);
			this->panel5->Controls->Add(this->tbDoctorName);
			this->panel5->Location = System::Drawing::Point(325, 32);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(891, 35);
			this->panel5->TabIndex = 35;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(848, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(40, 33);
			this->pictureBox1->TabIndex = 36;
			this->pictureBox1->TabStop = false;
			// 
			// tbDoctorName
			// 
			this->tbDoctorName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbDoctorName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbDoctorName->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12.25F));
			this->tbDoctorName->ForeColor = System::Drawing::Color::Silver;
			this->tbDoctorName->Location = System::Drawing::Point(14, 5);
			this->tbDoctorName->Name = L"tbDoctorName";
			this->tbDoctorName->Size = System::Drawing::Size(809, 22);
			this->tbDoctorName->TabIndex = 0;
			this->tbDoctorName->Text = L"Enter Doctor Name";
			this->tbDoctorName->TextChanged += gcnew System::EventHandler(this, &Appointment::tbDoctorName_TextChanged);
			this->tbDoctorName->Enter += gcnew System::EventHandler(this, &Appointment::tbUserId_Enter);
			this->tbDoctorName->Leave += gcnew System::EventHandler(this, &Appointment::tbDoctorName_Leave);
			// 
			// panelProfile
			// 
			this->panelProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panelProfile->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelProfile.BackgroundImage")));
			this->panelProfile->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelProfile->Controls->Add(this->start);
			this->panelProfile->Controls->Add(this->startTime);
			this->panelProfile->Controls->Add(this->label3);
			this->panelProfile->Controls->Add(this->radioButton4);
			this->panelProfile->Controls->Add(this->radioButton3);
			this->panelProfile->Controls->Add(this->radioButton2);
			this->panelProfile->Controls->Add(this->radioButton1);
			this->panelProfile->Controls->Add(this->label2);
			this->panelProfile->Controls->Add(this->label1);
			this->panelProfile->Location = System::Drawing::Point(0, 0);
			this->panelProfile->Name = L"panelProfile";
			this->panelProfile->Size = System::Drawing::Size(279, 611);
			this->panelProfile->TabIndex = 3;
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
			this->start->Location = System::Drawing::Point(116, 273);
			this->start->Name = L"start";
			this->start->ReadOnly = true;
			this->start->SelectedIndex = 0;
			this->start->Size = System::Drawing::Size(62, 29);
			this->start->TabIndex = 35;
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
			this->startTime->Location = System::Drawing::Point(37, 273);
			this->startTime->Name = L"startTime";
			this->startTime->ReadOnly = true;
			this->startTime->SelectedIndex = 0;
			this->startTime->Size = System::Drawing::Size(62, 29);
			this->startTime->TabIndex = 34;
			this->startTime->Text = L"1";
			this->startTime->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->startTime->Wrap = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(22, 232);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 26);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Timings ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::Transparent;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->ForeColor = System::Drawing::Color::White;
			this->radioButton4->Location = System::Drawing::Point(27, 141);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(108, 19);
			this->radioButton4->TabIndex = 32;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Physiotherapist";
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Transparent;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(27, 187);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(90, 19);
			this->radioButton3->TabIndex = 31;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Cardiologist";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(27, 118);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(124, 19);
			this->radioButton2->TabIndex = 30;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"General Physician";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(27, 164);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(88, 19);
			this->radioButton1->TabIndex = 29;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Neurologist";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(22, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 26);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Field";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(70, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 33);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Filter by";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Appointment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"Appointment";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Book Appointment";
			this->Load += gcnew System::EventHandler(this, &Appointment::Appointment_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelProfile->ResumeLayout(false);
			this->panelProfile->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void ShowDoctorsFromDatabase(String^ filter) {
			DoctorPanelOutput->Controls->Clear();

			SqlConnection^ con = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=test;Integrated Security=True;");
			con->Open();

			String^ query;
			if (String::IsNullOrWhiteSpace(filter) || filter == "Enter Doctor Name") {
				query = "SELECT Id, lastName, specialization FROM Doctor";
			}
			else {
				query = "SELECT Id, lastName, specialization FROM Doctor WHERE lastName LIKE @filter + '%'";
			}

			SqlCommand^ cmd = gcnew SqlCommand(query, con);
			if (!String::IsNullOrWhiteSpace(filter)) {
				cmd->Parameters->AddWithValue("@filter", filter);
			}

			SqlDataReader^ reader = cmd->ExecuteReader();

			while (reader->Read()) {
				int id = Convert::ToInt32(reader["Id"]);
				String^ name = reader["lastName"]->ToString();
				String^ specialization = reader["specialization"]->ToString();

				DoctorPanel^ dp = gcnew DoctorPanel();
				dp->SetDoctorInfo(id, name, specialization);
				DoctorPanelOutput->Controls->Add(dp);
			}

			reader->Close();
			con->Close();
		}

		void LoadDoctorPanels() {
			// Set up your database connection
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=test;Integrated Security=True;";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			sqlConn->Open();

			String^ sqlQuery = "SELECT Id, lastName, specialization FROM Doctor";
			SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
			SqlDataReader^ reader = command->ExecuteReader();

			while (reader->Read()) {
				// Read data from D
				int id = Convert::ToInt32(reader["Id"]);
				String^ name = reader["lastName"]->ToString();
				String^ specialization = reader["specialization"]->ToString();

				// Create a new DoctorPanel and set info
				DoctorPanel^ dp = gcnew DoctorPanel();
				dp->SetDoctorInfo(id, name, specialization);

				// Add to the FlowLayoutPanel
				DoctorPanelOutput->Controls->Add(dp);
			}

			reader->Close();
			sqlConn->Close();
		}
	private: System::Void Appointment_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadDoctorPanels();
	}
	private: System::Void tbUserId_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbDoctorName->Text == "Enter Doctor Name")
			tbDoctorName->Text = "";
	}
	private: System::Void tbDoctorName_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbDoctorName->Text == "")
			tbDoctorName->Text = "Enter Doctor Name";
	}
	private: System::Void tbDoctorName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ searchText = tbDoctorName->Text;
		ShowDoctorsFromDatabase(searchText);
	}
	private: System::Void btProfile_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
