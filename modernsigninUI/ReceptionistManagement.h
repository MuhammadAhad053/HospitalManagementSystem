#pragma once

namespace HospitalManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReceptionistManagement
	/// </summary>
	public ref class ReceptionistManagement : public System::Windows::Forms::Form
	{
	public:
		ReceptionistManagement(void)
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
		~ReceptionistManagement()
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




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnAddDoctor;

















	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Button^ btnRemoveDoctor;
	private: System::Windows::Forms::Button^ btnEditDoctor;
	private: System::Windows::Forms::Button^ btnSaveChanges;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ReceptionistManagement::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btProfile = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnSaveChanges = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnEditDoctor = (gcnew System::Windows::Forms::Button());
			this->btnRemoveDoctor = (gcnew System::Windows::Forms::Button());
			this->btnAddDoctor = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->label9->Location = System::Drawing::Point(507, 24);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(325, 33);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Receptionist Management";
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
			this->btProfile->Click += gcnew System::EventHandler(this, &ReceptionistManagement::btProfile_Click);
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
			this->panel2->Controls->Add(this->btnSaveChanges);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->btnEditDoctor);
			this->panel2->Controls->Add(this->btnRemoveDoctor);
			this->panel2->Controls->Add(this->btnAddDoctor);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 70);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1264, 611);
			this->panel2->TabIndex = 0;
			// 
			// btnSaveChanges
			// 
			this->btnSaveChanges->BackColor = System::Drawing::Color::Transparent;
			this->btnSaveChanges->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->btnSaveChanges->FlatAppearance->BorderSize = 2;
			this->btnSaveChanges->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnSaveChanges->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->btnSaveChanges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveChanges->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->btnSaveChanges->ForeColor = System::Drawing::Color::White;
			this->btnSaveChanges->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSaveChanges.Image")));
			this->btnSaveChanges->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSaveChanges->Location = System::Drawing::Point(36, 452);
			this->btnSaveChanges->Name = L"btnSaveChanges";
			this->btnSaveChanges->Size = System::Drawing::Size(352, 61);
			this->btnSaveChanges->TabIndex = 13;
			this->btnSaveChanges->Text = L"Save Changes";
			this->btnSaveChanges->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(437, 83);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(796, 482);
			this->dataGridView1->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(431, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(283, 32);
			this->label3->TabIndex = 7;
			this->label3->Text = L"List of all Receptionists ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(28, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 43);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Actions ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btnEditDoctor
			// 
			this->btnEditDoctor->BackColor = System::Drawing::Color::Transparent;
			this->btnEditDoctor->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->btnEditDoctor->FlatAppearance->BorderSize = 2;
			this->btnEditDoctor->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnEditDoctor->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->btnEditDoctor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditDoctor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->btnEditDoctor->ForeColor = System::Drawing::Color::White;
			this->btnEditDoctor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditDoctor.Image")));
			this->btnEditDoctor->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEditDoctor->Location = System::Drawing::Point(36, 352);
			this->btnEditDoctor->Name = L"btnEditDoctor";
			this->btnEditDoctor->Size = System::Drawing::Size(352, 61);
			this->btnEditDoctor->TabIndex = 12;
			this->btnEditDoctor->Text = L"Edit a Receptionist";
			this->btnEditDoctor->UseVisualStyleBackColor = false;
			// 
			// btnRemoveDoctor
			// 
			this->btnRemoveDoctor->BackColor = System::Drawing::Color::Transparent;
			this->btnRemoveDoctor->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->btnRemoveDoctor->FlatAppearance->BorderSize = 2;
			this->btnRemoveDoctor->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnRemoveDoctor->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->btnRemoveDoctor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRemoveDoctor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->btnRemoveDoctor->ForeColor = System::Drawing::Color::White;
			this->btnRemoveDoctor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRemoveDoctor.Image")));
			this->btnRemoveDoctor->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRemoveDoctor->Location = System::Drawing::Point(36, 252);
			this->btnRemoveDoctor->Name = L"btnRemoveDoctor";
			this->btnRemoveDoctor->Size = System::Drawing::Size(352, 61);
			this->btnRemoveDoctor->TabIndex = 11;
			this->btnRemoveDoctor->Text = L"Remove a Receptionist";
			this->btnRemoveDoctor->UseVisualStyleBackColor = false;
			// 
			// btnAddDoctor
			// 
			this->btnAddDoctor->BackColor = System::Drawing::Color::Transparent;
			this->btnAddDoctor->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->btnAddDoctor->FlatAppearance->BorderSize = 2;
			this->btnAddDoctor->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnAddDoctor->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->btnAddDoctor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddDoctor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->btnAddDoctor->ForeColor = System::Drawing::Color::White;
			this->btnAddDoctor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddDoctor.Image")));
			this->btnAddDoctor->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAddDoctor->Location = System::Drawing::Point(36, 152);
			this->btnAddDoctor->Name = L"btnAddDoctor";
			this->btnAddDoctor->Size = System::Drawing::Size(352, 61);
			this->btnAddDoctor->TabIndex = 9;
			this->btnAddDoctor->Text = L"Add a Receptionist";
			this->btnAddDoctor->UseVisualStyleBackColor = false;
			// 
			// ReceptionistManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"ReceptionistManagement";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ReceptionistManagement";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btProfile_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}



	};
}