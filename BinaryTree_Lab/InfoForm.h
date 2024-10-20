#pragma once

namespace BinaryTreeLab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ InfoForm
	/// </summary>
	public ref class InfoForm : public System::Windows::Forms::Form
	{
	public:
		InfoForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~InfoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ task_textBox;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InfoForm::typeid));
			this->task_textBox = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// task_textBox
			// 
			this->task_textBox->BackColor = System::Drawing::SystemColors::Info;
			this->task_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->task_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->task_textBox->Location = System::Drawing::Point(12, 12);
			this->task_textBox->Multiline = true;
			this->task_textBox->Name = L"task_textBox";
			this->task_textBox->ReadOnly = true;
			this->task_textBox->Size = System::Drawing::Size(746, 177);
			this->task_textBox->TabIndex = 1;
			this->task_textBox->TabStop = false;
			this->task_textBox->Text = resources->GetString(L"task_textBox.Text");
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(424, 195);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(334, 61);
			this->textBox1->TabIndex = 2;
			this->textBox1->TabStop = false;
			this->textBox1->Text = L"Program version 1.0\r\n–аботу выполнил студент группы »ЌЅс-2301 \r\n»гнатович ¬адим\r\n"
				L"09.2023";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// InfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 263);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->task_textBox);
			this->Name = L"InfoForm";
			this->Text = L"InfoForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
