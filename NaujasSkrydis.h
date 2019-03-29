#pragma once
#include "KintamiejiKlases.h"
#include "NaujasLektuvas.h"

bool ArStringTuscias(System::String^ s);
void IrasytiNaujaSkrydi(Skrydis skrydis);
bool ArSkrydisRegistruotas(string skrydzioNr);
bool ArLektuvasRegistruotas(string lektuvoModelis);
bool LektuvoKeleiviuSkaicius(string pavadinimas, string sk);
string SkaitytiOroPavadinima();

namespace Baigiamasis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NaujasSkrydis
	/// </summary>
	public ref class NaujasSkrydis : public System::Windows::Forms::Form
	{
	public:
		Form^ form;					// sukuriamas formos objektas i kuria bus griztama
		NaujasSkrydis(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		NaujasSkrydis(Form^ form1)
		{
			form = form1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NaujasSkrydis()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  pridetiSkrydi;

	private: System::Windows::Forms::Button^  griztiMeniu;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label10;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->pridetiSkrydi = (gcnew System::Windows::Forms::Button());
			this->griztiMeniu = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(952, 68);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Naujo skrydþio pridëjimas";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel4->Location = System::Drawing::Point(106, 243);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(194, 3);
			this->panel4->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Location = System::Drawing::Point(38, 160);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(270, 40);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Iðvykimo oro uostas";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox1->Location = System::Drawing::Point(106, 223);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 19);
			this->textBox1->TabIndex = 18;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel1->Location = System::Drawing::Point(490, 243);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(194, 3);
			this->panel1->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Location = System::Drawing::Point(421, 160);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(279, 40);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Atvykimo oro uostas";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox2->Location = System::Drawing::Point(490, 223);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(194, 19);
			this->textBox2->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->Location = System::Drawing::Point(38, 263);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(206, 40);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Iðvykimo laikas";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label5->Location = System::Drawing::Point(421, 263);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(215, 40);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Atvykimo laikas";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label6->Location = System::Drawing::Point(38, 380);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(225, 40);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Lëktuvo modelis";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label7->Location = System::Drawing::Point(421, 380);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(386, 40);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Aviakompanijos pavadinimas";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel7->Location = System::Drawing::Point(106, 581);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(194, 3);
			this->panel7->TabIndex = 38;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label8->Location = System::Drawing::Point(38, 497);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(233, 40);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Skrydþio numeris";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox5->Location = System::Drawing::Point(106, 561);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(194, 19);
			this->textBox5->TabIndex = 36;
			// 
			// pridetiSkrydi
			// 
			this->pridetiSkrydi->BackColor = System::Drawing::Color::CornflowerBlue;
			this->pridetiSkrydi->FlatAppearance->BorderSize = 0;
			this->pridetiSkrydi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pridetiSkrydi->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->pridetiSkrydi->ForeColor = System::Drawing::Color::White;
			this->pridetiSkrydi->Location = System::Drawing::Point(793, 487);
			this->pridetiSkrydi->Margin = System::Windows::Forms::Padding(4);
			this->pridetiSkrydi->Name = L"pridetiSkrydi";
			this->pridetiSkrydi->Size = System::Drawing::Size(146, 46);
			this->pridetiSkrydi->TabIndex = 40;
			this->pridetiSkrydi->Text = L"Pridëti skrydá";
			this->pridetiSkrydi->UseVisualStyleBackColor = false;
			this->pridetiSkrydi->Click += gcnew System::EventHandler(this, &NaujasSkrydis::pridetiSkrydi_Click);
			// 
			// griztiMeniu
			// 
			this->griztiMeniu->BackColor = System::Drawing::Color::CornflowerBlue;
			this->griztiMeniu->FlatAppearance->BorderSize = 0;
			this->griztiMeniu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->griztiMeniu->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->griztiMeniu->ForeColor = System::Drawing::Color::White;
			this->griztiMeniu->Location = System::Drawing::Point(814, 561);
			this->griztiMeniu->Margin = System::Windows::Forms::Padding(4);
			this->griztiMeniu->Name = L"griztiMeniu";
			this->griztiMeniu->Size = System::Drawing::Size(125, 43);
			this->griztiMeniu->TabIndex = 39;
			this->griztiMeniu->Text = L"Gráþti atgal";
			this->griztiMeniu->UseVisualStyleBackColor = false;
			this->griztiMeniu->Click += gcnew System::EventHandler(this, &NaujasSkrydis::griztiMeniu_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy.MM.dd H:mm";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(106, 325);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(194, 23);
			this->dateTimePicker1->TabIndex = 41;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"yyyy.MM.dd H:mm";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(490, 325);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(194, 23);
			this->dateTimePicker2->TabIndex = 42;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox3->Location = System::Drawing::Point(106, 444);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(194, 19);
			this->textBox3->TabIndex = 30;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel5->Location = System::Drawing::Point(106, 464);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(194, 3);
			this->panel5->TabIndex = 32;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox4->Location = System::Drawing::Point(490, 444);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(194, 19);
			this->textBox4->TabIndex = 33;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel6->Location = System::Drawing::Point(490, 464);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(194, 3);
			this->panel6->TabIndex = 35;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel2->Location = System::Drawing::Point(489, 581);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(194, 3);
			this->panel2->TabIndex = 45;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label9->Location = System::Drawing::Point(421, 497);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(219, 40);
			this->label9->TabIndex = 44;
			this->label9->Text = L"Keleiviø skaièius";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox6->Location = System::Drawing::Point(489, 561);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(194, 19);
			this->textBox6->TabIndex = 43;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Atvykimas", L"Iðvykimas" });
			this->comboBox1->Location = System::Drawing::Point(310, 105);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 25);
			this->comboBox1->TabIndex = 46;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &NaujasSkrydis::comboBox1_SelectedIndexChanged);
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label10->Location = System::Drawing::Point(105, 94);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(145, 40);
			this->label10->TabIndex = 47;
			this->label10->Text = L"Pasirinkite";
			// 
			// NaujasSkrydis
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(952, 622);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->pridetiSkrydi);
			this->Controls->Add(this->griztiMeniu);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"NaujasSkrydis";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// griztama i pries tai buvusia forma, si forma uzdaroma
	private: System::Void griztiMeniu_Click(System::Object^  sender, System::EventArgs^  e)
	{
		form->Show();
		this->Close();
	}
			 // iraso nauja skrydi i duomenu faila
	private: System::Void pridetiSkrydi_Click(System::Object^  sender, System::EventArgs^  e)
	{
		StringKeitimas keitimas;
		if (ArTuscias() || ArStringTuscias(comboBox1->Text) || (ArStringTuscias(textBox1->Text) && ArStringTuscias(textBox2->Text))) {
			MessageBox::Show("Patikrinkite ar viskà ávedëte ir ar viskà pasirinkote!", "Klaida!", MessageBoxButtons::OK);
		}
		else if (!ArLektuvasRegistruotas(keitimas.StringToStd(textBox3->Text))) {
			NeregistruotasLektuvas();
		}
		else if (LektuvoKeleiviuSkaicius(keitimas.StringToStd(textBox3->Text), keitimas.StringToStd(textBox6->Text))) {
			MessageBox::Show("Ávestas keleiviø skaièius virðija ávesto lëktuvo keleiviniø vietø skaièiø", "Klaida!", MessageBoxButtons::OK);
		}
		else {
			if (ArSkrydisRegistruotas(keitimas.StringToStd(textBox5->Text))) {
				MessageBox::Show("Jûsø ávestas skrydis jau uþregistruotas", "Klaida!", MessageBoxButtons::OK);
			}
			else {
				Issaugoti(keitimas);
				MessageBox::Show("Duomenys iðsaugoti.", "Praneðimas!", MessageBoxButtons::OK);
				Isvalyti();
			}
		}
	}
			 // paslepia laukelius pagal pasirinkima
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (comboBox1->Text == "Iðvykimas") {
			label2->Visible = false;
			textBox1->Visible = false;
			panel4->Visible = false;
			label3->Visible = true;
			textBox2->Visible = true;
			panel1->Visible = true;
		}
		else if (comboBox1->Text == "Atvykimas") {
			label3->Visible = false;
			textBox2->Visible = false;
			panel1->Visible = false;
			label2->Visible = true;
			textBox1->Visible = true;
			panel4->Visible = true;
		}
	}
			 // patikrina ar laukeliai netusti
	private: bool ArTuscias()
	{
		for (int i = 2; i < 6; i++) {
			if (ArStringTuscias(this->Controls["textBox" + Convert::ToString(i + 1)]->Text)) {
				return true;
			}
		}
		return false;
	}
			 // vartotojui leidzia priregistruot nauja lektuva
	private: void NeregistruotasLektuvas()
	{
		if (MessageBox::Show("Ðis lëktuvas nëra uþregistruotas. Ar norite já uþregistruoti?",
			"Praneðimas!", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			NaujasLektuvas^ form = gcnew NaujasLektuvas(this);
			form->Show();
			this->Hide();
		}
	}
			 // issaugo ivestus duomenis
	private: void Issaugoti(StringKeitimas keitimas)
	{
		string oroUostas1, oroUostas2;	// pagalbiniai kintamieji
		oroUostas1 = keitimas.StringToStd(textBox1->Text);
		oroUostas2 = keitimas.StringToStd(textBox2->Text);
		if (comboBox1->Text == "Iðvykimas") {
			oroUostas1 = SkaitytiOroPavadinima();
		}
		else if (comboBox1->Text == "Atvykimas") {
			oroUostas2 = SkaitytiOroPavadinima();
		}
		Skrydis skrydis;
		skrydis.Deti(oroUostas1, oroUostas2, keitimas.StringToStd(dateTimePicker1->Text),
			keitimas.StringToStd(dateTimePicker2->Text), keitimas.StringToStd(textBox3->Text),
			keitimas.StringToStd(textBox4->Text), keitimas.StringToStd(textBox5->Text),
			keitimas.StringToStd(textBox6->Text));
		IrasytiNaujaSkrydi(skrydis);
	}
			 // isvalo laukelius
	private: void Isvalyti()
	{
		for (int i = 0; i < 6; i++) {
			this->Controls["textBox" + Convert::ToString(i + 1)]->Text = "";
		}
	}
};
}