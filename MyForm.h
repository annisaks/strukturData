#pragma once
#include "MyUserControl.h"
#include "MyUserControl1.h"
#include "MyUserControl2.h"
#include "MyUserControl3.h"


namespace cetakAntrianApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		
	public:
		MyForm(void)
		{
			InitializeComponent();
			Timer->Start();

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ buttonHome;
	private: System::Windows::Forms::Button^ buttonDokter;
	private: System::Windows::Forms::Button^ buttonPoli;
	private: System::Windows::Forms::Button^ buttonAbout;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Timer^ Timer;
	private: System::Windows::Forms::Label^ label1;



	private: System::ComponentModel::IContainer^ components;

	protected:






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonHome = (gcnew System::Windows::Forms::Button());
			this->buttonDokter = (gcnew System::Windows::Forms::Button());
			this->buttonPoli = (gcnew System::Windows::Forms::Button());
			this->buttonAbout = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(747, 513);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Location = System::Drawing::Point(215, 115);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(492, 388);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(492, 398);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// buttonHome
			// 
			this->buttonHome->BackColor = System::Drawing::Color::LightSeaGreen;
			this->buttonHome->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonHome->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonHome->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonHome->Location = System::Drawing::Point(51, 204);
			this->buttonHome->Name = L"buttonHome";
			this->buttonHome->Size = System::Drawing::Size(101, 35);
			this->buttonHome->TabIndex = 2;
			this->buttonHome->Text = L"Home";
			this->buttonHome->UseVisualStyleBackColor = false;
			this->buttonHome->Click += gcnew System::EventHandler(this, &MyForm::buttonHome_Click);
			// 
			// buttonDokter
			// 
			this->buttonDokter->BackColor = System::Drawing::Color::LightSeaGreen;
			this->buttonDokter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDokter->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDokter->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonDokter->Location = System::Drawing::Point(51, 309);
			this->buttonDokter->Name = L"buttonDokter";
			this->buttonDokter->Size = System::Drawing::Size(101, 35);
			this->buttonDokter->TabIndex = 2;
			this->buttonDokter->Text = L"Dokter";
			this->buttonDokter->UseVisualStyleBackColor = false;
			this->buttonDokter->Click += gcnew System::EventHandler(this, &MyForm::buttonDokter_Click);
			// 
			// buttonPoli
			// 
			this->buttonPoli->BackColor = System::Drawing::Color::LightSeaGreen;
			this->buttonPoli->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPoli->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPoli->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonPoli->Location = System::Drawing::Point(51, 255);
			this->buttonPoli->Name = L"buttonPoli";
			this->buttonPoli->Size = System::Drawing::Size(101, 35);
			this->buttonPoli->TabIndex = 2;
			this->buttonPoli->Text = L"Poli";
			this->buttonPoli->UseVisualStyleBackColor = false;
			this->buttonPoli->Click += gcnew System::EventHandler(this, &MyForm::buttonPoli_Click_1);
			// 
			// buttonAbout
			// 
			this->buttonAbout->BackColor = System::Drawing::Color::LightSeaGreen;
			this->buttonAbout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAbout->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAbout->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAbout->Location = System::Drawing::Point(51, 360);
			this->buttonAbout->Name = L"buttonAbout";
			this->buttonAbout->Size = System::Drawing::Size(101, 35);
			this->buttonAbout->TabIndex = 2;
			this->buttonAbout->Text = L"About";
			this->buttonAbout->UseVisualStyleBackColor = false;
			this->buttonAbout->Click += gcnew System::EventHandler(this, &MyForm::buttonAbout_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::LightSeaGreen;
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_exit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_exit->Location = System::Drawing::Point(51, 411);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(101, 35);
			this->btn_exit->TabIndex = 3;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
			// 
			// Timer
			// 
			this->Timer->Enabled = true;
			this->Timer->Interval = 1000;
			this->Timer->Tick += gcnew System::EventHandler(this, &MyForm::Timer_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(613, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 36);
			this->label1->TabIndex = 4;
			this->label1->Text = L"0:0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 506);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->buttonAbout);
			this->Controls->Add(this->buttonPoli);
			this->Controls->Add(this->buttonDokter);
			this->Controls->Add(this->buttonHome);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void buttonHome_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel1->Controls->Clear();
		this->panel1->Controls->Add(gcnew MyUserControl);
	}
	private: System::Void buttonDokter_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel1->Controls->Clear();
		this->panel1->Controls->Add(gcnew MyUserControl2);
	}

	private: System::Void buttonAbout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel1->Controls->Clear();
		this->panel1->Controls->Add(gcnew MyUserControl3);
}
	private: System::Void buttonPoli_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->panel1->Controls->Clear();
		this->panel1->Controls->Add(gcnew MyUserControl1);
	}
	
private: System::Void labelTime_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlDataReader^ dataReader;
	MySqlCommand^ connCmd = gcnew MySqlCommand("CREATE database antrian; CREATE TABLE antrian.umum (id INT NOT NULL AUTO_INCREMENT,nama VARCHAR(30), bpjs varchar(30), PRIMARY KEY(id)); CREATE TABLE antrian.tht (id INT NOT NULL AUTO_INCREMENT,nama VARCHAR(30), bpjs varchar(30), PRIMARY KEY(id)); CREATE TABLE antrian.mata (id INT NOT NULL AUTO_INCREMENT,nama VARCHAR(30), bpjs varchar(30), PRIMARY KEY(id)); CREATE TABLE antrian.ibu_anak (id INT NOT NULL AUTO_INCREMENT,nama VARCHAR(30), bpjs varchar(30), PRIMARY KEY(id)); CREATE TABLE antrian.gigi (id INT NOT NULL AUTO_INCREMENT,nama VARCHAR(30), bpjs varchar(30), PRIMARY KEY(id));", conn);

	try {
		conn->Open();
		dataReader = connCmd->ExecuteReader();
		conn->Close();
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

	this->panel1->Controls->Add(gcnew MyUserControl);
}
private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlDataReader^ dataReader;
	MySqlCommand^ connCmd = gcnew MySqlCommand("drop database antrian;", conn);

		try {
			conn->Open();
			dataReader = connCmd->ExecuteReader();
			conn->Close();
		}

		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	Application::Exit();
}
	private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		DateTime^ datetime = DateTime::Now;
		this->label1->Text = datetime->ToShortTimeString();
	}
};
}
