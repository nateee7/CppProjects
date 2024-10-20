#pragma once
#include "Hints.h"
#include "MainArabic.h"
#include <windows.h>

namespace KataTraining {

	using System::Windows::Forms::MouseButtons;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tabPage2;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ answer;
	private: System::Windows::Forms::PictureBox^ input_v2;
	private: System::Windows::Forms::Label^ task;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::NumericUpDown^ NUD1;

	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::RadioButton^ RB2;

	private: System::Windows::Forms::RadioButton^ RB1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ RB4;
	private: System::Windows::Forms::RadioButton^ RB3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::Button^ button2;
	private: System::ComponentModel::IContainer^ components;


	protected:

	protected:




























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->RB4 = (gcnew System::Windows::Forms::RadioButton());
			this->RB3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->RB2 = (gcnew System::Windows::Forms::RadioButton());
			this->RB1 = (gcnew System::Windows::Forms::RadioButton());
			this->NUD1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->answer = (gcnew System::Windows::Forms::RichTextBox());
			this->input_v2 = (gcnew System::Windows::Forms::PictureBox());
			this->task = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabPage2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->input_v2))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(492, 530);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Settings";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(8, 426);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(476, 35);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Arabic training";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->NUD1);
			this->groupBox2->Controls->Add(this->checkBox12);
			this->groupBox2->Controls->Add(this->checkBox13);
			this->groupBox2->Controls->Add(this->checkBox11);
			this->groupBox2->Location = System::Drawing::Point(262, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(222, 414);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(7, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 79);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Hints to draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->RB4);
			this->groupBox4->Controls->Add(this->RB3);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(6, 225);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(210, 97);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"en-jp / jp-en";
			// 
			// RB4
			// 
			this->RB4->AutoSize = true;
			this->RB4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->RB4->Location = System::Drawing::Point(6, 50);
			this->RB4->Name = L"RB4";
			this->RB4->Size = System::Drawing::Size(71, 28);
			this->RB4->TabIndex = 2;
			this->RB4->Text = L"jp-en";
			this->RB4->UseVisualStyleBackColor = true;
			this->RB4->CheckedChanged += gcnew System::EventHandler(this, &Main::radioButton_CheckedChanged);
			// 
			// RB3
			// 
			this->RB3->AutoSize = true;
			this->RB3->Checked = true;
			this->RB3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->RB3->Location = System::Drawing::Point(6, 16);
			this->RB3->Name = L"RB3";
			this->RB3->Size = System::Drawing::Size(71, 28);
			this->RB3->TabIndex = 2;
			this->RB3->TabStop = true;
			this->RB3->Text = L"en-jp";
			this->RB3->UseVisualStyleBackColor = true;
			this->RB3->CheckedChanged += gcnew System::EventHandler(this, &Main::radioButton_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->RB2);
			this->groupBox3->Controls->Add(this->RB1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(6, 119);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(210, 97);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Hira / Kata";
			// 
			// RB2
			// 
			this->RB2->AutoSize = true;
			this->RB2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->RB2->Location = System::Drawing::Point(6, 50);
			this->RB2->Name = L"RB2";
			this->RB2->Size = System::Drawing::Size(104, 28);
			this->RB2->TabIndex = 2;
			this->RB2->Text = L"Katakana";
			this->RB2->UseVisualStyleBackColor = true;
			this->RB2->CheckedChanged += gcnew System::EventHandler(this, &Main::radioButton_CheckedChanged);
			// 
			// RB1
			// 
			this->RB1->AutoSize = true;
			this->RB1->Checked = true;
			this->RB1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->RB1->Location = System::Drawing::Point(6, 16);
			this->RB1->Name = L"RB1";
			this->RB1->Size = System::Drawing::Size(104, 28);
			this->RB1->TabIndex = 2;
			this->RB1->TabStop = true;
			this->RB1->Text = L"Hiragana";
			this->RB1->UseVisualStyleBackColor = true;
			this->RB1->CheckedChanged += gcnew System::EventHandler(this, &Main::radioButton_CheckedChanged);
			// 
			// NUD1
			// 
			this->NUD1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NUD1->Location = System::Drawing::Point(180, 55);
			this->NUD1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->NUD1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD1->Name = L"NUD1";
			this->NUD1->Size = System::Drawing::Size(42, 26);
			this->NUD1->TabIndex = 1;
			this->NUD1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->NUD1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD1->ValueChanged += gcnew System::EventHandler(this, &Main::NUD1_ValueChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Checked = true;
			this->checkBox12->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox12->Location = System::Drawing::Point(7, 53);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(177, 28);
			this->checkBox12->TabIndex = 0;
			this->checkBox12->Text = L"Severeal symbols";
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &Main::CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Checked = true;
			this->checkBox13->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox13->Location = System::Drawing::Point(6, 85);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(188, 28);
			this->checkBox13->TabIndex = 0;
			this->checkBox13->Text = L"Show drawing field";
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &Main::CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Checked = true;
			this->checkBox11->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox11->Location = System::Drawing::Point(6, 19);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(143, 28);
			this->checkBox11->TabIndex = 0;
			this->checkBox11->Text = L"Show answer";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &Main::CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->checkBox10);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox7);
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox9);
			this->groupBox1->Controls->Add(this->checkBox5);
			this->groupBox1->Controls->Add(this->checkBox6);
			this->groupBox1->Controls->Add(this->checkBox8);
			this->groupBox1->Location = System::Drawing::Point(8, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(248, 414);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Main::groupBox1_Enter);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(24, 87);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(172, 28);
			this->checkBox3->TabIndex = 0;
			this->checkBox3->Text = L"sa, shi, su, se, so";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Main::CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(24, 41);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(116, 28);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"a, i, u, e, o";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Main::CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox10->Location = System::Drawing::Point(24, 248);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(172, 28);
			this->checkBox10->TabIndex = 0;
			this->checkBox10->Text = L"wa, wi, we, wo, h";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &Main::CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(24, 64);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(161, 28);
			this->checkBox2->TabIndex = 0;
			this->checkBox2->Text = L"ka, ki, ku, ke, ko";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Main::CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox7->Location = System::Drawing::Point(24, 179);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(196, 28);
			this->checkBox7->TabIndex = 0;
			this->checkBox7->Text = L"ma, mi, mu, me, mo";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Main::CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox4->Location = System::Drawing::Point(24, 110);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(162, 28);
			this->checkBox4->TabIndex = 0;
			this->checkBox4->Text = L"ta, chi, tsu, te, to";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Main::CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox9->Location = System::Drawing::Point(24, 225);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(146, 28);
			this->checkBox9->TabIndex = 0;
			this->checkBox9->Text = L"ra, ri, ru, re, ro";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &Main::CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox5->Location = System::Drawing::Point(24, 133);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(171, 28);
			this->checkBox5->TabIndex = 0;
			this->checkBox5->Text = L"na, ni, nu, ne, no";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Main::CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox6->Location = System::Drawing::Point(24, 156);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(164, 28);
			this->checkBox6->TabIndex = 0;
			this->checkBox6->Text = L"ha, hi, fu, he, ho";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Main::CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox8->Location = System::Drawing::Point(24, 202);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(108, 28);
			this->checkBox8->TabIndex = 0;
			this->checkBox8->Text = L"ya, yu, yo";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &Main::CheckedChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Controls->Add(this->answer);
			this->tabPage3->Controls->Add(this->input_v2);
			this->tabPage3->Controls->Add(this->task);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(492, 530);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Training v.2";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(273, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Session time: 0s";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(11, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Current time: 0.0s";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(10, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Answer";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(10, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Task";
			// 
			// answer
			// 
			this->answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->answer->Location = System::Drawing::Point(105, 55);
			this->answer->Multiline = false;
			this->answer->Name = L"answer";
			this->answer->ReadOnly = true;
			this->answer->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->answer->Size = System::Drawing::Size(306, 52);
			this->answer->TabIndex = 2;
			this->answer->Text = L"あああ";
			// 
			// input_v2
			// 
			this->input_v2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->input_v2->Location = System::Drawing::Point(15, 133);
			this->input_v2->Name = L"input_v2";
			this->input_v2->Size = System::Drawing::Size(396, 372);
			this->input_v2->TabIndex = 1;
			this->input_v2->TabStop = false;
			this->input_v2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::input_v2_MouseDown);
			this->input_v2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::input_v2_MouseMove);
			this->input_v2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::input_v2_MouseUp);
			// 
			// task
			// 
			this->task->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->task->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->task->Location = System::Drawing::Point(105, 11);
			this->task->Name = L"task";
			this->task->Size = System::Drawing::Size(306, 41);
			this->task->TabIndex = 0;
			this->task->Text = L"a";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(500, 556);
			this->tabControl1->TabIndex = 3;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Main::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &Main::timer2_Tick);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 556);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MinimumSize = System::Drawing::Size(516, 95);
			this->Name = L"Main";
			this->Text = L"Katakana Training";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Main::Main_SizeChanged);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Main::Main_KeyDown);
			this->tabPage2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->input_v2))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		bool pressed = false;
		int gl_n, severalAmount;
		Point lastPoint;
		Pen^ pen;
		ImageList^ Images;
		List<bool>^ positions;
		int lastPosition = 0;
		List<int>^ taskSymbols = gcnew List<int>();
		int currentHira = 0;
		List<int>^ currentHiras;
		String^ hira, ^kata;
		List<String^>^ romanji = gcnew List<String^>();
		bool showAnswer = true, showSeveral = false, isHira = true, isEnToJp = true;
		float currentTime, globalTime;
		String^ appNameCurrent;
		String^ appName1 = "Kana training", ^ appName2 = "Arabic training";

	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
		//block->Width = 155;
		UpdateWidths();
		appNameCurrent = appName1;
		this->Text = appNameCurrent;

		hira = L"あいうえおかきくけこさしすせそたちつてとなにぬねのはひふへほまみむめもやゆよらりるれろわゐゑをん";
		kata = L"アイウエオカキクケコサシスセソタチツテトナニヌネノハヒフヘホマミムメモヤユヨラリルレロワヰヱヲン";
		lastPosition = 1;
		positions = gcnew List<bool>();
		for (int i = 0; i < 48; i++)
			positions->Add(false);
		currentHiras = gcnew List<int>();
		gl_n = 1;
		severalAmount = 1;
		pen = gcnew Pen(Color::Black, 10);

		currentTime = 0, globalTime = 0;
		timer1->Interval = 100;
		timer2->Interval = 1000;
		timer2->Enabled = true;

		romanji->Add("a"); romanji->Add("i"); romanji->Add("u"); romanji->Add("e"); romanji->Add("o");
		romanji->Add("ka"); romanji->Add("ki"); romanji->Add("ku"); romanji->Add("ke"); romanji->Add("ko");
		romanji->Add("sa"); romanji->Add("shi"); romanji->Add("su"); romanji->Add("se"); romanji->Add("so");
		romanji->Add("ta"); romanji->Add("chi"); romanji->Add("tsu"); romanji->Add("te"); romanji->Add("to");
		romanji->Add("na"); romanji->Add("ni"); romanji->Add("nu"); romanji->Add("ne"); romanji->Add("no");
		romanji->Add("ha"); romanji->Add("hi"); romanji->Add("fu"); romanji->Add("he"); romanji->Add("ho");
		romanji->Add("ma"); romanji->Add("mi"); romanji->Add("mu"); romanji->Add("me"); romanji->Add("mo");
		romanji->Add("ya"); romanji->Add("yu"); romanji->Add("yo");
		romanji->Add("ra"); romanji->Add("ri"); romanji->Add("ru"); romanji->Add("re"); romanji->Add("ro");
		romanji->Add("wa"); romanji->Add("wi"); romanji->Add("we"); romanji->Add("wo");
		romanji->Add("n");
	}
	private: void UpdateWidths() {
		task->Width = Math::Max(Main::Width - 30 - task->Location.X, 50);
		answer->Width = Math::Max(Main::Width - 30 - answer->Location.X, 50);
		input_v2->Width = Math::Max(Main::Width - 30 - input_v2->Location.X, 170);
		input_v2->Height = Math::Max(Main::Height - 70 - input_v2->Location.Y, 170);
	}
	private: void NextPositions() {
		int n;
		Random^ random = gcnew Random();
		List<int>^ allowed = gcnew List<int>();
		taskSymbols = gcnew List<int>();
		bool buf = false;

		for (int i = 0; i < 48 && !buf; i++)
			if (positions[i]) {
				//buf = true;
				allowed->Add(i);
			}
		if (allowed->Count < 3) {
			allowed->Add(0); allowed->Add(1); allowed->Add(2); allowed->Add(03); allowed->Add(4); 
			MessageBox::Show("There is nothing chosen between romanji in settings!");
			//return;
		}
		for (int i = 0; i < severalAmount; i++) {
			do
				n = allowed[(int)random->Next(allowed->Count)];
			while (n == lastPosition);
			taskSymbols->Add(n);
			lastPosition = n;
		}
	}
	private: String^ RomanjiFromHira(int inp) {
		return romanji[inp];
	}
	private: String^ literallyRomanjiFromHira(String^ inp) {
		String^ res;
		if (isHira)
			res = romanji[hira->IndexOf(inp)];
		else
			res = romanji[kata->IndexOf(inp)];
		return res;
	}
	private: System::Void Main_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::N || e->KeyCode == Keys::Space)
			NextStep();
	}
	private: void NextStep() {
		if (answer->Text->Length == 0) {							// generating answer
			//if (showAnswer) {
			answer->Text = "";
			for (int i = 0; i < severalAmount; i++) {
				currentHira = currentHiras[i];
				if (isEnToJp) {
					if (isHira)
						answer->Text += hira[currentHira] + " ";
					else
						answer->Text += kata[currentHira] + " ";
				}
				else {
					if (isHira)
						answer->Text += literallyRomanjiFromHira(Convert::ToString(hira[currentHira])) + " ";
					else
						answer->Text += literallyRomanjiFromHira(Convert::ToString(kata[currentHira])) + " ";
				}
			}
			//}
			timer1->Enabled = false;
			if (!showAnswer) {
				answer->Text = "   ";
			}
		}
		else {																	// generating task
			Bitmap^ bmp = gcnew Bitmap(input_v2->Width, input_v2->Height);
			input_v2->Image = bmp;
			Graphics^ g = Graphics::FromImage(input_v2->Image);
			g->Clear(Color::White);
			input_v2->Invalidate();
			//currentHira = NextPosition();
			taskSymbols = gcnew List<int>();
			NextPositions();
			answer->Text = "";
			task->Text = "";
			currentHiras = gcnew List<int>(severalAmount);
			for (int i = 0; i < severalAmount; i++) {
				currentHiras->Add(taskSymbols[i]);
				//taskSymbols = gcnew List<int>();
				//NextPositions();
				if (isEnToJp)
					task->Text += (RomanjiFromHira(currentHiras[i]) + " ");
				else {
					if (isHira)
						task->Text += (hira[currentHiras[i]] + " ");
					else
						task->Text += (kata[currentHiras[i]] + " ");
				}
			}
			currentTime = 0;
			timer1->Enabled = true;
		}
	}
	private: System::Void CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ buf = ((CheckBox^)sender)->Name;
		int a = Convert::ToInt16(buf->Substring(8));
		bool state = ((CheckBox^)sender)->Checked;
		if (a <= 7) {
			positions[(a - 1) * 5 + 0] = state;
			positions[(a - 1) * 5 + 1] = state;
			positions[(a - 1) * 5 + 2] = state;
			positions[(a - 1) * 5 + 3] = state;
			positions[(a - 1) * 5 + 4] = state;
		}
		else if (a == 8) {
			positions[35] = state;
			positions[36] = state;
			positions[37] = state;
		}
		else if (a == 9) {
			positions[38] = state;
			positions[39] = state;
			positions[40] = state;
			positions[41] = state;
			positions[42] = state;
		}
		else if (a == 10) {
			positions[43] = state;
			positions[44] = state;
			positions[45] = state;
			positions[46] = state;
			positions[47] = state;
		}

		else if (a == 11) {	// Show answer
			showAnswer = state;
		}

		else if (a == 12) {	// Several symbols
			showSeveral = state;
			NUD1->Enabled = state;
			severalAmount = (int)NUD1->Value;
			if (!state)
				severalAmount = 1;
		}
		else if (a == 13) {	// Show drawing field
			input_v2->Enabled = state;
			input_v2->Visible = state;
			Main::MinimumSize.Width = 516;
			if (state)
				Main::MinimumSize.Height = 595;
			else {
				Main::MinimumSize.Height = 205;
				Main::Height = 205;
			}
		}

	}

	private: System::Void input_v2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (pressed) {
			Point newPoint = e->Location;
			if (input_v2->Image == nullptr) {
				Bitmap^ bmp = gcnew Bitmap(input_v2->Width, input_v2->Height);
				input_v2->Image = bmp;
			}
			if (lastPoint.X == -6666)
				lastPoint = Point(newPoint.X + 1, newPoint.Y + 1);
			Graphics^ g = Graphics::FromImage(input_v2->Image);
			g->DrawLine(pen, lastPoint, newPoint);
			lastPoint = newPoint;
			input_v2->Invalidate();
		}
	}
	private: System::Void input_v2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		pressed = true;
		lastPoint = Point(-6666, 0);
	}
	private: System::Void input_v2_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		pressed = false;
	}
	private: System::Void NUD1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		severalAmount = (int)NUD1->Value;
	}
	private: System::Void Main_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		UpdateWidths();
		Bitmap^ bmp = gcnew Bitmap(input_v2->Width, input_v2->Height);
		input_v2->Image = bmp;
	}
	private: System::Void radioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		/*String^ buf = ((RadioButton^)sender)->Name;
		int a = Convert::ToInt16(buf->Substring(2));*/
		isHira = RB1->Checked;
		isEnToJp = RB3->Checked;
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		currentTime += float(timer1->Interval) / 1000;
		label3->Text = "Current time: " + Convert::ToString(Convert::ToInt32(Math::Floor(currentTime))) + "." + Convert::ToString((Convert::ToInt32(Math::Floor(currentTime * 10)) % 10)) + "s";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Hints^ hints = gcnew Hints();
		hints->Show();
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		globalTime += (timer2->Interval) * 0.001;
		//label4->Text = "Session time: " + Convert::ToString(Convert::ToInt32(Math::Floor(currentTime))) + "." + Convert::ToString((Convert::ToInt32(Math::Floor(currentTime * 10)) % 10)) + "s";
		label4->Text = "Session time: " + Convert::ToString(Convert::ToInt64(Math::Floor(globalTime))) + "s";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MainArabic^ arabic = gcnew MainArabic();
		//this->KeyDown -= gcnew System::Windows::Forms::KeyEventHandler(this, &Main::Main_KeyDown);
		arabic->Show();
	}
};
}
