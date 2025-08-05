#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace HospitalManagement {

	/// <summary>
	/// Summary for DoctorSchedule
	/// </summary>
	public ref class DoctorSchedule : public System::Windows::Forms::UserControl
	{
	public:
		DoctorSchedule(void)
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
		~DoctorSchedule()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel6;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbTime;

	private: System::Windows::Forms::Label^ lbDay;

	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DoctorSchedule::typeid));
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->lbTime = (gcnew System::Windows::Forms::Label());
			this->lbDay = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->Controls->Add(this->lbTime);
			this->panel6->Controls->Add(this->lbDay);
			this->panel6->Controls->Add(this->label3);
			this->panel6->Controls->Add(this->button2);
			this->panel6->Controls->Add(this->label2);
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(330, 75);
			this->panel6->TabIndex = 38;
			// 
			// lbTime
			// 
			this->lbTime->BackColor = System::Drawing::Color::Transparent;
			this->lbTime->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->lbTime->ForeColor = System::Drawing::Color::White;
			this->lbTime->Location = System::Drawing::Point(90, 37);
			this->lbTime->Name = L"lbTime";
			this->lbTime->Size = System::Drawing::Size(149, 26);
			this->lbTime->TabIndex = 44;
			this->lbTime->Text = L"time";
			this->lbTime->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbDay
			// 
			this->lbDay->BackColor = System::Drawing::Color::Transparent;
			this->lbDay->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->lbDay->ForeColor = System::Drawing::Color::White;
			this->lbDay->Location = System::Drawing::Point(68, 11);
			this->lbDay->Name = L"lbDay";
			this->lbDay->Size = System::Drawing::Size(129, 26);
			this->lbDay->TabIndex = 43;
			this->lbDay->Text = L"day";
			this->lbDay->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 26);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Timing : ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(245, 34);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(76, 32);
			this->button2->TabIndex = 40;
			this->button2->Text = L"Book";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DoctorSchedule::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 26);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Day : ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DoctorSchedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel6);
			this->Name = L"DoctorSchedule";
			this->Size = System::Drawing::Size(330, 75);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		public:
			void SetSchedule(String^ day, String^ time) {
				lbDay->Text = day;
				lbTime->Text = time;
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Successfully Booked Appointment");
	}
};
}
