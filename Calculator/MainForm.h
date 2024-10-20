#pragma once
#include "InfoForm.h"
#include "TaskForm.h"
#include "ManualForm.h"
#include <cmath>
#include <random>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace VyatsuCalculatorlab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	#pragma region VSs Code


	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exit_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ режимToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ normal_mode_btn;

	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ info_btn;
	private: System::Windows::Forms::Button^ btn_7;
	private: System::Windows::Forms::TextBox^ display_textBox;
	private: System::Windows::Forms::Button^ btn_8;
	private: System::Windows::Forms::Button^ btn_9;
	private: System::Windows::Forms::Button^ btn_plus_minus;
	private: System::Windows::Forms::Button^ btn_plus;
	private: System::Windows::Forms::Button^ btn_6;
	private: System::Windows::Forms::Button^ btn_5;
	private: System::Windows::Forms::Button^ btn_4;
	private: System::Windows::Forms::Button^ btn_multiply;
	private: System::Windows::Forms::Button^ btn_solve;
	private: System::Windows::Forms::Button^ btn_point;
	private: System::Windows::Forms::Button^ btn_0;
	private: System::Windows::Forms::Button^ btn_minus;
	private: System::Windows::Forms::Button^ btn_3;
	private: System::Windows::Forms::Button^ btn_2;
	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::Button^ btn_divide;
	private: System::Windows::Forms::Button^ btn_C;
	private: System::Windows::Forms::Button^ btn_CE;
	private: System::Windows::Forms::Button^ btn_backspace;
	private: System::Windows::Forms::Button^ btn_sqrt;
	private: System::Windows::Forms::Button^ btn_pow;
	private: System::Windows::Forms::ToolStripMenuItem^ task_info_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ eng_mode_btn;
	private: System::Windows::Forms::Label^ label_in_2;
	private: System::Windows::Forms::Label^ label_in_8;
	private: System::Windows::Forms::Label^ label_in_16;
	private: System::Windows::Forms::Button^ btn_RoL;
	private: System::Windows::Forms::Button^ btn_RoR;
	private: System::Windows::Forms::RadioButton^ radio_1_byte;
	private: System::Windows::Forms::RadioButton^ radio_2_byte;
	private: System::Windows::Forms::Button^ btn_RoLn;
	private: System::Windows::Forms::Button^ btn_RoRn;
	private: System::Windows::Forms::ToolStripMenuItem^ manual_btn;


	private: System::Windows::Forms::Button^ btn_ltr_A;

	private: System::Windows::Forms::Button^ btn_ltr_B;
	private: System::Windows::Forms::Button^ btn_ltr_D;




	private: System::Windows::Forms::Button^ btn_ltr_C;
	private: System::Windows::Forms::Button^ btn_ltr_E;
	private: System::Windows::Forms::Button^ btn_ltr_F;
	private: System::Windows::Forms::GroupBox^ group_right;

	private: System::Windows::Forms::GroupBox^ group_left;

	private: System::Windows::Forms::RadioButton^ radio_2_mode;

	private: System::Windows::Forms::RadioButton^ radio_8_mode;

	private: System::Windows::Forms::RadioButton^ radio_10_mode;

	private: System::Windows::Forms::RadioButton^ radio_16_mode;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label_in_10;
	private: System::Windows::Forms::GroupBox^ group_math;







	private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->режимToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->normal_mode_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eng_mode_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->info_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->task_info_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->manual_btn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->display_textBox = (gcnew System::Windows::Forms::TextBox());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_plus_minus = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_multiply = (gcnew System::Windows::Forms::Button());
			this->btn_solve = (gcnew System::Windows::Forms::Button());
			this->btn_point = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_divide = (gcnew System::Windows::Forms::Button());
			this->btn_C = (gcnew System::Windows::Forms::Button());
			this->btn_CE = (gcnew System::Windows::Forms::Button());
			this->btn_backspace = (gcnew System::Windows::Forms::Button());
			this->btn_sqrt = (gcnew System::Windows::Forms::Button());
			this->btn_pow = (gcnew System::Windows::Forms::Button());
			this->label_in_2 = (gcnew System::Windows::Forms::Label());
			this->label_in_8 = (gcnew System::Windows::Forms::Label());
			this->label_in_16 = (gcnew System::Windows::Forms::Label());
			this->btn_RoL = (gcnew System::Windows::Forms::Button());
			this->btn_RoR = (gcnew System::Windows::Forms::Button());
			this->radio_1_byte = (gcnew System::Windows::Forms::RadioButton());
			this->radio_2_byte = (gcnew System::Windows::Forms::RadioButton());
			this->btn_RoLn = (gcnew System::Windows::Forms::Button());
			this->btn_RoRn = (gcnew System::Windows::Forms::Button());
			this->btn_ltr_A = (gcnew System::Windows::Forms::Button());
			this->btn_ltr_B = (gcnew System::Windows::Forms::Button());
			this->btn_ltr_D = (gcnew System::Windows::Forms::Button());
			this->btn_ltr_C = (gcnew System::Windows::Forms::Button());
			this->btn_ltr_E = (gcnew System::Windows::Forms::Button());
			this->btn_ltr_F = (gcnew System::Windows::Forms::Button());
			this->group_right = (gcnew System::Windows::Forms::GroupBox());
			this->label_in_10 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radio_16_mode = (gcnew System::Windows::Forms::RadioButton());
			this->radio_2_mode = (gcnew System::Windows::Forms::RadioButton());
			this->radio_10_mode = (gcnew System::Windows::Forms::RadioButton());
			this->radio_8_mode = (gcnew System::Windows::Forms::RadioButton());
			this->group_left = (gcnew System::Windows::Forms::GroupBox());
			this->group_math = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			this->group_right->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->group_left->SuspendLayout();
			this->group_math->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->файлToolStripMenuItem,
					this->режимToolStripMenuItem, this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(872, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exit_btn });
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// exit_btn
			// 
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(113, 22);
			this->exit_btn->Text = L"Выход";
			this->exit_btn->Click += gcnew System::EventHandler(this, &MainForm::exit_btn_Click);
			// 
			// режимToolStripMenuItem
			// 
			this->режимToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->normal_mode_btn,
					this->eng_mode_btn
			});
			this->режимToolStripMenuItem->Name = L"режимToolStripMenuItem";
			this->режимToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->режимToolStripMenuItem->Text = L"Режим";
			// 
			// normal_mode_btn
			// 
			this->normal_mode_btn->Name = L"normal_mode_btn";
			this->normal_mode_btn->Size = System::Drawing::Size(152, 22);
			this->normal_mode_btn->Text = L"Обычный";
			this->normal_mode_btn->Click += gcnew System::EventHandler(this, &MainForm::normal_mode_btn_Click);
			// 
			// eng_mode_btn
			// 
			this->eng_mode_btn->Name = L"eng_mode_btn";
			this->eng_mode_btn->Size = System::Drawing::Size(152, 22);
			this->eng_mode_btn->Text = L"Программист";
			this->eng_mode_btn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->eng_mode_btn->Click += gcnew System::EventHandler(this, &MainForm::eng_mode_btn_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->info_btn,
					this->task_info_btn, this->manual_btn
			});
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// info_btn
			// 
			this->info_btn->Name = L"info_btn";
			this->info_btn->Size = System::Drawing::Size(160, 22);
			this->info_btn->Text = L"О программе";
			this->info_btn->Click += gcnew System::EventHandler(this, &MainForm::info_btn_Click);
			// 
			// task_info_btn
			// 
			this->task_info_btn->Name = L"task_info_btn";
			this->task_info_btn->Size = System::Drawing::Size(160, 22);
			this->task_info_btn->Text = L"Текст задания";
			this->task_info_btn->Click += gcnew System::EventHandler(this, &MainForm::task_info_btn_Click);
			// 
			// manual_btn
			// 
			this->manual_btn->Name = L"manual_btn";
			this->manual_btn->Size = System::Drawing::Size(160, 22);
			this->manual_btn->Text = L"Пользователю";
			this->manual_btn->Click += gcnew System::EventHandler(this, &MainForm::manual_btn_Click);
			// 
			// btn_7
			// 
			this->btn_7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_7->Location = System::Drawing::Point(15, 19);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(60, 60);
			this->btn_7->TabIndex = 1;
			this->btn_7->TabStop = false;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = true;
			this->btn_7->Click += gcnew System::EventHandler(this, &MainForm::btn_7_Click);
			// 
			// display_textBox
			// 
			this->display_textBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->display_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->display_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->display_textBox->Location = System::Drawing::Point(13, 37);
			this->display_textBox->Name = L"display_textBox";
			this->display_textBox->ReadOnly = true;
			this->display_textBox->Size = System::Drawing::Size(635, 38);
			this->display_textBox->TabIndex = 2;
			this->display_textBox->Text = L"75675675";
			this->display_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn_8
			// 
			this->btn_8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_8->Location = System::Drawing::Point(91, 19);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(60, 60);
			this->btn_8->TabIndex = 3;
			this->btn_8->TabStop = false;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = true;
			this->btn_8->Click += gcnew System::EventHandler(this, &MainForm::btn_8_Click);
			// 
			// btn_9
			// 
			this->btn_9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_9->Location = System::Drawing::Point(165, 19);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(60, 60);
			this->btn_9->TabIndex = 4;
			this->btn_9->TabStop = false;
			this->btn_9->Text = L"9";
			this->btn_9->UseVisualStyleBackColor = true;
			this->btn_9->Click += gcnew System::EventHandler(this, &MainForm::btn_9_Click);
			// 
			// btn_plus_minus
			// 
			this->btn_plus_minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_plus_minus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_plus_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus_minus->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_plus_minus->Location = System::Drawing::Point(72, 88);
			this->btn_plus_minus->Name = L"btn_plus_minus";
			this->btn_plus_minus->Size = System::Drawing::Size(60, 60);
			this->btn_plus_minus->TabIndex = 5;
			this->btn_plus_minus->TabStop = false;
			this->btn_plus_minus->Text = L"+-";
			this->btn_plus_minus->UseVisualStyleBackColor = true;
			this->btn_plus_minus->Click += gcnew System::EventHandler(this, &MainForm::btn_plus_minus_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_plus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_plus->Location = System::Drawing::Point(6, 19);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(60, 60);
			this->btn_plus->TabIndex = 9;
			this->btn_plus->TabStop = false;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = true;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MainForm::btn_plus_Click);
			// 
			// btn_6
			// 
			this->btn_6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_6->Location = System::Drawing::Point(165, 88);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(60, 60);
			this->btn_6->TabIndex = 8;
			this->btn_6->TabStop = false;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = true;
			this->btn_6->Click += gcnew System::EventHandler(this, &MainForm::btn_6_Click);
			// 
			// btn_5
			// 
			this->btn_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_5->Location = System::Drawing::Point(91, 88);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(60, 60);
			this->btn_5->TabIndex = 7;
			this->btn_5->TabStop = false;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = true;
			this->btn_5->Click += gcnew System::EventHandler(this, &MainForm::btn_5_Click);
			// 
			// btn_4
			// 
			this->btn_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_4->Location = System::Drawing::Point(15, 88);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(60, 60);
			this->btn_4->TabIndex = 6;
			this->btn_4->TabStop = false;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = true;
			this->btn_4->Click += gcnew System::EventHandler(this, &MainForm::btn_4_Click);
			// 
			// btn_multiply
			// 
			this->btn_multiply->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_multiply->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_multiply->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_multiply->Location = System::Drawing::Point(6, 159);
			this->btn_multiply->Name = L"btn_multiply";
			this->btn_multiply->Size = System::Drawing::Size(60, 60);
			this->btn_multiply->TabIndex = 17;
			this->btn_multiply->TabStop = false;
			this->btn_multiply->Text = L"*";
			this->btn_multiply->UseVisualStyleBackColor = true;
			this->btn_multiply->Click += gcnew System::EventHandler(this, &MainForm::btn_multiply_Click);
			// 
			// btn_solve
			// 
			this->btn_solve->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_solve->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_solve->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_solve->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_solve->Location = System::Drawing::Point(165, 229);
			this->btn_solve->Name = L"btn_solve";
			this->btn_solve->Size = System::Drawing::Size(60, 60);
			this->btn_solve->TabIndex = 16;
			this->btn_solve->TabStop = false;
			this->btn_solve->Text = L"=";
			this->btn_solve->UseVisualStyleBackColor = true;
			this->btn_solve->Click += gcnew System::EventHandler(this, &MainForm::btn_solve_Click);
			// 
			// btn_point
			// 
			this->btn_point->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_point->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_point->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_point->Location = System::Drawing::Point(15, 229);
			this->btn_point->Name = L"btn_point";
			this->btn_point->Size = System::Drawing::Size(60, 60);
			this->btn_point->TabIndex = 15;
			this->btn_point->TabStop = false;
			this->btn_point->Text = L".";
			this->btn_point->UseVisualStyleBackColor = true;
			this->btn_point->Click += gcnew System::EventHandler(this, &MainForm::btn_point_Click);
			// 
			// btn_0
			// 
			this->btn_0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_0->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_0->Location = System::Drawing::Point(91, 229);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(60, 60);
			this->btn_0->TabIndex = 14;
			this->btn_0->TabStop = false;
			this->btn_0->Text = L"0";
			this->btn_0->UseVisualStyleBackColor = true;
			this->btn_0->Click += gcnew System::EventHandler(this, &MainForm::btn_0_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_minus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_minus->Location = System::Drawing::Point(6, 88);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(60, 60);
			this->btn_minus->TabIndex = 13;
			this->btn_minus->TabStop = false;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = true;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MainForm::btn_minus_Click);
			// 
			// btn_3
			// 
			this->btn_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_3->Location = System::Drawing::Point(165, 159);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(60, 60);
			this->btn_3->TabIndex = 12;
			this->btn_3->TabStop = false;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = true;
			this->btn_3->Click += gcnew System::EventHandler(this, &MainForm::btn_3_Click);
			// 
			// btn_2
			// 
			this->btn_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_2->Location = System::Drawing::Point(91, 159);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(60, 60);
			this->btn_2->TabIndex = 11;
			this->btn_2->TabStop = false;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = true;
			this->btn_2->Click += gcnew System::EventHandler(this, &MainForm::btn_2_Click);
			// 
			// btn_1
			// 
			this->btn_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_1->Location = System::Drawing::Point(15, 159);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(60, 60);
			this->btn_1->TabIndex = 10;
			this->btn_1->TabStop = false;
			this->btn_1->Text = L"1";
			this->btn_1->UseVisualStyleBackColor = true;
			this->btn_1->Click += gcnew System::EventHandler(this, &MainForm::btn_1_Click);
			// 
			// btn_divide
			// 
			this->btn_divide->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_divide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_divide->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_divide->Location = System::Drawing::Point(6, 229);
			this->btn_divide->Name = L"btn_divide";
			this->btn_divide->Size = System::Drawing::Size(60, 60);
			this->btn_divide->TabIndex = 21;
			this->btn_divide->TabStop = false;
			this->btn_divide->Text = L"/";
			this->btn_divide->UseVisualStyleBackColor = true;
			this->btn_divide->Click += gcnew System::EventHandler(this, &MainForm::btn_divide_Click);
			// 
			// btn_C
			// 
			this->btn_C->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_C->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_C->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_C->Location = System::Drawing::Point(102, 94);
			this->btn_C->Name = L"btn_C";
			this->btn_C->Size = System::Drawing::Size(60, 60);
			this->btn_C->TabIndex = 20;
			this->btn_C->TabStop = false;
			this->btn_C->Text = L"C";
			this->btn_C->UseVisualStyleBackColor = true;
			this->btn_C->Click += gcnew System::EventHandler(this, &MainForm::btn_C_Click);
			// 
			// btn_CE
			// 
			this->btn_CE->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_CE->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_CE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_CE->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_CE->Location = System::Drawing::Point(28, 94);
			this->btn_CE->Name = L"btn_CE";
			this->btn_CE->Size = System::Drawing::Size(60, 60);
			this->btn_CE->TabIndex = 19;
			this->btn_CE->TabStop = false;
			this->btn_CE->Text = L"CE";
			this->btn_CE->UseVisualStyleBackColor = true;
			this->btn_CE->Click += gcnew System::EventHandler(this, &MainForm::btn_CE_Click);
			// 
			// btn_backspace
			// 
			this->btn_backspace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_backspace->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_backspace->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_backspace->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_backspace->Location = System::Drawing::Point(178, 94);
			this->btn_backspace->Name = L"btn_backspace";
			this->btn_backspace->Size = System::Drawing::Size(60, 60);
			this->btn_backspace->TabIndex = 18;
			this->btn_backspace->TabStop = false;
			this->btn_backspace->Text = L"<";
			this->btn_backspace->UseVisualStyleBackColor = true;
			this->btn_backspace->Click += gcnew System::EventHandler(this, &MainForm::btn_backspace_Click);
			// 
			// btn_sqrt
			// 
			this->btn_sqrt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_sqrt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_sqrt->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_sqrt->Location = System::Drawing::Point(72, 229);
			this->btn_sqrt->Name = L"btn_sqrt";
			this->btn_sqrt->Size = System::Drawing::Size(60, 60);
			this->btn_sqrt->TabIndex = 26;
			this->btn_sqrt->TabStop = false;
			this->btn_sqrt->Text = L"sqrt";
			this->btn_sqrt->UseVisualStyleBackColor = true;
			this->btn_sqrt->Click += gcnew System::EventHandler(this, &MainForm::btn_sqrt_Click);
			// 
			// btn_pow
			// 
			this->btn_pow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_pow->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_pow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_pow->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_pow->Location = System::Drawing::Point(72, 159);
			this->btn_pow->Name = L"btn_pow";
			this->btn_pow->Size = System::Drawing::Size(60, 60);
			this->btn_pow->TabIndex = 22;
			this->btn_pow->TabStop = false;
			this->btn_pow->Text = L"^";
			this->btn_pow->UseVisualStyleBackColor = true;
			this->btn_pow->Click += gcnew System::EventHandler(this, &MainForm::btn_pow_Click);
			// 
			// label_in_2
			// 
			this->label_in_2->AutoSize = true;
			this->label_in_2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_in_2->Location = System::Drawing::Point(254, 92);
			this->label_in_2->Name = L"label_in_2";
			this->label_in_2->Size = System::Drawing::Size(159, 16);
			this->label_in_2->TabIndex = 28;
			this->label_in_2->Text = L"Число в 2 СС: 0010 1101";
			// 
			// label_in_8
			// 
			this->label_in_8->AutoSize = true;
			this->label_in_8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_in_8->Location = System::Drawing::Point(254, 118);
			this->label_in_8->Name = L"label_in_8";
			this->label_in_8->Size = System::Drawing::Size(117, 16);
			this->label_in_8->TabIndex = 29;
			this->label_in_8->Text = L"Число в 8 СС: 5 5";
			// 
			// label_in_16
			// 
			this->label_in_16->AutoSize = true;
			this->label_in_16->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_in_16->Location = System::Drawing::Point(254, 170);
			this->label_in_16->Name = L"label_in_16";
			this->label_in_16->Size = System::Drawing::Size(126, 16);
			this->label_in_16->TabIndex = 30;
			this->label_in_16->Text = L"Число в 16 СС: 2 D";
			// 
			// btn_RoL
			// 
			this->btn_RoL->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_RoL->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_RoL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_RoL->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_RoL->Location = System::Drawing::Point(148, 19);
			this->btn_RoL->Name = L"btn_RoL";
			this->btn_RoL->Size = System::Drawing::Size(90, 60);
			this->btn_RoL->TabIndex = 31;
			this->btn_RoL->TabStop = false;
			this->btn_RoL->Text = L"RoL";
			this->btn_RoL->UseVisualStyleBackColor = true;
			this->btn_RoL->Click += gcnew System::EventHandler(this, &MainForm::btn_RoL_Click);
			// 
			// btn_RoR
			// 
			this->btn_RoR->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_RoR->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_RoR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_RoR->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_RoR->Location = System::Drawing::Point(148, 90);
			this->btn_RoR->Name = L"btn_RoR";
			this->btn_RoR->Size = System::Drawing::Size(90, 60);
			this->btn_RoR->TabIndex = 32;
			this->btn_RoR->TabStop = false;
			this->btn_RoR->Text = L"RoR";
			this->btn_RoR->UseVisualStyleBackColor = true;
			this->btn_RoR->Click += gcnew System::EventHandler(this, &MainForm::btn_RoR_Click);
			// 
			// radio_1_byte
			// 
			this->radio_1_byte->AutoSize = true;
			this->radio_1_byte->Checked = true;
			this->radio_1_byte->Location = System::Drawing::Point(6, 19);
			this->radio_1_byte->Name = L"radio_1_byte";
			this->radio_1_byte->Size = System::Drawing::Size(57, 17);
			this->radio_1_byte->TabIndex = 33;
			this->radio_1_byte->TabStop = true;
			this->radio_1_byte->Text = L"1 байт";
			this->radio_1_byte->UseVisualStyleBackColor = true;
			this->radio_1_byte->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radio_1_byte_CheckedChanged);
			// 
			// radio_2_byte
			// 
			this->radio_2_byte->AutoSize = true;
			this->radio_2_byte->Location = System::Drawing::Point(6, 42);
			this->radio_2_byte->Name = L"radio_2_byte";
			this->radio_2_byte->Size = System::Drawing::Size(63, 17);
			this->radio_2_byte->TabIndex = 34;
			this->radio_2_byte->Text = L"2 байта";
			this->radio_2_byte->UseVisualStyleBackColor = true;
			this->radio_2_byte->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radio_2_byte_CheckedChanged);
			// 
			// btn_RoLn
			// 
			this->btn_RoLn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_RoLn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_RoLn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_RoLn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_RoLn->Location = System::Drawing::Point(148, 162);
			this->btn_RoLn->Name = L"btn_RoLn";
			this->btn_RoLn->Size = System::Drawing::Size(90, 60);
			this->btn_RoLn->TabIndex = 35;
			this->btn_RoLn->TabStop = false;
			this->btn_RoLn->Text = L"RoL*n";
			this->btn_RoLn->UseVisualStyleBackColor = true;
			this->btn_RoLn->Click += gcnew System::EventHandler(this, &MainForm::btn_RoLn_Click);
			// 
			// btn_RoRn
			// 
			this->btn_RoRn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_RoRn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_RoRn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_RoRn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_RoRn->Location = System::Drawing::Point(148, 234);
			this->btn_RoRn->Name = L"btn_RoRn";
			this->btn_RoRn->Size = System::Drawing::Size(90, 60);
			this->btn_RoRn->TabIndex = 36;
			this->btn_RoRn->TabStop = false;
			this->btn_RoRn->Text = L"RoR*n";
			this->btn_RoRn->UseVisualStyleBackColor = true;
			this->btn_RoRn->Click += gcnew System::EventHandler(this, &MainForm::btn_RoRn_Click);
			// 
			// btn_ltr_A
			// 
			this->btn_ltr_A->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_ltr_A->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_ltr_A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ltr_A->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_ltr_A->Location = System::Drawing::Point(6, 90);
			this->btn_ltr_A->Name = L"btn_ltr_A";
			this->btn_ltr_A->Size = System::Drawing::Size(60, 60);
			this->btn_ltr_A->TabIndex = 38;
			this->btn_ltr_A->TabStop = false;
			this->btn_ltr_A->Text = L"A";
			this->btn_ltr_A->UseVisualStyleBackColor = true;
			this->btn_ltr_A->Click += gcnew System::EventHandler(this, &MainForm::btn_ltr_A_Click);
			// 
			// btn_ltr_B
			// 
			this->btn_ltr_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_ltr_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_ltr_B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ltr_B->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_ltr_B->Location = System::Drawing::Point(6, 162);
			this->btn_ltr_B->Name = L"btn_ltr_B";
			this->btn_ltr_B->Size = System::Drawing::Size(60, 60);
			this->btn_ltr_B->TabIndex = 39;
			this->btn_ltr_B->TabStop = false;
			this->btn_ltr_B->Text = L"B";
			this->btn_ltr_B->UseVisualStyleBackColor = true;
			this->btn_ltr_B->Click += gcnew System::EventHandler(this, &MainForm::btn_ltr_B_Click);
			// 
			// btn_ltr_D
			// 
			this->btn_ltr_D->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_ltr_D->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_ltr_D->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ltr_D->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_ltr_D->Location = System::Drawing::Point(76, 90);
			this->btn_ltr_D->Name = L"btn_ltr_D";
			this->btn_ltr_D->Size = System::Drawing::Size(60, 60);
			this->btn_ltr_D->TabIndex = 41;
			this->btn_ltr_D->TabStop = false;
			this->btn_ltr_D->Text = L"D";
			this->btn_ltr_D->UseVisualStyleBackColor = true;
			this->btn_ltr_D->Click += gcnew System::EventHandler(this, &MainForm::btn_ltr_D_Click);
			// 
			// btn_ltr_C
			// 
			this->btn_ltr_C->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_ltr_C->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_ltr_C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ltr_C->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_ltr_C->Location = System::Drawing::Point(6, 234);
			this->btn_ltr_C->Name = L"btn_ltr_C";
			this->btn_ltr_C->Size = System::Drawing::Size(60, 60);
			this->btn_ltr_C->TabIndex = 40;
			this->btn_ltr_C->TabStop = false;
			this->btn_ltr_C->Text = L"C";
			this->btn_ltr_C->UseVisualStyleBackColor = true;
			this->btn_ltr_C->Click += gcnew System::EventHandler(this, &MainForm::btn_ltr_C_Click);
			// 
			// btn_ltr_E
			// 
			this->btn_ltr_E->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_ltr_E->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_ltr_E->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ltr_E->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_ltr_E->Location = System::Drawing::Point(76, 162);
			this->btn_ltr_E->Name = L"btn_ltr_E";
			this->btn_ltr_E->Size = System::Drawing::Size(60, 60);
			this->btn_ltr_E->TabIndex = 42;
			this->btn_ltr_E->TabStop = false;
			this->btn_ltr_E->Text = L"E";
			this->btn_ltr_E->UseVisualStyleBackColor = true;
			this->btn_ltr_E->Click += gcnew System::EventHandler(this, &MainForm::btn_ltr_E_Click);
			// 
			// btn_ltr_F
			// 
			this->btn_ltr_F->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_ltr_F->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_ltr_F->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ltr_F->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_ltr_F->Location = System::Drawing::Point(76, 234);
			this->btn_ltr_F->Name = L"btn_ltr_F";
			this->btn_ltr_F->Size = System::Drawing::Size(60, 60);
			this->btn_ltr_F->TabIndex = 43;
			this->btn_ltr_F->TabStop = false;
			this->btn_ltr_F->Text = L"F";
			this->btn_ltr_F->UseVisualStyleBackColor = true;
			this->btn_ltr_F->Click += gcnew System::EventHandler(this, &MainForm::btn_ltr_F_Click);
			// 
			// group_right
			// 
			this->group_right->Controls->Add(this->label_in_10);
			this->group_right->Controls->Add(this->groupBox4);
			this->group_right->Controls->Add(this->groupBox3);
			this->group_right->Controls->Add(this->btn_ltr_A);
			this->group_right->Controls->Add(this->btn_ltr_F);
			this->group_right->Controls->Add(this->label_in_16);
			this->group_right->Controls->Add(this->btn_RoRn);
			this->group_right->Controls->Add(this->btn_ltr_B);
			this->group_right->Controls->Add(this->label_in_8);
			this->group_right->Controls->Add(this->btn_RoR);
			this->group_right->Controls->Add(this->label_in_2);
			this->group_right->Controls->Add(this->btn_RoLn);
			this->group_right->Controls->Add(this->btn_RoL);
			this->group_right->Controls->Add(this->btn_ltr_E);
			this->group_right->Controls->Add(this->btn_ltr_C);
			this->group_right->Controls->Add(this->btn_ltr_D);
			this->group_right->Location = System::Drawing::Point(258, 159);
			this->group_right->Name = L"group_right";
			this->group_right->Size = System::Drawing::Size(465, 309);
			this->group_right->TabIndex = 44;
			this->group_right->TabStop = false;
			// 
			// label_in_10
			// 
			this->label_in_10->AutoSize = true;
			this->label_in_10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_in_10->Location = System::Drawing::Point(254, 144);
			this->label_in_10->Name = L"label_in_10";
			this->label_in_10->Size = System::Drawing::Size(127, 16);
			this->label_in_10->TabIndex = 50;
			this->label_in_10->Text = L"Число в 10 СС: 120";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radio_1_byte);
			this->groupBox4->Controls->Add(this->radio_2_byte);
			this->groupBox4->Location = System::Drawing::Point(257, 14);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(104, 63);
			this->groupBox4->TabIndex = 49;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Размер числа";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radio_16_mode);
			this->groupBox3->Controls->Add(this->radio_2_mode);
			this->groupBox3->Controls->Add(this->radio_10_mode);
			this->groupBox3->Controls->Add(this->radio_8_mode);
			this->groupBox3->Location = System::Drawing::Point(6, 19);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(130, 65);
			this->groupBox3->TabIndex = 48;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Система счисления";
			// 
			// radio_16_mode
			// 
			this->radio_16_mode->AutoSize = true;
			this->radio_16_mode->Location = System::Drawing::Point(6, 16);
			this->radio_16_mode->Name = L"radio_16_mode";
			this->radio_16_mode->Size = System::Drawing::Size(54, 17);
			this->radio_16_mode->TabIndex = 44;
			this->radio_16_mode->Text = L"16 СС";
			this->radio_16_mode->UseVisualStyleBackColor = true;
			this->radio_16_mode->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radio_16_mode_CheckedChanged);
			// 
			// radio_2_mode
			// 
			this->radio_2_mode->AutoSize = true;
			this->radio_2_mode->Location = System::Drawing::Point(70, 41);
			this->radio_2_mode->Name = L"radio_2_mode";
			this->radio_2_mode->Size = System::Drawing::Size(48, 17);
			this->radio_2_mode->TabIndex = 47;
			this->radio_2_mode->Text = L"2 СС";
			this->radio_2_mode->UseVisualStyleBackColor = true;
			this->radio_2_mode->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radio_2_mode_CheckedChanged);
			// 
			// radio_10_mode
			// 
			this->radio_10_mode->AutoSize = true;
			this->radio_10_mode->Checked = true;
			this->radio_10_mode->Location = System::Drawing::Point(6, 41);
			this->radio_10_mode->Name = L"radio_10_mode";
			this->radio_10_mode->Size = System::Drawing::Size(54, 17);
			this->radio_10_mode->TabIndex = 45;
			this->radio_10_mode->TabStop = true;
			this->radio_10_mode->Text = L"10 СС";
			this->radio_10_mode->UseVisualStyleBackColor = true;
			this->radio_10_mode->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radio_10_mode_CheckedChanged);
			// 
			// radio_8_mode
			// 
			this->radio_8_mode->AutoSize = true;
			this->radio_8_mode->Location = System::Drawing::Point(70, 18);
			this->radio_8_mode->Name = L"radio_8_mode";
			this->radio_8_mode->Size = System::Drawing::Size(48, 17);
			this->radio_8_mode->TabIndex = 46;
			this->radio_8_mode->Text = L"8 СС";
			this->radio_8_mode->UseVisualStyleBackColor = true;
			this->radio_8_mode->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radio_8_mode_CheckedChanged);
			// 
			// group_left
			// 
			this->group_left->Controls->Add(this->btn_7);
			this->group_left->Controls->Add(this->btn_8);
			this->group_left->Controls->Add(this->btn_solve);
			this->group_left->Controls->Add(this->btn_point);
			this->group_left->Controls->Add(this->btn_9);
			this->group_left->Controls->Add(this->btn_0);
			this->group_left->Controls->Add(this->btn_3);
			this->group_left->Controls->Add(this->btn_2);
			this->group_left->Controls->Add(this->btn_4);
			this->group_left->Controls->Add(this->btn_1);
			this->group_left->Controls->Add(this->btn_5);
			this->group_left->Controls->Add(this->btn_6);
			this->group_left->Location = System::Drawing::Point(13, 159);
			this->group_left->Name = L"group_left";
			this->group_left->Size = System::Drawing::Size(244, 309);
			this->group_left->TabIndex = 45;
			this->group_left->TabStop = false;
			// 
			// group_math
			// 
			this->group_math->Controls->Add(this->btn_plus);
			this->group_math->Controls->Add(this->btn_plus_minus);
			this->group_math->Controls->Add(this->btn_divide);
			this->group_math->Controls->Add(this->btn_minus);
			this->group_math->Controls->Add(this->btn_multiply);
			this->group_math->Controls->Add(this->btn_sqrt);
			this->group_math->Controls->Add(this->btn_pow);
			this->group_math->Location = System::Drawing::Point(248, 159);
			this->group_math->Name = L"group_math";
			this->group_math->Size = System::Drawing::Size(142, 309);
			this->group_math->TabIndex = 46;
			this->group_math->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(872, 480);
			this->Controls->Add(this->group_math);
			this->Controls->Add(this->btn_backspace);
			this->Controls->Add(this->group_left);
			this->Controls->Add(this->group_right);
			this->Controls->Add(this->display_textBox);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->btn_CE);
			this->Controls->Add(this->btn_C);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &MainForm::MainForm_SizeChanged);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->group_right->ResumeLayout(false);
			this->group_right->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->group_left->ResumeLayout(false);
			this->group_math->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	#pragma endregion

