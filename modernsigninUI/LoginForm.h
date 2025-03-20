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
	/// Summary for MyForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ gradPanelBig;
	protected:



	protected:

	protected:






	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::TextBox^ tbEmail;


	private: System::Windows::Forms::Label^ labelRole;







	private: System::Windows::Forms::Button^ btnSignIn;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ gradPanelSmall;
	private: System::Windows::Forms::Button^ btnRegister;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ logoLabel;
	private: System::Windows::Forms::PictureBox^ Logo;
	private: System::Windows::Forms::RadioButton^ rdbtnReceptionist;

	private: System::Windows::Forms::RadioButton^ rdbtnPatient;

	private: System::Windows::Forms::RadioButton^ rdbtnDoctor;

	private: System::Windows::Forms::RadioButton^ rdbtnAdmin;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->gradPanelBig = (gcnew System::Windows::Forms::Panel());
			this->rdbtnReceptionist = (gcnew System::Windows::Forms::RadioButton());
			this->rdbtnPatient = (gcnew System::Windows::Forms::RadioButton());
			this->rdbtnDoctor = (gcnew System::Windows::Forms::RadioButton());
			this->rdbtnAdmin = (gcnew System::Windows::Forms::RadioButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
			this->labelRole = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->gradPanelSmall = (gcnew System::Windows::Forms::Panel());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->logoLabel = (gcnew System::Windows::Forms::Label());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->gradPanelBig->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->gradPanelSmall->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->SuspendLayout();
			// 
			// gradPanelBig
			// 
			this->gradPanelBig->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gradPanelBig.BackgroundImage")));
			this->gradPanelBig->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gradPanelBig->Controls->Add(this->rdbtnReceptionist);
			this->gradPanelBig->Controls->Add(this->rdbtnPatient);
			this->gradPanelBig->Controls->Add(this->rdbtnDoctor);
			this->gradPanelBig->Controls->Add(this->rdbtnAdmin);
			this->gradPanelBig->Controls->Add(this->panel3);
			this->gradPanelBig->Controls->Add(this->btnSignIn);
			this->gradPanelBig->Controls->Add(this->labelRole);
			this->gradPanelBig->Controls->Add(this->panel2);
			this->gradPanelBig->Controls->Add(this->panel1);
			this->gradPanelBig->Controls->Add(this->label4);
			this->gradPanelBig->Controls->Add(this->label3);
			this->gradPanelBig->Dock = System::Windows::Forms::DockStyle::Right;
			this->gradPanelBig->Location = System::Drawing::Point(404, 0);
			this->gradPanelBig->Name = L"gradPanelBig";
			this->gradPanelBig->Size = System::Drawing::Size(780, 681);
			this->gradPanelBig->TabIndex = 0;
			// 
			// rdbtnReceptionist
			// 
			this->rdbtnReceptionist->AutoSize = true;
			this->rdbtnReceptionist->BackColor = System::Drawing::Color::Transparent;
			this->rdbtnReceptionist->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->rdbtnReceptionist->Location = System::Drawing::Point(482, 272);
			this->rdbtnReceptionist->Name = L"rdbtnReceptionist";
			this->rdbtnReceptionist->Size = System::Drawing::Size(115, 25);
			this->rdbtnReceptionist->TabIndex = 17;
			this->rdbtnReceptionist->TabStop = true;
			this->rdbtnReceptionist->Text = L"Receptionist";
			this->rdbtnReceptionist->UseVisualStyleBackColor = false;
			this->rdbtnReceptionist->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::rdbtnReceptionist_CheckedChanged);
			// 
			// rdbtnPatient
			// 
			this->rdbtnPatient->AutoSize = true;
			this->rdbtnPatient->BackColor = System::Drawing::Color::Transparent;
			this->rdbtnPatient->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdbtnPatient->Location = System::Drawing::Point(399, 272);
			this->rdbtnPatient->Name = L"rdbtnPatient";
			this->rdbtnPatient->Size = System::Drawing::Size(77, 25);
			this->rdbtnPatient->TabIndex = 16;
			this->rdbtnPatient->TabStop = true;
			this->rdbtnPatient->Text = L"Patient";
			this->rdbtnPatient->UseVisualStyleBackColor = false;
			this->rdbtnPatient->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::rdbtnPatient_CheckedChanged);
			// 
			// rdbtnDoctor
			// 
			this->rdbtnDoctor->AutoSize = true;
			this->rdbtnDoctor->BackColor = System::Drawing::Color::Transparent;
			this->rdbtnDoctor->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdbtnDoctor->Location = System::Drawing::Point(304, 272);
			this->rdbtnDoctor->Name = L"rdbtnDoctor";
			this->rdbtnDoctor->Size = System::Drawing::Size(77, 25);
			this->rdbtnDoctor->TabIndex = 15;
			this->rdbtnDoctor->TabStop = true;
			this->rdbtnDoctor->Text = L"Doctor";
			this->rdbtnDoctor->UseVisualStyleBackColor = false;
			this->rdbtnDoctor->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::rdbtnDoctor_CheckedChanged);
			// 
			// rdbtnAdmin
			// 
			this->rdbtnAdmin->AutoSize = true;
			this->rdbtnAdmin->BackColor = System::Drawing::Color::Transparent;
			this->rdbtnAdmin->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdbtnAdmin->Location = System::Drawing::Point(215, 270);
			this->rdbtnAdmin->Name = L"rdbtnAdmin";
			this->rdbtnAdmin->Size = System::Drawing::Size(74, 25);
			this->rdbtnAdmin->TabIndex = 14;
			this->rdbtnAdmin->TabStop = true;
			this->rdbtnAdmin->Text = L"Admin";
			this->rdbtnAdmin->UseVisualStyleBackColor = false;
			this->rdbtnAdmin->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::rdbtnAdmin_CheckedChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Location = System::Drawing::Point(0, 530);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(780, 151);
			this->panel3->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(44, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(212, 26);
			this->label6->TabIndex = 1;
			this->label6->Text = L"About this Application";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 10.25F));
			this->label7->Location = System::Drawing::Point(45, 71);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(704, 38);
			this->label7->TabIndex = 2;
			this->label7->Text = resources->GetString(L"label7.Text");
			// 
			// btnSignIn
			// 
			this->btnSignIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->btnSignIn->FlatAppearance->BorderSize = 0;
			this->btnSignIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->btnSignIn->ForeColor = System::Drawing::Color::Black;
			this->btnSignIn->Location = System::Drawing::Point(215, 416);
			this->btnSignIn->Name = L"btnSignIn";
			this->btnSignIn->Size = System::Drawing::Size(357, 33);
			this->btnSignIn->TabIndex = 4;
			this->btnSignIn->Text = L"Sign in";
			this->btnSignIn->UseVisualStyleBackColor = false;
			this->btnSignIn->Click += gcnew System::EventHandler(this, &LoginForm::btnSignIn_Click);
			// 
			// labelRole
			// 
			this->labelRole->AutoSize = true;
			this->labelRole->BackColor = System::Drawing::Color::Transparent;
			this->labelRole->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->labelRole->Location = System::Drawing::Point(212, 244);
			this->labelRole->Name = L"labelRole";
			this->labelRole->Size = System::Drawing::Size(143, 15);
			this->labelRole->TabIndex = 9;
			this->labelRole->Text = L"*Who are you signing in as \?";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel2->Controls->Add(this->tbPassword);
			this->panel2->Location = System::Drawing::Point(215, 353);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(357, 44);
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
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(332, 22);
			this->tbPassword->TabIndex = 0;
			this->tbPassword->Text = L"Password";
			this->tbPassword->UseSystemPasswordChar = true;
			this->tbPassword->Enter += gcnew System::EventHandler(this, &LoginForm::tbPassword_Enter);
			this->tbPassword->Leave += gcnew System::EventHandler(this, &LoginForm::tbPassword_Leave);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel1->Controls->Add(this->tbEmail);
			this->panel1->Location = System::Drawing::Point(215, 303);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(357, 44);
			this->panel1->TabIndex = 6;
			// 
			// tbEmail
			// 
			this->tbEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12.25F));
			this->tbEmail->ForeColor = System::Drawing::Color::Silver;
			this->tbEmail->Location = System::Drawing::Point(13, 9);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(332, 22);
			this->tbEmail->TabIndex = 0;
			this->tbEmail->Text = L"Email";
			this->tbEmail->Enter += gcnew System::EventHandler(this, &LoginForm::tbUsername_Enter);
			this->tbEmail->Leave += gcnew System::EventHandler(this, &LoginForm::tbUsername_Leave);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12.25F));
			this->label4->Location = System::Drawing::Point(211, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(361, 22);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Sign in to your account to continue your work";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(205, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 58);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Sign in";
			// 
			// gradPanelSmall
			// 
			this->gradPanelSmall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gradPanelSmall.BackgroundImage")));
			this->gradPanelSmall->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gradPanelSmall->Controls->Add(this->btnRegister);
			this->gradPanelSmall->Controls->Add(this->label2);
			this->gradPanelSmall->Controls->Add(this->label1);
			this->gradPanelSmall->Controls->Add(this->logoLabel);
			this->gradPanelSmall->Controls->Add(this->Logo);
			this->gradPanelSmall->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gradPanelSmall->Location = System::Drawing::Point(0, 0);
			this->gradPanelSmall->Name = L"gradPanelSmall";
			this->gradPanelSmall->Size = System::Drawing::Size(404, 681);
			this->gradPanelSmall->TabIndex = 2;
			// 
			// btnRegister
			// 
			this->btnRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->btnRegister->FlatAppearance->BorderSize = 0;
			this->btnRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->btnRegister->ForeColor = System::Drawing::Color::Black;
			this->btnRegister->Location = System::Drawing::Point(126, 482);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(130, 33);
			this->btnRegister->TabIndex = 4;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(131, 453);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 26);
			this->label2->TabIndex = 3;
			this->label2->Text = L"No Account \?";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(93, 348);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Its about helping others";
			// 
			// logoLabel
			// 
			this->logoLabel->AutoSize = true;
			this->logoLabel->BackColor = System::Drawing::Color::Transparent;
			this->logoLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18.25F, System::Drawing::FontStyle::Bold));
			this->logoLabel->Location = System::Drawing::Point(40, 252);
			this->logoLabel->Name = L"logoLabel";
			this->logoLabel->Size = System::Drawing::Size(319, 66);
			this->logoLabel->TabIndex = 1;
			this->logoLabel->Text = L"HOSPITAL MANAGEMENT\r\nSYSTEM";
			this->logoLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Logo
			// 
			this->Logo->BackColor = System::Drawing::Color::Transparent;
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(121, 136);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(135, 113);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Logo->TabIndex = 0;
			this->Logo->TabStop = false;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1184, 681);
			this->Controls->Add(this->gradPanelSmall);
			this->Controls->Add(this->gradPanelBig);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoginForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignInPage";
			this->gradPanelBig->ResumeLayout(false);
			this->gradPanelBig->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->gradPanelSmall->ResumeLayout(false);
			this->gradPanelSmall->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion  
	private: System::Void tbUsername_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbEmail->Text == "Email") {
			tbEmail->Text = "";
		}
	}
	private: System::Void tbUsername_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbEmail->Text == "") {
			tbEmail->Text = "Email";
		}
	}
	private: System::Void tbPassword_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbPassword->Text == "Password") {
			tbPassword->Text = "";
			tbPassword->UseSystemPasswordChar = true;  // Hide password characters
		}
	}
	private: System::Void tbPassword_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbPassword->Text == "") {
			tbPassword->Text = "Password";
			tbPassword->UseSystemPasswordChar = false;  // Show placeholder text normally
		}
	}

	public: bool switchtoRegister = false;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		switchtoRegister = true;
		this->Close();
	}
	public: Patient^ patient = nullptr;
	private: System::Void btnSignIn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = tbEmail->Text;
		String^ password = tbPassword->Text;

		if (email == "Email" || password == "Password") {
			MessageBox::Show("Kindly Input All Fields",
				"Invalid Arguments", MessageBoxButtons::OK);
		}
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=test;Integrated Security=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM Patient WHERE email = @email AND password = @pwd;";
			SqlCommand command(sqlQuery, % sqlConn);

			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();

			if (reader->Read()) {
				patient = gcnew Patient;
				patient->id = reader->GetInt32(0);
				patient->firstName = reader->GetString(1);
				patient->lastName = reader->GetString(2);
				patient->phoneNumber = reader->GetString(5);
				patient->email = reader->GetString(6);
				patient->password = reader->GetString(7);

				MessageBox::Show(patient->lastName + " has logged in!",
					"Success", MessageBoxButtons::OK);

				this->Close();
			}
			else {
				MessageBox::Show("Invalid Username or Password",
					"Failed", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Couldn't Connect to DataBase\n"+e->Message,
				"Connection Problem", MessageBoxButtons::OK);
		}
	}
	private: System::Void rdbtnAdmin_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		labelRole->ForeColor = Color::Silver;
		labelRole->Text = "Signing In as Admin!";
	}
	private: System::Void rdbtnDoctor_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		labelRole->ForeColor = Color::Silver;
		labelRole->Text = "Signing In as Doctor!";
	}
	private: System::Void rdbtnPatient_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		labelRole->ForeColor = Color::Silver;
		labelRole->Text = "Signing In as Patient!";
	}
	private: System::Void rdbtnReceptionist_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		labelRole->ForeColor = Color::Silver;
		labelRole->Text = "Signing In as Receptionist!";
	}
};
}
