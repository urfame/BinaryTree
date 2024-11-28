#pragma once

namespace BinarTree {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	/// 
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button_output;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button4;

	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button_output = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(102, 52);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button1->Size = System::Drawing::Size(26, 26);
			this->button1->TabIndex = 0;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button_output);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(8, 413);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1084, 204);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Панель управления";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(9, 149);
			this->button4->Name = L"button4";
			this->button4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button4->Size = System::Drawing::Size(175, 32);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Удалить четные";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(831, 64);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Количество:";
			this->label7->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MV Boli", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label6->Location = System::Drawing::Point(658, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(299, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Узнать кол-во вершин кратных числу";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(962, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"label5";
			this->label5->Visible = false;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(991, 30);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(87, 22);
			this->numericUpDown3->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(661, 52);
			this->button3->Name = L"button3";
			this->button3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button3->Size = System::Drawing::Size(164, 32);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Узнать";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button_output
			// 
			this->button_output->BackColor = System::Drawing::Color::White;
			this->button_output->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_output->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_output->Location = System::Drawing::Point(442, 55);
			this->button_output->Name = L"button_output";
			this->button_output->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button_output->Size = System::Drawing::Size(107, 62);
			this->button_output->TabIndex = 9;
			this->button_output->Text = L"Вывод";
			this->button_output->UseVisualStyleBackColor = false;
			this->button_output->Click += gcnew System::EventHandler(this, &MyForm::button_output_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->HideSelection = false;
			this->textBox1->Location = System::Drawing::Point(222, 55);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(214, 62);
			this->textBox1->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MV Boli", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Location = System::Drawing::Point(219, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(217, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Вывод инфиксным методом";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MV Boli", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Location = System::Drawing::Point(6, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Удалить элемент";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(9, 119);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(87, 22);
			this->numericUpDown2->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(102, 117);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button2->Size = System::Drawing::Size(26, 26);
			this->button2->TabIndex = 4;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(6, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Добавить элемент";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(9, 54);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(87, 22);
			this->numericUpDown1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(8, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(61, 53);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::OliveDrab;
			this->label2->Location = System::Drawing::Point(76, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 28);
			this->label2->TabIndex = 4;
			this->label2->Text = L"BinaryTree";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->ClientSize = System::Drawing::Size(1104, 641);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"BinaryTree";
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: int count = 0;
			  int kolvo = 0;
		ref class TreeNode {
		public:
			int value;
			TreeNode^ left;
			TreeNode^ right;

			TreeNode(int val) {
				value = val;
				left = nullptr;
				right = nullptr;
			}
		};
		ref class BinaryTree {
		public:
			TreeNode^ root;

			BinaryTree() {
				root = nullptr;
			}

			void Insert(int value,int kolvo) {
				kolvo = 0;
				root = InsertRec(root, value,kolvo);
			}

		private:
			TreeNode^ InsertRec(TreeNode^ node, int value,int kolvo) {
				if (kolvo == 6) {
					MessageBox::Show("Достигнут предел!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return nullptr;
				}
				if (node == nullptr) {
					return gcnew TreeNode(value);
				}

				if (value < node->value) {
					kolvo++;
					node->left = InsertRec(node->left, value,kolvo);
				}
				else if (value > node->value) {
					kolvo++;
					node->right = InsertRec(node->right, value,kolvo);
				}

				return node;
			}
		};
private:
	TreeNode^ DeleteNode(TreeNode^ root, int key) {
		if (root == nullptr) return nullptr; // Если дерево пустое

		// Поиск узла, который нужно удалить
		if (key < root->value)
			root->left = DeleteNode(root->left, key);
		else if (key > root->value)
			root->right = DeleteNode(root->right, key);
		else {
			// Найден узел для удаления
			if (root->left == nullptr) {
				// Узел с одним или без потомков (нет левого потомка)
				return root->right;
			}
			else if (root->right == nullptr) {
				// Нет правого потомка
				return root->left;
			}

			// Узел с двумя потомками: ищем минимальный элемент в правом поддереве
			TreeNode^ minNode = FindMin(root->right);
			root->value = minNode->value; // Заменяем значение текущего узла минимальным
			root->right = DeleteNode(root->right, minNode->value); // Удаляем узел с минимальным значением
		}
		return root;
	}

	TreeNode^ FindMin(TreeNode^ node) {
		while (node->left != nullptr) {
			node = node->left;
		}
		return node;
	}

public:
	void Delete(int key) {
		binaryTree->root = DeleteNode(binaryTree->root, key);
	}
public: void Infix(TreeNode^ node, String^% res) {
	if (node == nullptr) return;
	Infix(node->left, res);
	res += node->value.ToString() + " ";
	Infix(node->right, res);
}
	  public: void Infix2(TreeNode^ node) {
		  if (node == nullptr) return;
		  if (node->value%2==0) {
			  Delete(node->value);
		  }
		  Infix2(node->left);
		  Infix2(node->right);
	  }
	  int inordchet(int key) {
		  int sum = 0;
		  Chet(binaryTree->root, key, sum);
		  return sum;
	  }
		  void Chet(TreeNode^ node, int key, int %sum) {
			  if (node == nullptr) return;
			  if (node->value % key == 0) {
				  sum++;
			  }
			  Chet(node->left, key, sum);
			  Chet(node->right, key, sum);
	  }
	  String^ InOrder() {
		  String^ res = "";
		  Infix(binaryTree->root, res);
		  return res;
	  }
	  void Del(TreeNode^ node) {
		  if (node == nullptr) return;
		  else if (node->value % 2 == 0) {
			  if (node->left != nullptr) {

			  }
			  else if (node->right != nullptr) {

			  }
			  else {
				  delete node;

			  }
		  }
		  else {
			  if (node->left != nullptr) {

			  }
			  else if (node->right != nullptr) {

			  }
		  }
		  Del(node->left);
		  Del(node->right);
	  }
	  void obhod() {

	  }
protected:
	virtual void OnPaint(PaintEventArgs^ e) override {
		Form::OnPaint(e);
		Graphics^ g = e->Graphics;

		// Вызов функции для отрисовки дерева
		if (binaryTree->root != nullptr) {
			DrawNode(g, binaryTree->root, this->ClientSize.Width / 2, 50, 200);
		}
	}
	//отрисовка дерева
	private:System::Void DrawNode(Graphics^ g, TreeNode^ node, int x, int y, int offset) {
		if (node == nullptr) return;

		Pen^ pen = gcnew Pen(Color::White);
		SolidBrush^ brush = gcnew SolidBrush(Color::White);
		g->FillEllipse(brush, x - 15, y - 15, 30, 30);
		g->DrawEllipse(pen, x - 15, y - 15, 30, 30);

		// Отрисовка значения узла
		String^ valueStr = node->value.ToString();
		g->DrawString(valueStr, gcnew System::Drawing::Font("Arial", 10), Brushes::Black, x - 10, y - 10);

		// Рекурсивная отрисовка дочерних узлов
		if (node->left != nullptr) {
			g->DrawLine(pen, x, y, x - offset, y + 50);
			DrawNode(g, node->left, x - offset, y + 50, offset / 2);
		}

		if (node->right != nullptr) {
			g->DrawLine(pen, x, y, x + offset, y + 50);
			DrawNode(g, node->right, x + offset, y + 50, offset / 2);
		}
	}
//инициализация дерева
public: BinaryTree^ binaryTree = gcnew BinaryTree();
//добавление элемента в дерево
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int value;
	if (Int32::TryParse(numericUpDown1->Text, value)) {
		
		// Вставляем значение в бинарное дерево
		binaryTree->Insert(value,kolvo);
		count++;
		// Обновляем отрисовку формы
		this->Invalidate();
	}
	else {
		MessageBox::Show("Введите корректное целое число!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
//вывод инфикс
private: System::Void button_output_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = InOrder();

}
//событие смены размера окна
private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
	this->Invalidate();
}
//четные вершины
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int key;
	int result;
	if (Int32::TryParse(numericUpDown3->Text, key) && numericUpDown3->Value!=0) {
		result = inordchet(key);
		label5->Visible = true;
		label7->Visible = true;
		label5->Text = result.ToString();
	}
	else {
		MessageBox::Show("Введите корректное целое число!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Получаем значение из текстового поля для удаления
	int value;
	if (Int32::TryParse(numericUpDown2->Text, value)) {
		// Удаляем значение из бинарного дерева
		Delete(value);
		// Обновляем отрисовку формы
		this->Invalidate();
	}
	else {
		MessageBox::Show("Введите корректное целое число!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Infix2(binaryTree->root);
	this->Invalidate();
}
};
}
