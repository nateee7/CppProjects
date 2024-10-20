#pragma once
#include "MainArabic.h"
#include "Main.h"
#include "ChineseForm.h"
#include "PolishForm.h"
#include "SpanishForm.h"

namespace KataTraining {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
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
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_start_arabic;
	private: System::Windows::Forms::Button^ btn_start_japanese;
	private: System::Windows::Forms::Button^ btn_start_spanish;
	private: System::Windows::Forms::Button^ btn_start_chinese;
	private: System::Windows::Forms::Button^ btn_start_polish;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RichTextBox^ greetings_tb;



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
			this->btn_start_arabic = (gcnew System::Windows::Forms::Button());
			this->btn_start_japanese = (gcnew System::Windows::Forms::Button());
			this->btn_start_spanish = (gcnew System::Windows::Forms::Button());
			this->btn_start_chinese = (gcnew System::Windows::Forms::Button());
			this->btn_start_polish = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->greetings_tb = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_start_arabic
			// 
			this->btn_start_arabic->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_start_arabic->Location = System::Drawing::Point(6, 19);
			this->btn_start_arabic->Name = L"btn_start_arabic";
			this->btn_start_arabic->Size = System::Drawing::Size(130, 41);
			this->btn_start_arabic->TabIndex = 0;
			this->btn_start_arabic->Text = L"Arabic";
			this->btn_start_arabic->UseVisualStyleBackColor = true;
			this->btn_start_arabic->Click += gcnew System::EventHandler(this, &MenuForm::btn_start_arabic_Click);
			// 
			// btn_start_japanese
			// 
			this->btn_start_japanese->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_start_japanese->Location = System::Drawing::Point(142, 19);
			this->btn_start_japanese->Name = L"btn_start_japanese";
			this->btn_start_japanese->Size = System::Drawing::Size(130, 41);
			this->btn_start_japanese->TabIndex = 0;
			this->btn_start_japanese->Text = L"Japanese";
			this->btn_start_japanese->UseVisualStyleBackColor = true;
			this->btn_start_japanese->Click += gcnew System::EventHandler(this, &MenuForm::btn_start_japanese_Click);
			// 
			// btn_start_spanish
			// 
			this->btn_start_spanish->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_start_spanish->Location = System::Drawing::Point(278, 19);
			this->btn_start_spanish->Name = L"btn_start_spanish";
			this->btn_start_spanish->Size = System::Drawing::Size(130, 41);
			this->btn_start_spanish->TabIndex = 0;
			this->btn_start_spanish->Text = L"Spanish";
			this->btn_start_spanish->UseVisualStyleBackColor = true;
			this->btn_start_spanish->Click += gcnew System::EventHandler(this, &MenuForm::btn_start_spanish_Click);
			// 
			// btn_start_chinese
			// 
			this->btn_start_chinese->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_start_chinese->Location = System::Drawing::Point(6, 66);
			this->btn_start_chinese->Name = L"btn_start_chinese";
			this->btn_start_chinese->Size = System::Drawing::Size(130, 41);
			this->btn_start_chinese->TabIndex = 0;
			this->btn_start_chinese->Text = L"Chinese";
			this->btn_start_chinese->UseVisualStyleBackColor = true;
			this->btn_start_chinese->Click += gcnew System::EventHandler(this, &MenuForm::btn_start_chinese_Click);
			// 
			// btn_start_polish
			// 
			this->btn_start_polish->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_start_polish->Location = System::Drawing::Point(142, 66);
			this->btn_start_polish->Name = L"btn_start_polish";
			this->btn_start_polish->Size = System::Drawing::Size(130, 41);
			this->btn_start_polish->TabIndex = 0;
			this->btn_start_polish->Text = L"Polish";
			this->btn_start_polish->UseVisualStyleBackColor = true;
			this->btn_start_polish->Click += gcnew System::EventHandler(this, &MenuForm::btn_start_polish_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_start_arabic);
			this->groupBox1->Controls->Add(this->btn_start_polish);
			this->groupBox1->Controls->Add(this->btn_start_japanese);
			this->groupBox1->Controls->Add(this->btn_start_chinese);
			this->groupBox1->Controls->Add(this->btn_start_spanish);
			this->groupBox1->Location = System::Drawing::Point(0, 78);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(416, 116);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// greetings_tb
			// 
			this->greetings_tb->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->greetings_tb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->greetings_tb->Enabled = false;
			this->greetings_tb->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F));
			this->greetings_tb->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->greetings_tb->Location = System::Drawing::Point(0, 0);
			this->greetings_tb->Name = L"greetings_tb";
			this->greetings_tb->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->greetings_tb->Size = System::Drawing::Size(416, 72);
			this->greetings_tb->TabIndex = 2;
			this->greetings_tb->TabStop = false;
			this->greetings_tb->Text = L"";
			this->greetings_tb->ZoomFactor = 2;
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(422, 202);
			this->Controls->Add(this->greetings_tb);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MenuForm";
			this->Text = L"Choose your language wisely!";
			this->Load += gcnew System::EventHandler(this, &MenuForm::MenuForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	protected: Generic::List<String^>^ greetings_strings = gcnew Generic::List<String^>();
	protected: System::Void SetGreetings() {
		greetings_strings = gcnew Generic::List<String^>();
		greetings_strings->Add("Welcome back!");
		greetings_strings->Add("...");
		greetings_strings->Add("Why are you reading this?");
		greetings_strings->Add("Beeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee");
		greetings_strings->Add("I know whatcha doin' with dose hands ma man");
		greetings_strings->Add("Let's spend several minutes trying being better!");
		greetings_strings->Add("yeah... we're back again");
		//greetings_strings->Add("");
	}

	protected: System::Void SetVars() {
		SetGreetings();
	}
	private: System::Void MenuForm_Load(System::Object^ sender, System::EventArgs^ e) {
		SetVars();

		Random^ rnd = gcnew Random();
		greetings_tb->Text = greetings_strings[rnd->Next(0, greetings_strings->Count)];
	}
	private: System::Void btn_start_arabic_Click(System::Object^ sender, System::EventArgs^ e) {
		MainArabic^ arabic = gcnew MainArabic();
		arabic->Show();
	}
	private: System::Void btn_start_japanese_Click(System::Object^ sender, System::EventArgs^ e) {
		Main^ jap = gcnew Main();
		jap->Show();
	}
	private: System::Void btn_start_spanish_Click(System::Object^ sender, System::EventArgs^ e) {
		SpanishForm^ spanish = gcnew SpanishForm();
		spanish->Show();
	}
	private: System::Void btn_start_chinese_Click(System::Object^ sender, System::EventArgs^ e) {
		ChineseForm^ chinese = gcnew ChineseForm();
		chinese->Show();
	}
	private: System::Void btn_start_polish_Click(System::Object^ sender, System::EventArgs^ e) {
		PolishForm^ polish = gcnew PolishForm();
		polish->Show();
	}
};
}
