#pragma once
#include "ArabicLetters.h"
#include "ArabicLettersLayoutHelp.h"
#include <windows.h>
//#include System

namespace KataTraining {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MainArabic
	/// </summary>
	public ref class MainArabic : public System::Windows::Forms::Form
	{
	public:
		MainArabic(void)
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
		~MainArabic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ cb1;
	private: System::Windows::Forms::CheckBox^ cb5;

	private: System::Windows::Forms::CheckBox^ cb6;

	private: System::Windows::Forms::CheckBox^ cb4;

	private: System::Windows::Forms::CheckBox^ cb3;

	private: System::Windows::Forms::CheckBox^ cb2;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::CheckBox^ cb12;
	private: System::Windows::Forms::CheckBox^ cb11;
	private: System::Windows::Forms::CheckBox^ cb10;


	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ cb9;
	private: System::Windows::Forms::RadioButton^ cb8;
	private: System::Windows::Forms::RadioButton^ cb7;
	private: System::Windows::Forms::TextBox^ tb2;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ nud1;
	private: System::Windows::Forms::TextBox^ tb1;




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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->tb2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nud1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->cb9 = (gcnew System::Windows::Forms::RadioButton());
			this->cb8 = (gcnew System::Windows::Forms::RadioButton());
			this->cb7 = (gcnew System::Windows::Forms::RadioButton());
			this->cb12 = (gcnew System::Windows::Forms::CheckBox());
			this->cb11 = (gcnew System::Windows::Forms::CheckBox());
			this->cb10 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cb5 = (gcnew System::Windows::Forms::CheckBox());
			this->cb6 = (gcnew System::Windows::Forms::CheckBox());
			this->cb4 = (gcnew System::Windows::Forms::CheckBox());
			this->cb3 = (gcnew System::Windows::Forms::CheckBox());
			this->cb2 = (gcnew System::Windows::Forms::CheckBox());
			this->cb1 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(500, 556);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tb1);
			this->tabPage1->Controls->Add(this->tb2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(492, 530);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Training";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tb1
			// 
			this->tb1->Location = System::Drawing::Point(37, 66);
			this->tb1->Name = L"tb1";
			this->tb1->ReadOnly = true;
			this->tb1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->tb1->Size = System::Drawing::Size(100, 20);
			this->tb1->TabIndex = 1;
			// 
			// tb2
			// 
			this->tb2->Location = System::Drawing::Point(181, 66);
			this->tb2->Name = L"tb2";
			this->tb2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->tb2->Size = System::Drawing::Size(100, 20);
			this->tb2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(250, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(242, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Проверь все данные на соответствие правде!";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(492, 530);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Settings";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->nud1);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->cb12);
			this->groupBox2->Controls->Add(this->cb11);
			this->groupBox2->Controls->Add(this->cb10);
			this->groupBox2->Location = System::Drawing::Point(234, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(250, 351);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Symbols amount";
			// 
			// nud1
			// 
			this->nud1->Location = System::Drawing::Point(96, 164);
			this->nud1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->nud1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nud1->Name = L"nud1";
			this->nud1->Size = System::Drawing::Size(77, 20);
			this->nud1->TabIndex = 11;
			this->nud1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nud1->ValueChanged += gcnew System::EventHandler(this, &MainArabic::CheckedChangedArabic);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->cb9);
			this->groupBox3->Controls->Add(this->cb8);
			this->groupBox3->Controls->Add(this->cb7);
			this->groupBox3->Location = System::Drawing::Point(0, 0);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 82);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			// 
			// cb9
			// 
			this->cb9->AutoSize = true;
			this->cb9->Location = System::Drawing::Point(6, 58);
			this->cb9->Name = L"cb9";
			this->cb9->Size = System::Drawing::Size(43, 17);
			this->cb9->TabIndex = 11;
			this->cb9->Text = L"cb9";
			this->cb9->UseVisualStyleBackColor = true;
			this->cb9->CheckedChanged += gcnew System::EventHandler(this, &MainArabic::CheckedChangedArabic);
			// 
			// cb8
			// 
			this->cb8->AutoSize = true;
			this->cb8->Location = System::Drawing::Point(6, 39);
			this->cb8->Name = L"cb8";
			this->cb8->Size = System::Drawing::Size(43, 17);
			this->cb8->TabIndex = 11;
			this->cb8->Text = L"cb8";
			this->cb8->UseVisualStyleBackColor = true;
			this->cb8->CheckedChanged += gcnew System::EventHandler(this, &MainArabic::CheckedChangedArabic);
			// 
			// cb7
			// 
			this->cb7->AutoSize = true;
			this->cb7->Checked = true;
			this->cb7->Location = System::Drawing::Point(6, 18);
			this->cb7->Name = L"cb7";
			this->cb7->Size = System::Drawing::Size(43, 17);
			this->cb7->TabIndex = 11;
			this->cb7->TabStop = true;
			this->cb7->Text = L"cb7";
			this->cb7->UseVisualStyleBackColor = true;
			this->cb7->CheckedChanged += gcnew System::EventHandler(this, &MainArabic::CheckedChangedArabic);
			// 
			// cb12
			// 
			this->cb12->AutoSize = true;
			this->cb12->Location = System::Drawing::Point(6, 134);
			this->cb12->Name = L"cb12";
			this->cb12->Size = System::Drawing::Size(50, 17);
			this->cb12->TabIndex = 7;
			this->cb12->Text = L"cb12";
			this->cb12->UseVisualStyleBackColor = true;
			this->cb12->CheckedChanged += gcnew System::EventHandler(this, &MainArabic::CheckedChangedArabic);
			// 
			// cb11
			// 
			this->cb11->AutoSize = true;
			this->cb11->Location = System::Drawing::Point(6, 111);
			this->cb11->Name = L"cb11";
			this->cb11->Size = System::Drawing::Size(50, 17);
			this->cb11->TabIndex = 8;
			this->cb11->Text = L"cb11";
			this->cb11->UseVisualStyleBackColor = true;
			this->cb11->CheckedChanged += gcnew System::EventHandler(this, &MainArabic::CheckedChangedArabic);
			// 
			// cb10
			// 
			this->cb10->AutoSize = true;
			this->cb10->Location = System::Drawing::Point(6, 88);
			this->cb10->Name = L"cb10";
			this->cb10->Size = System::Drawing::Size(50, 17);
			this->cb10->TabIndex = 9;
			this->cb10->Text = L"cb10";
			this->cb10->UseVisualStyleBackColor = true;
			this->cb10->CheckedChanged += gcnew System::EventHandler(this, &MainArabic::CheckedChangedArabic);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cb5);
			this->groupBox1->Controls->Add(this->cb6);
			this->groupBox1->Controls->Add(this->cb4);
			this->groupBox1->Controls->Add(this->cb3);
			this->groupBox1->Controls->Add(this->cb2);
			this->groupBox1->Controls->Add(this->cb1);
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(218, 351);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// cb5
			// 
			this->cb5->AutoSize = true;
			this->cb5->Location = System::Drawing::Point(6, 111);
			this->cb5->Name = L"cb5";
			this->cb5->Size = System::Drawing::Size(49, 17);
			this->cb5->TabIndex = 4;
			this->cb5->Text = L"cb [i]";
			this->cb5->UseVisualStyleBackColor = true;
			this->cb5->CheckedChanged += gcnew System::EventHandler(this, &MainArabic::CheckedChangedArabic);
			// 
			// cb6
			// 
			this->cb6->AutoSize = true;
			this->cb6->Location = System::Drawing::Point(6, 134);
			this->cb6->Name = L"cb6";
			this->cb6->Size = System::Drawing::Size(49, 17);
			this->cb6->TabIndex = 5;
			this->cb6->Text = L"cb [i]";
			this->cb6->UseVisualStyleBackColor = true;
			this->cb6->CheckedChanged += gcnew System::EventHandler(this, &MainArabic::CheckedChangedArabic);
			// 
			// cb4
			// 
			this->cb4->AutoSize = true;
			this->cb4->Location = System::Drawing::Point(6, 88);
			this->cb4->Name = L"cb4";
			this->cb4->Size = System::Drawing::Size(49, 17);
			this->cb4->TabIndex = 2;
			this->cb4->Text = L"cb [i]";
			this->cb4->UseVisualStyleBackColor = true;
			this->cb4->CheckedChanged += gcnew System::EventHandler(this, &MainArabic::CheckedChangedArabic);
			// 
			// cb3
			// 
			this->cb3->AutoSize = true;
			this->cb3->Location = System::Drawing::Point(6, 65);
			this->cb3->Name = L"cb3";
			this->cb3->Size = System::Drawing::Size(49, 17);
			this->cb3->TabIndex = 3;
			this->cb3->Text = L"cb [i]";
			this->cb3->UseVisualStyleBackColor = true;
			this->cb3->CheckedChanged += gcnew System::EventHandler(this, &MainArabic::CheckedChangedArabic);
			// 
			// cb2
			// 
			this->cb2->AutoSize = true;
			this->cb2->Location = System::Drawing::Point(6, 42);
			this->cb2->Name = L"cb2";
			this->cb2->Size = System::Drawing::Size(49, 17);
			this->cb2->TabIndex = 1;
			this->cb2->Text = L"cb [i]";
			this->cb2->UseVisualStyleBackColor = true;
			this->cb2->CheckedChanged += gcnew System::EventHandler(this, &MainArabic::CheckedChangedArabic);
			// 
			// cb1
			// 
			this->cb1->AutoSize = true;
			this->cb1->Location = System::Drawing::Point(6, 19);
			this->cb1->Name = L"cb1";
			this->cb1->Size = System::Drawing::Size(49, 17);
			this->cb1->TabIndex = 1;
			this->cb1->Text = L"cb [i]";
			this->cb1->UseVisualStyleBackColor = true;
			this->cb1->CheckedChanged += gcnew System::EventHandler(this, &MainArabic::CheckedChangedArabic);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(110, 485);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(185, 37);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Show keyboard layout";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainArabic::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(301, 485);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Show letters";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainArabic::button1_Click);
			// 
			// MainArabic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 556);
			this->Controls->Add(this->tabControl1);
			this->KeyPreview = true;
			this->MinimumSize = System::Drawing::Size(516, 95);
			this->Name = L"MainArabic";
			this->Text = L"Arabic training";
			this->Load += gcnew System::EventHandler(this, &MainArabic::MainArabic_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainArabic::MainArabic_KeyDown_1);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}

		Generic::List<Generic::List<String^>^>^ arabicLetters, ^ arabicLettersSymbols, ^ arabicLettersSymbolsVariations;
		Generic::List<bool>^ symbolsUsing = gcnew Generic::List<bool>(29);
		int trainingMode = 0;	// 0_letters,   1_variations,    2_vowels
		int symbolsAmount = 0;
		String^ next = "", ^ input = "", ^ answer = "";
		int stepCnt = 0, stepAmount = 2;


