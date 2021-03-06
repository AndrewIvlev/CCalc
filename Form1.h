#pragma once

#include "stdafx.h"
#include "tcalc.h"

namespace CCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//TODO: добавьте код конструктора
		}

	protected:
		/// Освободить все используемые ресурсы.
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  sinbut;
	private: System::Windows::Forms::Button^  cosbut;
	private: System::Windows::Forms::Button^  pibut;
	private: System::Windows::Forms::Button^  ebut;



	private: System::Windows::Forms::Button^  factorial_button;


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sinbut = (gcnew System::Windows::Forms::Button());
			this->cosbut = (gcnew System::Windows::Forms::Button());
			this->pibut = (gcnew System::Windows::Forms::Button());
			this->ebut = (gcnew System::Windows::Forms::Button());
			this->factorial_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(241, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Expression_KeyPress);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(293, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(38, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"=";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(337, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"       RESULT";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// sinbut
			// 
			this->sinbut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->sinbut->Location = System::Drawing::Point(12, 92);
			this->sinbut->Name = L"sinbut";
			this->sinbut->Size = System::Drawing::Size(44, 32);
			this->sinbut->TabIndex = 3;
			this->sinbut->Text = L"sin";
			this->sinbut->UseVisualStyleBackColor = true;
			this->sinbut->Click += gcnew System::EventHandler(this, &Form1::sinbut_Click);
			// 
			// cosbut
			// 
			this->cosbut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->cosbut->Location = System::Drawing::Point(72, 92);
			this->cosbut->Name = L"cosbut";
			this->cosbut->Size = System::Drawing::Size(44, 32);
			this->cosbut->TabIndex = 4;
			this->cosbut->Text = L"cos";
			this->cosbut->UseVisualStyleBackColor = true;
			this->cosbut->Click += gcnew System::EventHandler(this, &Form1::cosbut_Click);
			// 
			// pibut
			// 
			this->pibut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->pibut->Location = System::Drawing::Point(133, 92);
			this->pibut->Name = L"pibut";
			this->pibut->Size = System::Drawing::Size(36, 32);
			this->pibut->TabIndex = 5;
			this->pibut->Text = L"π";
			this->pibut->UseVisualStyleBackColor = true;
			this->pibut->Click += gcnew System::EventHandler(this, &Form1::pibut_Click);
			// 
			// ebut
			// 
			this->ebut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->ebut->Location = System::Drawing::Point(185, 92);
			this->ebut->Name = L"ebut";
			this->ebut->Size = System::Drawing::Size(35, 32);
			this->ebut->TabIndex = 6;
			this->ebut->Text = L"e";
			this->ebut->UseVisualStyleBackColor = true;
			this->ebut->Click += gcnew System::EventHandler(this, &Form1::ebut_Click);
			// 
			// factorial_button
			// 
			this->factorial_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->factorial_button->Location = System::Drawing::Point(234, 92);
			this->factorial_button->Name = L"factorial_button";
			this->factorial_button->Size = System::Drawing::Size(30, 32);
			this->factorial_button->TabIndex = 7;
			this->factorial_button->Text = L"!";
			this->factorial_button->UseVisualStyleBackColor = true;
			this->factorial_button->Click += gcnew System::EventHandler(this, &Form1::factorial_button_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 127);
			this->Controls->Add(this->factorial_button);
			this->Controls->Add(this->ebut);
			this->Controls->Add(this->pibut);
			this->Controls->Add(this->cosbut);
			this->Controls->Add(this->sinbut);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"CCalculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 std::string infix;
				 TCalc S;
				 if ( "" != ( infix = msclr::interop::marshal_as<std::string>(textBox1->Text)) ) {
					 S.Setinfix(infix);
					 if ( S.Check() )	{

						 S.topostfix();
						 label1->Text = Convert::ToString(S.Calc());
					 } else label1->Text = Convert::ToString("NaN");
				 }
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Expression_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				if (e->KeyChar == wchar_t(Keys::Enter)) {
					 std::string infix;
					 TCalc S;
					 if ( "" != (infix = msclr::interop::marshal_as<std::string>(textBox1->Text)) )	{
						 S.Setinfix(infix);
						 if ( S.Check() )	{
							 S.topostfix();
							 label1->Text = Convert::ToString(S.Calc());
						} else label1->Text = Convert::ToString("NaN");
					 }
				 }
			 }
	private: System::Void sinbut_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text += Convert::ToString("sin");
			 }
private: System::Void cosbut_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text += Convert::ToString("cos");
		 }
private: System::Void pibut_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text += Convert::ToString("pi");
		 }
private: System::Void ebut_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text += Convert::ToString("e");
		 }
private: System::Void factorial_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text += Convert::ToString("!");
		 }
};
}
