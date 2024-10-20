#pragma once

namespace KataTraining {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ArabicLetters
	/// </summary>
	public ref class ArabicLetters : public System::Windows::Forms::Form
	{
	public:
		ArabicLetters(void)
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
		~ArabicLetters()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tp1;

	private: System::Windows::Forms::TabPage^ tp2;

	private: System::Windows::Forms::DataGridView^ dgv;
	private: System::Windows::Forms::TabPage^ tp3;
	private: System::Windows::Forms::DataGridView^ dgv2;
	private: System::Windows::Forms::DataGridView^ dgv3;
	private: System::Windows::Forms::DataGridView^ dgv2sub;
	private: System::Windows::Forms::TextBox^ tb1;
	private: System::Windows::Forms::Label^ label1;



	private: System::ComponentModel::IContainer^ components;








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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tp1 = (gcnew System::Windows::Forms::TabPage());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->tp2 = (gcnew System::Windows::Forms::TabPage());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->dgv2sub = (gcnew System::Windows::Forms::DataGridView());
			this->dgv2 = (gcnew System::Windows::Forms::DataGridView());
			this->tp3 = (gcnew System::Windows::Forms::TabPage());
			this->dgv3 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tp1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->tp2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv2sub))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv2))->BeginInit();
			this->tp3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv3))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tp1);
			this->tabControl1->Controls->Add(this->tp2);
			this->tabControl1->Controls->Add(this->tp3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Left;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(657, 573);
			this->tabControl1->TabIndex = 0;
			// 
			// tp1
			// 
			this->tp1->Controls->Add(this->dgv);
			this->tp1->Location = System::Drawing::Point(4, 22);
			this->tp1->Name = L"tp1";
			this->tp1->Padding = System::Windows::Forms::Padding(3);
			this->tp1->Size = System::Drawing::Size(649, 547);
			this->tp1->TabIndex = 0;
			this->tp1->Text = L"Letters";
			this->tp1->UseVisualStyleBackColor = true;
			// 
			// dgv
			// 
			this->dgv->AllowUserToAddRows = false;
			this->dgv->AllowUserToDeleteRows = false;
			this->dgv->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgv->Location = System::Drawing::Point(3, 3);
			this->dgv->Name = L"dgv";
			this->dgv->ReadOnly = true;
			this->dgv->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders;
			this->dgv->Size = System::Drawing::Size(643, 541);
			this->dgv->TabIndex = 0;
			// 
			// tp2
			// 
			this->tp2->Controls->Add(this->label1);
			this->tp2->Controls->Add(this->tb1);
			this->tp2->Controls->Add(this->dgv2sub);
			this->tp2->Controls->Add(this->dgv2);
			this->tp2->Location = System::Drawing::Point(4, 22);
			this->tp2->Name = L"tp2";
			this->tp2->Padding = System::Windows::Forms::Padding(3);
			this->tp2->Size = System::Drawing::Size(649, 547);
			this->tp2->TabIndex = 1;
			this->tp2->Text = L"Letters (symbols)";
			this->tp2->UseVisualStyleBackColor = true;
			// 
			// tb1
			// 
			this->tb1->Location = System::Drawing::Point(549, 473);
			this->tb1->Name = L"tb1";
			this->tb1->ReadOnly = true;
			this->tb1->Size = System::Drawing::Size(100, 20);
			this->tb1->TabIndex = 3;
			this->tb1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// dgv2sub
			// 
			this->dgv2sub->AllowUserToAddRows = false;
			this->dgv2sub->AllowUserToDeleteRows = false;
			this->dgv2sub->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dgv2sub->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv2sub->Location = System::Drawing::Point(487, 492);
			this->dgv2sub->Name = L"dgv2sub";
			this->dgv2sub->ReadOnly = true;
			this->dgv2sub->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders;
			this->dgv2sub->Size = System::Drawing::Size(162, 55);
			this->dgv2sub->TabIndex = 2;
			// 
			// dgv2
			// 
			this->dgv2->AllowUserToAddRows = false;
			this->dgv2->AllowUserToDeleteRows = false;
			this->dgv2->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dgv2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv2->Dock = System::Windows::Forms::DockStyle::Top;
			this->dgv2->Location = System::Drawing::Point(3, 3);
			this->dgv2->Name = L"dgv2";
			this->dgv2->ReadOnly = true;
			this->dgv2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders;
			this->dgv2->Size = System::Drawing::Size(643, 406);
			this->dgv2->TabIndex = 1;
			this->dgv2->SelectionChanged += gcnew System::EventHandler(this, &ArabicLetters::dgv2_SelectionChanged);
			// 
			// tp3
			// 
			this->tp3->Controls->Add(this->dgv3);
			this->tp3->Location = System::Drawing::Point(4, 22);
			this->tp3->Name = L"tp3";
			this->tp3->Size = System::Drawing::Size(649, 547);
			this->tp3->TabIndex = 2;
			this->tp3->Text = L"Vowels";
			this->tp3->UseVisualStyleBackColor = true;
			// 
			// dgv3
			// 
			this->dgv3->AllowUserToAddRows = false;
			this->dgv3->AllowUserToDeleteRows = false;
			this->dgv3->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dgv3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgv3->Location = System::Drawing::Point(0, 0);
			this->dgv3->Name = L"dgv3";
			this->dgv3->ReadOnly = true;
			this->dgv3->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders;
			this->dgv3->Size = System::Drawing::Size(649, 547);
			this->dgv3->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(-1, 532);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(382, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"There is an array range exception on some letters  (literally just some final let"
				L"ters)";
			// 
			// ArabicLetters
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(843, 573);
			this->Controls->Add(this->tabControl1);
			this->Name = L"ArabicLetters";
			this->Text = L"Arabic Letters";
			this->Load += gcnew System::EventHandler(this, &ArabicLetters::ArabicLetters_Load);
			this->tabControl1->ResumeLayout(false);
			this->tp1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->tp2->ResumeLayout(false);
			this->tp2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv2sub))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv2))->EndInit();
			this->tp3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv3))->EndInit();
			this->ResumeLayout(false);

		}

		public:
			Generic::List<Generic::List<String^>^>^ arabicLetters, ^arabicLettersSymbols, ^arabicLettersSymbolsVariations;
		System::Windows::Forms::DataGridViewCell^ selectedCell;


