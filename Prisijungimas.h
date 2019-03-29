#pragma once
#include "Registravimas.h"
#include "PagrindinisMeniu.h"
#include "KintamiejiKlases.h"

bool ArStringTuscias(System::String^ s);
bool ArUzregistruotiVartotojuDuomenys(string vardas, string pastas, string slaptazodis);

namespace Baigiamasis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Prisijungimas
	/// </summary>
	public ref class Prisijungimas : public System::Windows::Forms::Form
	{
	public:
		Prisijungimas(void)
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
		~Prisijungimas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  registruoti;
	private: System::Windows::Forms::Button^  prisijungti;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::TextBox^  textBox2;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->registruoti = (gcnew System::Windows::Forms::Button());
			this->prisijungti = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(698, 52);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(13, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Skrydþiø apskaita";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->registruoti);
			this->panel2->Controls->Add(this->prisijungti);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 52);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(698, 428);
			this->panel2->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel5->Location = System::Drawing::Point(346, 206);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(186, 3);
			this->panel5->TabIndex = 11;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel4->Location = System::Drawing::Point(346, 126);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(186, 3);
			this->panel4->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox1->Location = System::Drawing::Point(346, 106);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 19);
			this->textBox1->TabIndex = 7;
			// 
			// registruoti
			// 
			this->registruoti->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->registruoti->FlatAppearance->BorderSize = 0;
			this->registruoti->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->registruoti->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLight;
			this->registruoti->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->registruoti->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->registruoti->Location = System::Drawing::Point(355, 9);
			this->registruoti->Margin = System::Windows::Forms::Padding(4);
			this->registruoti->Name = L"registruoti";
			this->registruoti->Size = System::Drawing::Size(142, 46);
			this->registruoti->TabIndex = 6;
			this->registruoti->Text = L"Registracija";
			this->registruoti->UseVisualStyleBackColor = true;
			this->registruoti->Click += gcnew System::EventHandler(this, &Prisijungimas::registruoti_Click);
			// 
			// prisijungti
			// 
			this->prisijungti->BackColor = System::Drawing::Color::CornflowerBlue;
			this->prisijungti->FlatAppearance->BorderSize = 0;
			this->prisijungti->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prisijungti->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->prisijungti->ForeColor = System::Drawing::Color::White;
			this->prisijungti->Location = System::Drawing::Point(271, 344);
			this->prisijungti->Margin = System::Windows::Forms::Padding(4);
			this->prisijungti->Name = L"prisijungti";
			this->prisijungti->Size = System::Drawing::Size(128, 46);
			this->prisijungti->TabIndex = 5;
			this->prisijungti->Text = L"Prisijungti";
			this->prisijungti->UseVisualStyleBackColor = false;
			this->prisijungti->Click += gcnew System::EventHandler(this, &Prisijungimas::prisijungti_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Enabled = false;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button1->Location = System::Drawing::Point(186, 9);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 46);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Prisijungimas";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Location = System::Drawing::Point(135, 172);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(162, 40);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Slaptaþodis";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Location = System::Drawing::Point(33, 92);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(265, 40);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Prisijungimo vardas";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel3->Location = System::Drawing::Point(186, 57);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(142, 5);
			this->panel3->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->textBox2->Location = System::Drawing::Point(346, 186);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(186, 19);
			this->textBox2->TabIndex = 12;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// Prisijungimas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(698, 480);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Prisijungimas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	// patikrina ar laukeliai netusti, ar neuzregistruotas vartotojas, ar ivesti teisingi duomenys
	private: System::Void prisijungti_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		StringKeitimas keitimas;

		if (ArStringTuscias(textBox1->Text) || ArStringTuscias(textBox2->Text)) {
			MessageBox::Show("Patikrinkite ar viskà ávedëte!", "Klaida!", MessageBoxButtons::OK);
		}
		else {
			if (!ArUzregistruotiVartotojuDuomenys("", "", keitimas.StringToStd(textBox2->Text)) && !ArUzregistruotiVartotojuDuomenys(keitimas.StringToStd(textBox1->Text), "", "")) {
				MessageBox::Show("Prisijungimo duomenys nerasti. Praðome uþsiregistruoti.", "Klaida!", MessageBoxButtons::OK);
			}
			else if (!ArUzregistruotiVartotojuDuomenys("", "", keitimas.StringToStd(textBox2->Text)) || !ArUzregistruotiVartotojuDuomenys(keitimas.StringToStd(textBox1->Text), "", "")) {
				MessageBox::Show("Prisijungimo duomenys neteisingi. Praðome bandyti dar kartà.", "Klaida!", MessageBoxButtons::OK);
			}
			else {
				PagrindinisMeniu^ form = gcnew PagrindinisMeniu();
				form->Show();
				form->Closed += gcnew System::EventHandler(this, &Baigiamasis::Prisijungimas::Uzdaryti);
				this->Hide();
			}
		}
	}
			 // pereina i kita forma
	private: System::Void registruoti_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Registravimas^ form = gcnew Registravimas(this);
		form->Show();
		this->Hide();
	}
			 // uzdaro paslepta forma, jei uzdaromas pagrindinisMeniu
	void Baigiamasis::Prisijungimas::Uzdaryti(System::Object ^sender, System::EventArgs ^e)
	{
		this->Close();
	}
};
}
