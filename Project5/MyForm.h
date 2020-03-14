#pragma once
#include <stdlib.h>
#include<iostream>
#include <string.h>

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;

	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  DN;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Label^  HN;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  BN;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  ON;
	private: System::Windows::Forms::Button^  button12;



	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DN = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->HN = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BN = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ON = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(290, 258);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Convert\r\n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(39, 91);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(48, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(93, 144);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(48, 47);
			this->button3->TabIndex = 3;
			this->button3->Text = L"5";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(39, 144);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(48, 47);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(147, 91);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(48, 47);
			this->button5->TabIndex = 5;
			this->button5->Text = L"3";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(93, 91);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(48, 47);
			this->button6->TabIndex = 6;
			this->button6->Text = L"2";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(147, 144);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(48, 47);
			this->button7->TabIndex = 7;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(93, 197);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(48, 47);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(39, 197);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(48, 47);
			this->button9->TabIndex = 9;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(147, 197);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(48, 47);
			this->button10->TabIndex = 10;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(93, 250);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(48, 47);
			this->button11->TabIndex = 11;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Algerian", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(39, 250);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(48, 47);
			this->button13->TabIndex = 13;
			this->button13->Text = L"C";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Info;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 24);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Decimal Number :";
			// 
			// DN
			// 
			this->DN->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DN->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->DN->Location = System::Drawing::Point(112, 33);
			this->DN->Name = L"DN";
			this->DN->Size = System::Drawing::Size(209, 33);
			this->DN->TabIndex = 15;
			this->DN->Text = L"0";
			this->DN->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(202, 250);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(48, 47);
			this->button14->TabIndex = 16;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(201, 197);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(48, 47);
			this->button15->TabIndex = 17;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(202, 144);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(48, 47);
			this->button16->TabIndex = 18;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(201, 91);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(48, 47);
			this->button17->TabIndex = 19;
			this->button17->Text = L"+";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(148, 250);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(48, 47);
			this->button18->TabIndex = 20;
			this->button18->Text = L"=";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// HN
			// 
			this->HN->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->HN->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->HN->Location = System::Drawing::Point(16, 368);
			this->HN->Name = L"HN";
			this->HN->Size = System::Drawing::Size(209, 33);
			this->HN->TabIndex = 21;
			this->HN->Text = L"0";
			this->HN->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->HN->Click += gcnew System::EventHandler(this, &MyForm::HN_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Info;
			this->label2->Location = System::Drawing::Point(12, 344);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 24);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Hex Number :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Info;
			this->label3->Location = System::Drawing::Point(286, 345);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 24);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Binary Number :";
			// 
			// BN
			// 
			this->BN->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BN->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->BN->Location = System::Drawing::Point(257, 368);
			this->BN->Name = L"BN";
			this->BN->Size = System::Drawing::Size(209, 33);
			this->BN->TabIndex = 24;
			this->BN->Text = L"0";
			this->BN->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BN->Click += gcnew System::EventHandler(this, &MyForm::BN_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Info;
			this->label4->Location = System::Drawing::Point(498, 345);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 24);
			this->label4->TabIndex = 25;
			this->label4->Text = L" Octal Number :";
			// 
			// ON
			// 
			this->ON->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ON->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ON->Location = System::Drawing::Point(502, 369);
			this->ON->Name = L"ON";
			this->ON->Size = System::Drawing::Size(209, 33);
			this->ON->TabIndex = 26;
			this->ON->Text = L"0";
			this->ON->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(290, 441);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(135, 39);
			this->button12->TabIndex = 27;
			this->button12->Text = L"Exit";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(727, 509);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->ON);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->BN);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->HN);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->DN);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::WindowText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L" ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		int firstnum;
		int secondnum;
		char operation;
		int result;
		int dec;
		int Dec_To_Hex(int dec)
		{
			long int quot;
			char hexdecnum[100];
			int i = 1, j, temp;
			
			quot = dec;
			while (quot != 0)
			{
				temp = quot % 16;
				if (temp < 10)   // Converts integer into character
				{
					temp = temp + 48;
				}
				else
				{
					temp = temp + 55;
				}
				hexdecnum[i++] = temp;
				quot = quot / 16;
			}
			
			for (j = i - 1; j > 0; j--)
			{
				return hexdecnum[j];
			}
		
		}
		
#pragma endregion

	private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (DN->Text == "0") {
			DN->Text = "3";
		}
		else {
			DN->Text = Convert::ToInt64(DN->Text) + "3";
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (DN->Text == "0") {
		DN->Text = "1";
	}
	else {
		DN->Text = Convert::ToInt32(DN->Text) + "1";
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (DN->Text == "0") {
		DN->Text = "2";
	}
	else {
		DN->Text = Convert::ToInt32(DN->Text) + "2";
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (DN->Text == "0") {
		DN->Text = "4";
	}
	else {
		DN->Text = Convert::ToInt32(DN->Text) + "4";
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (DN->Text == "0") {
		DN->Text = "5";
	}
	else {
		DN->Text = Convert::ToInt32(DN->Text) + "5";
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (DN->Text == "0") {
		DN->Text = "6";
	}
	else {
		DN->Text = Convert::ToInt32(DN->Text) + "6";
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (DN->Text == "0") {
		DN->Text = "7";
	}
	else {
		DN->Text = Convert::ToInt32(DN->Text) + "7";
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (DN->Text == "0") {
		DN->Text = "8";
	}
	else {
		DN->Text = Convert::ToInt32(DN->Text) + "8";
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (DN->Text == "0") {
		DN->Text = "9";
	}
	else {
		DN->Text = Convert::ToInt32(DN->Text) + "9";
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (DN->Text == "0") {
		DN->Text = "0";
	}
	else {
		DN->Text = Convert::ToInt32(DN->Text) + "0";
	}
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	firstnum = Convert::ToInt32(DN->Text);
	DN->Text = "0";
	operation = '+';
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	firstnum = Convert::ToInt32(DN->Text);
	DN->Text = "0";
	operation = '-';
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	firstnum = Convert::ToInt32(DN->Text);
	DN->Text = "0";
	operation = '*';
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	firstnum = Convert::ToInt32(DN->Text);
	DN->Text = "0";
	operation = '/';
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	secondnum = Convert::ToInt32(DN->Text);
	switch (operation) {
	case '+':
		result = firstnum + secondnum;
		DN->Text = System::Convert::ToString(result);
		break;

	case '-':
		result = firstnum - secondnum;
		DN->Text = System::Convert::ToString(result);
		break;

	case '*':
		result = firstnum * secondnum;
		DN->Text = System::Convert::ToString(result);
		break;

	case '/':
		result = firstnum / secondnum;
		DN->Text = System::Convert::ToString(result);
		break;

	}

}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (DN->Text == "0") {
		DN->Text = "0";
	}
	else {
		DN->Text = "0";
	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (DN->Text == "0") {
		DN->Text = "0";
	}
	else {

		

	}
}
private: System::Void HN_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	//dec = Convert::ToInt32(DN->Text);
	//result = Dec_To_Hex(dec);
	//HN->Text = System::Convert::ToString(result);

	firstnum = int::Parse(DN->Text); 
	HN->Text = System::Convert::ToString(firstnum, 16);;
	BN->Text = System::Convert::ToString(firstnum, 2);;
    ON->Text = System::Convert::ToString(firstnum, 8);;
}
private: System::Void BN_Click(System::Object^  sender, System::EventArgs^  e) {

	
}
private: System::Void button12_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}

};
}