#pragma endregion
	private: System::Void ArabicLetters_Load(System::Object^ sender, System::EventArgs^ e) {
		PrepareTables();
	}

	


	private: void PrepareTables() {
		dgv->Columns->Clear();
		dgv->ColumnCount = 5;
		dgv->Rows->Add(6);

		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 5; j++) {
				dgv->Rows[i]->Cells[j]->Value = arabicLetters->ToArray()[i][j];
			}
		}
		
		dgv2->Columns->Clear();
		dgv2->ColumnCount = 5;
		dgv2->Rows->Add(6);

		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 5; j++) {
				dgv2->Rows[i]->Cells[j]->Value = arabicLettersSymbols->ToArray()[i][j];
			}
		}
		dgv2sub->Columns->Clear();
		dgv2sub->ColumnCount = 4;
		dgv2sub->Rows->Add(1);
		dgv2sub->Rows[0]->Cells[0]->Value = " 1 ";
		dgv2sub->Rows[0]->Cells[1]->Value = " 2 ";
		dgv2sub->Rows[0]->Cells[2]->Value = " 3 ";
		dgv2sub->Rows[0]->Cells[3]->Value = " 4 ";

		/*dgv3->Columns->Clear();
		dgv3->ColumnCount = 5;
		dgv3->Rows->Add(6);

		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 5; j++) {
				dgv3->Rows[i]->Cells[j]->Value = arabicLetters->ToArray()[i][j];
			}
		}*/
	}

	private: System::Void dgv2_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		selectedCell = dgv2->SelectedCells[0];
		String^ val = "";
		int index, col, row;
		if (selectedCell->Value != nullptr) {
			col = selectedCell->RowIndex;
			row = selectedCell->ColumnIndex;
			index = 5 * (col + 1) - row - 1;
			//val = arabicLettersSymbolsVariations->ToArray()[col][row];

			if (index <= arabicLettersSymbolsVariations->Count) {
				dgv2sub->Rows[0]->Cells[0]->Value = arabicLettersSymbolsVariations->ToArray()[index][0];
				dgv2sub->Rows[0]->Cells[1]->Value = arabicLettersSymbolsVariations->ToArray()[index][1];
				dgv2sub->Rows[0]->Cells[2]->Value = arabicLettersSymbolsVariations->ToArray()[index][2];
				dgv2sub->Rows[0]->Cells[3]->Value = arabicLettersSymbolsVariations->ToArray()[index][3];

				dgv2sub->Columns[0]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
				dgv2sub->Columns[1]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
				dgv2sub->Columns[2]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
				dgv2sub->Columns[3]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;

				dgv2sub->ClearSelection();

				tb1->Text = arabicLetters->ToArray()[col][row];
			}
		}
	}

};
}
