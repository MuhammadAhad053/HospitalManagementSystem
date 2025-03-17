#pragma once

namespace modernsigninUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ gradPanelBig;
	protected:

	private: System::Windows::Forms::Panel^ gradPanelSmall;
	private: System::Windows::Forms::Label^ logoLabel;
	protected:

	protected:


	private: System::Windows::Forms::PictureBox^ Logo;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::CheckBox^ cbAdmin;
	private: System::Windows::Forms::Label^ labelRole;


	private: System::Windows::Forms::CheckBox^ cbPatient;

	private: System::Windows::Forms::CheckBox^ cbDoctor;

	private: System::Windows::Forms::CheckBox^ cbReceptionist;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->gradPanelBig = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->cbPatient = (gcnew System::Windows::Forms::CheckBox());
			this->cbDoctor = (gcnew System::Windows::Forms::CheckBox());
			this->cbReceptionist = (gcnew System::Windows::Forms::CheckBox());
			this->labelRole = (gcnew System::Windows::Forms::Label());
			this->cbAdmin = (gcnew System::Windows::Forms::CheckBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->gradPanelSmall = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->gradPanelBig->Controls->Add(this->panel3);
			this->gradPanelBig->Controls->Add(this->button2);
			this->gradPanelBig->Controls->Add(this->cbPatient);
			this->gradPanelBig->Controls->Add(this->cbDoctor);
			this->gradPanelBig->Controls->Add(this->cbReceptionist);
			this->gradPanelBig->Controls->Add(this->labelRole);
			this->gradPanelBig->Controls->Add(this->cbAdmin);
			this->gradPanelBig->Controls->Add(this->panel2);
			this->gradPanelBig->Controls->Add(this->panel1);
			this->gradPanelBig->Controls->Add(this->label4);
			this->gradPanelBig->Controls->Add(this->label3);
			this->gradPanelBig->Dock = System::Windows::Forms::DockStyle::Right;
			this->gradPanelBig->Location = System::Drawing::Point(408, 0);
			this->gradPanelBig->Name = L"gradPanelBig";
			this->gradPanelBig->Size = System::Drawing::Size(780, 681);
			this->gradPanelBig->TabIndex = 0;
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
			this->panel3->Click += gcnew System::EventHandler(this, &MyForm::otherClick);
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
			this->label7->Location = System::Drawing::Point(45, 59);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(704, 38);
			this->label7->TabIndex = 2;
			this->label7->Text = resources->GetString(L"label7.Text");
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(215, 416);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(357, 33);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Sign in";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::otherClick);
			// 
			// cbPatient
			// 
			this->cbPatient->AutoSize = true;
			this->cbPatient->BackColor = System::Drawing::Color::Transparent;
			this->cbPatient->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.25F));
			this->cbPatient->Location = System::Drawing::Point(475, 264);
			this->cbPatient->Name = L"cbPatient";
			this->cbPatient->Size = System::Drawing::Size(71, 23);
			this->cbPatient->TabIndex = 12;
			this->cbPatient->Text = L"Patient";
			this->cbPatient->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cbPatient->UseVisualStyleBackColor = false;
			this->cbPatient->Click += gcnew System::EventHandler(this, &MyForm::otherClick);
			// 
			// cbDoctor
			// 
			this->cbDoctor->AutoSize = true;
			this->cbDoctor->BackColor = System::Drawing::Color::Transparent;
			this->cbDoctor->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.25F));
			this->cbDoctor->Location = System::Drawing::Point(398, 264);
			this->cbDoctor->Name = L"cbDoctor";
			this->cbDoctor->Size = System::Drawing::Size(71, 23);
			this->cbDoctor->TabIndex = 11;
			this->cbDoctor->Text = L"Doctor";
			this->cbDoctor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cbDoctor->UseVisualStyleBackColor = false;
			this->cbDoctor->Click += gcnew System::EventHandler(this, &MyForm::otherClick);
			// 
			// cbReceptionist
			// 
			this->cbReceptionist->AutoSize = true;
			this->cbReceptionist->BackColor = System::Drawing::Color::Transparent;
			this->cbReceptionist->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.25F));
			this->cbReceptionist->Location = System::Drawing::Point(289, 264);
			this->cbReceptionist->Name = L"cbReceptionist";
			this->cbReceptionist->Size = System::Drawing::Size(103, 23);
			this->cbReceptionist->TabIndex = 10;
			this->cbReceptionist->Text = L"Receptionist";
			this->cbReceptionist->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cbReceptionist->UseVisualStyleBackColor = false;
			this->cbReceptionist->Click += gcnew System::EventHandler(this, &MyForm::otherClick);
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
			this->labelRole->Click += gcnew System::EventHandler(this, &MyForm::otherClick);
			// 
			// cbAdmin
			// 
			this->cbAdmin->AutoSize = true;
			this->cbAdmin->BackColor = System::Drawing::Color::Transparent;
			this->cbAdmin->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.25F));
			this->cbAdmin->Location = System::Drawing::Point(215, 264);
			this->cbAdmin->Name = L"cbAdmin";
			this->cbAdmin->Size = System::Drawing::Size(68, 23);
			this->cbAdmin->TabIndex = 8;
			this->cbAdmin->Text = L"Admin";
			this->cbAdmin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cbAdmin->UseVisualStyleBackColor = false;
			this->cbAdmin->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbAdmin_CheckedChanged);
			this->cbAdmin->Click += gcnew System::EventHandler(this, &MyForm::otherClick);
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
			this->tbPassword->Click += gcnew System::EventHandler(this, &MyForm::tbPassword_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel1->Controls->Add(this->tbUsername);
			this->panel1->Location = System::Drawing::Point(215, 303);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(357, 44);
			this->panel1->TabIndex = 6;
			// 
			// tbUsername
			// 
			this->tbUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12.25F));
			this->tbUsername->ForeColor = System::Drawing::Color::Silver;
			this->tbUsername->Location = System::Drawing::Point(13, 9);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(332, 22);
			this->tbUsername->TabIndex = 0;
			this->tbUsername->Text = L"Username";
			this->tbUsername->Click += gcnew System::EventHandler(this, &MyForm::tbUsername_Click);
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
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::otherClick);
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
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::otherClick);
			// 
			// gradPanelSmall
			// 
			this->gradPanelSmall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gradPanelSmall.BackgroundImage")));
			this->gradPanelSmall->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gradPanelSmall->Controls->Add(this->button1);
			this->gradPanelSmall->Controls->Add(this->label2);
			this->gradPanelSmall->Controls->Add(this->label1);
			this->gradPanelSmall->Controls->Add(this->logoLabel);
			this->gradPanelSmall->Controls->Add(this->Logo);
			this->gradPanelSmall->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gradPanelSmall->Location = System::Drawing::Point(0, 0);
			this->gradPanelSmall->Name = L"gradPanelSmall";
			this->gradPanelSmall->Size = System::Drawing::Size(408, 681);
			this->gradPanelSmall->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(126, 482);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 33);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::otherClick);
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
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::otherClick);
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
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::otherClick);
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
			this->logoLabel->Click += gcnew System::EventHandler(this, &MyForm::otherClick);
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
			this->Logo->Click += gcnew System::EventHandler(this, &MyForm::otherClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1188, 681);
			this->Controls->Add(this->gradPanelSmall);
			this->Controls->Add(this->gradPanelBig);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
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

