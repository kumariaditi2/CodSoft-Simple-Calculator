
#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Button^ backspace;


	protected:

	protected:






	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnDigit7;
	private: System::Windows::Forms::Button^ btnDigit4;



	private: System::Windows::Forms::Button^ btnDigit8;
	private: System::Windows::Forms::Button^ btnDigit1;


	private: System::Windows::Forms::Button^ btnDigit5;
	private: System::Windows::Forms::Button^ btnDigit2;
	private: System::Windows::Forms::Button^ btnDigit3;



	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ btnDigit9;
	private: System::Windows::Forms::Button^ btnDigit6;


	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ Percentage;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->backspace = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnDigit7 = (gcnew System::Windows::Forms::Button());
			this->btnDigit4 = (gcnew System::Windows::Forms::Button());
			this->btnDigit8 = (gcnew System::Windows::Forms::Button());
			this->btnDigit1 = (gcnew System::Windows::Forms::Button());
			this->btnDigit5 = (gcnew System::Windows::Forms::Button());
			this->btnDigit2 = (gcnew System::Windows::Forms::Button());
			this->btnDigit3 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->btnDigit9 = (gcnew System::Windows::Forms::Button());
			this->btnDigit6 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->Percentage = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::SystemColors::Info;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Agency FB", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtDisplay->Location = System::Drawing::Point(20, 13);
			this->txtDisplay->Margin = System::Windows::Forms::Padding(4);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(423, 89);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::txtDisplay_TextChanged);
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Clear->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clear->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Clear->Location = System::Drawing::Point(16, 108);
			this->Clear->Margin = System::Windows::Forms::Padding(4);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(100, 89);
			this->Clear->TabIndex = 1;
			this->Clear->Text = L"AC";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// backspace
			// 
			this->backspace->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->backspace->Font = (gcnew System::Drawing::Font(L"Wingdings", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->backspace->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->backspace->Location = System::Drawing::Point(124, 110);
			this->backspace->Margin = System::Windows::Forms::Padding(4);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(100, 89);
			this->backspace->TabIndex = 1;
			this->backspace->Text = L"";
			this->backspace->UseVisualStyleBackColor = false;
			this->backspace->Click += gcnew System::EventHandler(this, &MyForm::backspace_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gray;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(340, 110);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 89);
			this->button4->TabIndex = 1;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// btnDigit7
			// 
			this->btnDigit7->BackColor = System::Drawing::Color::Gray;
			this->btnDigit7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit7->Location = System::Drawing::Point(16, 206);
			this->btnDigit7->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit7->Name = L"btnDigit7";
			this->btnDigit7->Size = System::Drawing::Size(100, 89);
			this->btnDigit7->TabIndex = 1;
			this->btnDigit7->Text = L"7";
			this->btnDigit7->UseVisualStyleBackColor = false;
			this->btnDigit7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit4
			// 
			this->btnDigit4->BackColor = System::Drawing::Color::Gray;
			this->btnDigit4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit4->Location = System::Drawing::Point(16, 302);
			this->btnDigit4->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit4->Name = L"btnDigit4";
			this->btnDigit4->Size = System::Drawing::Size(100, 89);
			this->btnDigit4->TabIndex = 1;
			this->btnDigit4->Text = L"4";
			this->btnDigit4->UseVisualStyleBackColor = false;
			this->btnDigit4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit8
			// 
			this->btnDigit8->BackColor = System::Drawing::Color::Gray;
			this->btnDigit8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit8->Location = System::Drawing::Point(124, 206);
			this->btnDigit8->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit8->Name = L"btnDigit8";
			this->btnDigit8->Size = System::Drawing::Size(100, 89);
			this->btnDigit8->TabIndex = 1;
			this->btnDigit8->Text = L"8";
			this->btnDigit8->UseVisualStyleBackColor = false;
			this->btnDigit8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit1
			// 
			this->btnDigit1->BackColor = System::Drawing::Color::Gray;
			this->btnDigit1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit1->Location = System::Drawing::Point(16, 398);
			this->btnDigit1->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit1->Name = L"btnDigit1";
			this->btnDigit1->Size = System::Drawing::Size(100, 89);
			this->btnDigit1->TabIndex = 1;
			this->btnDigit1->Text = L"1";
			this->btnDigit1->UseVisualStyleBackColor = false;
			this->btnDigit1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit5
			// 
			this->btnDigit5->BackColor = System::Drawing::Color::Gray;
			this->btnDigit5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit5->Location = System::Drawing::Point(124, 302);
			this->btnDigit5->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit5->Name = L"btnDigit5";
			this->btnDigit5->Size = System::Drawing::Size(100, 89);
			this->btnDigit5->TabIndex = 1;
			this->btnDigit5->Text = L"5";
			this->btnDigit5->UseVisualStyleBackColor = false;
			this->btnDigit5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit2
			// 
			this->btnDigit2->BackColor = System::Drawing::Color::Gray;
			this->btnDigit2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit2->Location = System::Drawing::Point(124, 398);
			this->btnDigit2->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit2->Name = L"btnDigit2";
			this->btnDigit2->Size = System::Drawing::Size(100, 89);
			this->btnDigit2->TabIndex = 1;
			this->btnDigit2->Text = L"2";
			this->btnDigit2->UseVisualStyleBackColor = false;
			this->btnDigit2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit3
			// 
			this->btnDigit3->BackColor = System::Drawing::Color::Gray;
			this->btnDigit3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit3->Location = System::Drawing::Point(232, 398);
			this->btnDigit3->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit3->Name = L"btnDigit3";
			this->btnDigit3->Size = System::Drawing::Size(100, 89);
			this->btnDigit3->TabIndex = 1;
			this->btnDigit3->Text = L"3";
			this->btnDigit3->UseVisualStyleBackColor = false;
			this->btnDigit3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Gray;
			this->button12->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button12->Location = System::Drawing::Point(343, 398);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 89);
			this->button12->TabIndex = 1;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Gray;
			this->button13->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button13->Location = System::Drawing::Point(340, 302);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 89);
			this->button13->TabIndex = 1;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Gray;
			this->button14->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button14->Location = System::Drawing::Point(340, 206);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 89);
			this->button14->TabIndex = 1;
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// btnDigit9
			// 
			this->btnDigit9->BackColor = System::Drawing::Color::Gray;
			this->btnDigit9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit9->Location = System::Drawing::Point(232, 206);
			this->btnDigit9->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit9->Name = L"btnDigit9";
			this->btnDigit9->Size = System::Drawing::Size(100, 89);
			this->btnDigit9->TabIndex = 1;
			this->btnDigit9->Text = L"9";
			this->btnDigit9->UseVisualStyleBackColor = false;
			this->btnDigit9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit6
			// 
			this->btnDigit6->BackColor = System::Drawing::Color::Gray;
			this->btnDigit6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit6->Location = System::Drawing::Point(232, 302);
			this->btnDigit6->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit6->Name = L"btnDigit6";
			this->btnDigit6->Size = System::Drawing::Size(100, 89);
			this->btnDigit6->TabIndex = 1;
			this->btnDigit6->Text = L"6";
			this->btnDigit6->UseVisualStyleBackColor = false;
			this->btnDigit6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Gray;
			this->button17->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button17->Location = System::Drawing::Point(16, 489);
			this->button17->Margin = System::Windows::Forms::Padding(4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(208, 89);
			this->button17->TabIndex = 1;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Gray;
			this->button18->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button18->Location = System::Drawing::Point(232, 489);
			this->button18->Margin = System::Windows::Forms::Padding(4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(100, 89);
			this->button18->TabIndex = 1;
			this->button18->Text = L".";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Gray;
			this->button19->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button19->Location = System::Drawing::Point(343, 489);
			this->button19->Margin = System::Windows::Forms::Padding(4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(100, 89);
			this->button19->TabIndex = 1;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// Percentage
			// 
			this->Percentage->BackColor = System::Drawing::Color::Gray;
			this->Percentage->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Percentage->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Percentage->Location = System::Drawing::Point(232, 110);
			this->Percentage->Margin = System::Windows::Forms::Padding(4);
			this->Percentage->Name = L"Percentage";
			this->Percentage->Size = System::Drawing::Size(100, 89);
			this->Percentage->TabIndex = 1;
			this->Percentage->Text = L"%";
			this->Percentage->UseVisualStyleBackColor = false;
			this->Percentage->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->ClientSize = System::Drawing::Size(464, 588);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->btnDigit6);
			this->Controls->Add(this->btnDigit9);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->btnDigit3);
			this->Controls->Add(this->btnDigit2);
			this->Controls->Add(this->btnDigit5);
			this->Controls->Add(this->btnDigit8);
			this->Controls->Add(this->backspace);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->btnDigit1);
			this->Controls->Add(this->btnDigit4);
			this->Controls->Add(this->btnDigit7);
			this->Controls->Add(this->Percentage);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->txtDisplay);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double firstdigit, seconddigit, result;
		String^ operators;

	private: System::Void button1_click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);

		if (txtDisplay->Text == "0")
		{
			txtDisplay->Text = Numbers->Text;

		}
		else
		{
			txtDisplay->Text = txtDisplay->Text + Numbers->Text;
		}

	}
	private: System::Void EnterOperators(System::Object^ sender, System::EventArgs^ e) {
		Button^ NumbersOp = safe_cast<Button^>(sender);
		firstdigit = Double::Parse(txtDisplay->Text);

		txtDisplay->Text = "";

		operators = NumbersOp->Text;
		//txtDisplay->Text = txtDisplay->Text + NumbersOp->Text;
	}

	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

		if (!txtDisplay->Text->Contains("."))
		{
			txtDisplay->Text = txtDisplay->Text + ".";
		}
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {

		seconddigit = Double::Parse(txtDisplay->Text);

		if (operators == "+")
		{
			result = firstdigit + seconddigit;

			txtDisplay->Text = System::Convert::ToString(result);
		}

		else if (operators == "-")
		{
			result = firstdigit - seconddigit;
			txtDisplay->Text = System::Convert::ToString(result);
		}

		else if (operators == "*")
		{
			result = firstdigit * seconddigit;
			txtDisplay->Text = System::Convert::ToString(result);
		}

		else if (operators == "/")
		{
			result = firstdigit / seconddigit;
			txtDisplay->Text = System::Convert::ToString(result);
		}

		else if (operators == "%")
		{
			result = (firstdigit / seconddigit) * 100;
			txtDisplay->Text = System::Convert::ToString(result);
		}
	}

	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		txtDisplay->Text = "0";
	}

	private: System::Void backspace_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtDisplay->Text->Length > 0)
		{
			txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
		}

		if (txtDisplay->Text == "")
		{
			txtDisplay->Text = "0";
		}
	}

	private: System::Void txtDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