#pragma region variables
public:
	String^ err_mes;
	bool is_eng_mode, is_error;
	Double num, num_saved;
	int operation, max_num_in_cur_bytes;
	int SS;	// 0(2), 1(8), 2(10), 3(16)
	
#pragma endregion



#pragma region functions
	public: void set_mode() {
		if (is_eng_mode) {
			MainForm::Width = 747;
			MainForm::Height = 519;
			SS = 2;
		}
		else {
			MainForm::Width = 418;
			MainForm::Height = 519;
		}
		group_right->Enabled = is_eng_mode;
		group_right->Visible = is_eng_mode;
		btn_point->Enabled = !is_eng_mode;

		num = 0;
		num_saved = 0;
		display_textBox->Text = "0";
		max_num_in_cur_bytes = 127;
		form_num();
		show_num();
	}
	public: void add_digit(String^ input_digit) {
		if (display_textBox->Text == "0" && input_digit != ",")
			display_textBox->Text = input_digit;
		else
			display_textBox->Text += input_digit;
		
		if (is_eng_mode) {
			form_num();
			show_num();
		}
	}
	public: void form_num() {
		if (is_eng_mode) {
			String_to_SS();
		}
		else {
			try {
				String^ inp = display_textBox->Text;
//				inp = inp->Replace("*10^", "E");
				if (inp->Contains("*")) {
					if (inp->Contains("*10^")) {			// 12*10^12, 12*10^, 12*10, 12*
						if (inp->IndexOf("^") == inp->Length - 1)		// 12*10^
							show_error("Некорректная запись числа");
						if (inp->IndexOf("^") < inp->Length - 1) {		// 6*10^12
							String^ right_part = inp->Substring(inp->IndexOf("^") + 1);	// 12
							num = Double::Parse(inp->Substring(0, inp->IndexOf("*"))) * Math::Pow(10, Double::Parse(right_part));	  // num = 6 * 10 ^ 12
						}
					}
					else if (inp->Contains("*")) {						// 7*10, 12*
						if (inp->IndexOf("*") == inp->Length - 1)	// 7*
							show_error("Некорректная запись числа");
						if (inp->IndexOf("*") < inp->Length - 1) {	// 13*18
							String^ right_part = inp->Substring(inp->IndexOf("*") + 1);	// 18
							num = Double::Parse(inp->Substring(0, inp->IndexOf("*"))) * Double::Parse(right_part);
						}
					}
				}
				else
					num = Double::Parse(inp);
			}
			catch (System::Exception^ e) {
				//return "Ошибочка :)";
				show_error(e->Message);
			}
		}
	}
	public: void show_error(String^ mes) {
		if (mes == "no error") {
			is_error = false;
			err_mes = "Ошибка!";
		}
		else {
			is_error = true;
			err_mes = mes;
		}
	}
	public: void show_num() {
		if (is_eng_mode) {
			if (num > max_num_in_cur_bytes) {
				backspace();
			}
			String ^ bin, ^ oct, ^ dec, ^ hex;
			bin = SS_to_String(2);
			oct = SS_to_String(8);
			dec = SS_to_String(10);
			hex = SS_to_String(16);
			if (max_num_in_cur_bytes == 127) {
				while (bin->Length < 7)
					bin = "0" + bin;
				while (oct->Length < 3)
					oct = "0" + oct;
				while (dec->Length < 3)
					dec = "0" + dec;
				while (hex->Length < 2)
					hex = "0" + hex;
			}
			else {
				while (bin->Length < 15)
					bin = "0" + bin;
				while (oct->Length < 5)
					oct = "0" + oct;
				while (dec->Length < 5)
					dec = "0" + dec;
				while (hex->Length < 4)
					hex = "0" + hex;
			}
			label_in_2->Text = "Число в 2 СС: " + bin;
			label_in_8->Text = "Число в 8 СС: " + oct;
			label_in_10->Text = "Число в 10 СС: " + dec;
			label_in_16->Text = "Число в 16 СС: " + hex;
		}
		else {
			if (display_textBox->Text == "не число" || Convert::ToString(num) == "NaN" || Convert::ToString(num) == "не число") {
				show_error(err_mes);
			}
			if (display_textBox->Text == "∞")		// тут знак бесконечности должен быть
				show_error("Слишком большое число!");
			if (is_error)
				display_textBox->Text = err_mes;
			else {
				display_textBox->Text = Convert::ToString(num);
				display_textBox->Text = display_textBox->Text->Replace("E", "*10^");
				if (display_textBox->Text->Contains("+")) {
					display_textBox->Text = display_textBox->Text->Replace("+", "");
				}
			}
		}

		if (display_textBox->Text->IndexOf(",") != -1 && display_textBox->Text->Length > 7) {
			if (display_textBox->Text->Substring(display_textBox->Text->IndexOf(",") + 1)->Contains("999999999")) {
				num = 1 + Convert::ToDouble(display_textBox->Text->Substring(0, display_textBox->Text->IndexOf(",")));
				display_textBox->Text = display_textBox->Text->Substring(0, display_textBox->Text->IndexOf(",")) + display_textBox->Text->Substring(display_textBox->Text->IndexOf(",") + 1);
			}
		}
		hide_or_show_buttons();
	}
	public: void set_operation(int inp) {
		if (inp == 5) {
			form_num();
			try {
				if (num < 0)
					show_error("Ошибка извлечения корня");
				else
					num = Math::Sqrt(num);
			}
			catch (System::Exception^ e) {
				show_error("Ошибка извлечения корня");
			}
			show_num();
		}
		else if (inp == 6) {
			form_num();
			num *= -1;
			show_num();
		}
		else if (inp == 7 || inp == 8) {
			num_saved = num;
			num = 0;
			display_textBox->Text = "0";
			show_num();
			operation = inp;
			hide_or_show_buttons();
		}
		else {
			form_num();
			num_saved = num;
			num = 0;
			show_num();
			operation = inp;
		}
	}
	public: void solve() {
		form_num();
		switch (operation) {
			case -1:
				break;
			case 0:		// +
				num = num_saved + num;
				break;
			case 1:		// -
				num = num_saved - num;
				break;
			case 2:		// *
				num = num_saved * num;
				if (num == Double::PositiveInfinity)
					show_error("Слишком большое число");
				break;
			case 3:		// /
				try {
					num = num_saved / num;
					if (Convert::ToString(num) == "не число") {
						show_error("Деление на ноль");
					}
				}
				catch (System::Exception^ e) {
					show_error("Деление на ноль");
				}
				break;
			case 4:		// pow
				try {
					num = Math::Pow(num_saved, num);
					if (num == Double::PositiveInfinity)
						show_error("Слишком большое число");
				}
				catch (System::Exception^ e) {
					show_error("Ошибка возведения в степень");
				}
				break;
			case 7:
				RoLn(num_saved, num);
				break;
			case 8:
				RoRn(num_saved, num);
				break;
		}
		operation = -1;
		hide_or_show_buttons();
		show_num();
	}
	public: void backspace() {
		display_textBox->Text = display_textBox->Text->Remove(display_textBox->Text->Length - 1);
		if (display_textBox->Text->Length == 0 || display_textBox->Text == "-")
			display_textBox->Text = "0";
		if (is_eng_mode) {
			form_num();
			show_num();
		}
	}
	public: void hide_or_show_buttons() {
		if (is_eng_mode) {
			if (operation == 7 || operation == 8) {
				btn_2->Enabled = true;
				btn_3->Enabled = true;
				btn_4->Enabled = true;
				btn_5->Enabled = true;
				btn_6->Enabled = true;
				btn_7->Enabled = true;
				btn_8->Enabled = true;
				btn_9->Enabled = true;
				btn_ltr_A->Enabled = false;
				btn_ltr_B->Enabled = false;
				btn_ltr_C->Enabled = false;
				btn_ltr_D->Enabled = false;
				btn_ltr_E->Enabled = false;
				btn_ltr_F->Enabled = false;
			}
			else {
				group_right->Enabled = true;
				group_right->Visible = true;
				group_math->Enabled = false;
				group_math->Visible = false;
				btn_2->Enabled = SS > 0;
				btn_3->Enabled = SS > 0;
				btn_4->Enabled = SS > 0;
				btn_5->Enabled = SS > 0;
				btn_6->Enabled = SS > 0;
				btn_7->Enabled = SS > 0;
				btn_8->Enabled = SS > 1;
				btn_9->Enabled = SS > 1;
				btn_ltr_A->Enabled = SS == 3;
				btn_ltr_B->Enabled = SS == 3;
				btn_ltr_C->Enabled = SS == 3;
				btn_ltr_D->Enabled = SS == 3;
				btn_ltr_E->Enabled = SS == 3;
				btn_ltr_F->Enabled = SS == 3;
			}
		}
		else {
			if (is_error) {
				group_left->Enabled = false;
				group_math->Enabled = false;
				group_right->Enabled = false;
				eng_mode_btn->Enabled = false;
				normal_mode_btn->Enabled = false;
				btn_backspace->Enabled = false;
			}
			else {
				group_left->Enabled = true;
				group_math->Enabled = true;
				eng_mode_btn->Enabled = true;
				normal_mode_btn->Enabled = true;
				btn_backspace->Enabled = true;
				group_math->Enabled = true;
				group_math->Visible = true;
				group_right->Enabled = is_eng_mode;
			}
		}
	}
	public: void String_to_SS() {
		String^ inp = display_textBox->Text;
		String^ buf;
		int base;
		if (SS == 0)
			base = 2;
		if (SS == 1)
			base = 8;
		if (SS == 2)
			base = 10;
		if (SS == 3)
			base = 16;
		int res = 0, cnt = 0;
		while (inp->Length > 0) {
			buf = "";
			buf += inp[inp->Length - 1];
			inp = inp->Remove(inp->Length - 1);
			if (base != 16)
				res += Convert::ToInt16(buf) * Math::Pow(base, cnt);
			else {
				if (buf == "A")
					res += 10 * Math::Pow(base, cnt);
				else if (buf == "B")
					res += 11 * Math::Pow(base, cnt);
				else if (buf == "C")
					res += 12 * Math::Pow(base, cnt);
				else if (buf == "D")
					res += 13 * Math::Pow(base, cnt);
				else if (buf == "E")
					res += 14 * Math::Pow(base, cnt);
				else if (buf == "F")
					res += 15 * Math::Pow(base, cnt);
				else
					res += Convert::ToInt16(buf) * Math::Pow(base, cnt);
			}
			cnt++;
		}
		num = res;
	}
	public: String^ SS_to_String(int base) {
		int in_n = (int)num;
		int buf = 0;
		String^ res = "";
		while (in_n > 0) {
			buf = in_n % base;
			in_n /= base;
			if (base != 16)
				res = Convert::ToString(buf) + res;
			else {
				if (buf == 10)
					res = "A" + res;
				else if (buf == 11)
					res = "B" + res;
				else if (buf == 12)
					res = "C" + res;
				else if (buf == 13)
					res = "D" + res;
				else if (buf == 14)
					res = "E" + res;
				else if (buf == 15)
					res = "F" + res;
				else
					res = Convert::ToString(buf) + res;
			}
		}
		return res;
		/*
		if (base == 2)
			while (buf_str.length() + res->Length < length_in_2)
				buf_str += "0";
		if (base == 8)
			while (buf_str.length() + res->Length < length_in_8)
				buf_str += "0";
		if (base == 10)
			while (buf_str.length() + res->Length < length_in_10)
				buf_str += "0";
		if (base == 16)
			while (buf_str.length() + res->Length < length_in_16)
				buf_str += "0";
				*/
	}
	public: void RoL() {
		String^ bin = SS_to_String(2);
		if (max_num_in_cur_bytes == 127)
			while (bin->Length < 7)
				bin = "0" + bin;
		else
			while (bin->Length < 15)
				bin = "0" + bin;
		bin = bin->Substring(1) + bin->Substring(0, 1);
		//int old_SS = SS;
		//SS = 0;
		//display_textBox->Text = bin;
		String^ buf;
		int cnt = 0;
		int res = 0;
		while (bin->Length > 0) {
			buf = "";
			buf += bin[bin->Length - 1];
			bin = bin->Remove(bin->Length - 1);
			res += Convert::ToInt16(buf) * Math::Pow(2, cnt);
			cnt++;
		}
		num = res;
		//buf = bin;
		if (max_num_in_cur_bytes == 127) {
			if (SS == 0)
				buf = SS_to_String(2);
			else if (SS == 1)
				buf = SS_to_String(8);
			else if (SS == 2)
				buf = SS_to_String(10);
			else
				buf = SS_to_String(16);
		}
		else {
			if (SS == 0)
				buf = SS_to_String(2);
			else if (SS == 1)
				buf = SS_to_String(8);
			else if (SS == 2)
				buf = SS_to_String(10);
			else
				buf = SS_to_String(16);
		}
		display_textBox->Text = buf;
		if (display_textBox->Text == "")
			display_textBox->Text = "0";
		show_num();
	}
	public: void RoR() {
		String^ bin = SS_to_String(2);
		if (max_num_in_cur_bytes == 127)
			while (bin->Length < 7)
				bin = "0" + bin;
		else
			while (bin->Length < 15)
				bin = "0" + bin;
		bin = bin->Substring(bin->Length - 1, 1) + bin->Substring(0, bin->Length - 1);
		//int old_SS = SS;
		//SS = 0;
		//display_textBox->Text = bin;
		String^ buf;
		int cnt = 0;
		int res = 0;
		while (bin->Length > 0) {
			buf = "";
			buf += bin[bin->Length - 1];
			bin = bin->Remove(bin->Length - 1);
			res += Convert::ToInt16(buf) * Math::Pow(2, cnt);
			cnt++;
		}
		num = res;
		//buf = bin;
		if (max_num_in_cur_bytes == 127) {
			if (SS == 0)
				buf = SS_to_String(2);
			else if (SS == 1)
				buf = SS_to_String(8);
			else if (SS == 2)
				buf = SS_to_String(10);
			else
				buf = SS_to_String(16);
		}
		else {
			if (SS == 0)
				buf = SS_to_String(2);
			else if (SS == 1)
				buf = SS_to_String(8);
			else if (SS == 2)
				buf = SS_to_String(10);
			else
				buf = SS_to_String(16);
		}
		display_textBox->Text = buf;
		if (display_textBox->Text == "")
			display_textBox->Text = "0";
		show_num();
	
	}
	public: void RoLn(double a, double n) {		// RoL(a) n times
		num = a;
		for (int i = 0; i < (int)n; i++)
			RoL();
	}
	public: void RoRn(double a, double n) {		// RoR(a) n times
		num = a;
		for (int i = 0; i < (int)n; i++)
			RoR();
	}