private: System::Void tbUsername_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbUsername->Text == "Username")
		tbUsername->Text = ""; 
	if (tbPassword->Text == "")
		tbPassword->Text = "Password";
}
private: System::Void tbPassword_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbPassword->Text == "Password")
		tbPassword->Text = "";
	if (tbUsername->Text == "")
		tbUsername->Text = "Username";
}
private: System::Void otherClick(System::Object^ sender, System::EventArgs^ e) {
	if(tbUsername->Text == "")
		tbUsername->Text = "Username";
	if (tbPassword->Text == "")
		tbPassword->Text = "Password";
}	   
private: System::Void cbAdmin_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cbAdmin->Checked) {
		labelRole->Text = "Signing in as Admin";
		labelRole->ForeColor = System::Drawing::Color::Silver;

		// Temporarily disable event handling
		cbReceptionist->CheckedChanged -= gcnew System::EventHandler(this, &MyForm::cbReceptionist_CheckedChanged);
		cbDoctor->CheckedChanged -= gcnew System::EventHandler(this, &MyForm::cbDoctor_CheckedChanged);
		cbPatient->CheckedChanged -= gcnew System::EventHandler(this, &MyForm::cbPatient_CheckedChanged);

		cbReceptionist->Checked = false;
		cbDoctor->Checked = false;
		cbPatient->Checked = false;

		// Re-enable event handling
		cbReceptionist->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbReceptionist_CheckedChanged);
		cbDoctor->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbDoctor_CheckedChanged);
		cbPatient->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbPatient_CheckedChanged);
	}
}

