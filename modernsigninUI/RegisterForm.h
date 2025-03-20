#pragma once

#include "Patient.h"

namespace HospitalManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::Panel^ gradPanelBig;
	private: System::Windows::Forms::Button^ btnRegister;





	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::TextBox^ tbPhoneNumber;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ tbLastName;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ tbFirstName;

	private: System::Windows::Forms::Panel^ panel7;

	private: System::Windows::Forms::Panel^ panel8;






	private: System::Windows::Forms::Panel^ gradPanelSmall;
	private: System::Windows::Forms::Button^ btnSignIn;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ logoLabel;
	private: System::Windows::Forms::PictureBox^ Logo;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::RadioButton^ rdbtnFemale;
	private: System::Windows::Forms::RadioButton^ rdbtnMale;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->gradPanelBig = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->rdbtnFemale = (gcnew System::Windows::Forms::RadioButton());
			this->rdbtnMale = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tbPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tbLastName = (gcnew System::Windows::Forms::TextBox());
			this->gradPanelSmall = (gcnew System::Windows::Forms::Panel());
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->logoLabel = (gcnew System::Windows::Forms::Label());
			this->gradPanelBig->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->gradPanelSmall->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->SuspendLayout();
			// 
			// gradPanelBig
			// 
			this->gradPanelBig->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gradPanelBig.BackgroundImage")));
			this->gradPanelBig->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gradPanelBig->Controls->Add(this->panel1);
			this->gradPanelBig->Controls->Add(this->panel8);
			this->gradPanelBig->Controls->Add(this->panel7);
			this->gradPanelBig->Controls->Add(this->panel4);
			this->gradPanelBig->Controls->Add(this->panel6);
			this->gradPanelBig->Controls->Add(this->panel3);
			this->gradPanelBig->Controls->Add(this->btnRegister);
			this->gradPanelBig->Controls->Add(this->panel2);
			this->gradPanelBig->Controls->Add(this->label4);
			this->gradPanelBig->Controls->Add(this->label3);
			this->gradPanelBig->Controls->Add(this->panel5);
			this->gradPanelBig->Dock = System::Windows::Forms::DockStyle::Right;
			this->gradPanelBig->Location = System::Drawing::Point(532, 0);
			this->gradPanelBig->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gradPanelBig->Name = L"gradPanelBig";
			this->gradPanelBig->Size = System::Drawing::Size(1047, 838);
			this->gradPanelBig->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Location = System::Drawing::Point(7, 688);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1040, 150);
			this->panel1->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(59, 28);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(247, 26);
			this->label6->TabIndex = 1;
			this->label6->Text = L"To Register for Other Roles";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 10.25F));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(60, 78);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(939, 47);
			this->label7->TabIndex = 2;
			this->label7->Text = L"For the sake of security, other roles can only be registered by the admin. Theref"
				L"ore, kindly contact the Admin for the sake of Registeration";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel8->Controls->Add(this->dateTimePicker1);
			this->panel8->Location = System::Drawing::Point(281, 522);
			this->panel8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(476, 54);
			this->panel8->TabIndex = 8;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->dateTimePicker1->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(0, 10);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(475, 29);
			this->dateTimePicker1->TabIndex = 14;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel7->Controls->Add(this->rdbtnFemale);
			this->panel7->Controls->Add(this->rdbtnMale);
			this->panel7->Controls->Add(this->label5);
			this->panel7->Location = System::Drawing::Point(281, 463);
			this->panel7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(476, 54);
			this->panel7->TabIndex = 8;
			// 
			// rdbtnFemale
			// 
			this->rdbtnFemale->AutoSize = true;
			this->rdbtnFemale->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdbtnFemale->ForeColor = System::Drawing::Color::White;
			this->rdbtnFemale->Location = System::Drawing::Point(325, 15);
			this->rdbtnFemale->Name = L"rdbtnFemale";
			this->rdbtnFemale->Size = System::Drawing::Size(80, 24);
			this->rdbtnFemale->TabIndex = 6;
			this->rdbtnFemale->TabStop = true;
			this->rdbtnFemale->Text = L"Female";
			this->rdbtnFemale->UseVisualStyleBackColor = true;
			// 
			// rdbtnMale
			// 
			this->rdbtnMale->AutoSize = true;
			this->rdbtnMale->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdbtnMale->ForeColor = System::Drawing::Color::White;
			this->rdbtnMale->Location = System::Drawing::Point(228, 15);
			this->rdbtnMale->Name = L"rdbtnMale";
			this->rdbtnMale->Size = System::Drawing::Size(61, 24);
			this->rdbtnMale->TabIndex = 5;
			this->rdbtnMale->TabStop = true;
			this->rdbtnMale->Text = L"Male";
			this->rdbtnMale->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Silver;
			this->label5->Location = System::Drawing::Point(8, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 21);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Gender:";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel4->Controls->Add(this->tbEmail);
			this->panel4->Location = System::Drawing::Point(281, 345);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(476, 54);
			this->panel4->TabIndex = 7;
			// 
			// tbEmail
			// 
			this->tbEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12.25F));
			this->tbEmail->ForeColor = System::Drawing::Color::Silver;
			this->tbEmail->Location = System::Drawing::Point(13, 9);
			this->tbEmail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(332, 22);
			this->tbEmail->TabIndex = 3;
			this->tbEmail->Text = L"Email";
			this->tbEmail->Enter += gcnew System::EventHandler(this, &RegisterForm::tbEmail_Enter);
			this->tbEmail->Leave += gcnew System::EventHandler(this, &RegisterForm::tbEmail_Leave);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel6->Controls->Add(this->tbFirstName);
			this->panel6->Location = System::Drawing::Point(281, 167);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(476, 54);
			this->panel6->TabIndex = 7;
			// 
			// tbFirstName
			// 
			this->tbFirstName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbFirstName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbFirstName->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12.25F));
			this->tbFirstName->ForeColor = System::Drawing::Color::Silver;
			this->tbFirstName->Location = System::Drawing::Point(13, 9);
			this->tbFirstName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(332, 22);
			this->tbFirstName->TabIndex = 0;
			this->tbFirstName->Text = L"First Name";
			this->tbFirstName->Enter += gcnew System::EventHandler(this, &RegisterForm::tbFirstName_Enter);
			this->tbFirstName->Leave += gcnew System::EventHandler(this, &RegisterForm::tbFirstName_Leave);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel3->Controls->Add(this->tbPhoneNumber);
			this->panel3->Location = System::Drawing::Point(281, 286);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(476, 54);
			this->panel3->TabIndex = 7;
			// 
			// tbPhoneNumber
			// 
			this->tbPhoneNumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbPhoneNumber->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPhoneNumber->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12.25F));
			this->tbPhoneNumber->ForeColor = System::Drawing::Color::Silver;
			this->tbPhoneNumber->Location = System::Drawing::Point(13, 9);
			this->tbPhoneNumber->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbPhoneNumber->Name = L"tbPhoneNumber";
			this->tbPhoneNumber->Size = System::Drawing::Size(332, 22);
			this->tbPhoneNumber->TabIndex = 2;
			this->tbPhoneNumber->Text = L"Phone Number";
			this->tbPhoneNumber->Enter += gcnew System::EventHandler(this, &RegisterForm::tbPhoneNumber_Enter);
			this->tbPhoneNumber->Leave += gcnew System::EventHandler(this, &RegisterForm::tbPhoneNumber_Leave);
			// 
			// btnRegister
			// 
			this->btnRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->btnRegister->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnRegister->FlatAppearance->BorderSize = 0;
			this->btnRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->btnRegister->ForeColor = System::Drawing::Color::Black;
			this->btnRegister->Location = System::Drawing::Point(281, 604);
			this->btnRegister->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(476, 54);
			this->btnRegister->TabIndex = 5;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &RegisterForm::btnRegister_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel2->Controls->Add(this->tbPassword);
			this->panel2->Location = System::Drawing::Point(281, 404);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(476, 54);
			this->panel2->TabIndex = 7;
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12.25F));
			this->tbPassword->ForeColor = System::Drawing::Color::Silver;
			this->tbPassword->Location = System::Drawing::Point(13, 9);
			this->tbPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(332, 22);
			this->tbPassword->TabIndex = 4;
			this->tbPassword->Text = L"Password";
			this->tbPassword->UseSystemPasswordChar = true;
			this->tbPassword->Enter += gcnew System::EventHandler(this, &RegisterForm::tbPassword_Enter);
			this->tbPassword->Leave += gcnew System::EventHandler(this, &RegisterForm::tbPassword_Leave);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12.25F));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(313, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(281, 22);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Register Yourself for a Better Health";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(244, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(407, 58);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Register as Patient";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel5->Controls->Add(this->tbLastName);
			this->panel5->Location = System::Drawing::Point(281, 226);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(476, 54);
			this->panel5->TabIndex = 7;
			// 
			// tbLastName
			// 
			this->tbLastName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbLastName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbLastName->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12.25F));
			this->tbLastName->ForeColor = System::Drawing::Color::Silver;
			this->tbLastName->Location = System::Drawing::Point(13, 14);
			this->tbLastName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(332, 22);
			this->tbLastName->TabIndex = 1;
			this->tbLastName->Text = L"Last Name";
			this->tbLastName->Enter += gcnew System::EventHandler(this, &RegisterForm::tbLastName_Enter);
			this->tbLastName->Leave += gcnew System::EventHandler(this, &RegisterForm::tbLastName_Leave);
			// 
			// gradPanelSmall
			// 
			this->gradPanelSmall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gradPanelSmall.BackgroundImage")));
			this->gradPanelSmall->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gradPanelSmall->Controls->Add(this->btnSignIn);
			this->gradPanelSmall->Controls->Add(this->label2);
			this->gradPanelSmall->Controls->Add(this->label1);
			this->gradPanelSmall->Controls->Add(this->Logo);
			this->gradPanelSmall->Controls->Add(this->logoLabel);
			this->gradPanelSmall->Location = System::Drawing::Point(0, 0);
			this->gradPanelSmall->Margin = System::Windows::Forms::Padding(4);
			this->gradPanelSmall->Name = L"gradPanelSmall";
			this->gradPanelSmall->Size = System::Drawing::Size(539, 838);
			this->gradPanelSmall->TabIndex = 9;
			// 
			// btnSignIn
			// 
			this->btnSignIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->btnSignIn->FlatAppearance->BorderSize = 0;
			this->btnSignIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->btnSignIn->ForeColor = System::Drawing::Color::Black;
			this->btnSignIn->Location = System::Drawing::Point(168, 593);
			this->btnSignIn->Margin = System::Windows::Forms::Padding(4);
			this->btnSignIn->Name = L"btnSignIn";
			this->btnSignIn->Size = System::Drawing::Size(173, 41);
			this->btnSignIn->TabIndex = 6;
			this->btnSignIn->Text = L"Sign In";
			this->btnSignIn->UseVisualStyleBackColor = false;
			this->btnSignIn->Click += gcnew System::EventHandler(this, &RegisterForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(112, 558);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(230, 26);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Already have an Account\?";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(124, 428);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Its about helping others";
			// 
			// Logo
			// 
			this->Logo->BackColor = System::Drawing::Color::Transparent;
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(161, 167);
			this->Logo->Margin = System::Windows::Forms::Padding(4);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(180, 139);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Logo->TabIndex = 0;
			this->Logo->TabStop = false;
			// 
			// logoLabel
			// 
			this->logoLabel->AutoSize = true;
			this->logoLabel->BackColor = System::Drawing::Color::Transparent;
			this->logoLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18.25F, System::Drawing::FontStyle::Bold));
			this->logoLabel->ForeColor = System::Drawing::Color::White;
			this->logoLabel->Location = System::Drawing::Point(52, 310);
			this->logoLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->logoLabel->Name = L"logoLabel";
			this->logoLabel->Size = System::Drawing::Size(319, 66);
			this->logoLabel->TabIndex = 1;
			this->logoLabel->Text = L"HOSPITAL MANAGEMENT\r\nSYSTEM";
			this->logoLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1579, 838);
			this->Controls->Add(this->gradPanelSmall);
			this->Controls->Add(this->gradPanelBig);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterForm";
			this->gradPanelBig->ResumeLayout(false);
			this->gradPanelBig->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->gradPanelSmall->ResumeLayout(false);
			this->gradPanelSmall->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool switchtoLogin = false;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		switchtoLogin = true;
		this->Close();
	}
	private: System::Void tbFirstName_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbFirstName->Text == "First Name") {
			tbFirstName->Text = "";
		}
	}
	private: System::Void tbFirstName_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbFirstName->Text == "") {
			tbFirstName->Text = "First Name";
		}
	}
	private: System::Void tbLastName_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbLastName->Text == "Last Name") {
			tbLastName->Text = "";
		}
	}
	private: System::Void tbLastName_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbLastName->Text == "") {
			tbLastName->Text = "Last Name";
		}
	}

	private: System::Void tbPhoneNumber_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbPhoneNumber->Text == "Phone Number") {
			tbPhoneNumber->Text = "";
		}
	}
	private: System::Void tbPhoneNumber_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbPhoneNumber->Text == "") {
			tbPhoneNumber->Text = "Phone Number";
		}
	}

	private: System::Void tbEmail_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbEmail->Text == "Email") {
			tbEmail->Text = "";
		}
	}
	private: System::Void tbEmail_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbEmail->Text == "") {
			tbEmail->Text = "Email";
		}
	}

	private: System::Void tbPassword_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbPassword->Text == "Password") {
			tbPassword->Text = "";
			tbPassword->UseSystemPasswordChar = true;  
		}
	}
	private: System::Void tbPassword_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbPassword->Text == "") {
			tbPassword->Text = "Password";
			tbPassword->UseSystemPasswordChar = false;  
		}
	}
	public: Patient^ patient = nullptr;
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ firstName = tbFirstName->Text;
		String^ lastName = tbLastName->Text;
		String^ gender = nullptr;
		String^ phoneNumber = tbPhoneNumber->Text;
		String^ email = tbEmail->Text;
		String^ password = tbPassword->Text;
		System::DateTime selectedDate = dateTimePicker1->Value;
		String^ dateofBirth = selectedDate.ToString("yyyy-MM-dd");

		if (rdbtnMale->Checked)
			gender = "Male";
		else if (rdbtnFemale->Checked)
			gender = "Female";
		else {
			MessageBox::Show("Please choose a Gender",
				"Invalid Arguments", MessageBoxButtons::OK);
			return;
		}


		if (firstName == "First Name" || lastName == "Last Name" || phoneNumber == "Phone Number" || email == "Email" || password == "Password") {
			MessageBox::Show("Kindly Input All Fields!",
				"Invalid Arguements!", MessageBoxButtons::OK);
			return;
		}
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=test;Integrated Security=True;";
			SqlConnection sqlConn(connString);

			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO Patient " +
				"(first_name, last_name, gender, dob, number, email, password) VALUES" +
				"(@fname, @lname, @gender, @dob, @num, @email, @pwd);";
			SqlCommand command(sqlQuery, % sqlConn);

			command.Parameters->AddWithValue("@fname", firstName);
			command.Parameters->AddWithValue("@lname", lastName);
			command.Parameters->AddWithValue("@gender", gender);
			command.Parameters->AddWithValue("@dob", dateofBirth);
			command.Parameters->AddWithValue("@num", phoneNumber);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);

			command.ExecuteNonQuery();

			patient = gcnew Patient;
			patient->firstName = firstName;
			patient->lastName = lastName;
			patient->gender = gender;
			patient->dateofBirth = dateofBirth;
			patient->phoneNumber = phoneNumber;
			patient->email = email;
			patient->password = password;

			MessageBox::Show("Successfully Registered " + patient->lastName,
				"Success!", MessageBoxButtons::OK);
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Couldn't Connect to DataBase",
				"Connection Problem", MessageBoxButtons::OK);
		}
	}
};
}
