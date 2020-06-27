#pragma once
#include "MyForm3.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;


namespace cetakAntrianApp {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		Form^ panel;
		MyUserControl(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyUserControl(Form^ clr)
		{
			panel = clr;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ labelNama;
	private: System::Windows::Forms::Label^ labelNoBPJS;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panelNama;
	private: System::Windows::Forms::Panel^ panelBPJS;
	private: System::Windows::Forms::ComboBox^ pilihPoli;
	private: System::Windows::Forms::Label^ labelpilihPoli;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ buttonNext;

	protected:














	protected:








	protected:


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelNama = (gcnew System::Windows::Forms::Label());
			this->labelNoBPJS = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panelNama = (gcnew System::Windows::Forms::Panel());
			this->panelBPJS = (gcnew System::Windows::Forms::Panel());
			this->pilihPoli = (gcnew System::Windows::Forms::ComboBox());
			this->labelpilihPoli = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonNext = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(489, 437);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// labelNama
			// 
			this->labelNama->AutoSize = true;
			this->labelNama->BackColor = System::Drawing::Color::White;
			this->labelNama->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNama->Location = System::Drawing::Point(172, 120);
			this->labelNama->Name = L"labelNama";
			this->labelNama->Size = System::Drawing::Size(55, 19);
			this->labelNama->TabIndex = 1;
			this->labelNama->Text = L"Nama :";
			// 
			// labelNoBPJS
			// 
			this->labelNoBPJS->AutoSize = true;
			this->labelNoBPJS->BackColor = System::Drawing::Color::White;
			this->labelNoBPJS->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNoBPJS->Location = System::Drawing::Point(174, 190);
			this->labelNoBPJS->Name = L"labelNoBPJS";
			this->labelNoBPJS->Size = System::Drawing::Size(67, 19);
			this->labelNoBPJS->TabIndex = 2;
			this->labelNoBPJS->Text = L"No BPJS :";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(176, 142);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(269, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(180, 215);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(264, 20);
			this->textBox2->TabIndex = 4;
			// 
			// panelNama
			// 
			this->panelNama->BackColor = System::Drawing::Color::DimGray;
			this->panelNama->Location = System::Drawing::Point(179, 171);
			this->panelNama->Name = L"panelNama";
			this->panelNama->Size = System::Drawing::Size(265, 1);
			this->panelNama->TabIndex = 5;
			// 
			// panelBPJS
			// 
			this->panelBPJS->BackColor = System::Drawing::Color::DimGray;
			this->panelBPJS->Location = System::Drawing::Point(178, 246);
			this->panelBPJS->Name = L"panelBPJS";
			this->panelBPJS->Size = System::Drawing::Size(265, 1);
			this->panelBPJS->TabIndex = 6;
			// 
			// pilihPoli
			// 
			this->pilihPoli->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->pilihPoli->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->pilihPoli->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pilihPoli->FormattingEnabled = true;
			this->pilihPoli->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Dokter Umum", L"Telinga Hidung Tenggorokan (THT)",
					L"Ibu dan Anak", L"Mata", L"Gigi"
			});
			this->pilihPoli->Location = System::Drawing::Point(180, 277);
			this->pilihPoli->Name = L"pilihPoli";
			this->pilihPoli->Size = System::Drawing::Size(263, 27);
			this->pilihPoli->TabIndex = 7;
			// 
			// labelpilihPoli
			// 
			this->labelpilihPoli->AutoSize = true;
			this->labelpilihPoli->BackColor = System::Drawing::Color::White;
			this->labelpilihPoli->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelpilihPoli->Location = System::Drawing::Point(179, 253);
			this->labelpilihPoli->Name = L"labelpilihPoli";
			this->labelpilihPoli->Size = System::Drawing::Size(73, 19);
			this->labelpilihPoli->TabIndex = 8;
			this->labelpilihPoli->Text = L"Pilih Poli :";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(44, 156);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(113, 105);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// buttonNext
			// 
			this->buttonNext->BackColor = System::Drawing::Color::DarkTurquoise;
			this->buttonNext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNext->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNext->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNext->Location = System::Drawing::Point(205, 310);
			this->buttonNext->Name = L"buttonNext";
			this->buttonNext->Size = System::Drawing::Size(84, 29);
			this->buttonNext->TabIndex = 10;
			this->buttonNext->Text = L"Next";
			this->buttonNext->UseVisualStyleBackColor = false;
			this->buttonNext->Click += gcnew System::EventHandler(this, &MyUserControl::buttonNext_Click);
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->buttonNext);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->labelpilihPoli);
			this->Controls->Add(this->pilihPoli);
			this->Controls->Add(this->panelBPJS);
			this->Controls->Add(this->panelNama);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->labelNoBPJS);
			this->Controls->Add(this->labelNama);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(492, 372);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void txtNoBPJS_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void buttonNext_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
			String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
			MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
			MySqlDataReader^ dataReader;

			if (this->pilihPoli->Text == "Dokter Umum") {
				MySqlCommand^ connCmd = gcnew MySqlCommand("insert into antrian.umum (nama, bpjs) values('" + this->textBox1->Text + "', '" + this->textBox2->Text + "');", conn);


				try {
					conn->Open();

					if (String::IsNullOrEmpty(this->textBox1->Text) || String::IsNullOrEmpty(this->textBox2->Text) || String::IsNullOrEmpty(this->pilihPoli->Text)) {
						MessageBox::Show("Masih ada yang kosong!!", "Error");
					}
					else {
						dataReader = connCmd->ExecuteReader();
						MyForm3^ f4 = gcnew MyForm3(this->pilihPoli->Text);
						f4->ShowDialog();
					}
					conn->Close();

				}

				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
			}

			else if (this->pilihPoli->Text == "Telinga Hidung Tenggorokan (THT)") {
				MySqlCommand^ connCmd = gcnew MySqlCommand("insert into antrian.tht (nama, bpjs) values('" + this->textBox1->Text + "', '" + this->textBox2->Text + "');", conn);


				try {
					conn->Open();

					if (String::IsNullOrEmpty(this->textBox1->Text) || String::IsNullOrEmpty(this->textBox2->Text) || String::IsNullOrEmpty(this->pilihPoli->Text)) {
						MessageBox::Show("Masih ada yang kosong!!", "Error");
					}
					else {
						dataReader = connCmd->ExecuteReader();
						MyForm3^ f4 = gcnew MyForm3(this->pilihPoli->Text);
						f4->ShowDialog();
					}
					conn->Close();

				}

				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
			}

			else if (this->pilihPoli->Text == "Ibu dan Anak") {
				MySqlCommand^ connCmd = gcnew MySqlCommand("insert into antrian.ibu_anak (nama, bpjs) values('" + this->textBox1->Text + "', '" + this->textBox2->Text + "');", conn);


				try {
					conn->Open();

					if (String::IsNullOrEmpty(this->textBox1->Text) || String::IsNullOrEmpty(this->textBox2->Text) || String::IsNullOrEmpty(this->pilihPoli->Text)) {
						MessageBox::Show("Masih ada yang kosong!!", "Error");
					}
					else {
						dataReader = connCmd->ExecuteReader();
						MyForm3^ f4 = gcnew MyForm3(this->pilihPoli->Text);
						f4->ShowDialog();
					}
					conn->Close();

				}

				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
			}

			else if (this->pilihPoli->Text == "Mata") {
				MySqlCommand^ connCmd = gcnew MySqlCommand("insert into antrian.mata (nama, bpjs) values('" + this->textBox1->Text + "', '" + this->textBox2->Text + "');", conn);


				try {
					conn->Open();

					if (String::IsNullOrEmpty(this->textBox1->Text) || String::IsNullOrEmpty(this->textBox2->Text) || String::IsNullOrEmpty(this->pilihPoli->Text)) {
						MessageBox::Show("Masih ada yang kosong!!", "Error");
					}
					else {
						dataReader = connCmd->ExecuteReader();
						MyForm3^ f4 = gcnew MyForm3(this->pilihPoli->Text);
						f4->ShowDialog();
					}
					conn->Close();

				}

				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
			}

			else {
			
					MySqlCommand^ connCmd = gcnew MySqlCommand("insert into antrian.gigi (nama, bpjs) values('" + this->textBox1->Text + "', '" + this->textBox2->Text + "');", conn);


					try {
						conn->Open();

						if (String::IsNullOrEmpty(this->textBox1->Text) || String::IsNullOrEmpty(this->textBox2->Text) || String::IsNullOrEmpty(this->pilihPoli->Text)) {
							MessageBox::Show("Masih ada yang kosong!!", "Error");
						}
						else {
							dataReader = connCmd->ExecuteReader();
							MyForm3^ f4 = gcnew MyForm3(this->pilihPoli->Text);
							f4->ShowDialog();
						}
						conn->Close();

					}

					catch (Exception^ ex) {
						MessageBox::Show(ex->Message);
					}
		
			}
			


		
	}

};
}
