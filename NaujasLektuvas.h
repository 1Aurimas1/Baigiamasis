#pragma once

#include "KintamiejiKlases.h"

bool ArStringTuscias(System::String^ s);
bool ArLektuvasRegistruotas(string lektuvoModelis);
void IrasytiNaujaLektuva(Lektuvas lektuvas);

namespace Baigiamasis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NaujasLektuvas
	/// </summary>
	public ref class NaujasLektuvas : public System::Windows::Forms::Form
	{
	public:
		Form^ form;				// sukuriamas formos objektas i kuria bus griztama
		NaujasLektuvas(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		NaujasLektuvas(Form^ form1)
		{
			form = form1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NaujasLektuvas()
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
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  pridetiLektuva;

	private: System::Windows::Forms::Button^  griztiMeniu;
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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->pridetiLektuva = (gcnew System::Windows::Forms::Button());
			this->griztiMeniu = (gcnew System::Windows::Forms::Button());
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
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(897, 68);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Naujo lëktuvo pridëjimas";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel4->Location = System::Drawing::Point(154, 221);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(194, 3);
			this->panel4->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Location = System::Drawing::Point(145, 132);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(225, 40);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Lëktuvo modelis";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox1->Location = System::Drawing::Point(154, 201);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 19);
			this->textBox1->TabIndex = 21;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel1->Location = System::Drawing::Point(511, 221);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(194, 3);
			this->panel1->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Location = System::Drawing::Point(495, 132);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 40);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Keleiviø skaièius";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox2->Location = System::Drawing::Point(511, 201);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(194, 19);
			this->textBox2->TabIndex = 24;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel2->Location = System::Drawing::Point(154, 342);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(194, 3);
			this->panel2->TabIndex = 29;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->Location = System::Drawing::Point(147, 251);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(215, 40);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Sparnø ilgis (m)";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox3->Location = System::Drawing::Point(154, 322);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(194, 19);
			this->textBox3->TabIndex = 27;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel3->Location = System::Drawing::Point(511, 342);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(194, 3);
			this->panel3->TabIndex = 32;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label5->Location = System::Drawing::Point(432, 251);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(420, 40);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Didþiausia kilimo masë (MTOM)";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox4->Location = System::Drawing::Point(511, 322);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(194, 19);
			this->textBox4->TabIndex = 30;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel5->Location = System::Drawing::Point(153, 469);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(194, 3);
			this->panel5->TabIndex = 35;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label6->Location = System::Drawing::Point(146, 378);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(226, 40);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Lëktuvo ilgis (m)";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox5->Location = System::Drawing::Point(153, 449);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(194, 19);
			this->textBox5->TabIndex = 33;
			// 
			// pridetiLektuva
			// 
			this->pridetiLektuva->BackColor = System::Drawing::Color::CornflowerBlue;
			this->pridetiLektuva->FlatAppearance->BorderSize = 0;
			this->pridetiLektuva->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pridetiLektuva->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->pridetiLektuva->ForeColor = System::Drawing::Color::White;
			this->pridetiLektuva->Location = System::Drawing::Point(511, 432);
			this->pridetiLektuva->Margin = System::Windows::Forms::Padding(4);
			this->pridetiLektuva->Name = L"pridetiLektuva";
			this->pridetiLektuva->Size = System::Drawing::Size(176, 40);
			this->pridetiLektuva->TabIndex = 41;
			this->pridetiLektuva->Text = L"Pridëti lëktuvà";
			this->pridetiLektuva->UseVisualStyleBackColor = false;
			this->pridetiLektuva->Click += gcnew System::EventHandler(this, &NaujasLektuvas::pridetiLektuva_Click);
			// 
			// griztiMeniu
			// 
			this->griztiMeniu->BackColor = System::Drawing::Color::CornflowerBlue;
			this->griztiMeniu->FlatAppearance->BorderSize = 0;
			this->griztiMeniu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->griztiMeniu->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->griztiMeniu->ForeColor = System::Drawing::Color::White;
			this->griztiMeniu->Location = System::Drawing::Point(759, 515);
			this->griztiMeniu->Margin = System::Windows::Forms::Padding(4);
			this->griztiMeniu->Name = L"griztiMeniu";
			this->griztiMeniu->Size = System::Drawing::Size(125, 43);
			this->griztiMeniu->TabIndex = 42;
			this->griztiMeniu->Text = L"Gráþti atgal";
			this->griztiMeniu->UseVisualStyleBackColor = false;
			this->griztiMeniu->Click += gcnew System::EventHandler(this, &NaujasLektuvas::griztiMeniu_Click);
			// 
			// NaujasLektuvas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(897, 571);
			this->Controls->Add(this->griztiMeniu);
			this->Controls->Add(this->pridetiLektuva);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
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
			this->Name = L"NaujasLektuvas";
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

	// iraso nauja lektuva i duomenu faila
	private: System::Void pridetiLektuva_Click(System::Object^  sender, System::EventArgs^  e)  
	{
		StringKeitimas keitimas;
		if (ArTuscias()) {
			MessageBox::Show("Patikrinkite ar viskà ávedëte!", "Klaida!", MessageBoxButtons::OK);
		}
		else {
			if (ArRegistruotas(keitimas)) {
				MessageBox::Show("Jûsø ávestas lëktuvas jau uþregistruotas", "Klaida!", MessageBoxButtons::OK);
			}
			else {
				Issaugoti(keitimas);
				MessageBox::Show("Duomenys iðsaugoti.", "Praneðimas!", MessageBoxButtons::OK);
				Isvalyti();
			}
		}
	}

	// patikrina ar laukeliai netusti
	private: bool ArTuscias()
	{
		for (int i = 0; i < 5; i++) {
			if (ArStringTuscias(this->Controls["textBox" + Convert::ToString(i + 1)]->Text)) {
				return true;
			}
		}
		return false;
	}

	// patikrina ar lektuvas yra duomenu faile
	private: bool ArRegistruotas(StringKeitimas keitimas)
	{
		if (ArLektuvasRegistruotas(keitimas.StringToStd(textBox1->Text))) {
			return true;
		}
		return false;
	}

	// issaugo ivestus duomenis
	private: void Issaugoti(StringKeitimas keitimas)
	{
		Lektuvas lektuvas;
		lektuvas.Deti(keitimas.StringToStd(textBox1->Text), keitimas.StringToStd(textBox2->Text),
			keitimas.StringToStd(textBox3->Text), keitimas.StringToStd(textBox4->Text),
			keitimas.StringToStd(textBox5->Text));
		IrasytiNaujaLektuva(lektuvas);
	}

	// isvalo laukelius
	private: void Isvalyti()
	{
		for (int i = 0; i < 5; i++) {
			this->Controls["textBox" + Convert::ToString(i + 1)]->Text = "";
		}
	}
};
}
