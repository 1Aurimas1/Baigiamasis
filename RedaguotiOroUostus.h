#pragma once

#include "KintamiejiKlases.h"

void SkaitytiOroUostus(OroUostas oroUostas[], int & n);
void IrasytiOroUostuPakeitimus(OroUostas oroUostas[], int n);
void ArOroUostasIstrintas(OroUostas oroUostas2[], int n2);
bool ArStringTuscias(System::String^ s);

namespace Baigiamasis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RedaguotiOroUostus
	/// </summary>
	public ref class RedaguotiOroUostus : public System::Windows::Forms::Form
	{
	public:
		Form^ form;				// sukuriamas formos objektas i kuria bus griztama
		RedaguotiOroUostus(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		RedaguotiOroUostus(Form^ form1)
		{
			form = form1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RedaguotiOroUostus()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::DataGridView^  oroUostuLentele;
	private: System::Windows::Forms::Button^  rodytiDuomenis;
	private: System::Windows::Forms::Button^  pazymetiViska;
	private: System::Windows::Forms::Button^  trintiPazymetas;
	private: System::Windows::Forms::Button^  issaugotiDuomenis;
	private: System::Windows::Forms::Button^  griztiMeniu;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  ieskoti;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  oroPavadinimas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  oroTipas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  peronuSk;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  takoIlgis;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  redaguoti;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
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
			this->oroUostuLentele = (gcnew System::Windows::Forms::DataGridView());
			this->oroPavadinimas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->oroTipas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->peronuSk = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->takoIlgis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->redaguoti = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->rodytiDuomenis = (gcnew System::Windows::Forms::Button());
			this->pazymetiViska = (gcnew System::Windows::Forms::Button());
			this->trintiPazymetas = (gcnew System::Windows::Forms::Button());
			this->issaugotiDuomenis = (gcnew System::Windows::Forms::Button());
			this->griztiMeniu = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ieskoti = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->oroUostuLentele))->BeginInit();
			this->SuspendLayout();
			// 
			// oroUostuLentele
			// 
			this->oroUostuLentele->AllowUserToAddRows = false;
			this->oroUostuLentele->AllowUserToDeleteRows = false;
			this->oroUostuLentele->AllowUserToResizeColumns = false;
			this->oroUostuLentele->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Gainsboro;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->oroUostuLentele->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->oroUostuLentele->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->oroUostuLentele->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->oroUostuLentele->BackgroundColor = System::Drawing::Color::GhostWhite;
			this->oroUostuLentele->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->oroUostuLentele->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->oroUostuLentele->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::LightSlateGray;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->oroUostuLentele->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->oroUostuLentele->ColumnHeadersHeight = 70;
			this->oroUostuLentele->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->oroUostuLentele->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->oroPavadinimas,
					this->oroTipas, this->peronuSk, this->takoIlgis, this->redaguoti
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->oroUostuLentele->DefaultCellStyle = dataGridViewCellStyle3;
			this->oroUostuLentele->EnableHeadersVisualStyles = false;
			this->oroUostuLentele->Location = System::Drawing::Point(40, 125);
			this->oroUostuLentele->Margin = System::Windows::Forms::Padding(4);
			this->oroUostuLentele->Name = L"oroUostuLentele";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->oroUostuLentele->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->oroUostuLentele->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(186)));
			this->oroUostuLentele->Size = System::Drawing::Size(677, 314);
			this->oroUostuLentele->TabIndex = 2;
			this->oroUostuLentele->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RedaguotiOroUostus::oroUostuLentele_CellContentClick);
			// 
			// oroPavadinimas
			// 
			this->oroPavadinimas->HeaderText = L"Oro uosto pavadinimas";
			this->oroPavadinimas->Name = L"oroPavadinimas";
			this->oroPavadinimas->ReadOnly = true;
			this->oroPavadinimas->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->oroPavadinimas->Width = 185;
			// 
			// oroTipas
			// 
			this->oroTipas->HeaderText = L"Oro uosto tipas";
			this->oroTipas->Name = L"oroTipas";
			this->oroTipas->ReadOnly = true;
			this->oroTipas->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// peronuSk
			// 
			this->peronuSk->HeaderText = L"Peronø skaièius";
			this->peronuSk->Name = L"peronuSk";
			this->peronuSk->ReadOnly = true;
			this->peronuSk->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->peronuSk->Width = 131;
			// 
			// takoIlgis
			// 
			this->takoIlgis->HeaderText = L"Pakilimo - nutûpimo tako ilgis (m)";
			this->takoIlgis->Name = L"takoIlgis";
			this->takoIlgis->ReadOnly = true;
			this->takoIlgis->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->takoIlgis->Width = 130;
			// 
			// redaguoti
			// 
			this->redaguoti->FalseValue = L"false";
			this->redaguoti->HeaderText = L"Redaguoti";
			this->redaguoti->Name = L"redaguoti";
			this->redaguoti->TrueValue = L"true";
			this->redaguoti->Width = 90;
			// 
			// rodytiDuomenis
			// 
			this->rodytiDuomenis->BackColor = System::Drawing::Color::CornflowerBlue;
			this->rodytiDuomenis->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->rodytiDuomenis->FlatAppearance->BorderSize = 2;
			this->rodytiDuomenis->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rodytiDuomenis->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->rodytiDuomenis->ForeColor = System::Drawing::Color::White;
			this->rodytiDuomenis->Location = System::Drawing::Point(767, 125);
			this->rodytiDuomenis->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->rodytiDuomenis->Name = L"rodytiDuomenis";
			this->rodytiDuomenis->Size = System::Drawing::Size(151, 66);
			this->rodytiDuomenis->TabIndex = 7;
			this->rodytiDuomenis->Text = L"Rodyti duomenis";
			this->rodytiDuomenis->UseVisualStyleBackColor = false;
			this->rodytiDuomenis->Click += gcnew System::EventHandler(this, &RedaguotiOroUostus::rodytiDuomenis_Click);
			// 
			// pazymetiViska
			// 
			this->pazymetiViska->BackColor = System::Drawing::Color::CornflowerBlue;
			this->pazymetiViska->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->pazymetiViska->FlatAppearance->BorderSize = 2;
			this->pazymetiViska->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pazymetiViska->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->pazymetiViska->ForeColor = System::Drawing::Color::White;
			this->pazymetiViska->Location = System::Drawing::Point(767, 220);
			this->pazymetiViska->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pazymetiViska->Name = L"pazymetiViska";
			this->pazymetiViska->Size = System::Drawing::Size(151, 66);
			this->pazymetiViska->TabIndex = 8;
			this->pazymetiViska->Text = L"Paþymëti visas eilutes";
			this->pazymetiViska->UseVisualStyleBackColor = false;
			this->pazymetiViska->Click += gcnew System::EventHandler(this, &RedaguotiOroUostus::pazymetiViska_Click);
			// 
			// trintiPazymetas
			// 
			this->trintiPazymetas->BackColor = System::Drawing::Color::CornflowerBlue;
			this->trintiPazymetas->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->trintiPazymetas->FlatAppearance->BorderSize = 2;
			this->trintiPazymetas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->trintiPazymetas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->trintiPazymetas->ForeColor = System::Drawing::Color::White;
			this->trintiPazymetas->Location = System::Drawing::Point(767, 314);
			this->trintiPazymetas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->trintiPazymetas->Name = L"trintiPazymetas";
			this->trintiPazymetas->Size = System::Drawing::Size(151, 66);
			this->trintiPazymetas->TabIndex = 9;
			this->trintiPazymetas->Text = L"Trinti paþymëtas";
			this->trintiPazymetas->UseVisualStyleBackColor = false;
			this->trintiPazymetas->Click += gcnew System::EventHandler(this, &RedaguotiOroUostus::trintiPazymetas_Click);
			// 
			// issaugotiDuomenis
			// 
			this->issaugotiDuomenis->BackColor = System::Drawing::Color::CornflowerBlue;
			this->issaugotiDuomenis->FlatAppearance->BorderSize = 0;
			this->issaugotiDuomenis->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->issaugotiDuomenis->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->issaugotiDuomenis->ForeColor = System::Drawing::Color::White;
			this->issaugotiDuomenis->Location = System::Drawing::Point(781, 419);
			this->issaugotiDuomenis->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->issaugotiDuomenis->Name = L"issaugotiDuomenis";
			this->issaugotiDuomenis->Size = System::Drawing::Size(137, 67);
			this->issaugotiDuomenis->TabIndex = 10;
			this->issaugotiDuomenis->Text = L"Iðsaugoti duomenis";
			this->issaugotiDuomenis->UseVisualStyleBackColor = false;
			this->issaugotiDuomenis->Visible = false;
			this->issaugotiDuomenis->Click += gcnew System::EventHandler(this, &RedaguotiOroUostus::issaugotiDuomenis_Click);
			// 
			// griztiMeniu
			// 
			this->griztiMeniu->BackColor = System::Drawing::Color::CornflowerBlue;
			this->griztiMeniu->FlatAppearance->BorderSize = 0;
			this->griztiMeniu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->griztiMeniu->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->griztiMeniu->ForeColor = System::Drawing::Color::White;
			this->griztiMeniu->Location = System::Drawing::Point(754, 521);
			this->griztiMeniu->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->griztiMeniu->Name = L"griztiMeniu";
			this->griztiMeniu->Size = System::Drawing::Size(164, 50);
			this->griztiMeniu->TabIndex = 22;
			this->griztiMeniu->Text = L"Gráþti á meniu";
			this->griztiMeniu->UseVisualStyleBackColor = false;
			this->griztiMeniu->Click += gcnew System::EventHandler(this, &RedaguotiOroUostus::griztiMeniu_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->Location = System::Drawing::Point(298, 476);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(193, 26);
			this->textBox1->TabIndex = 32;
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
			this->ieskoti->Location = System::Drawing::Point(337, 524);
			this->ieskoti->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ieskoti->Name = L"ieskoti";
			this->ieskoti->Size = System::Drawing::Size(109, 41);
			this->ieskoti->TabIndex = 31;
			this->ieskoti->Text = L"Surasti";
			this->ieskoti->UseVisualStyleBackColor = false;
			this->ieskoti->Visible = false;
			this->ieskoti->Click += gcnew System::EventHandler(this, &RedaguotiOroUostus::ieskoti_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label2->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label2->Location = System::Drawing::Point(35, 459);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(254, 61);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Áveskite oro uosto pavadinimà";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Visible = false;
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
			this->label1->Size = System::Drawing::Size(932, 68);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Oro uostø redagavimas";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// RedaguotiOroUostus
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(932, 587);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->ieskoti);
			this->Controls->Add(this->griztiMeniu);
			this->Controls->Add(this->issaugotiDuomenis);
			this->Controls->Add(this->trintiPazymetas);
			this->Controls->Add(this->pazymetiViska);
			this->Controls->Add(this->rodytiDuomenis);
			this->Controls->Add(this->oroUostuLentele);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"RedaguotiOroUostus";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->oroUostuLentele))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// grizta i pradine forma
	private: System::Void griztiMeniu_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		form->Show();
		this->Close();
	}
		 // isveda duomenis i lentele is objekto masyvo
	private: System::Void rodytiDuomenis_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (oroUostuLentele->Rows->Count == 0) {
			OroUostas oroUostas[CMax];
			StringKeitimas keitimas;
			int n = 0;
			SkaitytiOroUostus(oroUostas, n);
			for (int i = 0; i < n; i++) {
				oroUostuLentele->Rows->Add(keitimas.StringToSystem(oroUostas[i].GautiPavadinima()),
					keitimas.StringToSystem(oroUostas[i].GautiTipa()),
					keitimas.StringToSystem(oroUostas[i].GautiAiksteliuSk()),
					keitimas.StringToSystem(oroUostas[i].GautiTakoIlgi()));
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
			 // pazymi visas eilutes
	private: System::Void pazymetiViska_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (oroUostuLentele->Rows->Count > 0) {
			bool pazymetaEilute;
			if (pazymetiViska->Text == "Paþymëti visas eilutes") {
				for (int i = 0; i < oroUostuLentele->Rows->Count; i++) {
					pazymetaEilute = Convert::ToBoolean(oroUostuLentele->Rows[i]->Cells[4]->Value);
					if (pazymetaEilute == false) {
						oroUostuLentele->Rows[i]->Cells[4]->Value = true;
					}
				}
				pazymetiViska->Text = "Atþymëti visas eilutes";
			}
			else if (pazymetiViska->Text == "Atþymëti visas eilutes") {
				pazymetiViska->Text = "Paþymëti visas eilutes";
				for (int i = 0; i < oroUostuLentele->Rows->Count; i++) {
					pazymetaEilute = Convert::ToBoolean(oroUostuLentele->Rows[i]->Cells[4]->Value);
					if (pazymetaEilute == true) {
						oroUostuLentele->Rows[i]->Cells[4]->Value = false;
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
		if (oroUostuLentele->Rows->Count > 0) {
			for (int i = oroUostuLentele->Rows->Count; i > 0; i--) {
				DataGridViewRow^ eilute = oroUostuLentele->Rows[i - 1];
				bool pazymetaEilute = Convert::ToBoolean(eilute->Cells[4]->Value);
				if (pazymetaEilute == true) {
					oroUostuLentele->Rows->Remove(eilute);
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
			OroUostas oroUostas[CMax];
			StringKeitimas keitimas;
			int n = 0;
			bool tikrinti = false;
			for (int i = 0; i < oroUostuLentele->Rows->Count; i++) {
				oroUostas[i].Deti(keitimas.StringToStd(oroUostuLentele->Rows[i]->Cells[0]->Value->ToString()),
					keitimas.StringToStd(oroUostuLentele->Rows[i]->Cells[1]->Value->ToString()),
					keitimas.StringToStd(oroUostuLentele->Rows[i]->Cells[2]->Value->ToString()),
					keitimas.StringToStd(oroUostuLentele->Rows[i]->Cells[3]->Value->ToString()));
				n++;
			}
			ArOroUostasIstrintas(oroUostas, n);
			IrasytiOroUostuPakeitimus(oroUostas, n);
			MessageBox::Show("Duomenys iðsaugoti!", "Praneðimas!", MessageBoxButtons::OK);
		}
	}
			 // pakeicia nepazymetas eilutes i pazymetas
	private: System::Void oroUostuLentele_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
	{
		bool pazymetaEilute;
		for (int i = 0; i < oroUostuLentele->Rows->Count; i++) {
			pazymetaEilute = Convert::ToBoolean(oroUostuLentele->Rows[i]->Cells[4]->Value);
			if (pazymetaEilute == true) {
				for (int j = 0; j < oroUostuLentele->Columns->Count - 1; j++) {
					oroUostuLentele->Rows[i]->Cells[j]->ReadOnly = false;
				}
			}
			else {
				for (int j = 0; j < oroUostuLentele->Columns->Count - 1; j++) {
					oroUostuLentele->Rows[i]->Cells[j]->ReadOnly = true;
				}
			}
		}
	}
			 // suranda lenteleje ivesta pavadinima, ir ta eilute pazymi
	private: System::Void ieskoti_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (ArStringTuscias(textBox1->Text)) {
			MessageBox::Show("Pirmiausia áveskite oro uosto pavadinimà", "Klaida!", MessageBoxButtons::OK);
		}
		else {
			int index = -1;
			for (int i = 0; i < oroUostuLentele->Rows->Count; i++) {
				if (textBox1->Text == oroUostuLentele->Rows[i]->Cells[0]->Value->ToString()) {
					index = i;
				}
			}
			if (index != -1) {
				oroUostuLentele->CurrentCell = oroUostuLentele->Rows[index]->Cells[0];
				oroUostuLentele->Rows[index]->Selected = true;
			}
			else {
				MessageBox::Show("Oro uostas nerastas", "Klaida!", MessageBoxButtons::OK);
			}
		}
	}
};
}
