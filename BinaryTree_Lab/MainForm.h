#include <string>
#include <msclr\marshal_cppstd.h>
#include "InfoForm.h"
#include "InstForm.h"
#include <cmath>
#pragma once

namespace BinaryTreeLab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	struct BTree {
		int value;
		BTree* left;
		BTree* right;
	};
	/*
	BTree* add_element(BTree* root, int value);
	BTree* del(BTree* root, int value);
	BTree* del_elements(BTree* root, int value);
	std::string get_tree(BTree* tree);
	int get_min(BTree* tree);
	int get_min_pos(BTree* tree, int value, int level);
	int get_size(BTree* tree, int cnt);
	BTree* form_tree(std::string user);
	*/



	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ input_textBox;

	private: System::Windows::Forms::TextBox^ output_textBox;
	private: System::Windows::Forms::Button^ start_btn;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ num_textBox;
	private: System::Windows::Forms::Button^ del_btn;
	private: System::Windows::Forms::Label^ a_label;
	private: System::Windows::Forms::Label^ b_label;
	private: System::Windows::Forms::Button^ add_btn;
	private: System::Windows::Forms::TextBox^ add_textBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exit_barBtn;

	private: System::Windows::Forms::ToolStripMenuItem^ dToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ info_barBtn;
	private: System::Windows::Forms::ToolStripMenuItem^ instraction_barBtn;
	public: System::Windows::Forms::PictureBox^ pictureBox1;
	private:







	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->input_textBox = (gcnew System::Windows::Forms::TextBox());
			this->output_textBox = (gcnew System::Windows::Forms::TextBox());
			this->start_btn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->num_textBox = (gcnew System::Windows::Forms::TextBox());
			this->del_btn = (gcnew System::Windows::Forms::Button());
			this->a_label = (gcnew System::Windows::Forms::Label());
			this->b_label = (gcnew System::Windows::Forms::Label());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->add_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit_barBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->info_barBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->instraction_barBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Заданное дерево натуральных чисел:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(290, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Значения всех вершин дерева в постфиксном порядке:";
			// 
			// input_textBox
			// 
			this->input_textBox->Location = System::Drawing::Point(15, 54);
			this->input_textBox->Name = L"input_textBox";
			this->input_textBox->Size = System::Drawing::Size(287, 20);
			this->input_textBox->TabIndex = 4;
			this->input_textBox->TextChanged += gcnew System::EventHandler(this, &MainForm::input_textBox_TextChanged);
			// 
			// output_textBox
			// 
			this->output_textBox->BackColor = System::Drawing::SystemColors::Info;
			this->output_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->output_textBox->Location = System::Drawing::Point(15, 122);
			this->output_textBox->Name = L"output_textBox";
			this->output_textBox->ReadOnly = true;
			this->output_textBox->Size = System::Drawing::Size(287, 13);
			this->output_textBox->TabIndex = 5;
			// 
			// start_btn
			// 
			this->start_btn->Location = System::Drawing::Point(15, 80);
			this->start_btn->Name = L"start_btn";
			this->start_btn->Size = System::Drawing::Size(122, 23);
			this->start_btn->TabIndex = 6;
			this->start_btn->Text = L"Создать дерево";
			this->start_btn->UseVisualStyleBackColor = true;
			this->start_btn->Visible = false;
			this->start_btn->Click += gcnew System::EventHandler(this, &MainForm::start_btn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(216, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Значение, узлы с которым надо удалить:";
			// 
			// num_textBox
			// 
			this->num_textBox->Location = System::Drawing::Point(15, 204);
			this->num_textBox->Name = L"num_textBox";
			this->num_textBox->Size = System::Drawing::Size(100, 20);
			this->num_textBox->TabIndex = 8;
			this->num_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// del_btn
			// 
			this->del_btn->Location = System::Drawing::Point(128, 203);
			this->del_btn->Name = L"del_btn";
			this->del_btn->Size = System::Drawing::Size(100, 23);
			this->del_btn->TabIndex = 9;
			this->del_btn->Text = L"Удалить";
			this->del_btn->UseVisualStyleBackColor = true;
			this->del_btn->Click += gcnew System::EventHandler(this, &MainForm::del_btn_Click);
			// 
			// a_label
			// 
			this->a_label->AutoSize = true;
			this->a_label->BackColor = System::Drawing::SystemColors::Info;
			this->a_label->Location = System::Drawing::Point(15, 143);
			this->a_label->Name = L"a_label";
			this->a_label->Size = System::Drawing::Size(0, 13);
			this->a_label->TabIndex = 10;
			// 
			// b_label
			// 
			this->b_label->AutoSize = true;
			this->b_label->BackColor = System::Drawing::SystemColors::Info;
			this->b_label->Location = System::Drawing::Point(15, 163);
			this->b_label->Name = L"b_label";
			this->b_label->Size = System::Drawing::Size(0, 13);
			this->b_label->TabIndex = 11;
			// 
			// add_btn
			// 
			this->add_btn->Location = System::Drawing::Point(128, 268);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(100, 23);
			this->add_btn->TabIndex = 14;
			this->add_btn->Text = L"Добавить";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &MainForm::add_btn_Click);
			// 
			// add_textBox
			// 
			this->add_textBox->Location = System::Drawing::Point(15, 269);
			this->add_textBox->Name = L"add_textBox";
			this->add_textBox->Size = System::Drawing::Size(100, 20);
			this->add_textBox->TabIndex = 13;
			this->add_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 253);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(179, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Добавить элемент со значением:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fToolStripMenuItem,
					this->dToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1121, 24);
			this->menuStrip1->TabIndex = 15;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fToolStripMenuItem
			// 
			this->fToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exit_barBtn });
			this->fToolStripMenuItem->Name = L"fToolStripMenuItem";
			this->fToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->fToolStripMenuItem->Text = L"Меню";
			// 
			// exit_barBtn
			// 
			this->exit_barBtn->Name = L"exit_barBtn";
			this->exit_barBtn->Size = System::Drawing::Size(113, 22);
			this->exit_barBtn->Text = L"Выход";
			this->exit_barBtn->Click += gcnew System::EventHandler(this, &MainForm::exit_barBtn_Click);
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->info_barBtn,
					this->instraction_barBtn
			});
			this->dToolStripMenuItem->Name = L"dToolStripMenuItem";
			this->dToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->dToolStripMenuItem->Text = L"Справка";
			// 
			// info_barBtn
			// 
			this->info_barBtn->Name = L"info_barBtn";
			this->info_barBtn->Size = System::Drawing::Size(150, 22);
			this->info_barBtn->Text = L"О программе";
			this->info_barBtn->Click += gcnew System::EventHandler(this, &MainForm::info_barBtn_Click);
			// 
			// instraction_barBtn
			// 
			this->instraction_barBtn->Name = L"instraction_barBtn";
			this->instraction_barBtn->Size = System::Drawing::Size(150, 22);
			this->instraction_barBtn->Text = L"Инструкция";
			this->instraction_barBtn->Click += gcnew System::EventHandler(this, &MainForm::instraction_barBtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(355, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(734, 578);
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::pictureBox1_Paint);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1121, 617);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->add_textBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->b_label);
			this->Controls->Add(this->a_label);
			this->Controls->Add(this->del_btn);
			this->Controls->Add(this->num_textBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->start_btn);
			this->Controls->Add(this->output_textBox);
			this->Controls->Add(this->input_textBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: BTree* root = NULL;

	public: BTree* add_element(BTree* root, int value) {
		if (!root) {
			root = new BTree;
			root->left = NULL;
			root->right = NULL;
			root->value = value;
			return root;
		}
		if (value <= root->value)
			root->left = add_element(root->left, value);
		else
			root->right = add_element(root->right, value);
		return root;
	}
	public: BTree* del(BTree* root, int value) {
		if (root->value != value)
			return root;

		if (root->left == NULL && root->right == NULL)
			root = NULL;
		else if (root->left != NULL && root->right == NULL)
			root = root->left;
		else if (root->left == NULL && root->right != NULL)
			root = root->right;
		else if (root->left != NULL && root->right != NULL) {
			int val = root->right->value;
			root->left = add_element(root->left, val);
			root->right = del(root->right, root->right->value);
			root = del(root, value);
		}
		return root;
	}
	public: BTree* del_elements(BTree* root, int value) {
		if (!root) {
			return NULL;
		}
		root = del(root, value);

		if (!root) {
			return NULL;
		}
		if (root->left != NULL)
			root->left = del_elements(root->left, value);
		if (root->right != NULL)
			root->right = del_elements(root->right, value);

		return root;
	}
	public:	std::string get_tree(BTree* tree, std::string buf) {
		if (!tree) {
			return "It's empty!";
		}
		std::string res = buf;
		if (tree->left != NULL) {
			res = get_tree(tree->left, res);
		}
		if (tree->right != NULL) {
			res = get_tree(tree->right, res);
		}
		return res + " " + std::to_string(tree->value);
	}
	public: int get_min(BTree* tree) {
		if (tree == NULL)
			return NULL;
		int res;
		if (tree->left != NULL)
			res = get_min(tree->left);
		else
			res = tree->value;
		return res;
	}
	public: int get_min_pos(BTree* tree, int value, int level) {
		if (!tree)
			return NULL;
		int res;
		if (tree->left != NULL)
			res = get_min_pos(tree->left, value, level + 1);
		if (tree->value == value)
			res = level;
		return res;
	}
	public: int get_size(BTree* tree, int cnt) {
		if (!tree) {
			return 0;
		}
		int res = cnt;
		if (tree->left != NULL) {
			res = get_size(tree->left, res + 1);
		}
		if (tree->right != NULL) {
			res = get_size(tree->right, res + 1);
		}
		return res;
	}
	public: BTree* form_tree(std::string user) {
		BTree* new_tree = NULL;
		char numc[100];
		int cnt = 0;
		bool neg_num = false;
		for (int i = 0; i < user.length(); i++) {
			/*
			if (user[i] == '-' && i == user.length() - 1)
				break;
			if (user[i] == '-') {
				neg_num = true;
				cnt++;
				continue;
			}
			*/
			if (user[i] != ' ') {
				numc[cnt] = user[i];
				cnt++;
			}
			if (user[i] == ' ' || i == user.length() - 1) {
				int num;
				num = std::stoi(numc);
				/*
				else {
					std::string buf;
					for (int i = 1; i < cnt; i++)
						buf[i] = numc[i];
					num = -1 * std::stoi(buf);
					neg_num = false;
				}
				*/
				new_tree = add_element(new_tree, num);
				for (int i = 0; i < 100; i++)
					numc[i] = 0;
				cnt = 0;
			}
		}
		return new_tree;
	}
	public: BTree* clear_tree(BTree* tree) {
		if (!tree)
			return tree;
		if (tree->left != NULL)
			tree->left = clear_tree(tree->left);
		if (tree->right != NULL)
			tree->right = clear_tree(tree->right);
		if (!(tree->left || tree->right))
			tree = NULL;
		return tree;
	}
	public:	void draw_tree(BTree* tree, int level, int level_pos) {
		if (!tree)
			return;
		int value = tree->value;
		double delta_x = 0, delta_y = 0;
		double f_daughter_delta_x = 0, f_daughter_delta_y = 0, s_daughter_delta_x = 0, s_daughter_delta_y = 0;
		delta_x = (double)1 / (double)(Math::Pow(2, level + 1));
		delta_y = (double)(0.08 * (level + 1));
		f_daughter_delta_x = (double)1 / (double)(Math::Pow(2, level + 2));
		f_daughter_delta_x *= (level_pos * 2 - 1);
		f_daughter_delta_y = (double)(0.08 * (level + 2));
		s_daughter_delta_x = (double)1 / (double)(Math::Pow(2, level + 2));
		s_daughter_delta_x *= (level_pos * 2 + 1);
		s_daughter_delta_y = (double)(0.08 * (level + 2));
		delta_x *= level_pos;

		if (tree->left != NULL)
			canvas->DrawLine(
				pen,
				(int)Math::Round(end_p.X * delta_x) + 7,
				(int)Math::Round(end_p.Y * delta_y - 15),
				(int)Math::Round(end_p.X * f_daughter_delta_x),
				(int)Math::Round(end_p.Y * f_daughter_delta_y) - 15
			);
		if (tree->right != NULL)
			canvas->DrawLine(
				pen,
				(int)Math::Round(end_p.X * delta_x) + 7,
				(int)Math::Round(end_p.Y * delta_y - 15),
				(int)Math::Round(end_p.X * s_daughter_delta_x),
				(int)Math::Round(end_p.Y * s_daughter_delta_y) - 15
			);
		canvas->FillEllipse(br2, (int)Math::Round(end_p.X * delta_x - 9), end_p.Y * delta_y - 28, 23, 23);
		canvas->DrawEllipse(pen, (int)Math::Round(end_p.X * delta_x - 9), end_p.Y * delta_y - 28, 23, 23);
		canvas->DrawString(gcnew String(std::to_string(value).c_str()), fnt, br1, (int)Math::Round(end_p.X * delta_x * 0.985), end_p.Y * delta_y - 23);
		
		if (tree->left != NULL) {
			draw_tree(tree->left, level + 1, level_pos * 2 - 1);
		}
		if (tree->right != NULL) {
			draw_tree(tree->right, level + 1, level_pos * 2 + 1);
		}
	}
	private: System::Void start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (input_textBox->TextLength == 0)
			return;
		root = form_tree(msclr::interop::marshal_as<std::string>(input_textBox->Text));
		output_textBox->Text = gcnew String(get_tree(root, "").c_str());
		//output_textBox->Text = gcnew String(getString().c_str());

		int buf1 = get_min(root);
		int buf2 = get_min_pos(root, buf1, 0);
		int buf3 = get_size(root, 1);
		a_label->Text = "Минимальное значение узла: " + buf1 + ", его уровень: " + buf2;
		b_label->Text = "В дереве " + buf3 + " элементов";

		pictureBox1->Refresh();
		//draw_tree(root, 0, 1, canvas);
	}
	private: System::Void del_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (num_textBox->TextLength == 0)
			return;
		int num_to_delete = std::stoi(msclr::interop::marshal_as<std::string>(num_textBox->Text));
		num_textBox->Text = "";
		int before = get_size(root, 1);
		do {
			before = get_size(root, 1);
			root = del_elements(root, num_to_delete);
		} while (before > get_size(root, 1));

		output_textBox->Text = gcnew String(get_tree(root, "").c_str());

		int buf1 = get_min(root);
		int buf2 = get_min_pos(root, buf1, 0);
		int buf3 = get_size(root, 1);
		a_label->Text = "Минимальное значение узла: " + buf1 + ", его уровень: " + buf2;
		b_label->Text = "В дереве " + buf3 + " элементов";

		pictureBox1->Refresh();
	}
	private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (add_textBox->TextLength == 0)
			return;
		int val = std::stoi(msclr::interop::marshal_as<std::string>(add_textBox->Text));
		add_textBox->Text = "";
		root = add_element(root, val);

		output_textBox->Text = gcnew String(get_tree(root, "").c_str());

		int buf1 = get_min(root);
		int buf2 = get_min_pos(root, buf1, 0);
		int buf3 = get_size(root, 1);
		a_label->Text = "Минимальное значение узла: " + buf1 + ", его уровень: " + buf2;
		b_label->Text = "В дереве " + buf3 + " элементов";

		pictureBox1->Refresh();
	}
	private: System::Void exit_barBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
		root = clear_tree(root);
	}
	private: System::Void info_barBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		//BinaryTreeLab::InfoForm new_form;
		InfoForm^ new_form = gcnew InfoForm();
		new_form->Show();
	}
	private: System::Void instraction_barBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		InstForm^ new_form = gcnew InstForm();
		new_form->Show();
	}

	public:
		Graphics^ canvas;
		Pen^ pen;
		System::Drawing::Brush^ br1;
		System::Drawing::Brush^ br2;
		Color color;
		float size;
		System::Drawing::Font^ fnt;
		int f_size;
		Point end_p;

	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		canvas = e->Graphics;
		canvas->Clear(Color::FloralWhite);
		pen = gcnew Pen(Brushes::Black, 1);
		f_size = 9;
		fnt = gcnew System::Drawing::Font("Arial", f_size);
		br1 = System::Drawing::Brushes::Black;
		br2 = System::Drawing::Brushes::FloralWhite;
		end_p.X = pictureBox1->Width;
		end_p.Y = pictureBox1->Height;
		draw_tree(root, 0, 1);
	}
	private: System::Void input_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (input_textBox->TextLength == 0)
			return;
		root = form_tree(msclr::interop::marshal_as<std::string>(input_textBox->Text));
		output_textBox->Text = gcnew String(get_tree(root, "").c_str());
		//output_textBox->Text = gcnew String(getString().c_str());

		int buf1 = get_min(root);
		int buf2 = get_min_pos(root, buf1, 0);
		int buf3 = get_size(root, 1);
		a_label->Text = "Минимальное значение узла: " + buf1 + ", его уровень: " + buf2;
		b_label->Text = "В дереве " + buf3 + " элементов";

		pictureBox1->Refresh();
	}
};
}
