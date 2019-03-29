#pragma once

#include "KintamiejiKlases.h"

void SkaitytiLektuvus(Lektuvas lektuvas[], int & n);
void IrasytiLektuvuPakeitimus(Lektuvas lektuvas[], int n);
bool ArStringTuscias(System::String^ s);

namespace Baigiamasis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RedaguotiLektuvus
	/// </summary>
	public ref class RedaguotiLektuvus : public System::Windows::Forms::Form
	{
	public:
		Form^ form;			// sukuriamas formos objektas i kuria bus griztama
		RedaguotiLektuvus(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		RedaguotiLektuvus(Form^ form1)
		{
			form = form1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RedaguotiLektuvus()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  griztiMeniu;
	private: System::Windows::Forms::Button^  issaugotiDuomenis;
	private: System::Windows::Forms::Button^  trintiPazymetas;
	private: System::Windows::Forms::Button^  pazymetiViska;
	private: System::Windows::Forms::Button^  rodytiDuomenis;
	private: System::Windows::Forms::DataGridView^  lektuvuLentele;
	private: System::Windows::Forms::Button^  ieskoti;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  lektuvoModelis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  keleiviuSk;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  sparnuIlgis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  mase;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  lekIlgis;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  redaguoti;
	private: System::Windows::Forms::Label^  label2;
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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->griztiMeniu = (gcnew System::Windows::Forms::Button());
			this->issaugotiDuomenis = (gcnew System::Windows::Forms::Button());
			this->trintiPazymetas = (gcnew System::Windows::Forms::Button());
			this->pazymetiViska = (gcnew System::Windows::Forms::Button());
			this->rodytiDuomenis = (gcnew System::Windows::Forms::Button());
			this->lektuvuLentele = (gcnew System::Windows::Forms::DataGridView());
			this->lektuvoModelis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keleiviuSk = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sparnuIlgis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mase = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lekIlgis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->redaguoti = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->ieskoti = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lektuvuLentele))->BeginInit();
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
			this->label1->Size = System::Drawing::Size(871, 52);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Lëktuvø redagavimas";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// griztiMeniu
			// 
			this->griztiMeniu->BackColor = System::Drawing::Color::CornflowerBlue;
			this->griztiMeniu->FlatAppearance->BorderSize = 0;
			this->griztiMeniu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->griztiMeniu->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->griztiMeniu->ForeColor = System::Drawing::Color::White;
			this->griztiMeniu->Location = System::Drawing::Point(715, 478);
			this->griztiMeniu->Margin = System::Windows::Forms::Padding(4);
			this->griztiMeniu->Name = L"griztiMeniu";
			this->griztiMeniu->Size = System::Drawing::Size(143, 43);
			this->griztiMeniu->TabIndex = 28;
			this->griztiMeniu->Text = L"Gráþti á meniu";
			this->griztiMeniu->UseVisualStyleBackColor = false;
			this->griztiMeniu->Click += gcnew System::EventHandler(this, &RedaguotiLektuvus::griztiMeniu_Click);
			// 
			// issaugotiDuomenis
			// 
			this->issaugotiDuomenis->BackColor = System::Drawing::Color::CornflowerBlue;
			this->issaugotiDuomenis->FlatAppearance->BorderSize = 0;
			this->issaugotiDuomenis->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->issaugotiDuomenis->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->issaugotiDuomenis->ForeColor = System::Drawing::Color::White;
			this->issaugotiDuomenis->Location = System::Drawing::Point(736, 373);
			this->issaugotiDuomenis->Margin = System::Windows::Forms::Padding(4);
			this->issaugotiDuomenis->Name = L"issaugotiDuomenis";
			this->issaugotiDuomenis->Size = System::Drawing::Size(122, 57);
			this->issaugotiDuomenis->TabIndex = 27;
			this->issaugotiDuomenis->Text = L"Iðsaugoti duomenis";
			this->issaugotiDuomenis->UseVisualStyleBackColor = false;
			this->issaugotiDuomenis->Visible = false;
			this->issaugotiDuomenis->Click += gcnew System::EventHandler(this, &RedaguotiLektuvus::issaugotiDuomenis_Click);
			// 
			// trintiPazymetas
			// 
			this->trintiPazymetas->BackColor = System::Drawing::Color::CornflowerBlue;
			this->trintiPazymetas->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->trintiPazymetas->FlatAppearance->BorderSize = 2;
			this->trintiPazymetas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->trintiPazymetas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->trintiPazymetas->ForeColor = System::Drawing::Color::White;
			this->trintiPazymetas->Location = System::Drawing::Point(729, 272);
			this->trintiPazymetas->Margin = System::Windows::Forms::Padding(4);
			this->trintiPazymetas->Name = L"trintiPazymetas";
			this->trintiPazymetas->Size = System::Drawing::Size(129, 56);
			this->trintiPazymetas->TabIndex = 26;
			this->trintiPazymetas->Text = L"Trinti paþymëtas";
			this->trintiPazymetas->UseVisualStyleBackColor = false;
			this->trintiPazymetas->Click += gcnew System::EventHandler(this, &RedaguotiLektuvus::trintiPazymetas_Click);
			// 
			// pazymetiViska
			// 
			this->pazymetiViska->BackColor = System::Drawing::Color::CornflowerBlue;
			this->pazymetiViska->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->pazymetiViska->FlatAppearance->BorderSize = 2;
			this->pazymetiViska->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pazymetiViska->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->pazymetiViska->ForeColor = System::Drawing::Color::White;
			this->pazymetiViska->Location = System::Drawing::Point(729, 193);
			this->pazymetiViska->Margin = System::Windows::Forms::Padding(4);
			this->pazymetiViska->Name = L"pazymetiViska";
			this->pazymetiViska->Size = System::Drawing::Size(129, 56);
			this->pazymetiViska->TabIndex = 25;
			this->pazymetiViska->Text = L"Paþymëti visas eilutes";
			this->pazymetiViska->UseVisualStyleBackColor = false;
			this->pazymetiViska->Click += gcnew System::EventHandler(this, &RedaguotiLektuvus::pazymetiViska_Click);
			// 
			// rodytiDuomenis
			// 
			this->rodytiDuomenis->BackColor = System::Drawing::Color::CornflowerBlue;
			this->rodytiDuomenis->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->rodytiDuomenis->FlatAppearance->BorderSize = 2;
			this->rodytiDuomenis->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rodytiDuomenis->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->rodytiDuomenis->ForeColor = System::Drawing::Color::White;
			this->rodytiDuomenis->Location = System::Drawing::Point(729, 119);
			this->rodytiDuomenis->Margin = System::Windows::Forms::Padding(4);
			this->rodytiDuomenis->Name = L"rodytiDuomenis";
			this->rodytiDuomenis->Size = System::Drawing::Size(129, 56);
			this->rodytiDuomenis->TabIndex = 24;
			this->rodytiDuomenis->Text = L"Rodyti duomenis";
			this->rodytiDuomenis->UseVisualStyleBackColor = false;
			this->rodytiDuomenis->Click += gcnew System::EventHandler(this, &RedaguotiLektuvus::rodytiDuomenis_Click);
			// 
			// lektuvuLentele
			// 
			this->lektuvuLentele->AllowUserToAddRows = false;
			this->lektuvuLentele->AllowUserToDeleteRows = false;
			this->lektuvuLentele->AllowUserToResizeColumns = false;
			this->lektuvuLentele->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Gainsboro;
			this->lektuvuLentele->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->lektuvuLentele->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->lektuvuLentele->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->lektuvuLentele->BackgroundColor = System::Drawing::Color::GhostWhite;
			this->lektuvuLentele->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lektuvuLentele->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->lektuvuLentele->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::LightSlateGray;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->lektuvuLentele->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->lektuvuLentele->ColumnHeadersHeight = 70;
			this->lektuvuLentele->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->lektuvuLentele->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->lektuvoModelis,
					this->keleiviuSk, this->sparnuIlgis, this->mase, this->lekIlgis, this->redaguoti
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->lektuvuLentele->DefaultCellStyle = dataGridViewCellStyle3;
			this->lektuvuLentele->EnableHeadersVisualStyles = false;
			this->lektuvuLentele->Location = System::Drawing::Point(33, 119);
			this->lektuvuLentele->Name = L"lektuvuLentele";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->lektuvuLentele->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->lektuvuLentele->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(186)));
			this->lektuvuLentele->Size = System::Drawing::Size(641, 267);
			this->lektuvuLentele->TabIndex = 23;
			this->lektuvuLentele->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RedaguotiLektuvus::lektuvuLentele_CellContentClick);
			// 
			// lektuvoModelis
			// 
			this->lektuvoModelis->HeaderText = L"Lëktuvo modelis";
			this->lektuvoModelis->Name = L"lektuvoModelis";
			this->lektuvoModelis->ReadOnly = true;
			this->lektuvoModelis->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->lektuvoModelis->Width = 125;
			// 
			// keleiviuSk
			// 
			this->keleiviuSk->HeaderText = L"Keleiviø skaièius";
			this->keleiviuSk->Name = L"keleiviuSk";
			this->keleiviuSk->ReadOnly = true;
			this->keleiviuSk->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->keleiviuSk->Width = 122;
			// 
			// sparnuIlgis
			// 
			this->sparnuIlgis->HeaderText = L"Sparnø ilgis";
			this->sparnuIlgis->Name = L"sparnuIlgis";
			this->sparnuIlgis->ReadOnly = true;
			this->sparnuIlgis->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->sparnuIlgis->Width = 95;
			// 
			// mase
			// 
			this->mase->HeaderText = L"Didþiausia pakilimo masë (MTOM)";
			this->mase->Name = L"mase";
			this->mase->ReadOnly = true;
			this->mase->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->mase->Width = 120;
			// 
			// lekIlgis
			// 
			this->lekIlgis->HeaderText = L"Lëktuvo ilgis";
			this->lekIlgis->Name = L"lekIlgis";
			this->lekIlgis->ReadOnly = true;
			this->lekIlgis->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->lekIlgis->Width = 101;
			// 
			// redaguoti
			// 
			this->redaguoti->FalseValue = L"false";
			this->redaguoti->HeaderText = L"Redaguoti";
			this->redaguoti->Name = L"redaguoti";
			this->redaguoti->TrueValue = L"true";
			this->redaguoti->Width = 81;
			// 
			// ieskoti
			// 
			this->ieskoti->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ieskoti->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->ieskoti->FlatAppearance->BorderSize = 2;
			this->ieskoti->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ieskoti->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->ieskoti->ForeColor = System::Drawing::Color::White;
			this->ieskoti->Location = System::Drawing::Point(344, 467);
			this->ieskoti->Margin = System::Windows::Forms::Padding(4);
			this->ieskoti->Name = L"ieskoti";
			this->ieskoti->Size = System::Drawing::Size(88, 42);
			this->ieskoti->TabIndex = 29;
			this->ieskoti->Text = L"Surasti";
			this->ieskoti->UseVisualStyleBackColor = false;
			this->ieskoti->Visible = false;
			this->ieskoti->Click += gcnew System::EventHandler(this, &RedaguotiLektuvus::ieskoti_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->Location = System::Drawing::Point(304, 419);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(172, 23);
			this->textBox1->TabIndex = 30;
			this->textBox1->Visible = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label2->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label2->Location = System::Drawing::Point(29, 411);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(251, 35);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Áveskite lëktuvo modelá";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Visible = false;
			// 
			// RedaguotiLektuvus
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(871, 538);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->ieskoti);
			this->Controls->Add(this->griztiMeniu);
			this->Controls->Add(this->issaugotiDuomenis);
			this->Controls->Add(this->trintiPazymetas);
			this->Controls->Add(this->pazymetiViska);
			this->Controls->Add(this->rodytiDuomenis);
			this->Controls->Add(this->lektuvuLentele);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"RedaguotiLektuvus";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lektuvuLentele))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// suranda lenteleje ivesto pavadinimo eilute
	private: System::Void ieskoti_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (ArStringTuscias(textBox1->Text)) {
			MessageBox::Show("Pirmiausia áveskite lëktuvo modelá", "Klaida!", MessageBoxButtons::OK);
		}
		else {
			int index = -1;
			for (int i = 0; i < lektuvuLentele->Rows->Count; i++) {
				if (textBox1->Text == lektuvuLentele->Rows[i]->Cells[0]->Value->ToString()) {
					index = i;
				}
			}
			if (index != -1) {
				lektuvuLentele->CurrentCell = lektuvuLentele->Rows[index]->Cells[0];
				lektuvuLentele->Rows[index]->Selected = true;
			}
			else {
				MessageBox::Show("Lëktuvo modelis nerastas", "Klaida!", MessageBoxButtons::OK);
			}
		}
	} 
			 // parodo duomenis lenteleje
	private: System::Void rodytiDuomenis_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (lektuvuLentele->Rows->Count == 0) {
			Lektuvas lektuvas[CMax];
			StringKeitimas keitimas;
			int n = 0;
			SkaitytiLektuvus(lektuvas, n);
			for (int i = 0; i < n; i++) {
				lektuvuLentele->Rows->Add(keitimas.StringToSystem(lektuvas[i].GautiLektuvoModeli()),
					keitimas.StringToSystem(lektuvas[i].GautiKeleiviuSkaiciu()),
					keitimas.StringToSystem(lektuvas[i].GautiSparnuIlgi()),
					keitimas.StringToSystem(lektuvas[i].GautiMase()),
					keitimas.StringToSystem(lektuvas[i].GautiLektuvoIlgi()));
			}
			issaugotiDuomenis->Visible = true;
			ieskoti->Visible = true;
			textBox1->Visible = true;
			label2->Visible = true;
		}
		else {
			MessageBox::Show("Duomenys jau rodomi lentelëje!", "Klaida!", MessageBoxButtons::OK);
		}
	}
			 // pazymi arba atzymi eilutes
	private: System::Void pazymetiViska_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (lektuvuLentele->Rows->Count > 0) {
			bool pazymetaEilute;
			if (pazymetiViska->Text == "Paþymëti visas eilutes") {
				for (int i = 0; i < lektuvuLentele->Rows->Count; i++) {
					pazymetaEilute = Convert::ToBoolean(lektuvuLentele->Rows[i]->Cells[5]->Value);
					if (pazymetaEilute == false) {
						lektuvuLentele->Rows[i]->Cells[5]->Value = true;
					}
				}
				pazymetiViska->Text = "Atþymëti visas eilutes";
			}
			else if (pazymetiViska->Text == "Atþymëti visas eilutes") {
				pazymetiViska->Text = "Paþymëti visas eilutes";
				for (int i = 0; i < lektuvuLentele->Rows->Count; i++) {
					pazymetaEilute = Convert::ToBoolean(lektuvuLentele->Rows[i]->Cells[5]->Value);
					if (pazymetaEilute == true) {
						lektuvuLentele->Rows[i]->Cells[5]->Value = false;
					}
				}
			}
		}
		else {
			MessageBox::Show("Lentelëje nëra duomenø!", "Klaida!", MessageBoxButtons::OK);
		}
	}
			 // trina pazymetas eilutes
	private: System::Void trintiPazymetas_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (lektuvuLentele->Rows->Count > 0) {
			for (int i = lektuvuLentele->Rows->Count; i > 0; i--) {
				DataGridViewRow^ eilute = lektuvuLentele->Rows[i - 1];
				bool pazymetaEilute = Convert::ToBoolean(eilute->Cells[5]->Value);
				if (pazymetaEilute == true) {
					lektuvuLentele->Rows->Remove(eilute);
				}
			}
			pazymetiViska->Text = "Paþymëti visas eilutes";
		}
		else {
			MessageBox::Show("Lentelëje nëra duomenø!", "Klaida!", MessageBoxButtons::OK);
		}
	}
			 // issaugo objekto masyvo duomenis i faila
	private: System::Void issaugotiDuomenis_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (MessageBox::Show("Ar tikrai norite iðsaugoti?", "Patvirtinimas", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		{
			Lektuvas lektuvas[CMax];
			StringKeitimas keitimas;
			int n = 0;
			bool tikrinti = false;
			for (int i = 0; i < lektuvuLentele->Rows->Count; i++) {
				lektuvas[i].Deti(keitimas.StringToStd(lektuvuLentele->Rows[i]->Cells[0]->Value->ToString()),
					keitimas.StringToStd(lektuvuLentele->Rows[i]->Cells[1]->Value->ToString()),
					keitimas.StringToStd(lektuvuLentele->Rows[i]->Cells[2]->Value->ToString()),
					keitimas.StringToStd(lektuvuLentele->Rows[i]->Cells[3]->Value->ToString()),
					keitimas.StringToStd(lektuvuLentele->Rows[i]->Cells[4]->Value->ToString()));
				n++;
			}
			IrasytiLektuvuPakeitimus(lektuvas, n);
			MessageBox::Show("Duomenys iðsaugoti!", "Praneðimas!", MessageBoxButtons::OK);
		}
	}
			 // patikrina ar eilute pazymeta (ar galima ja redaguoti)
	private: System::Void lektuvuLentele_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
	{
		bool pazymetaEilute;
		for (int i = 0; i < lektuvuLentele->Rows->Count; i++) {
			pazymetaEilute = Convert::ToBoolean(lektuvuLentele->Rows[i]->Cells[5]->Value);
			if (pazymetaEilute == true) {
				for (int j = 0; j < lektuvuLentele->Columns->Count - 1; j++) {
					lektuvuLentele->Rows[i]->Cells[j]->ReadOnly = false;
				}
			}
			else {
				for (int j = 0; j < lektuvuLentele->Columns->Count - 1; j++) {
					lektuvuLentele->Rows[i]->Cells[j]->ReadOnly = true;
				}
			}
		}
	}
			 // grizta i pradine forma
	private: System::Void griztiMeniu_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		form->Show();
		this->Close();
	}
};
}
