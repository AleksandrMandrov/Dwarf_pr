#pragma once

#include <vector>
#include <random>
#include <string>

namespace Dwarfpr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ InputForm
	/// </summary>
	public ref class InputForm : public System::Windows::Forms::Form
	{
	private:
		std::vector<int>* intSequence;
		std::vector<std::vector<int>>* savedResult;
	

	public:
		InputForm(void)
		{
			intSequence = new std::vector<int>;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		InputForm(std::vector<std::vector<int>>* result)
		{
			savedResult = result;
			intSequence = new std::vector<int>;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~InputForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(184, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(184, 96);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(184, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(594, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L" ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Numeric parameter:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Random parameter:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Primary sequence:";
			this->label3->Click += gcnew System::EventHandler(this, &InputForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Result:";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(184, 193);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(594, 22);
			this->textBox4->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(569, 246);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 32);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InputForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(677, 246);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 32);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &InputForm::button2_Click);
			// 
			// InputForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(790, 308);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"InputForm";
			this->Text = L"Input";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   bool Protect() {

			   if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0)) {
				   return false;
			   }

			   for (int i = 0; i < textBox1->Text->Length; i++) {
				   if (!((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9') || ((textBox1->Text[i] == '-') && i == 0))) {
					   return false;
				   }
			   }

			   for (int i = 0; i < textBox2->Text->Length; i++) {
				   if (!((textBox2->Text[i] >= '0') && (textBox2->Text[i] <= '9') || ((textBox1->Text[i] == '-') && i == 0))) {
					   return false;
				   }
			   }

			   return true;
		   }

		   void CreateSequense() {

			   if (intSequence->size()) {
				   intSequence->clear();
			   }

			   srand(System::Convert::ToInt32(textBox2->Text));

			   for (int i = 0; i < 8; i++) {
				   intSequence->push_back(rand() % 1000 - 500);
			   }

			   intSequence->push_back(System::Convert::ToInt32(textBox1->Text));

			   for (int i = 9; i < 18; i++) {
				   intSequence->push_back(rand() % 1000 - 500);
			   }

			   return;
		   }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Protect()) {
		CreateSequense();

		System::String^ primarySequense = System::Convert::ToString((*intSequence)[0]);
		
		for (int i = 0; i < intSequence->size(); i++) {
			primarySequense += " " + System::Convert::ToString((*intSequence)[i]);
		}

		textBox3->Text = primarySequense;

		int minValue = (*intSequence)[0];
		int minNumber = 0;
		int firstPositive = 1;

		for (int i = 1; i < intSequence->size(); i++) {
			if (minValue > (*intSequence)[i]) {
				minValue = (*intSequence)[i];
				minNumber = i;
			}
		}

		for (int i = minNumber + 1; i < intSequence->size(); i++) {
			if ((*intSequence)[i] > 0) {
				firstPositive = i;
				break;
			}
		}

		sort(intSequence->begin() + minNumber + 1, intSequence->begin() + firstPositive);

		System::String^ sortSequense = System::Convert::ToString((*intSequence)[0]);

		for (int i = 0; i < intSequence->size(); i++) {
			sortSequense += " " + System::Convert::ToString((*intSequence)[i]);
		}

		textBox4->Text = sortSequense;

		if (savedResult->size() == 12) {
			savedResult->pop_back();
		}

		savedResult->insert(savedResult->begin(), *intSequence);
		 
	}
	else {
		MessageBox::Show("Input error", "Error");
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();

}
};
}
