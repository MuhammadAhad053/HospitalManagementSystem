#pragma once

#include "Doctor.h"
#include "BookAppointment.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace HospitalManagement {

	/// <summary>
	/// Summary for DoctorPanel
	/// </summary>
	public ref class DoctorPanel : public System::Windows::Forms::UserControl
	{
	public:
		DoctorPanel(void)
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
		~DoctorPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Label^ lbSpecialization;

	private: System::Windows::Forms::Label^ lbName;

	private: System::Windows::Forms::PictureBox^ pictureBox7;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DoctorPanel::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->lbSpecialization = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->lbSpecialization);
			this->panel1->Controls->Add(this->lbName);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(430, 105);
			this->panel1->TabIndex = 37;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(307, 65);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 32);
			this->button3->TabIndex = 40;
			this->button3->Text = L"View Timings";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DoctorPanel::button3_Click);
			// 
			// lbSpecialization
			// 
			this->lbSpecialization->AutoSize = true;
			this->lbSpecialization->BackColor = System::Drawing::Color::Transparent;
			this->lbSpecialization->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbSpecialization->ForeColor = System::Drawing::Color::White;
			this->lbSpecialization->Location = System::Drawing::Point(120, 54);
			this->lbSpecialization->Name = L"lbSpecialization";
			this->lbSpecialization->Size = System::Drawing::Size(87, 17);
			this->lbSpecialization->TabIndex = 38;
			this->lbSpecialization->Text = L"Specialization";
			this->lbSpecialization->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->BackColor = System::Drawing::Color::Transparent;
			this->lbName->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->lbName->ForeColor = System::Drawing::Color::White;
			this->lbName->Location = System::Drawing::Point(118, 12);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(146, 26);
			this->lbName->TabIndex = 36;
			this->lbName->Text = L"Doctor\'s Name";
			this->lbName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox7->Location = System::Drawing::Point(14, 12);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(86, 80);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 37;
			this->pictureBox7->TabStop = false;
			// 
			// DoctorPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"DoctorPanel";
			this->Size = System::Drawing::Size(430, 105);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		public:
			Doctor^ doctor = gcnew Doctor();
		public:
			void SetDoctorInfo(int id, String^ name, String^ specialization) {
				doctor->id = id;
				doctor->lastName = name;
				doctor->specialization = specialization;

				lbName->Text = name;
				lbSpecialization->Text = specialization;

			}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		BookAppointment^ appointment = gcnew BookAppointment(doctor);
		this->FindForm()->Hide();
		appointment->ShowDialog();
		this->FindForm()->Show();
	}
};
}
