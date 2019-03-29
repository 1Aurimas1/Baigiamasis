#pragma once

#include "KintamiejiKlases.h"

void SkaitytiOroUostus(OroUostas oroUostas[], int & n);
void RikiuotiOroUostai(OroUostas oroUostas[], int n);
void SkaitytiSkrydzius(Skrydis skrydis[], int & n);
void RasytiPavadinima(string OroUostoPav);
bool ArFailasEgzistuoja(string failoPav);
void IrasytiSkrydziuPakeitimus(Skrydis skrydis[], int n);
bool ArStringTuscias(System::String^ s);

namespace Baigiamasis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RedaguotiSkrydzius
	/// </summary>
	public ref class RedaguotiSkrydzius : public System::Windows::Forms::Form
	{
	public:		
		Form^ form;				// sukuriamas formos objektas i kuria bus griztama
		RedaguotiSkrydzius(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		RedaguotiSkrydzius(Form^ form1)
		{
			form = form1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RedaguotiSkrydzius()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  ieskoti;
	private: System::Windows::Forms::Button^  griztiMeniu;
	private: System::Windows::Forms::Button^  issaugotiDuomenis;
	private: System::Windows::Forms::Button^  trintiPazymetas;
	private: System::Windows::Forms::Button^  pazymetiViska;
	private: System::Windows::Forms::DataGridView^  skrydziuLentele;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  skrydzioNr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  lektuvoModelis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  keleiviuSk;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  pradOroUostas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  galOroUostas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  isLaikas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  atLaikas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  aviakompanija;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  redaguoti;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ieskoti = (gcnew System::Windows::Forms::Button());
			this->griztiMeniu = (gcnew System::Windows::Forms::Button());
			this->issaugotiDuomenis = (gcnew System::Windows::Forms::Button());
			this->trintiPazymetas = (gcnew System::Windows::Forms::Button());
			this->pazymetiViska = (gcnew System::Windows::Forms::Button());
			this->skrydziuLentele = (gcnew System::Windows::Forms::DataGridView());
			this->skrydzioNr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lektuvoModelis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keleiviuSk = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pradOroUostas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->galOroUostas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->isLaikas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->atLaikas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->aviakompanija = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->redaguoti = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->skrydziuLentele))->BeginInit();
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
			this->label1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1128, 52);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Skrydþiø redagavimas";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(378, 74);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(174, 25);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &RedaguotiSkrydzius::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label2->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label2->Location = System::Drawing::Point(107, 63);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(260, 43);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Pasirinkite oro uostà";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label3->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label3->Location = System::Drawing::Point(31, 428);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(251, 35);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Áveskite skrydþio numerá";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->Location = System::Drawing::Point(306, 436);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(172, 23);
			this->textBox1->TabIndex = 40;
			this->textBox1->Visible = false;
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
			this->ieskoti->Location = System::Drawing::Point(346, 484);
			this->ieskoti->Margin = System::Windows::Forms::Padding(4);
			this->ieskoti->Name = L"ieskoti";
			this->ieskoti->Size = System::Drawing::Size(88, 42);
			this->ieskoti->TabIndex = 39;
			this->ieskoti->Text = L"Surasti";
			this->ieskoti->UseVisualStyleBackColor = false;
			this->ieskoti->Visible = false;
			this->ieskoti->Click += gcnew System::EventHandler(this, &RedaguotiSkrydzius::ieskoti_Click);
			// 
			// griztiMeniu
			// 
			this->griztiMeniu->BackColor = System::Drawing::Color::CornflowerBlue;
			this->griztiMeniu->FlatAppearance->BorderSize = 0;
			this->griztiMeniu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->griztiMeniu->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->griztiMeniu->ForeColor = System::Drawing::Color::White;
			this->griztiMeniu->Location = System::Drawing::Point(972, 490);
			this->griztiMeniu->Margin = System::Windows::Forms::Padding(4);
			this->griztiMeniu->Name = L"griztiMeniu";
			this->griztiMeniu->Size = System::Drawing::Size(143, 43);
			this->griztiMeniu->TabIndex = 38;
			this->griztiMeniu->Text = L"Gráþti á meniu";
			this->griztiMeniu->UseVisualStyleBackColor = false;
			this->griztiMeniu->Click += gcnew System::EventHandler(this, &RedaguotiSkrydzius::griztiMeniu_Click);
			// 
			// issaugotiDuomenis
			// 
			this->issaugotiDuomenis->BackColor = System::Drawing::Color::CornflowerBlue;
			this->issaugotiDuomenis->FlatAppearance->BorderSize = 0;
			this->issaugotiDuomenis->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->issaugotiDuomenis->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->issaugotiDuomenis->ForeColor = System::Drawing::Color::White;
			this->issaugotiDuomenis->Location = System::Drawing::Point(996, 332);
			this->issaugotiDuomenis->Margin = System::Windows::Forms::Padding(4);
			this->issaugotiDuomenis->Name = L"issaugotiDuomenis";
			this->issaugotiDuomenis->Size = System::Drawing::Size(122, 57);
			this->issaugotiDuomenis->TabIndex = 37;
			this->issaugotiDuomenis->Text = L"Iðsaugoti duomenis";
			this->issaugotiDuomenis->UseVisualStyleBackColor = false;
			this->issaugotiDuomenis->Visible = false;
			this->issaugotiDuomenis->Click += gcnew System::EventHandler(this, &RedaguotiSkrydzius::issaugotiDuomenis_Click);
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
			this->trintiPazymetas->Location = System::Drawing::Point(990, 200);
			this->trintiPazymetas->Margin = System::Windows::Forms::Padding(4);
			this->trintiPazymetas->Name = L"trintiPazymetas";
			this->trintiPazymetas->Size = System::Drawing::Size(129, 56);
			this->trintiPazymetas->TabIndex = 36;
			this->trintiPazymetas->Text = L"Trinti paþymëtas";
			this->trintiPazymetas->UseVisualStyleBackColor = false;
			this->trintiPazymetas->Click += gcnew System::EventHandler(this, &RedaguotiSkrydzius::trintiPazymetas_Click);
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
			this->pazymetiViska->Location = System::Drawing::Point(991, 122);
			this->pazymetiViska->Margin = System::Windows::Forms::Padding(4);
			this->pazymetiViska->Name = L"pazymetiViska";
			this->pazymetiViska->Size = System::Drawing::Size(129, 56);
			this->pazymetiViska->TabIndex = 35;
			this->pazymetiViska->Text = L"Paþymëti visas eilutes";
			this->pazymetiViska->UseVisualStyleBackColor = false;
			this->pazymetiViska->Click += gcnew System::EventHandler(this, &RedaguotiSkrydzius::pazymetiViska_Click);
			// 
			// skrydziuLentele
			// 
			this->skrydziuLentele->AllowUserToAddRows = false;
			this->skrydziuLentele->AllowUserToDeleteRows = false;
			this->skrydziuLentele->AllowUserToResizeColumns = false;
			this->skrydziuLentele->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Gainsboro;
			this->skrydziuLentele->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->skrydziuLentele->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->skrydziuLentele->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->skrydziuLentele->BackgroundColor = System::Drawing::Color::GhostWhite;
			this->skrydziuLentele->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->skrydziuLentele->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->skrydziuLentele->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::LightSlateGray;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->skrydziuLentele->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->skrydziuLentele->ColumnHeadersHeight = 70;
			this->skrydziuLentele->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->skrydziuLentele->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->skrydzioNr,
					this->lektuvoModelis, this->keleiviuSk, this->pradOroUostas, this->galOroUostas, this->isLaikas, this->atLaikas, this->aviakompanija,
					this->redaguoti
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->skrydziuLentele->DefaultCellStyle = dataGridViewCellStyle3;
			this->skrydziuLentele->EnableHeadersVisualStyles = false;
			this->skrydziuLentele->Location = System::Drawing::Point(10, 122);
			this->skrydziuLentele->Name = L"skrydziuLentele";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->skrydziuLentele->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->skrydziuLentele->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(186)));
			this->skrydziuLentele->Size = System::Drawing::Size(975, 295);
			this->skrydziuLentele->TabIndex = 33;
			this->skrydziuLentele->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RedaguotiSkrydzius::skrydziuLentele_CellContentClick);
			// 
			// skrydzioNr
			// 
			this->skrydzioNr->HeaderText = L"Skrydþio Nr.";
			this->skrydzioNr->Name = L"skrydzioNr";
			this->skrydzioNr->ReadOnly = true;
			this->skrydzioNr->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->skrydzioNr->Width = 104;
			// 
			// lektuvoModelis
			// 
			this->lektuvoModelis->HeaderText = L"Lëktuvo modelis";
			this->lektuvoModelis->Name = L"lektuvoModelis";
			this->lektuvoModelis->ReadOnly = true;
			this->lektuvoModelis->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->lektuvoModelis->Width = 138;
			// 
			// keleiviuSk
			// 
			this->keleiviuSk->HeaderText = L"Keleiviø skaièius";
			this->keleiviuSk->Name = L"keleiviuSk";
			this->keleiviuSk->ReadOnly = true;
			this->keleiviuSk->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->keleiviuSk->Width = 136;
			// 
			// pradOroUostas
			// 
			this->pradOroUostas->HeaderText = L"Pradinis oro uostas";
			this->pradOroUostas->Name = L"pradOroUostas";
			this->pradOroUostas->ReadOnly = true;
			this->pradOroUostas->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->pradOroUostas->Width = 99;
			// 
			// galOroUostas
			// 
			this->galOroUostas->HeaderText = L"Galutinis oro uostas";
			this->galOroUostas->Name = L"galOroUostas";
			this->galOroUostas->ReadOnly = true;
			this->galOroUostas->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->galOroUostas->Width = 99;
			// 
			// isLaikas
			// 
			this->isLaikas->HeaderText = L"Iðvykimo laikas";
			this->isLaikas->Name = L"isLaikas";
			this->isLaikas->ReadOnly = true;
			this->isLaikas->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->isLaikas->Width = 128;
			// 
			// atLaikas
			// 
			this->atLaikas->HeaderText = L"Atvykimo laikas";
			this->atLaikas->Name = L"atLaikas";
			this->atLaikas->ReadOnly = true;
			this->atLaikas->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->atLaikas->Width = 132;
			// 
			// aviakompanija
			// 
			this->aviakompanija->HeaderText = L"Aviakompanija";
			this->aviakompanija->Name = L"aviakompanija";
			this->aviakompanija->ReadOnly = true;
			this->aviakompanija->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->aviakompanija->Width = 143;
			// 
			// redaguoti
			// 
			this->redaguoti->FalseValue = L"false";
			this->redaguoti->HeaderText = L"Redaguoti";
			this->redaguoti->Name = L"redaguoti";
			this->redaguoti->TrueValue = L"true";
			this->redaguoti->Width = 90;
			// 
			// RedaguotiSkrydzius
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1128, 546);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->ieskoti);
			this->Controls->Add(this->griztiMeniu);
			this->Controls->Add(this->issaugotiDuomenis);
			this->Controls->Add(this->trintiPazymetas);
			this->Controls->Add(this->pazymetiViska);
			this->Controls->Add(this->skrydziuLentele);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"RedaguotiSkrydzius";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &RedaguotiSkrydzius::RedaguotiSkrydzius_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->skrydziuLentele))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// i combobox isveda duomenis is objekto masyvo
	private: System::Void RedaguotiSkrydzius_Load(System::Object^  sender, System::EventArgs^  e)
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
	}
			 // griztama i pries tai buvusia forma, si forma uzdaroma
	private: System::Void griztiMeniu_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		form->Show();
		this->Close();
	}
			 // suranda lenteleje ivesta skrydi ir ta eilute pazymi
	private: System::Void ieskoti_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (ArStringTuscias(textBox1->Text)) {
			MessageBox::Show("Pirmiausia áveskite skrydþio numerá", "Klaida!", MessageBoxButtons::OK);
		}
		else {
			int index = -1;
			for (int i = 0; i < skrydziuLentele->Rows->Count; i++) {
				if (textBox1->Text == skrydziuLentele->Rows[i]->Cells[0]->Value->ToString()) {
					index = i;
				}
			}
			if (index != -1) {
				skrydziuLentele->CurrentCell = skrydziuLentele->Rows[index]->Cells[0];
				skrydziuLentele->Rows[index]->Selected = true;
			}
			else {
				MessageBox::Show("Skrydis nerastas", "Klaida!", MessageBoxButtons::OK);
			}
		}
	}
			 // pazymi arba atzymi visas nepazymetas eilutes
	private: System::Void pazymetiViska_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (skrydziuLentele->Rows->Count > 0) {
			bool pazymetaEilute;
			if (pazymetiViska->Text == "Paþymëti visas eilutes") {
				for (int i = 0; i < skrydziuLentele->Rows->Count; i++) {
					pazymetaEilute = Convert::ToBoolean(skrydziuLentele->Rows[i]->Cells[8]->Value);
					if (pazymetaEilute == false) {
						skrydziuLentele->Rows[i]->Cells[8]->Value = true;
					}
				}
				pazymetiViska->Text = "Atþymëti visas eilutes";
			}
			else if (pazymetiViska->Text == "Atþymëti visas eilutes") {
				pazymetiViska->Text = "Paþymëti visas eilutes";
				for (int i = 0; i < skrydziuLentele->Rows->Count; i++) {
					pazymetaEilute = Convert::ToBoolean(skrydziuLentele->Rows[i]->Cells[8]->Value);
					if (pazymetaEilute == true) {
						skrydziuLentele->Rows[i]->Cells[8]->Value = false;
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
		if (skrydziuLentele->Rows->Count > 0) {
			for (int i = skrydziuLentele->Rows->Count; i > 0; i--) {
				DataGridViewRow^ eilute = skrydziuLentele->Rows[i - 1];
				bool pazymetaEilute = Convert::ToBoolean(eilute->Cells[8]->Value);
				if (pazymetaEilute == true) {
					skrydziuLentele->Rows->Remove(eilute);
				}
			}
			pazymetiViska->Text = "Paþymëti visas eilutes";
		}
		else {
			MessageBox::Show("Lentelëje nëra duomenø!", "Klaida!", MessageBoxButtons::OK);
		}
	}
			 // issaugo duomenis is objekto masyvo i faila
	private: System::Void issaugotiDuomenis_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (MessageBox::Show("Ar tikrai norite iðsaugoti?", "Patvirtinimas", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		{
			Skrydis skrydis[CMax];
			StringKeitimas keitimas;
			int n = 0;
			bool tikrinti = false;
			for (int i = 0; i < skrydziuLentele->Rows->Count; i++) {
				skrydis[i].Deti(keitimas.StringToStd(skrydziuLentele->Rows[i]->Cells[3]->Value->ToString()),
					keitimas.StringToStd(skrydziuLentele->Rows[i]->Cells[4]->Value->ToString()),
					keitimas.StringToStd(skrydziuLentele->Rows[i]->Cells[5]->Value->ToString()),
					keitimas.StringToStd(skrydziuLentele->Rows[i]->Cells[6]->Value->ToString()),
					keitimas.StringToStd(skrydziuLentele->Rows[i]->Cells[1]->Value->ToString()),
					keitimas.StringToStd(skrydziuLentele->Rows[i]->Cells[7]->Value->ToString()),
					keitimas.StringToStd(skrydziuLentele->Rows[i]->Cells[0]->Value->ToString()),
					keitimas.StringToStd(skrydziuLentele->Rows[i]->Cells[2]->Value->ToString()));
				n++;
			}
			IrasytiSkrydziuPakeitimus(skrydis, n);
			MessageBox::Show("Duomenys iðsaugoti!", "Praneðimas!", MessageBoxButtons::OK);
		}
	}
			 // pazymetas eilutes leidzia redaguoti
	private: System::Void skrydziuLentele_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
	{
		bool pazymetaEilute;
		for (int i = 0; i < skrydziuLentele->Rows->Count; i++) {
			pazymetaEilute = Convert::ToBoolean(skrydziuLentele->Rows[i]->Cells[8]->Value);
			if (pazymetaEilute == true) {
				for (int j = 0; j < skrydziuLentele->Columns->Count - 1; j++) {
					skrydziuLentele->Rows[i]->Cells[j]->ReadOnly = false;
				}
			}
			else {
				for (int j = 0; j < skrydziuLentele->Columns->Count - 1; j++) {
					skrydziuLentele->Rows[i]->Cells[j]->ReadOnly = true;
				}
			}
		}
	}
			 // suranda pasirinkto oro uosto skrydzius ir juos isveda i lentele
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		StringKeitimas keitimas;
		if (ArFailasEgzistuoja(keitimas.StringToStd(comboBox1->Text))) {
			RasytiPavadinima(keitimas.StringToStd(comboBox1->Text));
			Skrydis skrydis[CMax];
			int n = 0;
			SkaitytiSkrydzius(skrydis, n);
			skrydziuLentele->Rows->Clear();
			for (int i = 0; i < n; i++) {
				skrydziuLentele->Rows->Add(keitimas.StringToSystem(skrydis[i].GautiSkrydzioNr()),
					keitimas.StringToSystem(skrydis[i].GautiLektuvoModelis()),
					keitimas.StringToSystem(skrydis[i].GautiKeleiviuSk()),
					keitimas.StringToSystem(skrydis[i].GautiPradiniOroUosta()),
					keitimas.StringToSystem(skrydis[i].GautiGalutiniOroUosta()),
					keitimas.StringToSystem(skrydis[i].GautiIsvykimoLaikas()),
					keitimas.StringToSystem(skrydis[i].GautiAtvykimoLaikas()),
					keitimas.StringToSystem(skrydis[i].GautiAviakompanija()));
			}
			issaugotiDuomenis->Visible = true;
			textBox1->Visible = true;
			label3->Visible = true;
			ieskoti->Visible = true;
		}
		else {
			MessageBox::Show("Ðio oro uosto skrydþiø nerasta", "Klaida!", MessageBoxButtons::OK);
		}
	}
};
}