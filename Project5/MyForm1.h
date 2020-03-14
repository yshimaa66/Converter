#pragma once

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button12;
	protected:
	private: System::Windows::Forms::Label^  ON;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  BN;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  DN;



	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Label^  HN;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

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
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->ON = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->BN = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DN = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->HN = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(344, 459);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(135, 39);
			this->button12->TabIndex = 53;
			this->button12->Text = L"Exit";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// ON
			// 
			this->ON->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ON->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ON->Location = System::Drawing::Point(529, 387);
			this->ON->Name = L"ON";
			this->ON->Size = System::Drawing::Size(209, 33);
			this->ON->TabIndex = 52;
			this->ON->Text = L"0";
			this->ON->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Info;
			this->label4->Location = System::Drawing::Point(525, 363);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 24);
			this->label4->TabIndex = 51;
			this->label4->Text = L" Octal Number :";
			// 
			// BN
			// 
			this->BN->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BN->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->BN->Location = System::Drawing::Point(284, 386);
			this->BN->Name = L"BN";
			this->BN->Size = System::Drawing::Size(209, 33);
			this->BN->TabIndex = 50;
			this->BN->Text = L"0";
			this->BN->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Info;
			this->label3->Location = System::Drawing::Point(313, 363);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 24);
			this->label3->TabIndex = 49;
			this->label3->Text = L"Binary Number :";
			// 
			// DN
			// 
			this->DN->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DN->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->DN->Location = System::Drawing::Point(43, 386);
			this->DN->Name = L"DN";
			this->DN->Size = System::Drawing::Size(209, 33);
			this->DN->TabIndex = 47;
			this->DN->Text = L"0";
			this->DN->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(175, 268);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(48, 47);
			this->button18->TabIndex = 46;
			this->button18->Text = L"=";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(228, 109);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(48, 47);
			this->button17->TabIndex = 45;
			this->button17->Text = L"+";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(229, 162);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(48, 47);
			this->button16->TabIndex = 44;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(228, 215);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(48, 47);
			this->button15->TabIndex = 43;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(229, 268);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(48, 47);
			this->button14->TabIndex = 42;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// HN
			// 
			this->HN->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->HN->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->HN->Location = System::Drawing::Point(139, 51);
			this->HN->Name = L"HN";
			this->HN->Size = System::Drawing::Size(209, 33);
			this->HN->TabIndex = 41;
			this->HN->Text = L"0";
			this->HN->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Info;
			this->label1->Location = System::Drawing::Point(-3, -47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 24);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Decimal Number :";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Algerian", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(66, 268);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(48, 47);
			this->button13->TabIndex = 39;
			this->button13->Text = L"C";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(120, 268);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(48, 47);
			this->button11->TabIndex = 38;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(174, 215);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(48, 47);
			this->button10->TabIndex = 37;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(66, 215);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(48, 47);
			this->button9->TabIndex = 36;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(120, 215);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(48, 47);
			this->button8->TabIndex = 35;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(174, 162);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(48, 47);
			this->button7->TabIndex = 34;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(120, 109);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(48, 47);
			this->button6->TabIndex = 33;
			this->button6->Text = L"2";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(174, 109);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(48, 47);
			this->button5->TabIndex = 32;
			this->button5->Text = L"3";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(66, 162);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(48, 47);
			this->button4->TabIndex = 31;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(120, 162);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(48, 47);
			this->button3->TabIndex = 30;
			this->button3->Text = L"5";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(66, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(48, 47);
			this->button2->TabIndex = 29;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(317, 276);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 39);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Convert\r\n";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Bold));
			this->button19->Location = System::Drawing::Point(338, 162);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(48, 47);
			this->button19->TabIndex = 54;
			this->button19->Text = L"D";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Bold));
			this->button20->Location = System::Drawing::Point(284, 162);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(48, 47);
			this->button20->TabIndex = 55;
			this->button20->Text = L"C";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Bold));
			this->button21->Location = System::Drawing::Point(338, 109);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(48, 47);
			this->button21->TabIndex = 56;
			this->button21->Text = L"B";
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(284, 109);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(48, 47);
			this->button22->TabIndex = 57;
			this->button22->Text = L"A";
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Bold));
			this->button23->Location = System::Drawing::Point(284, 215);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(48, 47);
			this->button23->TabIndex = 58;
			this->button23->Text = L"E";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Bold));
			this->button24->Location = System::Drawing::Point(338, 215);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(48, 47);
			this->button24->TabIndex = 59;
			this->button24->Text = L"F";
			this->button24->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Info;
			this->label5->Location = System::Drawing::Point(27, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(141, 24);
			this->label5->TabIndex = 60;
			this->label5->Text = L"Hex Number :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Info;
			this->label6->Location = System::Drawing::Point(45, 362);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(178, 24);
			this->label6->TabIndex = 61;
			this->label6->Text = L"Decimal Number :";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 508);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->ON);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->BN);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DN);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->HN);
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
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
