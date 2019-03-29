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
	private: System::Windows::Forms::ToolStripMenuItem^  prid�tiNauj�OroUost�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pasirinktiOroUost�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  redaguotiOroUost�Informacij�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  pasirinkti;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolStripMenuItem^  skryd�iaiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  apieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  prid�tiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  redaguotiL�ktuvusToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  redaguotiSkryd�iusToolStripMenuItem;
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
			this->prid�tiNauj�OroUost�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasirinktiOroUost�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redaguotiOroUost�Informacij�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->prid�tiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redaguotiL�ktuvusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->skryd�iaiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redaguotiSkryd�iusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
					this->lToolStripMenuItem, this->skryd�iaiToolStripMenuItem, this->infoToolStripMenuItem, this->atsijungtiToolStripMenuItem
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
				this->prid�tiNauj�OroUost�ToolStripMenuItem,
					this->pasirinktiOroUost�ToolStripMenuItem, this->redaguotiOroUost�Informacij�ToolStripMenuItem
			});
			this->oroUostaiToolStripMenuItem->ForeColor = System::Drawing::Color::SandyBrown;
			this->oroUostaiToolStripMenuItem->Name = L"oroUostaiToolStripMenuItem";
			this->oroUostaiToolStripMenuItem->Size = System::Drawing::Size(95, 29);
			this->oroUostaiToolStripMenuItem->Text = L"Oro uostai";
			// 
			// prid�tiNauj�OroUost�ToolStripMenuItem
			// 
			this->prid�tiNauj�OroUost�ToolStripMenuItem->Name = L"prid�tiNauj�OroUost�ToolStripMenuItem";
			this->prid�tiNauj�OroUost�ToolStripMenuItem->Size = System::Drawing::Size(304, 26);
			this->prid�tiNauj�OroUost�ToolStripMenuItem->Text = L"Prid�ti nauj� oro uost�";
			this->prid�tiNauj�OroUost�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagrindinisMeniu::prid�tiNauj�OroUost�ToolStripMenuItem_Click);
			// 
			// pasirinktiOroUost�ToolStripMenuItem
			// 
			this->pasirinktiOroUost�ToolStripMenuItem->Name = L"pasirinktiOroUost�ToolStripMenuItem";
			this->pasirinktiOroUost�ToolStripMenuItem->Size = System::Drawing::Size(304, 26);
			this->pasirinktiOroUost�ToolStripMenuItem->Text = L"Pasirinkti oro uost�";
			this->pasirinktiOroUost�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagrindinisMeniu::pasirinktiOroUost�ToolStripMenuItem_Click);
			// 
			// redaguotiOroUost�Informacij�ToolStripMenuItem
			// 
			this->redaguotiOroUost�Informacij�ToolStripMenuItem->Name = L"redaguotiOroUost�Informacij�ToolStripMenuItem";
			this->redaguotiOroUost�Informacij�ToolStripMenuItem->Size = System::Drawing::Size(304, 26);
			this->redaguotiOroUost�Informacij�ToolStripMenuItem->Text = L"Redaguoti oro uost� informacij�";
			this->redaguotiOroUost�Informacij�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagrindinisMeniu::redaguotiOroUost�Informacij�ToolStripMenuItem_Click);
			// 
			// lToolStripMenuItem
			// 
			this->lToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->prid�tiToolStripMenuItem,
					this->redaguotiL�ktuvusToolStripMenuItem
			});
			this->lToolStripMenuItem->ForeColor = System::Drawing::Color::SandyBrown;
			this->lToolStripMenuItem->Name = L"lToolStripMenuItem";
			this->lToolStripMenuItem->Size = System::Drawing::Size(80, 29);
			this->lToolStripMenuItem->Text = L"L�ktuvai";
			// 
			// prid�tiToolStripMenuItem
			// 
			this->prid�tiToolStripMenuItem->Name = L"prid�tiToolStripMenuItem";
			this->prid�tiToolStripMenuItem->Size = System::Drawing::Size(288, 26);
			this->prid�tiToolStripMenuItem->Text = L"Prid�ti nauj� l�ktuv�";
			this->prid�tiToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagrindinisMeniu::prid�tiToolStripMenuItem_Click);
			// 
			// redaguotiL�ktuvusToolStripMenuItem
			// 
			this->redaguotiL�ktuvusToolStripMenuItem->Name = L"redaguotiL�ktuvusToolStripMenuItem";
			this->redaguotiL�ktuvusToolStripMenuItem->Size = System::Drawing::Size(288, 26);
			this->redaguotiL�ktuvusToolStripMenuItem->Text = L"Redaguoti l�ktuv� informacij�";
			this->redaguotiL�ktuvusToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagrindinisMeniu::redaguotiL�ktuvusToolStripMenuItem_Click);
			// 
			// skryd�iaiToolStripMenuItem
			// 
			this->skryd�iaiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->redaguotiSkryd�iusToolStripMenuItem });
			this->skryd�iaiToolStripMenuItem->ForeColor = System::Drawing::Color::SandyBrown;
			this->skryd�iaiToolStripMenuItem->Name = L"skryd�iaiToolStripMenuItem";
			this->skryd�iaiToolStripMenuItem->Size = System::Drawing::Size(85, 29);
			this->skryd�iaiToolStripMenuItem->Text = L"Skryd�iai";
			// 
			// redaguotiSkryd�iusToolStripMenuItem
			// 
			this->redaguotiSkryd�iusToolStripMenuItem->Name = L"redaguotiSkryd�iusToolStripMenuItem";
			this->redaguotiSkryd�iusToolStripMenuItem->Size = System::Drawing::Size(220, 26);
			this->redaguotiSkryd�iusToolStripMenuItem->Text = L"Redaguoti skryd�ius";
			this->redaguotiSkryd�iusToolStripMenuItem->Click += gcnew System::EventHandler(this, &PagrindinisMeniu::redaguotiSkryd�iusToolStripMenuItem_Click);
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
			this->label1->Text = L"Pasirinkite oro uost�";
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
	private: System::Void prid�tiNauj�OroUost�ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		NaujasOroUostas^ form = gcnew NaujasOroUostas(this);
		form->Show();
		this->Hide();
	}
			 // pereina i kita forma
	private: System::Void redaguotiOroUost�Informacij�ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		RedaguotiOroUostus^ form = gcnew RedaguotiOroUostus(this);
		form->Show();
		this->Hide();
	}
			 // parodo nematomus komponentus
	private: System::Void pasirinktiOroUost�ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
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
			form->Text = "Skryd�i� apskaita - " + comboBox1->Text;
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
	private: System::Void prid�tiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		NaujasLektuvas^ form = gcnew NaujasLektuvas(this);
		form->Show();
		this->Hide();
	}
			 // pereina i kita forma
	private: System::Void redaguotiL�ktuvusToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		RedaguotiLektuvus^ form = gcnew RedaguotiLektuvus(this);
		form->Show();
		this->Hide();
	}
			 // pereina i kita forma
	private: System::Void redaguotiSkryd�iusToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
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
