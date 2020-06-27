#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace cetakAntrianApp {

	/// <summary>
	/// Summary for MyUserControl3
	/// </summary>
	public ref class MyUserControl3 : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl3(void)
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
		~MyUserControl3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureAbout;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl3::typeid));
			this->pictureAbout = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureAbout))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureAbout
			// 
			this->pictureAbout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureAbout.Image")));
			this->pictureAbout->Location = System::Drawing::Point(0, 0);
			this->pictureAbout->Name = L"pictureAbout";
			this->pictureAbout->Size = System::Drawing::Size(492, 455);
			this->pictureAbout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureAbout->TabIndex = 0;
			this->pictureAbout->TabStop = false;
			// 
			// MyUserControl3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->pictureAbout);
			this->Name = L"MyUserControl3";
			this->Size = System::Drawing::Size(492, 388);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureAbout))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
