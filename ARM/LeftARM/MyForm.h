#pragma once
#include "MyForm1.h"
#include "Students.h"
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <chrono>

namespace ARM 
{
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	const string str[9] = { "Лаба 1", "Лаба 2", "Лаба 3", "Лаба 4", "Лаба 5", "Лаба 6", "Лаба 7", "Лаба 8", "Творческая" };

	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: MyForm1^ loginWin = gcnew MyForm1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: Students* stu;

	public:
		MyForm(void)
		{
			InitializeComponent();

			stu = new Students;
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button12;
	private: System::ComponentModel::IContainer^ components;

	private:

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(95, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Пользователь не вошёл";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(681, 365);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(113, 23);
			this->button12->TabIndex = 3;
			this->button12->Text = L"Отправить отчёт";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(13, 43);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(781, 316);
			this->listBox1->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(327, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(292, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"ФИ:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Лаба 1", L"Лаба 2", L"Лаба 3", L"Лаба 4", L"Лаба 5",
					L"Лаба 6", L"Лаба 7", L"Лаба 8", L"Творческая"
			});
			this->comboBox1->Location = System::Drawing::Point(561, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(143, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(509, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Работа:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(723, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(806, 396);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ARM";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (login == "")
		{
			loginWin = gcnew MyForm1;
			loginWin->Show();
		}
		else
		{
			auto msg = MessageBox::Show("Вы уверены, что хотите выйти?", "Информация", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (msg == System::Windows::Forms::DialogResult::Yes) 
			{
				login = "";
				password = "";
			}
		}
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
	{
		if (loginWin->Visible)
		{
			button1->Enabled = false;
		}
		else
		{
			button1->Enabled = true;
		}

		if (login != "")
		{
			button1->Text = L"Выйти";
			label1->Text = L"Пользователь: " + msclr::interop::marshal_as<System::String^>(login);

			listBox1->Enabled = true;
			textBox1->Enabled = true;
			comboBox1->Enabled = true;
			button12->Enabled = true;
			button2->Enabled = true;
		}
		else
		{
			button1->Text = L"Войти";
			label1->Text = L"Пользователь не вошёл";

			textBox1->Enabled = false;
			comboBox1->Enabled = false;
			listBox1->Enabled = false;
			button12->Enabled = false;
			button2->Enabled = false;

			listBox1->Items->Clear();
		}
	}

	private: void UpdateList()
	{
		listBox1->Items->Clear();

		for (int i = 0; i < (*stu).students.size(); i++)
		{
			string str = "Студент: " + (*stu).students[i].GetName() + " Сданы работы:";

			for (int j = 0; j < (*stu).students[i].GetLabsCount(); j++)
			{
				str += " ";
				str += (*stu).students[i].labs[j];
			}

			listBox1->Items->Add(msclr::interop::marshal_as<System::String^>(str));
		}
	}

	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		bool success = false;

		if (listBox1->Items->Count > 0)
			success = true;

		if (success) 
		{
			auto now = std::chrono::system_clock::now();
			std::time_t end_time = std::chrono::system_clock::to_time_t(now);
			ofstream log("отчёт.txt");

			log << "Отчёт за " << std::ctime(&end_time) << endl;

			for (int i = 0; i < listBox1->Items->Count; i++)
				log << msclr::interop::marshal_as<std::string>(listBox1->Items[i]->ToString()) << endl;

			log.close();

			MessageBox::Show("Отчёт был отправлен!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
			MessageBox::Show("Вы не можете отправить отчёт, так как ещё ни один студент не был засчитан.", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (textBox1->Text == "" || comboBox1->SelectedItem == "")
			MessageBox::Show("Текстовое поле ФИ пустое.", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
		{
			if ((*stu).students.size() > 0)
			{
				bool containsName = false;
				bool containsInd = false;

				for (int i = 0; i < (*stu).GetStudentsCount(); i++)
				{
					if (msclr::interop::marshal_as<std::string>(textBox1->Text) == (*stu).students[i].GetName())
					{
						containsName = true;

						for (int j = 0; j < (*stu).students[i].GetLabsCount(); j++)
							if (msclr::interop::marshal_as<std::string>(comboBox1->SelectedItem->ToString()) == (*stu).students[i].labs[j])
								containsInd = true;
					}

					if (containsName == true && containsInd == false)
						(*stu).students[i].addLab(msclr::interop::marshal_as<std::string>(comboBox1->SelectedItem->ToString()));
				}

				if (containsName == false)
					(*stu).addStudent(msclr::interop::marshal_as<std::string>(textBox1->Text), msclr::interop::marshal_as<std::string>(comboBox1->SelectedItem->ToString()));
			}
			else
				(*stu).addStudent(msclr::interop::marshal_as<std::string>(textBox1->Text), msclr::interop::marshal_as<std::string>(comboBox1->SelectedItem->ToString()));

			UpdateList();
		}
	}

};
}