#pragma endregion

		  

#pragma region events
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	is_eng_mode = false;
	is_error = false;
	err_mes = "Ошибка!";
	set_mode();
}
private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void normal_mode_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	is_eng_mode = false;
	set_mode();
}
private: System::Void eng_mode_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	is_eng_mode = true;
	set_mode();
}
public: System::Void info_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	InfoForm^ new_form = gcnew InfoForm();
	new_form->Show();
}
public: System::Void task_info_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	TaskForm^ new_form = gcnew TaskForm();
	new_form->Show();
}
public: System::Void manual_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	ManualForm^ new_form = gcnew ManualForm();
	new_form->Show();
}
private: System::Void btn_1_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("1");
}
private: System::Void btn_2_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("2");
}
private: System::Void btn_3_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("3");
}
private: System::Void btn_4_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("4");
}
private: System::Void btn_5_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("5");
}
private: System::Void btn_6_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("6");
}
private: System::Void btn_7_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("7");
}
private: System::Void btn_8_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("8");
}
private: System::Void btn_9_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("9");
}
private: System::Void btn_0_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("0");
}
private: System::Void btn_point_Click(System::Object^ sender, System::EventArgs^ e) {
	//add_digit(".");
	add_digit(",");
}
private: System::Void btn_CE_Click(System::Object^ sender, System::EventArgs^ e) {
	num = 0;
	num_saved = 0;
	display_textBox->Text = "0";
	show_error("no error");
	show_num();
}
private: System::Void btn_C_Click(System::Object^ sender, System::EventArgs^ e) {
	num = 0;
	display_textBox->Text = "0";
	show_error("no error");
	show_num();
}
private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	set_operation(0);
}
private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	set_operation(1);
}
private: System::Void btn_multiply_Click(System::Object^ sender, System::EventArgs^ e) {
	set_operation(2);
}
private: System::Void btn_divide_Click(System::Object^ sender, System::EventArgs^ e) {
	set_operation(3);
}
private: System::Void btn_pow_Click(System::Object^ sender, System::EventArgs^ e) {
	set_operation(4);
}
private: System::Void btn_sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
	set_operation(5);
}
private: System::Void btn_plus_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	set_operation(6);
}
private: System::Void btn_solve_Click(System::Object^ sender, System::EventArgs^ e) {
	solve();
}
private: System::Void btn_backspace_Click(System::Object^ sender, System::EventArgs^ e) {
	backspace();
}
private: System::Void MainForm_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	display_textBox->Width = MainForm::Width - 40;
}
private: System::Void btn_ltr_A_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("A");
}
private: System::Void btn_ltr_B_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("B");
}
private: System::Void btn_ltr_C_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("C");
}
private: System::Void btn_ltr_D_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("D");
}
private: System::Void btn_ltr_E_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("E");
}
private: System::Void btn_ltr_F_Click(System::Object^ sender, System::EventArgs^ e) {
	add_digit("F");
}
private: System::Void btn_RoL_Click(System::Object^ sender, System::EventArgs^ e) {
	RoL();
}
private: System::Void btn_RoR_Click(System::Object^ sender, System::EventArgs^ e) {
	RoR();
}
private: System::Void btn_RoLn_Click(System::Object^ sender, System::EventArgs^ e) {
	set_operation(7);
}
private: System::Void btn_RoRn_Click(System::Object^ sender, System::EventArgs^ e) {
	set_operation(8);
}
private: System::Void radio_2_mode_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SS = 0;
	display_textBox->Text = "0";
	num = 0;
	form_num();
	show_num();
}
private: System::Void radio_8_mode_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SS = 1;
	display_textBox->Text = "0";
	num = 0;
	form_num();
	show_num();
}
private: System::Void radio_10_mode_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SS = 2;
	display_textBox->Text = "0";
	num = 0;
	form_num();
	show_num();
}
private: System::Void radio_16_mode_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SS = 3;
	display_textBox->Text = "0";
	num = 0;
	form_num();
	show_num();
}
private: System::Void radio_1_byte_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	max_num_in_cur_bytes = 127;
	display_textBox->Text = "0";
	num = 0;
	form_num();
	show_num();
}
private: System::Void radio_2_byte_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	max_num_in_cur_bytes = 32767;
	display_textBox->Text = "0";
	num = 0;
	form_num();
	show_num();
}
#pragma endregion
};
}