private: System::Void cbReceptionist_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cbReceptionist->Checked) {
		labelRole->Text = "Signing in as Receptionist";
		labelRole->ForeColor = System::Drawing::Color::Silver;

		cbAdmin->CheckedChanged -= gcnew System::EventHandler(this, &MyForm::cbAdmin_CheckedChanged);
		cbDoctor->CheckedChanged -= gcnew System::EventHandler(this, &MyForm::cbDoctor_CheckedChanged);
		cbPatient->CheckedChanged -= gcnew System::EventHandler(this, &MyForm::cbPatient_CheckedChanged);

		cbAdmin->Checked = false;
		cbDoctor->Checked = false;
		cbPatient->Checked = false;

		cbAdmin->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbAdmin_CheckedChanged);
		cbDoctor->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbDoctor_CheckedChanged);
		cbPatient->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbPatient_CheckedChanged);
	}
}

private: System::Void cbDoctor_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cbDoctor->Checked) {
		labelRole->Text = "Signing in as Doctor";
		labelRole->ForeColor = System::Drawing::Color::Silver;

		cbAdmin->CheckedChanged -= gcnew System::EventHandler(this, &MyForm::cbAdmin_CheckedChanged);
		cbReceptionist->CheckedChanged -= gcnew System::EventHandler(this, &MyForm::cbReceptionist_CheckedChanged);
		cbPatient->CheckedChanged -= gcnew System::EventHandler(this, &MyForm::cbPatient_CheckedChanged);

		cbAdmin->Checked = false;
		cbReceptionist->Checked = false;
		cbPatient->Checked = false;

		cbAdmin->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbAdmin_CheckedChanged);
		cbReceptionist->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbReceptionist_CheckedChanged);
		cbPatient->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbPatient_CheckedChanged);
	}
}

private: System::Void cbPatient_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cbPatient->Checked) {
		labelRole->Text = "Signing in as Patient";
		labelRole->ForeColor = System::Drawing::Color::Silver;

		cbAdmin->CheckedChanged -= gcnew System::EventHandler(this, &MyForm::cbAdmin_CheckedChanged);
		cbReceptionist->CheckedChanged -= gcnew System::EventHandler(this, &MyForm::cbReceptionist_CheckedChanged);
		cbDoctor->CheckedChanged -= gcnew System::EventHandler(this, &MyForm::cbDoctor_CheckedChanged);

		cbAdmin->Checked = false;
		cbReceptionist->Checked = false;
		cbDoctor->Checked = false;

		cbAdmin->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbAdmin_CheckedChanged);
		cbReceptionist->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbReceptionist_CheckedChanged);
		cbDoctor->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbDoctor_CheckedChanged);
	}
}

};
}
