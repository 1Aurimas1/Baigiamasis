#pragma once

#include "KintamiejiKlases.h"

bool ArStringTuscias(System::String^ s);
bool ArOroUostasRegistruotas(string oroPavadinimas);
void IrasytiNaujaOroUosta(OroUostas oroUostas);

namespace Baigiamasis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NaujasOroUostas
	/// </summary>
	public ref class NaujasOroUostas : public System::Windows::Forms::Form
	{
	public:
		Form^ form;			// sukuriamas formos objektas i kuria bus griztama
		NaujasOroUostas(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		NaujasOroUostas(Form^ form1)
		{
			form = form1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NaujasOroUostas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  griztiMeniu;
	private: System::Windows::Forms::Button^  pridetiOroUosta;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->griztiMeniu = (gcnew System::Windows::Forms::Button());
			this->pridetiOroUosta = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox1->Location = System::Drawing::Point(532, 117);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 19);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox2->Location = System::Drawing::Point(532, 171);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(194, 19);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox3->Location = System::Drawing::Point(532, 227);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(194, 19);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox4->Location = System::Drawing::Point(532, 287);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(194, 19);
			this->textBox4->TabIndex = 11;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(906, 52);
			this->panel1->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(15, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(365, 33);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Naujo oro uosto pridëjimas";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Location = System::Drawing::Point(139, 106);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(314, 40);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Oro uosto pavadinimas";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Location = System::Drawing::Point(238, 160);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(215, 40);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Oro uosto tipas";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->Location = System::Drawing::Point(225, 216);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(228, 40);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Aikðteliø skaièius";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label5->Location = System::Drawing::Point(36, 271);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(417, 40);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Pakilimo - tûpimo tako ilgis (m)";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel4->Location = System::Drawing::Point(532, 137);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(194, 3);
			this->panel4->TabIndex = 17;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel2->Location = System::Drawing::Point(532, 191);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(194, 3);
			this->panel2->TabIndex = 18;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel3->Location = System::Drawing::Point(532, 247);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(194, 3);
			this->panel3->TabIndex = 19;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel5->Location = System::Drawing::Point(532, 307);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(194, 3);
			this->panel5->TabIndex = 20;
			// 
			// griztiMeniu
			// 
			this->griztiMeniu->BackColor = System::Drawing::Color::CornflowerBlue;
			this->griztiMeniu->FlatAppearance->BorderSize = 0;
			this->griztiMeniu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->griztiMeniu->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->griztiMeniu->ForeColor = System::Drawing::Color::White;
			this->griztiMeniu->Location = System::Drawing::Point(747, 411);
			this->griztiMeniu->Margin = System::Windows::Forms::Padding(4);
			this->griztiMeniu->Name = L"griztiMeniu";
			this->griztiMeniu->Size = System::Drawing::Size(146, 43);
			this->griztiMeniu->TabIndex = 21;
			this->griztiMeniu->Text = L"Gráþti á meniu";
			this->griztiMeniu->UseVisualStyleBackColor = false;
			this->griztiMeniu->Click += gcnew System::EventHandler(this, &NaujasOroUostas::griztiMeniu_Click);
			// 
			// pridetiOroUosta
			// 
			this->pridetiOroUosta->BackColor = System::Drawing::Color::CornflowerBlue;
			this->pridetiOroUosta->FlatAppearance->BorderSize = 0;
			this->pridetiOroUosta->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pridetiOroUosta->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->pridetiOroUosta->ForeColor = System::Drawing::Color::White;
			this->pridetiOroUosta->Location = System::Drawing::Point(386, 381);
			this->pridetiOroUosta->Margin = System::Windows::Forms::Padding(4);
			this->pridetiOroUosta->Name = L"pridetiOroUosta";
			this->pridetiOroUosta->Size = System::Drawing::Size(180, 46);
			this->pridetiOroUosta->TabIndex = 22;
			this->pridetiOroUosta->Text = L"Pridëti oro uostà";
			this->pridetiOroUosta->UseVisualStyleBackColor = false;
			this->pridetiOroUosta->Click += gcnew System::EventHandler(this, &NaujasOroUostas::pridetiOroUosta_Click);
			// 
			// NaujasOroUostas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(906, 467);
			this->Controls->Add(this->pridetiOroUosta);
			this->Controls->Add(this->griztiMeniu);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"NaujasOroUostas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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

			 // iraso nauja oro uosta i duomenu faila
	private: System::Void pridetiOroUosta_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (ArTuscias()) {
			MessageBox::Show("Patikrinkite ar viskà ávedëte!", "Klaida!", MessageBoxButtons::OK);
		}
		else {
			StringKeitimas keitimas;
			if (ArRegistruotas(keitimas)) {
				MessageBox::Show("Jûsø ávestas oro uostas jau uþregistruotas", "Klaida!", MessageBoxButtons::OK);
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
		for (int i = 0; i < 4; i++) {
			if (ArStringTuscias(this->Controls["textBox" + Convert::ToString(i + 1)]->Text)) {
				return true;
			}
		}
		return false;
	}

			 // patikrina ar oro uostas yra duomenu faile
	private: bool ArRegistruotas(StringKeitimas keitimas)
	{
		if (ArOroUostasRegistruotas(keitimas.StringToStd(textBox1->Text))) {
			return true;
		}
		return false;
	}

			 // issaugo ivestus duomenis
	private: void Issaugoti(StringKeitimas keitimas)
	{
		OroUostas oroUostas;
		oroUostas.Deti(keitimas.StringToStd(textBox1->Text), keitimas.StringToStd(textBox2->Text), keitimas.StringToStd(textBox3->Text), keitimas.StringToStd(textBox4->Text));
		IrasytiNaujaOroUosta(oroUostas);
	}

			 // isvalo laukelius
	private: void Isvalyti()
	{
		for (int i = 0; i < 4; i++) {
			this->Controls["textBox" + Convert::ToString(i + 1)]->Text = "";
		}
	}
};
}
