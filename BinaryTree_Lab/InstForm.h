#pragma once

namespace BinaryTreeLab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� InstForm
	/// </summary>
	public ref class InstForm : public System::Windows::Forms::Form
	{
	public:
		InstForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~InstForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ task_textBox;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->task_textBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// task_textBox
			// 
			this->task_textBox->BackColor = System::Drawing::SystemColors::Info;
			this->task_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->task_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->task_textBox->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->task_textBox->Location = System::Drawing::Point(12, 12);
			this->task_textBox->Multiline = true;
			this->task_textBox->Name = L"task_textBox";
			this->task_textBox->ReadOnly = true;
			this->task_textBox->ShortcutsEnabled = false;
			this->task_textBox->Size = System::Drawing::Size(364, 118);
			this->task_textBox->TabIndex = 1;
			this->task_textBox->TabStop = false;
			this->task_textBox->Text = L"������ ��������� ������� ��� �������� ������ � ��� �������������.\r\n���� ���������"
				L" ������ (��� ������) ���������� ����������� ����� ����� ����� ����� ������-����"
				L"������� \"������\".";
			// 
			// InstForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(385, 126);
			this->Controls->Add(this->task_textBox);
			this->Name = L"InstForm";
			this->Text = L"InstForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
