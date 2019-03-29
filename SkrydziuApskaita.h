#pragma once

#include "KintamiejiKlases.h"
#include "NaujasSkrydis.h"
#include "Statistikos.h"

string SkaitytiOroPavadinima();
bool ArFailasEgzistuoja(string failoPav);
bool ArFailasTuscias(string failoPav);
void SkaitytiSkrydzius(Skrydis skrydis[], int & n);

namespace Baigiamasis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SkrydziuApskaita
	/// </summary>
	public ref class SkrydziuApskaita : public System::Windows::Forms::Form
	{
	public:
		Form^ form;				// sukuriamas formos objektas i kuria bus griztama
		SkrydziuApskaita(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		SkrydziuApskaita(Form^ form1)
		{
			form = form1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SkrydziuApskaita()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  skrydziaiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pridëtiNaujàSkrydáToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  perþiûrëtiSkrydþiusToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^  skrydziuLentele;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  ieskoti;
	private: System::Windows::Forms::Button^  griztiMeniu;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  skrydzioNr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  lektuvoModelis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  keleiviuSk;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  pradOroUostas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  galOroUostas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  isLaikas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  atLaikas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  aviakompanija;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  rodytiSkrydzius;
	private: System::Windows::Forms::ToolStripMenuItem^  mënesioStatistikaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  metøToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->skrydziaiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pridëtiNaujàSkrydáToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->perþiûrëtiSkrydþiusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mënesioStatistikaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->metøToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->skrydziuLentele = (gcnew System::Windows::Forms::DataGridView());
			this->skrydzioNr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lektuvoModelis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keleiviuSk = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pradOroUostas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->galOroUostas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->isLaikas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->atLaikas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->aviakompanija = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ieskoti = (gcnew System::Windows::Forms::Button());
			this->griztiMeniu = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rodytiSkrydzius = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->skrydziuLentele))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->skrydziaiToolStripMenuItem,
					this->lToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(916, 38);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// skrydziaiToolStripMenuItem
			// 
			this->skrydziaiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->pridëtiNaujàSkrydáToolStripMenuItem,
					this->perþiûrëtiSkrydþiusToolStripMenuItem
			});
			this->skrydziaiToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->skrydziaiToolStripMenuItem->Name = L"skrydziaiToolStripMenuItem";
			this->skrydziaiToolStripMenuItem->Size = System::Drawing::Size(85, 32);
			this->skrydziaiToolStripMenuItem->Text = L"Skrydþiai";
			// 
			// pridëtiNaujàSkrydáToolStripMenuItem
			// 
			this->pridëtiNaujàSkrydáToolStripMenuItem->BackColor = System::Drawing::Color::CornflowerBlue;
			this->pridëtiNaujàSkrydáToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->pridëtiNaujàSkrydáToolStripMenuItem->Name = L"pridëtiNaujàSkrydáToolStripMenuItem";
			this->pridëtiNaujàSkrydáToolStripMenuItem->Size = System::Drawing::Size(214, 26);
			this->pridëtiNaujàSkrydáToolStripMenuItem->Text = L"Pridëti naujà skrydá";
			this->pridëtiNaujàSkrydáToolStripMenuItem->Click += gcnew System::EventHandler(this, &SkrydziuApskaita::pridëtiNaujàSkrydáToolStripMenuItem_Click);
			// 
			// perþiûrëtiSkrydþiusToolStripMenuItem
			// 
			this->perþiûrëtiSkrydþiusToolStripMenuItem->BackColor = System::Drawing::Color::CornflowerBlue;
			this->perþiûrëtiSkrydþiusToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->perþiûrëtiSkrydþiusToolStripMenuItem->Name = L"perþiûrëtiSkrydþiusToolStripMenuItem";
			this->perþiûrëtiSkrydþiusToolStripMenuItem->Size = System::Drawing::Size(214, 26);
			this->perþiûrëtiSkrydþiusToolStripMenuItem->Text = L"Perþiûrëti skrydþius";
			this->perþiûrëtiSkrydþiusToolStripMenuItem->Click += gcnew System::EventHandler(this, &SkrydziuApskaita::perþiûrëtiSkrydþiusToolStripMenuItem_Click);
			// 
			// lToolStripMenuItem
			// 
			this->lToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mënesioStatistikaToolStripMenuItem,
					this->metøToolStripMenuItem
			});
			this->lToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->lToolStripMenuItem->Name = L"lToolStripMenuItem";
			this->lToolStripMenuItem->Size = System::Drawing::Size(84, 32);
			this->lToolStripMenuItem->Text = L"Statistika";
			// 
			// mënesioStatistikaToolStripMenuItem
			// 
			this->mënesioStatistikaToolStripMenuItem->BackColor = System::Drawing::Color::CornflowerBlue;
			this->mënesioStatistikaToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->mënesioStatistikaToolStripMenuItem->Name = L"mënesioStatistikaToolStripMenuItem";
			this->mënesioStatistikaToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->mënesioStatistikaToolStripMenuItem->Text = L"Mënesio";
			this->mënesioStatistikaToolStripMenuItem->Click += gcnew System::EventHandler(this, &SkrydziuApskaita::mënesioStatistikaToolStripMenuItem_Click);
			// 
			// metøToolStripMenuItem
			// 
			this->metøToolStripMenuItem->BackColor = System::Drawing::Color::CornflowerBlue;
			this->metøToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->metøToolStripMenuItem->Name = L"metøToolStripMenuItem";
			this->metøToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->metøToolStripMenuItem->Text = L"Metø";
			this->metøToolStripMenuItem->Click += gcnew System::EventHandler(this, &SkrydziuApskaita::metøToolStripMenuItem_Click);
			// 
			// skrydziuLentele
			// 
			this->skrydziuLentele->AllowUserToAddRows = false;
			this->skrydziuLentele->AllowUserToDeleteRows = false;
			this->skrydziuLentele->AllowUserToResizeColumns = false;
			this->skrydziuLentele->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Gainsboro;
			this->skrydziuLentele->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->skrydziuLentele->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->skrydziuLentele->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->skrydziuLentele->BackgroundColor = System::Drawing::Color::GhostWhite;
			this->skrydziuLentele->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->skrydziuLentele->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::LightSteelBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->skrydziuLentele->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->skrydziuLentele->ColumnHeadersHeight = 50;
			this->skrydziuLentele->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->skrydziuLentele->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->skrydzioNr,
					this->lektuvoModelis, this->keleiviuSk, this->pradOroUostas, this->galOroUostas, this->isLaikas, this->atLaikas, this->aviakompanija
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->skrydziuLentele->DefaultCellStyle = dataGridViewCellStyle3;
			this->skrydziuLentele->EnableHeadersVisualStyles = false;
			this->skrydziuLentele->Location = System::Drawing::Point(24, 127);
			this->skrydziuLentele->Name = L"skrydziuLentele";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::LightSteelBlue;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->skrydziuLentele->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->skrydziuLentele->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(186)));
			this->skrydziuLentele->Size = System::Drawing::Size(871, 295);
			this->skrydziuLentele->TabIndex = 34;
			this->skrydziuLentele->Visible = false;
			// 
			// skrydzioNr
			// 
			this->skrydzioNr->HeaderText = L"Skrydþio Nr.";
			this->skrydzioNr->Name = L"skrydzioNr";
			this->skrydzioNr->ReadOnly = true;
			this->skrydzioNr->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->skrydzioNr->Width = 95;
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
			// pradOroUostas
			// 
			this->pradOroUostas->HeaderText = L"Pradinis oro uostas";
			this->pradOroUostas->Name = L"pradOroUostas";
			this->pradOroUostas->ReadOnly = true;
			this->pradOroUostas->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->pradOroUostas->Width = 102;
			// 
			// galOroUostas
			// 
			this->galOroUostas->HeaderText = L"Galutinis oro uostas";
			this->galOroUostas->Name = L"galOroUostas";
			this->galOroUostas->ReadOnly = true;
			this->galOroUostas->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->galOroUostas->Width = 107;
			// 
			// isLaikas
			// 
			this->isLaikas->HeaderText = L"Iðvykimo laikas";
			this->isLaikas->Name = L"isLaikas";
			this->isLaikas->ReadOnly = true;
			this->isLaikas->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->isLaikas->Width = 115;
			// 
			// atLaikas
			// 
			this->atLaikas->HeaderText = L"Atvykimo laikas";
			this->atLaikas->Name = L"atLaikas";
			this->atLaikas->ReadOnly = true;
			this->atLaikas->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->atLaikas->Width = 121;
			// 
			// aviakompanija
			// 
			this->aviakompanija->HeaderText = L"Aviakompanija";
			this->aviakompanija->Name = L"aviakompanija";
			this->aviakompanija->ReadOnly = true;
			this->aviakompanija->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->aviakompanija->Width = 131;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label3->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label3->Location = System::Drawing::Point(25, 434);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(251, 35);
			this->label3->TabIndex = 44;
			this->label3->Text = L"Áveskite skrydþio numerá";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->Location = System::Drawing::Point(300, 442);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(172, 23);
			this->textBox1->TabIndex = 43;
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
			this->ieskoti->Location = System::Drawing::Point(340, 490);
			this->ieskoti->Margin = System::Windows::Forms::Padding(4);
			this->ieskoti->Name = L"ieskoti";
			this->ieskoti->Size = System::Drawing::Size(88, 42);
			this->ieskoti->TabIndex = 42;
			this->ieskoti->Text = L"Surasti";
			this->ieskoti->UseVisualStyleBackColor = false;
			this->ieskoti->Visible = false;
			this->ieskoti->Click += gcnew System::EventHandler(this, &SkrydziuApskaita::ieskoti_Click);
			// 
			// griztiMeniu
			// 
			this->griztiMeniu->BackColor = System::Drawing::Color::CornflowerBlue;
			this->griztiMeniu->FlatAppearance->BorderSize = 0;
			this->griztiMeniu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->griztiMeniu->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->griztiMeniu->ForeColor = System::Drawing::Color::White;
			this->griztiMeniu->Location = System::Drawing::Point(752, 489);
			this->griztiMeniu->Margin = System::Windows::Forms::Padding(4);
			this->griztiMeniu->Name = L"griztiMeniu";
			this->griztiMeniu->Size = System::Drawing::Size(143, 43);
			this->griztiMeniu->TabIndex = 45;
			this->griztiMeniu->Text = L"Gráþti á meniu";
			this->griztiMeniu->UseVisualStyleBackColor = false;
			this->griztiMeniu->Click += gcnew System::EventHandler(this, &SkrydziuApskaita::griztiMeniu_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"";
			this->dateTimePicker1->Location = System::Drawing::Point(251, 71);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 23);
			this->dateTimePicker1->TabIndex = 46;
			this->dateTimePicker1->Value = System::DateTime(2019, 4, 20, 0, 0, 0, 0);
			this->dateTimePicker1->Visible = false;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(513, 71);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 23);
			this->dateTimePicker2->TabIndex = 47;
			this->dateTimePicker2->Value = System::DateTime(2019, 4, 20, 0, 0, 0, 0);
			this->dateTimePicker2->Visible = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label1->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label1->Location = System::Drawing::Point(25, 64);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 35);
			this->label1->TabIndex = 49;
			this->label1->Text = L"Rodyti skrydþius nuo:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label2->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label2->Location = System::Drawing::Point(467, 64);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 35);
			this->label2->TabIndex = 50;
			this->label2->Text = L"iki:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Visible = false;
			// 
			// rodytiSkrydzius
			// 
			this->rodytiSkrydzius->BackColor = System::Drawing::Color::CornflowerBlue;
			this->rodytiSkrydzius->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->rodytiSkrydzius->FlatAppearance->BorderSize = 2;
			this->rodytiSkrydzius->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rodytiSkrydzius->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->rodytiSkrydzius->ForeColor = System::Drawing::Color::White;
			this->rodytiSkrydzius->Location = System::Drawing::Point(752, 67);
			this->rodytiSkrydzius->Margin = System::Windows::Forms::Padding(4);
			this->rodytiSkrydzius->Name = L"rodytiSkrydzius";
			this->rodytiSkrydzius->Size = System::Drawing::Size(86, 36);
			this->rodytiSkrydzius->TabIndex = 51;
			this->rodytiSkrydzius->Text = L"Rodyti";
			this->rodytiSkrydzius->UseVisualStyleBackColor = false;
			this->rodytiSkrydzius->Visible = false;
			this->rodytiSkrydzius->Click += gcnew System::EventHandler(this, &SkrydziuApskaita::rodytiSkrydzius_Click);
			// 
			// SkrydziuApskaita
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(916, 546);
			this->Controls->Add(this->rodytiSkrydzius);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->skrydziuLentele);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ieskoti);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->griztiMeniu);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"SkrydziuApskaita";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->skrydziuLentele))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// pereinama i kita forma ir jai priskiriamas pavadinimas
	private: System::Void pridëtiNaujàSkrydáToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		NaujasSkrydis^ form = gcnew NaujasSkrydis(this);
		form->Text = this->Text;
		form->Show();
		this->Hide();
	}
			 // parodo lentele ir jos mygtukus su tekstais
	private: System::Void perþiûrëtiSkrydþiusToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		label1->Visible = true;
		label2->Visible = true;
		label3->Visible = true;
		dateTimePicker1->Visible = true;
		dateTimePicker2->Visible = true;
		rodytiSkrydzius->Visible = true;
		skrydziuLentele->Visible = true;
		textBox1->Visible = true;
		ieskoti->Visible = true;
	}
			 // griztama i pries tai buvusia forma, si forma uzdaroma
	private: System::Void griztiMeniu_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		form->Show();
		this->Close();
	}
			 // suranda lenteleje ivestus duomenis ir pazymi eilute
	private: System::Void ieskoti_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (ArStringTuscias(textBox1->Text)) {
			MessageBox::Show("Pirmiausia áveskite skrydþio numerá", "Klaida!", MessageBoxButtons::OK);
		}
		else {
			if (IeskotiSkrydzio() != -1) {
				skrydziuLentele->CurrentCell = skrydziuLentele->Rows[IeskotiSkrydzio()]->Cells[0];
				skrydziuLentele->Rows[IeskotiSkrydzio()]->Selected = true;
			}
			else {
				MessageBox::Show("Skrydis nerastas", "Klaida!", MessageBoxButtons::OK);
			}
		}
	}
			 // suranda skrydzio vieta stulpelyje
	private: int IeskotiSkrydzio()
	{
		int index = -1;
		for (int i = 0; i < skrydziuLentele->Rows->Count; i++) {
			if (textBox1->Text == skrydziuLentele->Rows[i]->Cells[0]->Value->ToString()) {
				index = i;
			}
		}
		return index;
	}
			 // i lentele isveda skrydziu objekto masyvo duomenis pagal pasirinkta data
	private: System::Void rodytiSkrydzius_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (!ArFailasEgzistuoja(SkaitytiOroPavadinima()) || ArFailasTuscias(SkaitytiOroPavadinima())) {
			IvestiSkrydi();
		}
		else {
			if (dateTimePicker1->Value > dateTimePicker2->Value) {
				MessageBox::Show("Pradinë data negali bûti didesnë uþ antràjà", "Klaida!", MessageBoxButtons::OK);
			}
			else {
				StringKeitimas keitimas;
				Skrydis skrydis[CMax];
				int n = 0;
				skrydziuLentele->Rows->Clear();
				SkaitytiSkrydzius(skrydis, n);
				IsvestiILentele(skrydis, n, keitimas);
			}
		}
	}
			 // leidzia ivesti nauja, neuzregistruota skrydi
	private: void IvestiSkrydi()
	{
		if (MessageBox::Show("Skrydþiø duomenys nerasti. Ar norite ávesti naujus skrydþius?",
			"Praneðimas!", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			NaujasSkrydis^ form = gcnew NaujasSkrydis();
			form->ShowDialog();
		}
	}
			// isveda i lentele pasirinktus duomenis pagal data
	private: void IsvestiILentele(Skrydis skrydis[], int n, StringKeitimas keitimas)
	{
		DateTime^ data1 = gcnew DateTime();
		DateTime^ data2 = gcnew DateTime();
		for (int i = 0; i < n; i++) {
			data1 = data1->Parse(keitimas.StringToSystem(skrydis[i].GautiIsvykimoLaikas()));
			data2 = data2->Parse(keitimas.StringToSystem(skrydis[i].GautiAtvykimoLaikas()));
			data1 = data1->Parse(data1->ToString("yyyy.MM.dd"));
			data2 = data2->Parse(data2->ToString("yyyy.MM.dd"));
			if (data1->CompareTo(dateTimePicker1->Value) >= 0 && data2->CompareTo(dateTimePicker2->Value) <= 0) {
				skrydziuLentele->Rows->Add(keitimas.StringToSystem(skrydis[i].GautiSkrydzioNr()),
					keitimas.StringToSystem(skrydis[i].GautiLektuvoModelis()),
					keitimas.StringToSystem(skrydis[i].GautiKeleiviuSk()),
					keitimas.StringToSystem(skrydis[i].GautiPradiniOroUosta()),
					keitimas.StringToSystem(skrydis[i].GautiGalutiniOroUosta()),
					keitimas.StringToSystem(skrydis[i].GautiIsvykimoLaikas()),
					keitimas.StringToSystem(skrydis[i].GautiAtvykimoLaikas()),
					keitimas.StringToSystem(skrydis[i].GautiAviakompanija()));
			}
		}
	}
			 // parodoma menesio statistika
	private: System::Void mënesioStatistikaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Statistikos^ form = gcnew Statistikos(this);
		form->Text = this->Text;
		form->menesis("Mënesio statistika");
		form->Show();
		this->Hide();
	}
			 // parodoma metu statistika
	private: System::Void metøToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Statistikos^ form = gcnew Statistikos(this);
		form->Text = this->Text;
		form->metai("Metø statistika");
		form->Show();
		this->Hide();
	}
};
}
