#pragma once

#include "graph.h"
#include "help.h"
#include <string>
#include <fstream>
#include <iostream>
#include <msclr\marshal_cppstd.h>



namespace CoursWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ SelectNode;
	private: System::Windows::Forms::Button^ SelectEdge;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ WriteFromGraph;



	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ фаёлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ MaxFlowButton;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ WriteInMasFromGrid;
	private: System::Windows::Forms::ToolStripMenuItem^ параметрыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ наВесьЭкранToolStripMenuItem;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ StatusLabel;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->MaxFlowButton = (gcnew System::Windows::Forms::Button());
			this->WriteFromGraph = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SelectNode = (gcnew System::Windows::Forms::Button());
			this->SelectEdge = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->WriteInMasFromGrid = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->фаёлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->параметрыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->наВесьЭкранToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->StatusLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(12, 28);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(834, 521);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Silver;
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->numericUpDown2);
			this->tabPage1->Controls->Add(this->numericUpDown1);
			this->tabPage1->Controls->Add(this->MaxFlowButton);
			this->tabPage1->Controls->Add(this->WriteFromGraph);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->SelectNode);
			this->tabPage1->Controls->Add(this->SelectEdge);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(826, 495);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Граф";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(75, 311);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Сток";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(7, 311);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Исток";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->numericUpDown2->Location = System::Drawing::Point(73, 289);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(47, 20);
			this->numericUpDown2->TabIndex = 14;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->numericUpDown1->Location = System::Drawing::Point(4, 289);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(49, 20);
			this->numericUpDown1->TabIndex = 13;
			// 
			// MaxFlowButton
			// 
			this->MaxFlowButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->MaxFlowButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->MaxFlowButton->Enabled = false;
			this->MaxFlowButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MaxFlowButton->Location = System::Drawing::Point(6, 329);
			this->MaxFlowButton->Name = L"MaxFlowButton";
			this->MaxFlowButton->Size = System::Drawing::Size(98, 51);
			this->MaxFlowButton->TabIndex = 12;
			this->MaxFlowButton->Text = L"Максимальный поток в сети";
			this->MaxFlowButton->UseVisualStyleBackColor = false;
			this->MaxFlowButton->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			this->MaxFlowButton->MouseLeave += gcnew System::EventHandler(this, &MainForm::MaxFlowButton_MouseLeave);
			this->MaxFlowButton->MouseHover += gcnew System::EventHandler(this, &MainForm::MaxFlowButton_MouseHover);
			// 
			// WriteFromGraph
			// 
			this->WriteFromGraph->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->WriteFromGraph->Cursor = System::Windows::Forms::Cursors::Hand;
			this->WriteFromGraph->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WriteFromGraph->Location = System::Drawing::Point(3, 12);
			this->WriteFromGraph->Name = L"WriteFromGraph";
			this->WriteFromGraph->Size = System::Drawing::Size(128, 23);
			this->WriteFromGraph->TabIndex = 11;
			this->WriteFromGraph->Text = L"Записать в матрицу";
			this->WriteFromGraph->UseVisualStyleBackColor = false;
			this->WriteFromGraph->Click += gcnew System::EventHandler(this, &MainForm::WriteFromGraph_Click_1);
			this->WriteFromGraph->MouseLeave += gcnew System::EventHandler(this, &MainForm::WriteFromGraph_MouseLeave);
			this->WriteFromGraph->MouseHover += gcnew System::EventHandler(this, &MainForm::WriteFromGraph_MouseHover);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(6, 446);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 30);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Очистить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &MainForm::button1_MouseLeave);
			this->button1->MouseHover += gcnew System::EventHandler(this, &MainForm::button1_MouseHover);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->panel1->Location = System::Drawing::Point(155, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(655, 470);
			this->panel1->TabIndex = 6;
			this->panel1->Click += gcnew System::EventHandler(this, &MainForm::panel1_Click_1);
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel1_Paint_1);
			// 
			// SelectNode
			// 
			this->SelectNode->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->SelectNode->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->SelectNode->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SelectNode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SelectNode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SelectNode.Image")));
			this->SelectNode->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SelectNode->Location = System::Drawing::Point(6, 386);
			this->SelectNode->Name = L"SelectNode";
			this->SelectNode->Size = System::Drawing::Size(79, 25);
			this->SelectNode->TabIndex = 7;
			this->SelectNode->Text = L"Вершина";
			this->SelectNode->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->SelectNode->UseVisualStyleBackColor = false;
			this->SelectNode->Click += gcnew System::EventHandler(this, &MainForm::SelectNode_Click_1);
			this->SelectNode->MouseLeave += gcnew System::EventHandler(this, &MainForm::SelectNode_MouseLeave);
			this->SelectNode->MouseHover += gcnew System::EventHandler(this, &MainForm::SelectNode_MouseHover);
			// 
			// SelectEdge
			// 
			this->SelectEdge->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->SelectEdge->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->SelectEdge->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SelectEdge->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SelectEdge->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SelectEdge.Image")));
			this->SelectEdge->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SelectEdge->Location = System::Drawing::Point(6, 417);
			this->SelectEdge->Name = L"SelectEdge";
			this->SelectEdge->Size = System::Drawing::Size(79, 23);
			this->SelectEdge->TabIndex = 8;
			this->SelectEdge->Text = L"Ребро";
			this->SelectEdge->UseVisualStyleBackColor = false;
			this->SelectEdge->Click += gcnew System::EventHandler(this, &MainForm::SelectEdge_Click_1);
			this->SelectEdge->MouseLeave += gcnew System::EventHandler(this, &MainForm::SelectEdge_MouseLeave);
			this->SelectEdge->MouseHover += gcnew System::EventHandler(this, &MainForm::SelectEdge_MouseHover);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->WriteInMasFromGrid);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(826, 495);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Матрица";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// WriteInMasFromGrid
			// 
			this->WriteInMasFromGrid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->WriteInMasFromGrid->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->WriteInMasFromGrid->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WriteInMasFromGrid->Location = System::Drawing::Point(753, 6);
			this->WriteInMasFromGrid->Name = L"WriteInMasFromGrid";
			this->WriteInMasFromGrid->Size = System::Drawing::Size(68, 48);
			this->WriteInMasFromGrid->TabIndex = 1;
			this->WriteInMasFromGrid->Text = L"Записать";
			this->WriteInMasFromGrid->UseVisualStyleBackColor = false;
			this->WriteInMasFromGrid->Click += gcnew System::EventHandler(this, &MainForm::WriteInMasFromGrid_Click);
			this->WriteInMasFromGrid->MouseLeave += gcnew System::EventHandler(this, &MainForm::WriteInMasFromGrid_MouseLeave);
			this->WriteInMasFromGrid->MouseHover += gcnew System::EventHandler(this, &MainForm::WriteInMasFromGrid_MouseHover);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Location = System::Drawing::Point(6, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(740, 482);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellContentClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->фаёлToolStripMenuItem,
					this->параметрыToolStripMenuItem, this->оПрограммеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(858, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// фаёлToolStripMenuItem
			// 
			this->фаёлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->открытьToolStripMenuItem,
					this->сохранитьToolStripMenuItem
			});
			this->фаёлToolStripMenuItem->Name = L"фаёлToolStripMenuItem";
			this->фаёлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->фаёлToolStripMenuItem->Text = L"Файл";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"открытьToolStripMenuItem.Image")));
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"сохранитьToolStripMenuItem.Image")));
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::сохранитьToolStripMenuItem_Click);
			// 
			// параметрыToolStripMenuItem
			// 
			this->параметрыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->наВесьЭкранToolStripMenuItem });
			this->параметрыToolStripMenuItem->Name = L"параметрыToolStripMenuItem";
			this->параметрыToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->параметрыToolStripMenuItem->Text = L"Параметры";
			// 
			// наВесьЭкранToolStripMenuItem
			// 
			this->наВесьЭкранToolStripMenuItem->CheckOnClick = true;
			this->наВесьЭкранToolStripMenuItem->Name = L"наВесьЭкранToolStripMenuItem";
			this->наВесьЭкранToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->наВесьЭкранToolStripMenuItem->Text = L"На весь экран";
			this->наВесьЭкранToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::наВесьЭкранToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::оПрограммеToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->StatusLabel });
			this->statusStrip1->Location = System::Drawing::Point(0, 551);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(858, 22);
			this->statusStrip1->TabIndex = 4;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// StatusLabel
			// 
			this->StatusLabel->Enabled = false;
			this->StatusLabel->Name = L"StatusLabel";
			this->StatusLabel->Overflow = System::Windows::Forms::ToolStripItemOverflow::Never;
			this->StatusLabel->Size = System::Drawing::Size(0, 17);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(858, 573);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->HelpButtonClicked += gcnew System::ComponentModel::CancelEventHandler(this, &MainForm::MainForm_HelpButtonClicked);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &MainForm::MainForm_SizeChanged);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: bool cycle = true; //создание переменной булевского типа, используется для переключения режимов ресования (вершина, ребро)
	private: Graph* gr1;//указатель на экземплер класса, иничиализирован в mainFormLoad
	private: int tag = 0;//tagindexValueBox
	private: int tag1 = 0;//tagindexValueBox1
	private: int index = 0;//переменная используемая как индекс для записи в массив и т.д.
	private: TextBox^ valueBox = nullptr;//указатель на текстБокс
	private: TextBox^ valueBox1 = nullptr;//указатель на текстБокс1
	private: bool node_edge = true;//Режим создания вершин или рёбер
	private: bool isGraphInMem =false;//используется для блокировки некоторых кнопок
	void valueBox_LostFocus(System::Object^ sender, System::EventArgs^ e) // обработчик потери фокуса на текстБоксе
	{
		TextBox^ a = (TextBox^)sender;
		 if (a->Text != "")
		 {
			 try {
				 if (Convert::ToInt32(a->Text) < 0)
				 {
					 MessageBox::Show(this, "Пропускная способность ребра не может быть меньше 0.", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					 a->Clear();
					 return;
				 }
				 gr1->SetValue(Convert::ToInt32(a->Tag), Convert::ToInt32(a->Text)); // сохранения веса ребра в памяти
				 gr1->ReSetGraph();
			 }
			 catch (System::FormatException^ e)
			 {
				 MessageBox::Show(this, "Пропускная способность ребра должно быть целочисленным числом.", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 a->Clear();
			 }
			
		 }
		 else//если вес не заполнен, изначально инициализируем нулём 
		 {
			 a->Text = Convert::ToString(0);
			 gr1->SetValue(Convert::ToInt32(a->Tag), Convert::ToInt32(a->Text));
			 gr1->ReSetGraph();
		 }
	}
	void valueBox1_LostFocus(System::Object^ sender, System::EventArgs^ e)//анологичный обработчик потери фокуса
	{
		TextBox^ a = (TextBox^)sender;
		if (a->Text != "")
		{
			try
			{
				if (Convert::ToInt32(a->Text) < 0)
				{
					MessageBox::Show(this, "Пропускная способность ребра не может быть меньше 0.", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					a->Clear();
					return;
				}
				gr1->SetValueRevers(Convert::ToInt32(a->Tag), Convert::ToInt32(a->Text));
				gr1->ReSetGraphRevers();
			}
			catch (System::FormatException^ e)
			{
				MessageBox::Show(this, "Пропускная способность ребра должно быть целочисленным числом.", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				a->Clear();
			}
		}
		else
		{
			a->Text = Convert::ToString(0);
			gr1->SetValueRevers(Convert::ToInt32(a->Tag), Convert::ToInt32(a->Text));
			gr1->ReSetGraphRevers();
		}
	}
	
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Graph";
		gr1 = new Graph();
	}
	private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = this->panel1->CreateGraphics();//создание указателя Graphics для создания графа на панели
		g->Clear(Color::White);//очистка
		g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;//режим сглаживания
		gr1->DrawGraph(g);//функция перерисовки графа
	}
	private: System::Void SelectNode_Click_1(System::Object^ sender, System::EventArgs^ e) {
		node_edge = true;//установка флагов в true
		cycle = true;
	}
	private: System::Void SelectEdge_Click_1(System::Object^ sender, System::EventArgs^ e) {
		node_edge = false;//при клике по кнопке ребра, режим рисования переключачется на создания рёбер
	}
	
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {//очищение панели
		gr1->~Graph();
		delete menuStrip1;
		delete tabControl1;
		delete statusStrip1;
		index = 0;
		tag = 0;
		tag1 = 0;
		gr1 = new Graph;
		this->InitializeComponent();
		panel1->Invalidate();
	}
	private: System::Void panel1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		panel1->Select();
		Point mousePos = this->panel1->PointToClient(Cursor->Position);//считывание координат мыши относительно панели
		if (node_edge)//проверка режима рисования
		{
			if (gr1->detectNodeToDrawNear(mousePos) == -1)//проверка чтобы не рисовать вершину на вершине
			{
				gr1->AddNode(mousePos);//добавление вершины по опред. координатам
			}
		}
		panel1->Invalidate();//обновление панели 
		if (!node_edge)
		{//в коде ниже идут проверки на выбор вершин для построения рёбер 
			if (cycle == false && gr1->detectNode(mousePos) == -1)
			{
				Point tm_Point;
				gr1->SetEdgeStart(gr1->detectNode(tm_Point), index);
				cycle = true;
			}
			if (gr1->detectNode(mousePos) != -1 && cycle)
			{
				gr1->SetEdgeStart(gr1->detectNode(mousePos), index);
				gr1->SetEdgeStartLocation(mousePos, index);
				cycle = false;
			}
			else
			{
				if (gr1->detectNode(mousePos) != -1 && cycle == false)
				{
					valueBox = gcnew TextBox;
					valueBox1 = gcnew TextBox;

					gr1->SetEdgeEnd(gr1->detectNode(mousePos), index);
					gr1->SetEdgeEndLocation(mousePos, index);

					valueBox->Location = Point((gr1->GetNodesX(gr1->GetEdgeStart(index)) + gr1->GetNodesX(gr1->GetEdgeEnd(index))) / 2 - 10, (gr1->GetNodesY(gr1->GetEdgeStart(index)) + gr1->GetNodesY(gr1->GetEdgeEnd(index))) / 2);
					valueBox->Size = System::Drawing::Size(20, 20);
					valueBox->BackColor = System::Drawing::SystemColors::ScrollBar;
					valueBox->Text = "";
					valueBox->LostFocus += gcnew System::EventHandler(this, &MainForm::valueBox_LostFocus);
					valueBox->Tag = tag;
					
					valueBox1->Location = Point((gr1->GetNodesX(gr1->GetEdgeStart(index)) + gr1->GetNodesX(gr1->GetEdgeEnd(index))) / 2 + 10, (gr1->GetNodesY(gr1->GetEdgeStart(index)) + gr1->GetNodesY(gr1->GetEdgeEnd(index))) / 2);
					valueBox1->Size = System::Drawing::Size(20, 20);
					valueBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
					valueBox1->Text = "";
					valueBox1->LostFocus += gcnew System::EventHandler(this, &MainForm::valueBox1_LostFocus);
					valueBox1->Tag = tag1;
					tag++;
					tag1++;
					//////////////////////////////////////////////
					this->panel1->Controls->Add(valueBox1);
					this->panel1->Controls->Add(valueBox);
					///////////////////////////////////////////////
					valueBox->Select();
					valueBox1->Select();
					gr1->setEdgeAmount();
					cycle = true;
					index++;
				}
			}
		}
	}
private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {//открытие файла и запись из него значений в поля класса и другие переменные
	OpenFileDialog^ open_f = gcnew OpenFileDialog();
	open_f->Filter = "Text File (*.graph)|*.graph|All File(*.*)|*.*";
	int sizeOfmasR, tmpValueMasR;
	Point tmpPR;
	if (open_f->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		gr1->~Graph();
		String^ name = open_f->FileName->ToString();
		msclr::interop::marshal_context context;//конвертация System string в std string
		std::string path = context.marshal_as<std::string>(name);
		
		ifstream fin;
		fin.open(path);
		if (fin.is_open())
		{
			isGraphInMem = true;
			fin.read((char*)&sizeOfmasR, sizeof(sizeOfmasR));//данные запиисываются в бинорном виде, поэтому читать их нужно соответственно
			gr1 = new Graph(sizeOfmasR);
			gr1->SetNodeAmount(sizeOfmasR);
			gr1->setSize(sizeOfmasR);
			for (size_t i = 0; i < sizeOfmasR; i++)
			{
				for (size_t j = 0; j < sizeOfmasR; j++)
				{
					fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
					gr1->SetGraphEl(i, j, tmpValueMasR);
				}
			}
			for (size_t i = 0; i < sizeOfmasR; i++)
			{

				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				gr1->GetNel()[i].X = tmpValueMasR;
				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				gr1->GetNel()[i].Y = tmpValueMasR;
				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				gr1->GetNel()[i].numb = tmpValueMasR;
				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				gr1->GetEel()[i].start.X = tmpValueMasR;
				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				gr1->GetEel()[i].start.Y = tmpValueMasR;
				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				gr1->GetEel()[i].end.X = tmpValueMasR;
				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				gr1->GetEel()[i].end.Y = tmpValueMasR;

				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				gr1->GetEel()[i].startNode = tmpValueMasR;

				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				gr1->GetEel()[i].endNode = tmpValueMasR;

				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				gr1->SetEdgeAmountF(tmpValueMasR);

				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				gr1->SetnodeAmount(tmpValueMasR);

				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				gr1->setEdge(tmpValueMasR);

				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				index = tmpValueMasR;

				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				tag = tmpValueMasR;

				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				tag1 = tmpValueMasR;

				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				gr1->GetEel()[i].value = tmpValueMasR;

				fin.read((char*)&tmpValueMasR, sizeof(tmpValueMasR));
				gr1->GetEel()[i].valueRevers = tmpValueMasR;
			}
			fin.close();
			int tag0_0 = 0;
			int tag1_1 = 0;
			for (int index0 = 0; index0 < gr1->GetEdgeAmount(); index0++)//сознания новых текстБоксов и занесения в них значений
			{
				valueBox = gcnew TextBox;
				valueBox1 = gcnew TextBox;
				valueBox->Location = Point((gr1->GetNodesX(gr1->GetEdgeStart(index0)) + gr1->GetNodesX(gr1->GetEdgeEnd(index0))) / 2 - 10, (gr1->GetNodesY(gr1->GetEdgeStart(index0)) + gr1->GetNodesY(gr1->GetEdgeEnd(index0))) / 2);
				valueBox->Size = System::Drawing::Size(20, 20);
				valueBox->BackColor = System::Drawing::SystemColors::ScrollBar;
				valueBox->Text = "";
				valueBox->LostFocus += gcnew System::EventHandler(this, &MainForm::valueBox_LostFocus);
				valueBox->Tag = tag0_0;

				valueBox1->Location = Point((gr1->GetNodesX(gr1->GetEdgeStart(index0)) + gr1->GetNodesX(gr1->GetEdgeEnd(index0))) / 2 + 10, (gr1->GetNodesY(gr1->GetEdgeStart(index0)) + gr1->GetNodesY(gr1->GetEdgeEnd(index0))) / 2);
				valueBox1->Size = System::Drawing::Size(20, 20);
				valueBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
				valueBox1->Text = "";
				valueBox1->LostFocus += gcnew System::EventHandler(this, &MainForm::valueBox1_LostFocus);
				valueBox1->Tag = tag1_1;
				valueBox->Text = Convert::ToString(gr1->GetGraphEl(gr1->GetEel()[index0].startNode, gr1->GetEel()[index0].endNode));
				tag0_0++;
				tag1_1++;
				//////////////////////////////////////////////
				this->panel1->Controls->Add(valueBox1);
				this->panel1->Controls->Add(valueBox);
				///////////////////////////////////////////////
				valueBox->Select();
				valueBox1->Select();
				panel1->Invalidate();
			}
		}
		else
		{
			MessageBox::Show(this, "Не удалось открыть файл.", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			isGraphInMem = false;
		}
		
	}
}
private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ open_f = gcnew SaveFileDialog();
	open_f->Filter = "Text File (*.graph)|*.graph|All File(*.*)|*.*";
	int sizeOfmasW, tmpValueMasW;
	Point tmpPW;//Ниже идёт сохранение графа в бинарный файл
	if (open_f->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ name = open_f->FileName->ToString();
		msclr::interop::marshal_context context;
		std::string path = context.marshal_as<std::string>(name);
		
		sizeOfmasW = gr1->getSize();
		ofstream fout;
		fout.open(path, ofstream::trunc);
		if (fout.is_open())
		{
			fout.write((char*)&sizeOfmasW, sizeof(sizeOfmasW));

			for (size_t i = 0; i < sizeOfmasW; i++)
			{
				for (size_t j = 0; j < sizeOfmasW; j++)
				{
					tmpValueMasW = gr1->GetGraphEl(i, j);
					fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));
				}
			}
			for (size_t i = 0; i < sizeOfmasW; i++)
			{
				tmpValueMasW = gr1->GetNel()[i].X;
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));
				tmpValueMasW = gr1->GetNel()[i].Y;
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));
				tmpValueMasW = gr1->GetNel()[i].numb;
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));
				tmpValueMasW = gr1->GetEel()[i].start.X;
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));
				tmpValueMasW = gr1->GetEel()[i].start.Y;
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));
				tmpValueMasW = gr1->GetEel()[i].end.X;
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));
				tmpValueMasW = gr1->GetEel()[i].end.Y;
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));

				tmpValueMasW = gr1->GetEel()[i].startNode;
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));

				tmpValueMasW = gr1->GetEel()[i].endNode;
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));

				tmpValueMasW = gr1->GetEdgeAmount();
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));

				tmpValueMasW = gr1->GetnodeAmount();
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));

				tmpValueMasW = gr1->getEdge();
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));

				tmpValueMasW = index;
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));

				tmpValueMasW = tag;
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));

				tmpValueMasW = tag1;
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));

				tmpValueMasW = gr1->GetEel()[i].value;
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));

				tmpValueMasW = gr1->GetEel()[i].valueRevers;
				fout.write((char*)&tmpValueMasW, sizeof(tmpValueMasW));
			}

			fout.close();
		}
		else
		{
			MessageBox::Show(this, "Не удалось открыть файл.", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			isGraphInMem = false;
		}
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//обработчик кнопки нахождения максимального потока
	if (numericUpDown1->Text == "" || numericUpDown2->Text == "")
	{
		MessageBox::Show(this, "Выберите исток и сток.", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		if (Convert::ToInt32(numericUpDown1->Text) < gr1->GetnodeAmount() && Convert::ToInt32(numericUpDown2->Text) < gr1->GetnodeAmount())
		{
			if (Convert::ToInt32(numericUpDown1->Text) != Convert::ToInt32(numericUpDown2->Text))
			{
				if (gr1->CheckIstokPermission(Convert::ToInt32(numericUpDown1->Text)))
				{

					gr1->SetS(Convert::ToInt32(numericUpDown1->Text));
					if (gr1->CheckStokPermission(Convert::ToInt32(numericUpDown2->Text)))
					{
						gr1->SetT(Convert::ToInt32(numericUpDown2->Text));
						MessageBox::Show("Max flow: " + Convert::ToString(gr1->fordFulkerson()));
					}
					else
					{
						MessageBox::Show("Error: Из стока не может вытикать поток");
					}
				}
				else
				{
					MessageBox::Show("Error: В исток не может втикать поток");
				}
			}
			else
			{
				MessageBox::Show("Error: Одна и тажа вершина не может быть Стоком и Истоком одновременно");
			}
		}
		else
		{
			MessageBox::Show("Error: Данной вершины не существует");
		}
	}
}

private: System::Void WriteInMasFromGrid_Click(System::Object^ sender, System::EventArgs^ e) {//запись в память после изменения значений в матрице
	if (isGraphInMem)
	{
		try {
			for (size_t i = 0; i < gr1->GetnodeAmount(); i++)
			{
				for (size_t j = 0; j < gr1->GetnodeAmount(); j++)
				{
					gr1->SetGraphEl(i, j, Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value));
				}
			}
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show(this, "Вес ребра должно быть целочисленное число", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else
	{
		MessageBox::Show(this, "Вы не построили граф", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: bool OnOFFullScreen = false;
private: System::Void наВесьЭкранToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {//обработчик кнопки открытия окна на весь экран
	if (!OnOFFullScreen)
	{
		this->WindowState = FormWindowState::Maximized;
		this->CenterToScreen();
		OnOFFullScreen = true;
		
		return;
	}
	{
		this->WindowState = FormWindowState::Normal;
		this->CenterToScreen();
		OnOFFullScreen = false;
		
		return;
	}
}

private: System::Void WriteFromGraph_Click_1(System::Object^ sender, System::EventArgs^ e) {//запись графа в память
	if (gr1->getEdge() > 0)
	{
		MaxFlowButton->Enabled = true;
		isGraphInMem = true;
	}
	else
	{
		MaxFlowButton->Enabled = false;
	}
	dataGridView1->RowCount = gr1->GetnodeAmount();
	dataGridView1->ColumnCount = gr1->GetnodeAmount();
	for (int i = 0; i < gr1->GetnodeAmount(); i++) {
		dataGridView1->Columns[i]->HeaderCell->Value = Convert::ToString(i);
		dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i);
		for (int j = 0; j < gr1->GetnodeAmount(); j++) {

			dataGridView1->Rows[i]->Cells[j]->Value = gr1->GetGraphEl(i, j);
			dataGridView1->Columns[i]->Width = 40;
		}
	}
}
private: System::Void WriteFromGraph_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	StatusLabel->Text = "ЛКМ записать граф в матрицу";
}
private: System::Void WriteFromGraph_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	StatusLabel->Text = "";
}
private: System::Void WriteInMasFromGrid_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	StatusLabel->Text = "Записать матрицу в массив";
}
private: System::Void WriteInMasFromGrid_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	StatusLabel->Text = "";
}
private: System::Void MaxFlowButton_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	StatusLabel->Text = "Найти максимальный поток в сети";
}
private: System::Void MaxFlowButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	StatusLabel->Text = "";
}
private: System::Void SelectNode_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	StatusLabel->Text = "ЛКМ для рисования вершина";
}
private: System::Void SelectNode_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	StatusLabel->Text = "";
}
private: System::Void SelectEdge_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	StatusLabel->Text = "ЛКМ для рисования рёбер";
}
private: System::Void SelectEdge_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	StatusLabel->Text = "";
}
private: System::Void button1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	StatusLabel->Text = "Очистить панель рисования";
}
private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	StatusLabel->Text = "";
}
private: System::Void MainForm_HelpButtonClicked(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {//открытие справки
	help^ f = gcnew help(this);
	this->Enabled = false;
	f->Show();
}
	private: System::Void MainForm_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		if (OnOFFullScreen)
		{
			наВесьЭкранToolStripMenuItem->Checked = false;
			OnOFFullScreen = false;
		}
	}
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Данная программа является <<Курсовым проектом>>.\n\nЗадача:\nНахождения максимального потока сети методом 'Форда-Фалкерсона'\n\nАвтор:\t\t\t\t\tПопков А.П ©");
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
