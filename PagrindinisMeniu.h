#pragma once

#include "NaujasOroUostas.h"
#include "RedaguotiOroUostus.h"
#include "NaujasLektuvas.h"
#include "SkrydziuApskaita.h"
#include "RedaguotiLektuvus.h"
#include "RedaguotiSkrydzius.h"
#include "Apie.h"

bool ArStringTuscias(System::String^ s);
void SkaitytiOroUostus(OroUostas oroUostas[], int & n);
void RikiuotiOroUostai(OroUostas oroUostas[], int n);
void RasytiPavadinima(string OroUostoPav);

namespace Baigiamasis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PagrindinisMeniu
	/// </summary>
	public ref class PagrindinisMeniu : public System::Windows::Forms::Form
	{
	public:
		PagrindinisMeniu(void)
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
		~PagrindinisMeniu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  oroUostaiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pridëtiNaujàOroUostàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pasirinktiOroUostàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  redaguotiOroUostøInformacijàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  pasirinkti;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolStripMenuItem^  skrydþiaiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  apieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pridëtiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  redaguotiLëktuvusToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  redaguotiSkrydþiusToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  atsijungtiToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PagrindinisMeniu::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->oroUostaiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pridëtiNaujàOroUostàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasirinktiOroUostàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redaguotiOroUostøInformacijàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pridëtiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redaguotiLëktuvusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->skrydþiaiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redaguotiSkrydþiusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->atsijungtiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pasirinkti = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->oroUostaiToolStripMenuItem,
					this->lToolStripMenuItem, this->skrydþiaiToolStripMenuItem, this->infoToolStripMenuItem, this->atsijungtiToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(895, 35);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// oroUostaiToolStripMenuItem
			// 
			this->oroUostaiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->pridëtiNaujàOroUostàToolStripMenuItem,
					this->pasirinktiOroUostàToolStripMenuItem, this->redaguotiOroUostøInformacijàToolStripMenuItem
			});
			this->oroUostaiToolStripMenuItem->ForeColor = System::Drawing::Color::SandyBrown;
			this->oroUostaiToolStripMenuItem->Name = L"oroUostaiToolStripMenuItem";
			this->oroUostaiToolStripMenuItem->Size = System::Drawing::Size(95, 29);
			this->oroUostaiToolStripMenuItem->Text = L"Oro uostai";
			// 
			// pridëtiNaujàOroUostàToolStripMenuItem
			// 
			this->pridëtiNaujàOroUostàToolStripMenuItem->Name = L"pridëtiNaujàOroUostàToolStripMenuItem";
			this->pridëtiNaujàOroUostàToolStripMenuItem->Size = System::Drawing::Size(304, 26);
			this->pridëtiNaujàOroUostàToolStripMenuItem->Text = L"Pridëti naujà oro uostà";
			this->pridëtiNaujàOroUostàToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagrindinisMeniu::pridëtiNaujàOroUostàToolStripMenuItem_Click);
			// 
			// pasirinktiOroUostàToolStripMenuItem
			// 
			this->pasirinktiOroUostàToolStripMenuItem->Name = L"pasirinktiOroUostàToolStripMenuItem";
			this->pasirinktiOroUostàToolStripMenuItem->Size = System::Drawing::Size(304, 26);
			this->pasirinktiOroUostàToolStripMenuItem->Text = L"Pasirinkti oro uostà";
			this->pasirinktiOroUostàToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagrindinisMeniu::pasirinktiOroUostàToolStripMenuItem_Click);
			// 
			// redaguotiOroUostøInformacijàToolStripMenuItem
			// 
			this->redaguotiOroUostøInformacijàToolStripMenuItem->Name = L"redaguotiOroUostøInformacijàToolStripMenuItem";
			this->redaguotiOroUostøInformacijàToolStripMenuItem->Size = System::Drawing::Size(304, 26);
			this->redaguotiOroUostøInformacijàToolStripMenuItem->Text = L"Redaguoti oro uostø informacijà";
			this->redaguotiOroUostøInformacijàToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagrindinisMeniu::redaguotiOroUostøInformacijàToolStripMenuItem_Click);
			// 
			// lToolStripMenuItem
			// 
			this->lToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->pridëtiToolStripMenuItem,
					this->redaguotiLëktuvusToolStripMenuItem
			});
			this->lToolStripMenuItem->ForeColor = System::Drawing::Color::SandyBrown;
			this->lToolStripMenuItem->Name = L"lToolStripMenuItem";
			this->lToolStripMenuItem->Size = System::Drawing::Size(80, 29);
			this->lToolStripMenuItem->Text = L"Lëktuvai";
			// 
			// pridëtiToolStripMenuItem
			// 
			this->pridëtiToolStripMenuItem->Name = L"pridëtiToolStripMenuItem";
			this->pridëtiToolStripMenuItem->Size = System::Drawing::Size(288, 26);
			this->pridëtiToolStripMenuItem->Text = L"Pridëti naujà lëktuvà";
			this->pridëtiToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagrindinisMeniu::pridëtiToolStripMenuItem_Click);
			// 
			// redaguotiLëktuvusToolStripMenuItem
			// 
			this->redaguotiLëktuvusToolStripMenuItem->Name = L"redaguotiLëktuvusToolStripMenuItem";
			this->redaguotiLëktuvusToolStripMenuItem->Size = System::Drawing::Size(288, 26);
			this->redaguotiLëktuvusToolStripMenuItem->Text = L"Redaguoti lëktuvø informacijà";
			this->redaguotiLëktuvusToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagrindinisMeniu::redaguotiLëktuvusToolStripMenuItem_Click);
			// 
			// skrydþiaiToolStripMenuItem
			// 
			this->skrydþiaiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->redaguotiSkrydþiusToolStripMenuItem });
			this->skrydþiaiToolStripMenuItem->ForeColor = System::Drawing::Color::SandyBrown;
			this->skrydþiaiToolStripMenuItem->Name = L"skrydþiaiToolStripMenuItem";
			this->skrydþiaiToolStripMenuItem->Size = System::Drawing::Size(85, 29);
			this->skrydþiaiToolStripMenuItem->Text = L"Skrydþiai";
			// 
			// redaguotiSkrydþiusToolStripMenuItem
			// 
			this->redaguotiSkrydþiusToolStripMenuItem->Name = L"redaguotiSkrydþiusToolStripMenuItem";
			this->redaguotiSkrydþiusToolStripMenuItem->Size = System::Drawing::Size(220, 26);
			this->redaguotiSkrydþiusToolStripMenuItem->Text = L"Redaguoti skrydþius";
			this->redaguotiSkrydþiusToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagrindinisMeniu::redaguotiSkrydþiusToolStripMenuItem_Click);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->apieToolStripMenuItem });
			this->infoToolStripMenuItem->ForeColor = System::Drawing::Color::SandyBrown;
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(49, 29);
			this->infoToolStripMenuItem->Text = L"Info";
			// 
			// apieToolStripMenuItem
			// 
			this->apieToolStripMenuItem->Name = L"apieToolStripMenuItem";
			this->apieToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->apieToolStripMenuItem->Text = L"Apie/Pagalba";
			this->apieToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagrindinisMeniu::apieToolStripMenuItem_Click);
			// 
			// atsijungtiToolStripMenuItem
			// 
			this->atsijungtiToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->atsijungtiToolStripMenuItem->AutoSize = false;
			this->atsijungtiToolStripMenuItem->BackColor = System::Drawing::Color::RoyalBlue;
			this->atsijungtiToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->atsijungtiToolStripMenuItem->ForeColor = System::Drawing::Color::SandyBrown;
			this->atsijungtiToolStripMenuItem->Name = L"atsijungtiToolStripMenuItem";
			this->atsijungtiToolStripMenuItem->Size = System::Drawing::Size(99, 35);
			this->atsijungtiToolStripMenuItem->Text = L"Atsijungti";
			this->atsijungtiToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->atsijungtiToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagrindinisMeniu::atsijungtiToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImageLocation = L"";
			this->pictureBox1->Location = System::Drawing::Point(12, 51);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(871, 442);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(713, 155);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(154, 25);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->Visible = false;
			// 
			// pasirinkti
			// 
			this->pasirinkti->BackColor = System::Drawing::Color::Transparent;
			this->pasirinkti->FlatAppearance->BorderSize = 0;
			this->pasirinkti->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pasirinkti->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->pasirinkti->ForeColor = System::Drawing::Color::SandyBrown;
			this->pasirinkti->Location = System::Drawing::Point(746, 234);
			this->pasirinkti->Margin = System::Windows::Forms::Padding(4);
			this->pasirinkti->Name = L"pasirinkti";
			this->pasirinkti->Size = System::Drawing::Size(121, 41);
			this->pasirinkti->TabIndex = 23;
			this->pasirinkti->Text = L"Pasirinkti";
			this->pasirinkti->UseVisualStyleBackColor = false;
			this->pasirinkti->Visible = false;
			this->pasirinkti->Click += gcnew System::EventHandler(this, &PagrindinisMeniu::pasirinkti_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label1->ForeColor = System::Drawing::Color::SandyBrown;
			this->label1->Location = System::Drawing::Point(594, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(273, 34);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Pasirinkite oro uostà";
			this->label1->Visible = false;
			// 
			// PagrindinisMeniu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(895, 505);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pasirinkti);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"PagrindinisMeniu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pagrindinis Meniu";
			this->Activated += gcnew System::EventHandler(this, &PagrindinisMeniu::PagrindinisMeniu_Activated);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		// pereina i kita forma
	private: System::Void pridëtiNaujàOroUostàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		NaujasOroUostas^ form = gcnew NaujasOroUostas(this);
		form->Show();
		this->Hide();
	}
			 // pereina i kita forma
	private: System::Void redaguotiOroUostøInformacijàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		RedaguotiOroUostus^ form = gcnew RedaguotiOroUostus(this);
		form->Show();
		this->Hide();
	}
			 // parodo nematomus komponentus
	private: System::Void pasirinktiOroUostàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		label1->Visible = true;
		comboBox1->Visible = true;
		pasirinkti->Visible = true;
	}
			 // patikrina ar combobox netuscias ir pereina i kita forma
	private: System::Void pasirinkti_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (ArStringTuscias(comboBox1->Text))
		{
			MessageBox::Show("Nepasirinkote oro uosto!", "Klaida!", MessageBoxButtons::OK);
		}
		else
		{
			StringKeitimas keitimas;
			SkrydziuApskaita^ form = gcnew SkrydziuApskaita(this);
			form->Text = "Skrydþiø apskaita - " + comboBox1->Text;
			RasytiPavadinima(keitimas.StringToStd(comboBox1->Text));
			form->Show();
			this->Hide();
		}
	}
			 // prideda i combobox nauju oro uostu
	private: System::Void PagrindinisMeniu_Activated(System::Object^  sender, System::EventArgs^  e)
	{	
		OroUostas oroUostas[CMax];
		StringKeitimas keitimas;
		int n = 0;
		SkaitytiOroUostus(oroUostas, n);
		RikiuotiOroUostai(oroUostas, n);
		if (comboBox1->Items->Count == 0)
		{
			for (int i = 0; i < n; i++) {
				comboBox1->Items->Add(keitimas.StringToSystem(oroUostas[i].GautiPavadinima()));
			}
		}
		else if (comboBox1->Items->Count != n) {
			comboBox1->Items->Clear();
			for (int i = 0; i < n; i++) {
				comboBox1->Items->Add(keitimas.StringToSystem(oroUostas[i].GautiPavadinima()));
			}
		}
	}
			 // parodo kita forma
	private: System::Void apieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Apie^ form = gcnew Apie();
		form->Show();
	}
			 // pereina i kita forma
	private: System::Void pridëtiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		NaujasLektuvas^ form = gcnew NaujasLektuvas(this);
		form->Show();
		this->Hide();
	}
			 // pereina i kita forma
	private: System::Void redaguotiLëktuvusToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		RedaguotiLektuvus^ form = gcnew RedaguotiLektuvus(this);
		form->Show();
		this->Hide();
	}
			 // pereina i kita forma
	private: System::Void redaguotiSkrydþiusToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		RedaguotiSkrydzius^ form = gcnew RedaguotiSkrydzius(this);
		form->Show();
		this->Hide();
	}
			 // isjungia programa
	private: System::Void atsijungtiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->Close();
	}
};
}