#pragma endregion
	private: System::Void MainArabic_Load(System::Object^ sender, System::EventArgs^ e) {
		PrepareLetters();
		for (int i = 0; i < 29; i++)
			symbolsUsing->Add(true);
		cb1->Text = arabicLetters->ToArray()[0][0] + ", " + arabicLetters->ToArray()[0][1] + ", " + arabicLetters->ToArray()[0][2] + ", " + arabicLetters->ToArray()[0][3] + ", " + arabicLetters->ToArray()[0][4];
		cb2->Text = arabicLetters->ToArray()[1][0] + ", " + arabicLetters->ToArray()[1][1] + ", " + arabicLetters->ToArray()[1][2] + ", " + arabicLetters->ToArray()[1][3] + ", " + arabicLetters->ToArray()[1][4];
		cb3->Text = arabicLetters->ToArray()[2][0] + ", " + arabicLetters->ToArray()[2][1] + ", " + arabicLetters->ToArray()[2][2] + ", " + arabicLetters->ToArray()[2][3] + ", " + arabicLetters->ToArray()[2][4];
		cb4->Text = arabicLetters->ToArray()[3][0] + ", " + arabicLetters->ToArray()[3][1] + ", " + arabicLetters->ToArray()[3][2] + ", " + arabicLetters->ToArray()[3][3] + ", " + arabicLetters->ToArray()[3][4];
		cb5->Text = arabicLetters->ToArray()[4][0] + ", " + arabicLetters->ToArray()[4][1] + ", " + arabicLetters->ToArray()[4][2] + ", " + arabicLetters->ToArray()[4][3] + ", " + arabicLetters->ToArray()[4][4];
		cb6->Text = arabicLetters->ToArray()[5][1] + ", " + arabicLetters->ToArray()[5][2] + ", " + arabicLetters->ToArray()[5][3] + ", " + arabicLetters->ToArray()[5][4];
		cb7->Text = "Training alphabet";
		cb8->Text = "Training letters variations";
		cb9->Text = "Training vowels";
		cb10->Text = " ";
		cb11->Text = " ";
		cb12->Text = " ";
	}
	private: void PrepareLetters() {
		arabicLetters = gcnew Generic::List<Generic::List<String^>^>();
		Generic::List<String^>^ buf = gcnew Generic::List<String^>();
		buf->Add(L"jiin"); buf->Add("tha"); buf->Add("ta"); buf->Add("ba"); buf->Add("alif");
		arabicLetters->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add("ra"); buf->Add("dhal"); buf->Add("dal"); buf->Add("khaa"); buf->Add("haa");
		arabicLetters->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add("dad"); buf->Add("sad"); buf->Add("shin"); buf->Add("sin"); buf->Add("zay");
		arabicLetters->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add("fa"); buf->Add("ghayn"); buf->Add("ayn"); buf->Add("za"); buf->Add("ta");
		arabicLetters->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add("nun"); buf->Add("mun"); buf->Add("lam"); buf->Add("kaf"); buf->Add("qaf");
		arabicLetters->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(" "); buf->Add("ya"); buf->Add("hamza"); buf->Add("haa"); buf->Add("waw");
		arabicLetters->Add(buf);

		arabicLettersSymbols = gcnew Generic::List<Generic::List<String^>^>();
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ج"); buf->Add(L"ث"); buf->Add(L"ت"); buf->Add(L"ب"); buf->Add(L"ا");
		arabicLettersSymbols->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ر"); buf->Add(L"ذ"); buf->Add(L"د"); buf->Add(L"خ"); buf->Add(L"ح");
		arabicLettersSymbols->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ض"); buf->Add(L"ص"); buf->Add(L"ش"); buf->Add(L"س"); buf->Add(L"ز");
		arabicLettersSymbols->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ف"); buf->Add(L"غ"); buf->Add(L"ع"); buf->Add(L"ظ"); buf->Add(L"ط");
		arabicLettersSymbols->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ن"); buf->Add(L"م"); buf->Add(L"ل"); buf->Add(L"ك"); buf->Add(L"ق");
		arabicLettersSymbols->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L" "); buf->Add(L"ي"); buf->Add(L"?"); buf->Add(L"ﻩ"); buf->Add(L"و");
		arabicLettersSymbols->Add(buf);
		buf = gcnew Generic::List<String^>();

		arabicLettersSymbolsVariations = gcnew Generic::List<Generic::List<String^>^>();
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـا"); buf->Add(L"ـا"); buf->Add(L"ا"); buf->Add(L"ا");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـب"); buf->Add(L"ـبـ"); buf->Add(L"بـ"); buf->Add(L"ب");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـت"); buf->Add(L"ـتـ"); buf->Add(L"تـ"); buf->Add(L"ت");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـث"); buf->Add(L"ـثـ"); buf->Add(L"ثـ"); buf->Add(L"ث");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـج"); buf->Add(L"ـجـ"); buf->Add(L"جـ"); buf->Add(L"ج");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـح"); buf->Add(L"ـحـ"); buf->Add(L"حـ"); buf->Add(L"ح");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـخ"); buf->Add(L"ـخـ"); buf->Add(L"خـ"); buf->Add(L"خ");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـد"); buf->Add(L"ـد"); buf->Add(L"د"); buf->Add(L"د");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـذ"); buf->Add(L"ـذ"); buf->Add(L"ذ"); buf->Add(L"ذ");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـر"); buf->Add(L"ـر"); buf->Add(L"ر"); buf->Add(L"ر");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـز"); buf->Add(L"ـز"); buf->Add(L"ز"); buf->Add(L"ز");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـس"); buf->Add(L"ـسـ"); buf->Add(L"سـ"); buf->Add(L"س");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـش"); buf->Add(L"ـشـ"); buf->Add(L"شـ"); buf->Add(L"ش");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـص"); buf->Add(L"ـصـ"); buf->Add(L"صـ"); buf->Add(L"ص");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـض"); buf->Add(L"ـضـ"); buf->Add(L"ضـ"); buf->Add(L"ض");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـط"); buf->Add(L"ـطـ"); buf->Add(L"طـ"); buf->Add(L"ط");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـظ"); buf->Add(L"ـظـ"); buf->Add(L"ظـ"); buf->Add(L"ظ");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـع"); buf->Add(L"ـعـ"); buf->Add(L"عـ"); buf->Add(L"ع");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـغ"); buf->Add(L"ـغـ"); buf->Add(L"غـ"); buf->Add(L"غ");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـف"); buf->Add(L"ـفـ"); buf->Add(L"فـ"); buf->Add(L"ف");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـق"); buf->Add(L"ـقـ"); buf->Add(L"قـ"); buf->Add(L"ق");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـك"); buf->Add(L"ـكـ"); buf->Add(L"كـ"); buf->Add(L"ك");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـل"); buf->Add(L"ـلـ"); buf->Add(L"لـ"); buf->Add(L"ل");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـم"); buf->Add(L"ـمـ"); buf->Add(L"مـ"); buf->Add(L"م");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـن"); buf->Add(L"ـنـ"); buf->Add(L"نـ"); buf->Add(L"ن");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـه‎"); buf->Add(L"ـهـ‎‎"); buf->Add(L"هـ‎"); buf->Add(L"ﻩ");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـو"); buf->Add(L"ـو"); buf->Add(L"و"); buf->Add(L"و");
		arabicLettersSymbolsVariations->Add(buf);
		buf = gcnew Generic::List<String^>();
		buf->Add(L"ـي"); buf->Add(L"ـيـ"); buf->Add(L"يـ"); buf->Add(L"ي");
		arabicLettersSymbolsVariations->Add(buf);

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ArabicLetters^ letters = gcnew ArabicLetters();
		letters->arabicLetters = arabicLetters;
		letters->arabicLettersSymbols = arabicLettersSymbols;
		letters->arabicLettersSymbolsVariations = arabicLettersSymbolsVariations;
		letters->Show();
	}
	private: System::Void CheckedChangedArabic(System::Object^ sender, System::EventArgs^ e) {
		String^ buf;
		bool state;
		int a, amount;
		try {
			buf = ((CheckBox^)sender)->Name;
			state = ((CheckBox^)sender)->Checked;
			a = Convert::ToInt16(buf->Substring(2));
		}
		catch (Exception^ e) {
			try {
				buf = ((RadioButton^)sender)->Name;
				state = ((RadioButton^)sender)->Checked;
				a = Convert::ToInt16(buf->Substring(2));
			}
			catch (Exception^ e) {
				buf = ((NumericUpDown^)sender)->Name;
				amount = (int)((NumericUpDown^)sender)->Value;
				a = Convert::ToInt16(buf->Substring(3)) + 100;
			}
		}

		if (a <= 6) {									// Letters settings
			symbolsUsing[(a - 1) * 5 + 0] = state;
			symbolsUsing[(a - 1) * 5 + 1] = state;
			symbolsUsing[(a - 1) * 5 + 2] = state;
			symbolsUsing[(a - 1) * 5 + 3] = state;
			if (a < 6)
				symbolsUsing[(a - 1) * 5 + 4] = state;
		}
		if (a == 7) {									// Training alphabet
			//Process::Start("osk");
			Process pr;
			pr.Start("osk");
			//pr.
		}
		if (a == 8) {									// Training letters variations

		}
		if (a == 9) {									// Training vowels

		}
		if (a == 10) {									// 

		}
		if (a == 11) {									// 

		}
		if (a == 12) {									// 

		}
		if (a == 101) {									// nud1_symbolsAmount
			symbolsAmount = amount;
		}
		//if (a <= 7) {
		//	positions[(a - 1) * 5 + 0] = state;
		//	positions[(a - 1) * 5 + 1] = state;
		//	positions[(a - 1) * 5 + 2] = state;
		//	positions[(a - 1) * 5 + 3] = state;
		//	positions[(a - 1) * 5 + 4] = state;
		//}
		//else if (a == 8) {
		//	positions[35] = state;
		//	positions[36] = state;
		//	positions[37] = state;
		//}
		//else if (a == 9) {
		//	positions[38] = state;
		//	positions[39] = state;
		//	positions[40] = state;
		//	positions[41] = state;
		//	positions[42] = state;
		//}
		//else if (a == 10) {
		//	positions[43] = state;
		//	positions[44] = state;
		//	positions[45] = state;
		//	positions[46] = state;
		//	positions[47] = state;
		//}

		//else if (a == 11) {	// Show answer
		//	showAnswer = state;
		//}

		//else if (a == 12) {	// Several symbols
		//	showSeveral = state;
		//	NUD1->Enabled = state;
		//	severalAmount = (int)NUD1->Value;
		//	if (!state)
		//		severalAmount = 1;
		//}
		//else if (a == 13) {	// Show drawing field
		//	input_v2->Enabled = state;
		//	input_v2->Visible = state;
		//	Main::MinimumSize.Width = 516;
		//	if (state)
		//		Main::MinimumSize.Height = 595;
		//	else {
		//		Main::MinimumSize.Height = 205;
		//		Main::Height = 205;
		//	}
		//}

	}
	private: void NextStep() {
		//index = 5 * (col + 1) - row - 1;
		if (stepCnt == 0) {				// Forming task
			next = "", input = "", answer = "";
			Random^ random = gcnew Random();
			Generic::List<int>^ allowedIndices = gcnew Generic::List<int>();
			Generic::List<int>^ nextIndices = gcnew Generic::List<int>();
			if (trainingMode == 0) {								// Alphabet
				String^ nextSymbol = "";
				int nextIndex = 0;
				for (int i = 0; i < 29; i++)
					if (symbolsUsing[i])
						allowedIndices->Add(i);
				do {
					nextIndex = random->Next(0, 40);
					if (allowedIndices->Contains(nextIndex) && !nextIndices->Contains(nextIndex)) {
						nextIndices->Add(nextIndex);
					}
				} while (allowedIndices->Count < symbolsAmount);
				for (int i = 0; i < symbolsAmount; i++) {
					int ind = allowedIndices[i];
					int row = ind / 5;
					int col = (ind /*+ 4*/) % 5;
					next += (arabicLettersSymbols->ToArray()[row][col] + " ");
				}
			}
			else if (trainingMode == 1) {							// Letters variations

			}
			else if (trainingMode == 2) {							// Vowels

			}
		}
		else if (stepCnt == 1) {		// Forming answer
			answer = "";
		}

		tb1->Text = next;
		stepCnt++;
		stepCnt %= stepAmount;
	}

	private: System::Void MainArabic_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		//if (tabControl1->SelectedIndex != 0)
		//	return;
		//if (e->KeyCode == Keys::N || e->KeyCode == Keys::Space)
		//	NextStep();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ArabicLettersLayoutHelp^ layout = gcnew ArabicLettersLayoutHelp();
		layout->Show();
	}
	private: System::Void MainArabic_KeyDown_1(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		//if (tabControl1->SelectedIndex != 0)
		//	return;
		if (e->KeyCode == Keys::N || e->KeyCode == Keys::Space)
			NextStep();
	}
};
}
