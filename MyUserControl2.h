#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace cetakAntrianApp {

	/// <summary>
	/// Summary for MyUserControl2
	/// </summary>
	public ref class MyUserControl2 : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl2(void)
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
		~MyUserControl2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureDokter;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl2::typeid));
			this->pictureDokter = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDokter))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureDokter
			// 
			this->pictureDokter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDokter.Image")));
			this->pictureDokter->Location = System::Drawing::Point(0, 0);
			this->pictureDokter->Name = L"pictureDokter";
			this->pictureDokter->Size = System::Drawing::Size(492, 455);
			this->pictureDokter->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureDokter->TabIndex = 0;
			this->pictureDokter->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(399, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ada";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(399, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ada";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(399, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 19);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Ada";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(399, 324);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 19);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Ada";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(399, 261);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 19);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Ada";
			// 
			// MyUserControl2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureDokter);
			this->Name = L"MyUserControl2";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Size = System::Drawing::Size(492, 388);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDokter))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
