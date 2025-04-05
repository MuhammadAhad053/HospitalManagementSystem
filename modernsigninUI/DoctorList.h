#pragma once

namespace HospitalManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for DoctorList
	/// </summary>
	public ref class DoctorList : public System::Windows::Forms::Form
	{
	public:
		DoctorList(void)
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
		~DoctorList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnEdit;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnRemove;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::Button^ btnBack;



	private: System::Windows::Forms::Panel^ gradPanelBig;








	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataView;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DoctorList::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->gradPanelBig = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataView = (gcnew System::Windows::Forms::DataGridView());
			this->gradPanelBig->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataView))->BeginInit();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(939, 155);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 21);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Save Changes";
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::Transparent;
			this->btnSave->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSave.BackgroundImage")));
			this->btnSave->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnSave->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnSave->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnSave->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->Location = System::Drawing::Point(957, 86);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(70, 66);
			this->btnSave->TabIndex = 25;
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &DoctorList::btnSave_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(758, 155);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 21);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Edit Doctor";
			// 
			// btnEdit
			// 
			this->btnEdit->BackColor = System::Drawing::Color::Transparent;
			this->btnEdit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEdit.BackgroundImage")));
			this->btnEdit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnEdit->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnEdit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnEdit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEdit->Location = System::Drawing::Point(775, 86);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(70, 66);
			this->btnEdit->TabIndex = 23;
			this->btnEdit->UseVisualStyleBackColor = false;
			this->btnEdit->Click += gcnew System::EventHandler(this, &DoctorList::btnEdit_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(539, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 21);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Remove Doctor";
			// 
			// btnRemove
			// 
			this->btnRemove->BackColor = System::Drawing::Color::Transparent;
			this->btnRemove->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRemove.BackgroundImage")));
			this->btnRemove->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnRemove->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnRemove->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnRemove->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnRemove->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRemove->Location = System::Drawing::Point(561, 86);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(70, 66);
			this->btnRemove->TabIndex = 21;
			this->btnRemove->UseVisualStyleBackColor = false;
			this->btnRemove->Click += gcnew System::EventHandler(this, &DoctorList::btnRemove_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(341, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 21);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Add Doctor";
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::Transparent;
			this->btnAdd->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.BackgroundImage")));
			this->btnAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnAdd->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnAdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnAdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Location = System::Drawing::Point(345, 86);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(70, 66);
			this->btnAdd->TabIndex = 19;
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &DoctorList::btnAdd_Click);
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::Transparent;
			this->btnBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack.BackgroundImage")));
			this->btnBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnBack->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnBack->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnBack->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Location = System::Drawing::Point(11, 12);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(47, 42);
			this->btnBack->TabIndex = 9;
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &DoctorList::btnBack_Click);
			// 
			// gradPanelBig
			// 
			this->gradPanelBig->BackColor = System::Drawing::Color::Transparent;
			this->gradPanelBig->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gradPanelBig.BackgroundImage")));
			this->gradPanelBig->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gradPanelBig->Controls->Add(this->label6);
			this->gradPanelBig->Controls->Add(this->panel2);
			this->gradPanelBig->Controls->Add(this->label5);
			this->gradPanelBig->Controls->Add(this->btnSave);
			this->gradPanelBig->Controls->Add(this->label1);
			this->gradPanelBig->Controls->Add(this->label3);
			this->gradPanelBig->Controls->Add(this->btnEdit);
			this->gradPanelBig->Controls->Add(this->btnRemove);
			this->gradPanelBig->Controls->Add(this->btnAdd);
			this->gradPanelBig->Controls->Add(this->dataView);
			this->gradPanelBig->Dock = System::Windows::Forms::DockStyle::Right;
			this->gradPanelBig->Location = System::Drawing::Point(-52, 0);
			this->gradPanelBig->Name = L"gradPanelBig";
			this->gradPanelBig->Size = System::Drawing::Size(1316, 681);
			this->gradPanelBig->TabIndex = 27;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel2->Controls->Add(this->btnBack);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(53, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1264, 70);
			this->panel2->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18.25F, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(520, 21);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(187, 33);
			this->label11->TabIndex = 8;
			this->label11->Text = L"List of Doctors";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Light", 10));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label12->Location = System::Drawing::Point(1159, 35);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 19);
			this->label12->TabIndex = 4;
			this->label12->Text = L"HMS\r\n";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(1193, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(58, 45);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// dataView
			// 
			this->dataView->AllowUserToAddRows = false;
			this->dataView->AllowUserToDeleteRows = false;
			this->dataView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->dataView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataView->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataView->Location = System::Drawing::Point(53, 193);
			this->dataView->Name = L"dataView";
			this->dataView->ReadOnly = true;
			this->dataView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataView->Size = System::Drawing::Size(1263, 488);
			this->dataView->TabIndex = 0;
			// 
			// DoctorList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->gradPanelBig);
			this->Name = L"DoctorList";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DoctorList";
			this->Load += gcnew System::EventHandler(this, &DoctorList::DoctorList_Load);
			this->gradPanelBig->ResumeLayout(false);
			this->gradPanelBig->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=test;Integrated Security=True;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		SqlDataAdapter^ adapter;
		DataTable^ table;

		void LoadData() {
			sqlConn->Open();
			adapter = gcnew SqlDataAdapter("SELECT * FROM Doctor", sqlConn);
			SqlCommandBuilder^ builder = gcnew SqlCommandBuilder(adapter);

			table = gcnew DataTable();
			adapter->Fill(table);
			dataView->DataSource = table;

			sqlConn->Close();
		}
	private: System::Void DoctorList_Load(System::Object^ sender, System::EventArgs^ e) {

		dataView->EnableHeadersVisualStyles = false;

		dataView->ColumnHeadersDefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(86, 206, 222);
		dataView->ColumnHeadersDefaultCellStyle->ForeColor = System::Drawing::Color::Black;
		dataView->ColumnHeadersDefaultCellStyle->Font = gcnew System::Drawing::Font("Segoe UI", 10, System::Drawing::FontStyle::Italic);

		dataView->RowHeadersDefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(86, 206, 222);
		dataView->RowHeadersDefaultCellStyle->ForeColor = System::Drawing::Color::Black;

		dataView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		dataView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;

		try {
			LoadData();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to Connect to DataBase",
				"Could'nt Conect", MessageBoxButtons::OK);
		}
	}

	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		dataView->ReadOnly = false;
		dataView->AllowUserToAddRows = true;
	}

	private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataView->SelectedRows->Count > 0) {
			for each (DataGridViewRow ^ row in dataView->SelectedRows) {
				dataView->Rows->Remove(row);
			}
		}
		else
			MessageBox::Show("Select atleast one row");
	}

	private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataView->SelectedRows->Count == 1) {
			dataView->ReadOnly = false;
			dataView->BeginEdit(true);
		}
		else
			MessageBox::Show("Select only 1 row");
	}

	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlCommandBuilder^ builder = gcnew SqlCommandBuilder(adapter);
		adapter->Update(table);
		MessageBox::Show("Changes saved to database.");
		dataView->ReadOnly = true;
		dataView->AllowUserToAddRows = false;
		LoadData();
	}
};
}
