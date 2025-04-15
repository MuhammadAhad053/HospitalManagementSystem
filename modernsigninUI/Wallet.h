#pragma once

#include "Patient.h"
#include "Doctor.h"

namespace HospitalManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Wallet
	/// </summary>
	public ref class Wallet : public System::Windows::Forms::Form
	{
	private:
		Doctor^ currentDoctor = nullptr;
		Patient^ currentPatient = nullptr;
	public:
		Wallet(Patient^ patient)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lbAmount->Text = patient->wallet.ToString();
			this->currentPatient = patient;
		}
		Wallet(Doctor^ doctor)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			label3->Text = "Enter the Amount you want to Withdraw";
			label5->Text = "Withdraw Money";
			btnTransfer->Text = "Withdraw";
			lbAmount->Text = doctor->wallet.ToString();
			this->currentDoctor = doctor;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Wallet()
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbAmount;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ tbAmount;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ tbAccount;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnTransfer;











	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel5;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Wallet::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btProfile = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnTransfer = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tbAccount = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tbAmount = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbAmount = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
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
			this->label9->Location = System::Drawing::Point(585, 24);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(90, 33);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Wallet";
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
			this->btProfile->Click += gcnew System::EventHandler(this, &Wallet::btProfile_Click);
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
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->btnTransfer);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 70);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1264, 611);
			this->panel2->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Location = System::Drawing::Point(181, 199);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(316, 64);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Your Balance";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btnTransfer
			// 
			this->btnTransfer->BackColor = System::Drawing::Color::Transparent;
			this->btnTransfer->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->btnTransfer->FlatAppearance->BorderSize = 0;
			this->btnTransfer->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnTransfer->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->btnTransfer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTransfer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->btnTransfer->ForeColor = System::Drawing::Color::White;
			this->btnTransfer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTransfer.Image")));
			this->btnTransfer->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnTransfer->Location = System::Drawing::Point(913, 409);
			this->btnTransfer->Name = L"btnTransfer";
			this->btnTransfer->Size = System::Drawing::Size(134, 46);
			this->btnTransfer->TabIndex = 9;
			this->btnTransfer->Text = L"Transfer";
			this->btnTransfer->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTransfer->UseVisualStyleBackColor = false;
			this->btnTransfer->Click += gcnew System::EventHandler(this, &Wallet::btnTransfer_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel4->Controls->Add(this->tbAccount);
			this->panel4->Location = System::Drawing::Point(698, 262);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(342, 35);
			this->panel4->TabIndex = 11;
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
			this->tbAccount->Text = L"Account Number";
			this->tbAccount->Enter += gcnew System::EventHandler(this, &Wallet::tbAccount_Enter);
			this->tbAccount->Leave += gcnew System::EventHandler(this, &Wallet::tbAccount_Leave);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(693, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(380, 26);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Enter the Account you want to transfer to";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel3->Controls->Add(this->tbAmount);
			this->panel3->Location = System::Drawing::Point(698, 357);
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
			this->tbAmount->Text = L"Amount (in Numbers)";
			this->tbAmount->Enter += gcnew System::EventHandler(this, &Wallet::tbAmount_Enter);
			this->tbAmount->Leave += gcnew System::EventHandler(this, &Wallet::tbAmount_Leave);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(748, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(276, 47);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Transfer Money";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(693, 325);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(354, 26);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Enter the Amount you want to Transfer";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->lbAmount);
			this->panel5->Location = System::Drawing::Point(167, 268);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(342, 74);
			this->panel5->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(51, -5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 85);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Rs.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lbAmount
			// 
			this->lbAmount->AutoSize = true;
			this->lbAmount->BackColor = System::Drawing::Color::Transparent;
			this->lbAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAmount->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbAmount->Location = System::Drawing::Point(172, -5);
			this->lbAmount->Name = L"lbAmount";
			this->lbAmount->Size = System::Drawing::Size(111, 85);
			this->lbAmount->TabIndex = 5;
			this->lbAmount->Text = L"00";
			this->lbAmount->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Wallet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Wallet";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Wallet";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btProfile_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void tbAccount_Enter(System::Object^ sender, System::EventArgs^ e) {
		tbAccount->Text = "";
	}
	private: System::Void tbAccount_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbAccount->Text == "")
			tbAccount->Text = "Account Number";
	}
	private: System::Void tbAmount_Enter(System::Object^ sender, System::EventArgs^ e) {
		tbAmount->Text = "";
	}
	private: System::Void tbAmount_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbAmount->Text == "")
			tbAmount->Text = "Amount (in Numbers)";
	}
	private: System::Void btnTransfer_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=test;Integrated Security=True;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		String^ sqlQuery;

		String^ accountNumber = tbAccount->Text;
		String^ amountText = tbAmount->Text;
		double amount = Convert::ToDouble(tbAmount->Text);

		if (accountNumber == "Account Number" || amountText == "Amount (in Numbers)") {
			MessageBox::Show("Enter all Fields");
		}
		else if(accountNumber == "SELF") {
			try {
				sqlConn->Open();

				if(currentPatient != nullptr)
				{
					sqlQuery = "UPDATE Patient SET wallet = wallet + @amount WHERE Id = @id";
					SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);

					command->Parameters->AddWithValue("@amount", amount);
					command->Parameters->AddWithValue("@id", currentPatient->id);

					command->ExecuteNonQuery();
					sqlConn->Close();

					currentPatient->wallet += amount;
				}
				else {
					sqlQuery = "UPDATE Doctor SET wallet = wallet - @amount WHERE Id = @id";
					SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);

					command->Parameters->AddWithValue("@amount", amount);
					command->Parameters->AddWithValue("@id", currentDoctor->id);

					command->ExecuteNonQuery();
					sqlConn->Close();

					currentDoctor->wallet -= amount;
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Could'nt Connect to DataBase");
			}
		}
		else {
			try {
				sqlConn->Open();
				if(currentPatient != nullptr)
				{
					sqlQuery = "UPDATE Doctor SET wallet = wallet + @amount WHERE account = @acc; UPDATE Patient SET wallet = wallet - @amount WHERE Id = @id;";
					SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);

					command->Parameters->AddWithValue("@amount", amount);
					command->Parameters->AddWithValue("@acc", accountNumber);
					command->Parameters->AddWithValue("@id", currentPatient->id);

					int rowsAffected = command->ExecuteNonQuery();
					sqlConn->Close();

					if (rowsAffected > 0)
						MessageBox::Show("Amount Paid Successfully");
					else
						MessageBox::Show("No Doctor found with that Account Number");

					currentPatient->wallet -= amount;
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Could'nt Connect to DataBase");
			}
		}
		if (currentPatient != nullptr)
			lbAmount->Text = currentPatient->wallet.ToString();
		else
			lbAmount->Text = currentDoctor->wallet.ToString();
	}
};
}