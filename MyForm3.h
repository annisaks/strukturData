#pragma once

namespace cetakAntrianApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		String^ value;
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm3(String^ text) {
			InitializeComponent();
			value = text;
		};


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}












	private: System::Windows::Forms::Button^ buttonBack;
	private: System::Windows::Forms::Button^ buttonCetak;



	private: System::Windows::Forms::TextBox^ txtpilihPoli;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ txtKodePoli;


	private: System::Windows::Forms::Label^ txtNoAntrian;









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
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->buttonCetak = (gcnew System::Windows::Forms::Button());
			this->txtpilihPoli = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtKodePoli = (gcnew System::Windows::Forms::Label());
			this->txtNoAntrian = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonBack
			// 
			this->buttonBack->BackColor = System::Drawing::Color::LightSeaGreen;
			this->buttonBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBack->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBack->ForeColor = System::Drawing::Color::Azure;
			this->buttonBack->Location = System::Drawing::Point(30, 315);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(84, 29);
			this->buttonBack->TabIndex = 14;
			this->buttonBack->Text = L"Back";
			this->buttonBack->UseVisualStyleBackColor = false;
			this->buttonBack->Click += gcnew System::EventHandler(this, &MyForm3::buttonBack_Click_1);
			// 
			// buttonCetak
			// 
			this->buttonCetak->BackColor = System::Drawing::Color::LightSeaGreen;
			this->buttonCetak->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCetak->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCetak->ForeColor = System::Drawing::Color::Azure;
			this->buttonCetak->Location = System::Drawing::Point(291, 315);
			this->buttonCetak->Name = L"buttonCetak";
			this->buttonCetak->Size = System::Drawing::Size(84, 29);
			this->buttonCetak->TabIndex = 15;
			this->buttonCetak->Text = L"Cetak";
			this->buttonCetak->UseVisualStyleBackColor = false;
			this->buttonCetak->Click += gcnew System::EventHandler(this, &MyForm3::buttonCetak_Click);
			// 
			// txtpilihPoli
			// 
			this->txtpilihPoli->BackColor = System::Drawing::Color::White;
			this->txtpilihPoli->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtpilihPoli->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtpilihPoli->Location = System::Drawing::Point(105, 20);
			this->txtpilihPoli->Name = L"txtpilihPoli";
			this->txtpilihPoli->ReadOnly = true;
			this->txtpilihPoli->Size = System::Drawing::Size(261, 20);
			this->txtpilihPoli->TabIndex = 11;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(14, 47);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(351, 1);
			this->panel1->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 19);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Poli             :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 19);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Nama          :";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(12, 81);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(351, 1);
			this->panel2->TabIndex = 19;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(105, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(259, 20);
			this->textBox1->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(14, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 19);
			this->label3->TabIndex = 23;
			this->label3->Tag = L"";
			this->label3->Text = L"No. BPJS     :";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm3::label3_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(14, 119);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(351, 1);
			this->panel3->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(105, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(261, 20);
			this->textBox2->TabIndex = 21;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm3::textBox2_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->panel3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->panel2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->panel1);
			this->groupBox1->Controls->Add(this->txtpilihPoli);
			this->groupBox1->Location = System::Drawing::Point(12, 11);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(395, 137);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Data";
			// 
			// txtKodePoli
			// 
			this->txtKodePoli->AutoSize = true;
			this->txtKodePoli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtKodePoli->Location = System::Drawing::Point(127, 180);
			this->txtKodePoli->Name = L"txtKodePoli";
			this->txtKodePoli->Size = System::Drawing::Size(79, 91);
			this->txtKodePoli->TabIndex = 26;
			this->txtKodePoli->Text = L"k";
			this->txtKodePoli->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtNoAntrian
			// 
			this->txtNoAntrian->AutoSize = true;
			this->txtNoAntrian->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNoAntrian->ForeColor = System::Drawing::Color::Red;
			this->txtNoAntrian->Location = System::Drawing::Point(212, 180);
			this->txtNoAntrian->Name = L"txtNoAntrian";
			this->txtNoAntrian->Size = System::Drawing::Size(79, 91);
			this->txtNoAntrian->TabIndex = 27;
			this->txtNoAntrian->Text = L"k";
			this->txtNoAntrian->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(421, 369);
			this->Controls->Add(this->txtNoAntrian);
			this->Controls->Add(this->txtKodePoli);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->buttonCetak);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"MyForm3";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txtpilihPoli_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txtKodePoli_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm3_Load(System::Object ^ sender, System::EventArgs ^ e) {
		this->txtpilihPoli->Text = value;

		String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
		MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
		MySqlDataReader^ dataReader;
		

		if (txtpilihPoli->Text == "Dokter Umum") {
			MySqlCommand^ connCmd = gcnew MySqlCommand("select * from antrian.umum;", conn);

			try {
				conn->Open();
				dataReader = connCmd->ExecuteReader();

				while (dataReader->Read()) {
					String^ nama = dataReader->GetString("nama");
					this->textBox1->Text = nama;
					String^ bpjs = dataReader->GetString("bpjs");
					this->textBox2->Text = bpjs;
					String^ id = dataReader->GetString("id");
					this->txtNoAntrian->Text = id;
				}
				conn->Close();
			}

			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}

			this->txtKodePoli->ForeColor = System::Drawing::Color::Red;
			this->txtNoAntrian->ForeColor = System::Drawing::Color::Red;
			txtKodePoli->Text = "A";
		}
		else if (txtpilihPoli->Text == "Telinga Hidung Tenggorokan (THT)") {
			MySqlCommand^ connCmd = gcnew MySqlCommand("select * from antrian.tht;", conn);

			try {
				conn->Open();
				dataReader = connCmd->ExecuteReader();

				while (dataReader->Read()) {
					String^ nama = dataReader->GetString("nama");
					this->textBox1->Text = nama;
					String^ bpjs = dataReader->GetString("bpjs");
					this->textBox2->Text = bpjs;
					String^ id = dataReader->GetString("id");
					this->txtNoAntrian->Text = id;
				}
				conn->Close();
			}

			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}

			this->txtKodePoli->ForeColor = System::Drawing::Color::Violet;
			this->txtNoAntrian->ForeColor = System::Drawing::Color::Violet;
			txtKodePoli->Text = "B";
		}
		else if (txtpilihPoli->Text == "Ibu dan Anak") {
			MySqlCommand^ connCmd = gcnew MySqlCommand("select * from antrian.ibu_anak;", conn);

			try {
				conn->Open();
				dataReader = connCmd->ExecuteReader();

				while (dataReader->Read()) {
					String^ nama = dataReader->GetString("nama");
					this->textBox1->Text = nama;
					String^ bpjs = dataReader->GetString("bpjs");
					this->textBox2->Text = bpjs;
					String^ id = dataReader->GetString("id");
					this->txtNoAntrian->Text = id;
				}
				conn->Close();
			}

			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}

			this->txtKodePoli->ForeColor = System::Drawing::Color::Blue;
			this->txtNoAntrian->ForeColor = System::Drawing::Color::Blue;
			txtKodePoli->Text = "C";
		}
		else if (txtpilihPoli->Text == "Mata") {
			MySqlCommand^ connCmd = gcnew MySqlCommand("select * from antrian.mata;", conn);

			try {
				conn->Open();
				dataReader = connCmd->ExecuteReader();

				while (dataReader->Read()) {
					String^ nama = dataReader->GetString("nama");
					this->textBox1->Text = nama;
					String^ bpjs = dataReader->GetString("bpjs");
					this->textBox2->Text = bpjs;
					String^ id = dataReader->GetString("id");
					this->txtNoAntrian->Text = id;
				}
				conn->Close();
			}

			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}

			this->txtKodePoli->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->txtNoAntrian->ForeColor = System::Drawing::Color::LightSeaGreen;
			txtKodePoli->Text = "D";
		}
		else {
		MySqlCommand^ connCmd = gcnew MySqlCommand("select * from antrian.gigi;", conn);

		try {
			conn->Open();
			dataReader = connCmd->ExecuteReader();

			while (dataReader->Read()) {
				String^ nama = dataReader->GetString("nama");
				this->textBox1->Text = nama;
				String^ bpjs = dataReader->GetString("bpjs");
				this->textBox2->Text = bpjs;
				String^ id = dataReader->GetString("id");
				this->txtNoAntrian->Text = id;
			}
			conn->Close();
		}

		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

			this->txtKodePoli->ForeColor = System::Drawing::Color::Black;
			this->txtNoAntrian->ForeColor = System::Drawing::Color::Black;
			txtKodePoli->Text = "E";
		}

		


	}
	private: System::Void buttonDone_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) {

	}


private: System::Void buttonBack_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void buttonCetak_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nama = this->textBox1->Text;
	String^ bpjs = this->textBox2->Text;
	String^ id = this->txtNoAntrian->Text;
	String^ kode = this->txtKodePoli->Text;
	
	MessageBox::Show(nama + "\n" + bpjs + "\n\n" + kode + id);
	this->Hide();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
