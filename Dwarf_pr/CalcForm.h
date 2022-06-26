#pragma once
#include <vector>

namespace Dwarfpr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm1
	/// </summary>
	public ref class CalcForm : public System::Windows::Forms::Form
	{
	private:
		std::vector<std::vector<int>>* savedResult;
	public:
		CalcForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		CalcForm(std::vector<std::vector<int>>* result)
		{
			savedResult = result;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~CalcForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"";

			if (savedResult->size() >= 1) {

				System::String^ result = System::Convert::ToString((*savedResult)[0][0]);

				for (int i = 0; i < (*savedResult)[0].size(); i++) {
					result += " " + System::Convert::ToString((*savedResult)[0][i]);
				}

				this->label1->Text = result;

			}

			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"";

			if (savedResult->size() >= 2) {

				System::String^ result = System::Convert::ToString((*savedResult)[1][0]);

				for (int i = 0; i < (*savedResult)[1].size(); i++) {
					result += " " + System::Convert::ToString((*savedResult)[1][i]);
				}

				this->label2->Text = result;

			}
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"";

			if (savedResult->size() >= 3) {

				System::String^ result = System::Convert::ToString((*savedResult)[2][0]);

				for (int i = 0; i < (*savedResult)[2].size(); i++) {
					result += " " + System::Convert::ToString((*savedResult)[2][i]);
				}

				this->label3->Text = result;

			}
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"";

			if (savedResult->size() >= 4) {

				System::String^ result = System::Convert::ToString((*savedResult)[3][0]);

				for (int i = 0; i < (*savedResult)[3].size(); i++) {
					result += " " + System::Convert::ToString((*savedResult)[3][i]);
				}

				this->label4->Text = result;

			}
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 186);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"";

			if (savedResult->size() >= 5) {

				System::String^ result = System::Convert::ToString((*savedResult)[4][0]);

				for (int i = 0; i < (*savedResult)[4].size(); i++) {
					result += " " + System::Convert::ToString((*savedResult)[4][i]);
				}

				this->label5->Text = result;

			}
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 229);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"";

			if (savedResult->size() >= 6) {

				System::String^ result = System::Convert::ToString((*savedResult)[5][0]);

				for (int i = 0; i < (*savedResult)[5].size(); i++) {
					result += " " + System::Convert::ToString((*savedResult)[5][i]);
				}

				this->label6->Text = result;

			}
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 268);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"";

			if (savedResult->size() >= 7) {

				System::String^ result = System::Convert::ToString((*savedResult)[6][0]);

				for (int i = 0; i < (*savedResult)[6].size(); i++) {
					result += " " + System::Convert::ToString((*savedResult)[6][i]);
				}

				this->label7->Text = result;

			}
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 311);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"";

			if (savedResult->size() >= 8) {

				System::String^ result = System::Convert::ToString((*savedResult)[7][0]);

				for (int i = 0; i < (*savedResult)[7].size(); i++) {
					result += " " + System::Convert::ToString((*savedResult)[7][i]);
				}

				this->label8->Text = result;

			}
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 359);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 16);
			this->label9->TabIndex = 8;
			this->label9->Text = L"";

			if (savedResult->size() >= 9) {

				System::String^ result = System::Convert::ToString((*savedResult)[8][0]);

				for (int i = 0; i < (*savedResult)[8].size(); i++) {
					result += " " + System::Convert::ToString((*savedResult)[8][i]);
				}

				this->label9->Text = result;

			}
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 401);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 16);
			this->label10->TabIndex = 9;
			this->label10->Text = L"";

			if (savedResult->size() >= 10) {

				System::String^ result = System::Convert::ToString((*savedResult)[9][0]);

				for (int i = 0; i < (*savedResult)[9].size(); i++) {
					result += " " + System::Convert::ToString((*savedResult)[9][i]);
				}

				this->label10->Text = result;

			}
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 443);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 16);
			this->label11->TabIndex = 10;
			this->label11->Text = L"";

			if (savedResult->size() >= 11) {

				System::String^ result = System::Convert::ToString((*savedResult)[10][0]);

				for (int i = 0; i < (*savedResult)[10].size(); i++) {
					result += " " + System::Convert::ToString((*savedResult)[10][i]);
				}

				this->label11->Text = result;

			}
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 485);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(51, 16);
			this->label12->TabIndex = 11;
			this->label12->Text = L"";

			if (savedResult->size() >= 12) {

				System::String^ result = System::Convert::ToString((*savedResult)[11][0]);

				for (int i = 0; i < (*savedResult)[11].size(); i++) {
					result += " " + System::Convert::ToString((*savedResult)[11][i]);
				}

				this->label12->Text = result;

			}
			// 
			// CalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 550);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CalcForm";
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &CalcForm::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
