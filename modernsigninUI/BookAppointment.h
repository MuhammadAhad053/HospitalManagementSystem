#pragma once

#include "DoctorSchedule.h"
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
	/// Summary for BookAppointment
	/// </summary>
	public ref class BookAppointment : public System::Windows::Forms::Form
	{
	public:
		Doctor^ currentDoctor = nullptr;
		BookAppointment(Doctor^ doctor)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			lbName->Text += doctor->lastName;
			currentDoctor = doctor;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BookAppointment()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btProfile;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ lbName;

	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ rdPatient1;
	private: System::Windows::Forms::RadioButton^ rdDoctor1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::FlowLayoutPanel^ ScheduleData;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BookAppointment::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btProfile = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->ScheduleData = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->rdPatient1 = (gcnew System::Windows::Forms::RadioButton());
			this->rdDoctor1 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			this->panel1->TabIndex = 4;
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
			this->btProfile->Click += gcnew System::EventHandler(this, &BookAppointment::btProfile_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18.25F, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(488, 24);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(271, 33);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Book an Appointment";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->ScheduleData);
			this->panel3->Controls->Add(this->radioButton5);
			this->panel3->Controls->Add(this->radioButton2);
			this->panel3->Controls->Add(this->radioButton4);
			this->panel3->Controls->Add(this->radioButton3);
			this->panel3->Controls->Add(this->radioButton1);
			this->panel3->Controls->Add(this->rdPatient1);
			this->panel3->Controls->Add(this->rdDoctor1);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->lbName);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 70);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1264, 611);
			this->panel3->TabIndex = 6;
			// 
			// ScheduleData
			// 
			this->ScheduleData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ScheduleData->Location = System::Drawing::Point(0, 186);
			this->ScheduleData->Name = L"ScheduleData";
			this->ScheduleData->Size = System::Drawing::Size(1264, 425);
			this->ScheduleData->TabIndex = 33;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::Color::Transparent;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->ForeColor = System::Drawing::Color::White;
			this->radioButton5->Location = System::Drawing::Point(862, 137);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(80, 25);
			this->radioButton5->TabIndex = 32;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Sunday";
			this->radioButton5->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(765, 137);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(91, 25);
			this->radioButton2->TabIndex = 32;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Saturday";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::Transparent;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->ForeColor = System::Drawing::Color::White;
			this->radioButton4->Location = System::Drawing::Point(590, 137);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(92, 25);
			this->radioButton4->TabIndex = 31;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Thursday";
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Transparent;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(381, 137);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(85, 25);
			this->radioButton3->TabIndex = 32;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Tuesday";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(688, 137);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(71, 25);
			this->radioButton1->TabIndex = 31;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Friday";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// rdPatient1
			// 
			this->rdPatient1->AutoSize = true;
			this->rdPatient1->BackColor = System::Drawing::Color::Transparent;
			this->rdPatient1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdPatient1->ForeColor = System::Drawing::Color::White;
			this->rdPatient1->Location = System::Drawing::Point(476, 137);
			this->rdPatient1->Name = L"rdPatient1";
			this->rdPatient1->Size = System::Drawing::Size(108, 25);
			this->rdPatient1->TabIndex = 32;
			this->rdPatient1->TabStop = true;
			this->rdPatient1->Text = L"Wednesday";
			this->rdPatient1->UseVisualStyleBackColor = false;
			// 
			// rdDoctor1
			// 
			this->rdDoctor1->AutoSize = true;
			this->rdDoctor1->BackColor = System::Drawing::Color::Transparent;
			this->rdDoctor1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdDoctor1->ForeColor = System::Drawing::Color::White;
			this->rdDoctor1->Location = System::Drawing::Point(290, 137);
			this->rdDoctor1->Name = L"rdDoctor1";
			this->rdDoctor1->Size = System::Drawing::Size(85, 25);
			this->rdDoctor1->TabIndex = 31;
			this->rdDoctor1->TabStop = true;
			this->rdDoctor1->Text = L"Monday";
			this->rdDoctor1->UseVisualStyleBackColor = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Location = System::Drawing::Point(549, 106);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(145, 28);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Select day(s):";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbName
			// 
			this->lbName->BackColor = System::Drawing::Color::Transparent;
			this->lbName->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbName->Location = System::Drawing::Point(282, 35);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(697, 47);
			this->lbName->TabIndex = 19;
			this->lbName->Text = L"Available Slots for ";
			this->lbName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BookAppointment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"BookAppointment";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BookAppointment";
			this->Load += gcnew System::EventHandler(this, &BookAppointment::BookAppointment_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void LoadDoctorPanels(int currentDoctorID) {
			// Set up your database connection
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=test;Integrated Security=True;";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			// SQL to get weekly schedule
			String^ query = "SELECT monday, tuesday, wednesday, thursday, friday, saturday, sunday FROM Doctor WHERE Id = @docID";
			SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);
			cmd->Parameters->AddWithValue("@docID", currentDoctorID);

			sqlConn->Open();

			SqlDataReader^ reader = cmd->ExecuteReader();

			if (reader->Read()) {
				array<String^>^ dayNames = gcnew array<String^> { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
				array<String^>^ columnNames = gcnew array<String^> { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };

				for (int i = 0; i < dayNames->Length; i++) {
					String^ time = reader[columnNames[i]]->ToString();

					// Skip if time is "N/A" or empty
					if (String::IsNullOrWhiteSpace(time) || time == "N/A")
						continue;

					// Create a new instance of your UserControl
					DoctorSchedule^ scheduleItem = gcnew DoctorSchedule();

					// Set the labels	
					scheduleItem->SetSchedule(dayNames[i], time);

					// Add to the FlowLayoutPanel
					ScheduleData->Controls->Add(scheduleItem);
				}
			}
			reader->Close();

		}
	private: System::Void BookAppointment_Load(System::Object^ sender, System::EventArgs^ e) {
		int id = currentDoctor->id;
		LoadDoctorPanels(id);
	}
private: System::Void btProfile_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
