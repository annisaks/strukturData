#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace cetakAntrianApp {

	/// <summary>
	/// Summary for MyUserControl1
	/// </summary>
	public ref class MyUserControl1 : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl1(void)
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
		~MyUserControl1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ picturePoli;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl1::typeid));
			this->picturePoli = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePoli))->BeginInit();
			this->SuspendLayout();
			// 
			// picturePoli
			// 
			this->picturePoli->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picturePoli.Image")));
			this->picturePoli->Location = System::Drawing::Point(0, 0);
			this->picturePoli->Name = L"picturePoli";
			this->picturePoli->Size = System::Drawing::Size(492, 455);
			this->picturePoli->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picturePoli->TabIndex = 0;
			this->picturePoli->TabStop = false;
			// 
			// MyUserControl1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->picturePoli);
			this->Name = L"MyUserControl1";
			this->Size = System::Drawing::Size(492, 388);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePoli))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
