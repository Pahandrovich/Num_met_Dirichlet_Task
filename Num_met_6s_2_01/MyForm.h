#pragma once
#include "DirichletTask.h"

namespace Nummet6s201 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TextBox^  textBox1_m;
	private: System::Windows::Forms::TextBox^  textBox1_n;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;





	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1_eps;
	private: System::Windows::Forms::TextBox^  textBox1_count;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;



	private: System::Windows::Forms::TextBox^  textBox2_eps;

	private: System::Windows::Forms::TextBox^  textBox2_count;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;




	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::DataGridView^  dataGridView6;


	private: System::Windows::Forms::DataGridView^  dataGridView5;
	private: System::Windows::Forms::TextBox^  textBox2_m;

	private: System::Windows::Forms::TextBox^  textBox2_n;

	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::DataGridView^  dataGridView4;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox2_out;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1_eps = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_count = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1_m = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_n = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2_out = (gcnew System::Windows::Forms::TextBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2_eps = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_count = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox2_m = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_n = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1465, 569);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 76);
			this->button1->TabIndex = 0;
			this->button1->Text = L"����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(8, 7);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(596, 471);
			this->dataGridView1->TabIndex = 1;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(3, 4);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1909, 778);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->radioButton2);
			this->tabPage1->Controls->Add(this->radioButton1);
			this->tabPage1->Controls->Add(this->textBox1_eps);
			this->tabPage1->Controls->Add(this->textBox1_count);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->dataGridView3);
			this->tabPage1->Controls->Add(this->dataGridView2);
			this->tabPage1->Controls->Add(this->textBox1_m);
			this->tabPage1->Controls->Add(this->textBox1_n);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(1901, 749);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"��������";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(102, 712);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(27, 17);
			this->label11->TabIndex = 26;
			this->label11->Text = L"j = ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(102, 680);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 17);
			this->label10->TabIndex = 25;
			this->label10->Text = L"i = ";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(995, 617);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(89, 21);
			this->radioButton2->TabIndex = 24;
			this->radioButton2->Text = L"��������";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(995, 588);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(92, 21);
			this->radioButton1->TabIndex = 23;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"��������";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox1_eps
			// 
			this->textBox1_eps->Location = System::Drawing::Point(1235, 616);
			this->textBox1_eps->Margin = System::Windows::Forms::Padding(4);
			this->textBox1_eps->Name = L"textBox1_eps";
			this->textBox1_eps->Size = System::Drawing::Size(132, 22);
			this->textBox1_eps->TabIndex = 22;
			this->textBox1_eps->Text = L"1e-6";
			// 
			// textBox1_count
			// 
			this->textBox1_count->Location = System::Drawing::Point(1235, 584);
			this->textBox1_count->Margin = System::Windows::Forms::Padding(4);
			this->textBox1_count->Name = L"textBox1_count";
			this->textBox1_count->Size = System::Drawing::Size(132, 22);
			this->textBox1_count->TabIndex = 21;
			this->textBox1_count->Text = L"30";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(1171, 620);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(31, 17);
			this->label15->TabIndex = 20;
			this->label15->Text = L"eps";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(1143, 588);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(83, 17);
			this->label14->TabIndex = 19;
			this->label14->Text = L"count of iter";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(99, 584);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(205, 17);
			this->label13->TabIndex = 18;
			this->label13->Text = L"����������� �������� ������";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(99, 548);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(249, 17);
			this->label12->TabIndex = 17;
			this->label12->Text = L"����������� ����������� ��������";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1498, 482);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"��������";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(862, 482);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"��������� �������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(227, 491);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"������ �������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(99, 644);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(212, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"����. ���������� �����������";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(1216, 7);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(596, 471);
			this->dataGridView3->TabIndex = 7;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(612, 7);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(596, 471);
			this->dataGridView2->TabIndex = 6;
			// 
			// textBox1_m
			// 
			this->textBox1_m->Location = System::Drawing::Point(1235, 676);
			this->textBox1_m->Margin = System::Windows::Forms::Padding(4);
			this->textBox1_m->Name = L"textBox1_m";
			this->textBox1_m->Size = System::Drawing::Size(132, 22);
			this->textBox1_m->TabIndex = 5;
			this->textBox1_m->Text = L"5";
			// 
			// textBox1_n
			// 
			this->textBox1_n->Location = System::Drawing::Point(1235, 644);
			this->textBox1_n->Margin = System::Windows::Forms::Padding(4);
			this->textBox1_n->Name = L"textBox1_n";
			this->textBox1_n->Size = System::Drawing::Size(132, 22);
			this->textBox1_n->TabIndex = 4;
			this->textBox1_n->Text = L"4";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1183, 680);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"m";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1183, 644);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"n";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->textBox2_out);
			this->tabPage2->Controls->Add(this->radioButton4);
			this->tabPage2->Controls->Add(this->radioButton3);
			this->tabPage2->Controls->Add(this->textBox2_eps);
			this->tabPage2->Controls->Add(this->textBox2_count);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->label26);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->dataGridView6);
			this->tabPage2->Controls->Add(this->dataGridView5);
			this->tabPage2->Controls->Add(this->textBox2_m);
			this->tabPage2->Controls->Add(this->textBox2_n);
			this->tabPage2->Controls->Add(this->label29);
			this->tabPage2->Controls->Add(this->label30);
			this->tabPage2->Controls->Add(this->dataGridView4);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(1901, 749);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"��������";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(151, 713);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 17);
			this->label9->TabIndex = 53;
			this->label9->Text = L"j = ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(151, 683);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 17);
			this->label8->TabIndex = 52;
			this->label8->Text = L"i = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1128, 672);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 17);
			this->label7->TabIndex = 51;
			this->label7->Text = L"out";
			// 
			// textBox2_out
			// 
			this->textBox2_out->Location = System::Drawing::Point(1180, 669);
			this->textBox2_out->Margin = System::Windows::Forms::Padding(4);
			this->textBox2_out->Name = L"textBox2_out";
			this->textBox2_out->Size = System::Drawing::Size(132, 22);
			this->textBox2_out->TabIndex = 50;
			this->textBox2_out->Text = L"21";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(940, 561);
			this->radioButton4->Margin = System::Windows::Forms::Padding(4);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(89, 21);
			this->radioButton4->TabIndex = 49;
			this->radioButton4->Text = L"��������";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Checked = true;
			this->radioButton3->Location = System::Drawing::Point(940, 532);
			this->radioButton3->Margin = System::Windows::Forms::Padding(4);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(92, 21);
			this->radioButton3->TabIndex = 48;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"��������";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// textBox2_eps
			// 
			this->textBox2_eps->Location = System::Drawing::Point(1180, 560);
			this->textBox2_eps->Margin = System::Windows::Forms::Padding(4);
			this->textBox2_eps->Name = L"textBox2_eps";
			this->textBox2_eps->Size = System::Drawing::Size(132, 22);
			this->textBox2_eps->TabIndex = 47;
			this->textBox2_eps->Text = L"1e-6";
			// 
			// textBox2_count
			// 
			this->textBox2_count->Location = System::Drawing::Point(1180, 528);
			this->textBox2_count->Margin = System::Windows::Forms::Padding(4);
			this->textBox2_count->Name = L"textBox2_count";
			this->textBox2_count->Size = System::Drawing::Size(132, 22);
			this->textBox2_count->TabIndex = 46;
			this->textBox2_count->Text = L"30";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(1116, 564);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(31, 17);
			this->label16->TabIndex = 45;
			this->label16->Text = L"eps";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(1088, 532);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(83, 17);
			this->label17->TabIndex = 44;
			this->label17->Text = L"count of iter";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(151, 584);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(205, 17);
			this->label18->TabIndex = 43;
			this->label18->Text = L"����������� �������� ������";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(151, 548);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(249, 17);
			this->label19->TabIndex = 42;
			this->label19->Text = L"����������� ����������� ��������";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(151, 621);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(132, 17);
			this->label20->TabIndex = 41;
			this->label20->Text = L"�������� ������ 2";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(1513, 482);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(68, 17);
			this->label25->TabIndex = 36;
			this->label25->Text = L"��������";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(869, 482);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(142, 17);
			this->label26->TabIndex = 35;
			this->label26->Text = L"��������� �������";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(247, 482);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(255, 17);
			this->label27->TabIndex = 34;
			this->label27->Text = L"��������� ������� �� ������ �����";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(151, 652);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(206, 17);
			this->label28->TabIndex = 33;
			this->label28->Text = L"����. ��������� �����������";
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(1216, 7);
			this->dataGridView6->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(596, 471);
			this->dataGridView6->TabIndex = 32;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(612, 7);
			this->dataGridView5->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(596, 471);
			this->dataGridView5->TabIndex = 31;
			// 
			// textBox2_m
			// 
			this->textBox2_m->Location = System::Drawing::Point(1180, 620);
			this->textBox2_m->Margin = System::Windows::Forms::Padding(4);
			this->textBox2_m->Name = L"textBox2_m";
			this->textBox2_m->Size = System::Drawing::Size(132, 22);
			this->textBox2_m->TabIndex = 30;
			this->textBox2_m->Text = L"5";
			// 
			// textBox2_n
			// 
			this->textBox2_n->Location = System::Drawing::Point(1180, 588);
			this->textBox2_n->Margin = System::Windows::Forms::Padding(4);
			this->textBox2_n->Name = L"textBox2_n";
			this->textBox2_n->Size = System::Drawing::Size(132, 22);
			this->textBox2_n->TabIndex = 29;
			this->textBox2_n->Text = L"4";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(1128, 624);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(19, 17);
			this->label29->TabIndex = 28;
			this->label29->Text = L"m";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(1128, 588);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(16, 17);
			this->label30->TabIndex = 27;
			this->label30->Text = L"n";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(8, 7);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(596, 471);
			this->dataGridView4->TabIndex = 26;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1465, 569);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(179, 76);
			this->button2->TabIndex = 25;
			this->button2->Text = L"����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1920, 783);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//void fill_table(int n, int m);
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { // TEST TASK

			dataGridView1->Rows->Clear();
			dataGridView2->Rows->Clear();
			dataGridView3->Rows->Clear();
			dataGridView1->Columns->Clear();
			dataGridView2->Columns->Clear();
			dataGridView3->Columns->Clear();

			int n = Convert::ToInt32(textBox1_n->Text);
			int m = Convert::ToInt32(textBox1_m->Text);
			double eps = Convert::ToDouble(textBox1_eps->Text);
			int count_of_iter = Convert::ToInt32(textBox1_count->Text);
			double x_for_max = 0;
			double y_for_max = 0;

			double accuracy = 0;
			int spent_iter = count_of_iter;

			fill_table(n, m, dataGridView1,dataGridView2,dataGridView3);

			Dirichlet_Test Test(n,m);
			if (radioButton1->Checked)
				accuracy = Test.Zeidel_iter(count_of_iter);
			else
				accuracy = Test.Zeidel_eps(eps, spent_iter);

			label12->Text = "������ ������ �� " + Convert::ToString(spent_iter) + "��������";
			label13->Text = "�������� ������ =  "+Convert::ToString(accuracy);

			/*label4->Text = Convert::ToString(Test.A);
			label5->Text = Convert::ToString(Test.diag1);
			label6->Text = Convert::ToString(Test.diag2);
			label7->Text = Convert::ToString(Test.h);
			label8->Text = Convert::ToString(Test.k);
			label9->Text = Convert::ToString(n);
			label10->Text = Convert::ToString(m);*/

			double max_GP = 0;
			double GP = 0;

			for (int j = m; j >= 0 ; j--)
				for (int i = 0; i < n + 1; i++)
				{
					dataGridView1[i + 2, m - j + 2]->Value = Test.U_acc(Test.Getx(i), Test.Gety(j));
				}

			for (int i = 0; i < n + 1; i++)
			{
				/*dataGridView2[i + 2, m + 2]->Value = Test.U_acc(Test.Getx(i), Test.Gety(0));
				dataGridView2[i + 2, 2]->Value = Test.U_acc(Test.Getx(i), Test.Gety(m));*/

				dataGridView2[i + 2, m + 2]->Value = Test.Mu3(Test.Getx(i));
				dataGridView2[i + 2, 2]->Value = Test.Mu4(Test.Getx(i));

				dataGridView3[i + 2, m + 2]->Value = 0;
				dataGridView3[i + 2, 2]->Value = 0;
			}
			for (int j = 1; j < m; j++)
			{
				/*dataGridView2[2, m - j + 2]->Value = Test.U_acc(Test.Getx(0), Test.Gety(j));
				dataGridView2[n + 2, m - j + 2]->Value = Test.U_acc(Test.Getx(n), Test.Gety(j));*/

				dataGridView2[2, m - j + 2]->Value = Test.Mu1(Test.Gety(j));
				dataGridView2[n + 2, m - j + 2]->Value = Test.Mu2(Test.Gety(j));

				dataGridView3[2, m - j + 2]->Value = 0;
				dataGridView3[n + 2, m - j + 2]->Value = 0;
			}

			for (int j = 1; j < m; j++)
				for (int i = 1; i < n; i++)
				{
					dataGridView2[i + 2, m - j + 2]->Value = Test.V[Test.Ind_v(i, j)];
					GP = fabs(Test.V[Test.Ind_v(i, j)] - Test.U_acc(Test.Getx(i), Test.Gety(j)));
					dataGridView3[i + 2, m - j + 2]->Value = GP;
					if (GP > max_GP)
					{
						max_GP = GP;
						x_for_max = i;
						y_for_max = j;
					}
				}

			label3->Text = "Max GP = " + Convert::ToString(max_GP);
			label10->Text = "i = " + Convert::ToString(x_for_max);
			label11->Text = "j = "+Convert::ToString(y_for_max);


		} // end button click TEST






		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { // MAIN TASK

			dataGridView4->Rows->Clear();
			dataGridView5->Rows->Clear();
			dataGridView6->Rows->Clear();
			dataGridView4->Columns->Clear();
			dataGridView5->Columns->Clear();
			dataGridView6->Columns->Clear();

			int n = Convert::ToInt32(textBox2_n->Text);
			int m = Convert::ToInt32(textBox2_m->Text);
			double eps = Convert::ToDouble(textBox2_eps->Text);
			int count_of_iter = Convert::ToInt32(textBox2_count->Text);
			int output = Convert::ToInt32(textBox2_out->Text);

			double accuracy = 0;
			double accuracy2 = 0;
			int spent_iter = count_of_iter;
			int spent_iter2 = count_of_iter;

			double x_for_max = 0;
			double y_for_max = 0;
			
			/*if (n>10 || m>11)
				fill_table(n/10, m/10, dataGridView4, dataGridView5, dataGridView6);
			else
				fill_table(n, m, dataGridView4, dataGridView5, dataGridView6);*/
			if (n < output && m < output) {
				fill_table(n, m, dataGridView4, dataGridView5, dataGridView6);
			}
			Dirichlet_Main Task(n, m);
			Dirichlet_Main Task2(2*n, 2*m);
			if (radioButton3->Checked)
			{
				accuracy = Task.Zeidel_iter(count_of_iter);
				accuracy2 = Task2.Zeidel_iter(count_of_iter);
			}
			else
			{
				accuracy = Task.Zeidel_eps(eps, spent_iter);
				accuracy2 = Task2.Zeidel_eps(eps, spent_iter2);
			}

			label19->Text = "������ ������ �� " + Convert::ToString(spent_iter) + "��������";
			label18->Text = "�������� ������ =  " + Convert::ToString(accuracy);
			label20->Text = "�������� ������ � 2-� ����� =  " + Convert::ToString(accuracy2);

			/*label4->Text = Convert::ToString(Test.A);
			label5->Text = Convert::ToString(Test.diag1);
			label6->Text = Convert::ToString(Test.diag2);
			label7->Text = Convert::ToString(Test.h);
			label8->Text = Convert::ToString(Test.k);
			label9->Text = Convert::ToString(n);
			label10->Text = Convert::ToString(m);*/

			double max_LP = 0;
			double LP = 0;
			if (n < output && m < output) {
				for (int i = 0; i < n + 1; i++)
				{
					dataGridView4[i + 2, m + 2]->Value = Task.Mu3(Task.Getx(i));
					dataGridView4[i + 2, 2]->Value = Task.Mu4(Task.Getx(i));

					dataGridView5[i + 2, m + 2]->Value = Task.Mu3(Task.Getx(i));
					dataGridView5[i + 2, 2]->Value = Task.Mu4(Task.Getx(i));

					dataGridView6[i + 2, m + 2]->Value = 0;
					dataGridView6[i + 2, 2]->Value = 0;
				}
				for (int j = 1; j < m; j++)
				{
					dataGridView4[2, m - j + 2]->Value = Task.Mu1(Task.Gety(j));
					dataGridView4[n + 2, m - j + 2]->Value = Task.Mu2(Task.Gety(j));

					dataGridView5[2, m - j + 2]->Value = Task.Mu1(Task.Gety(j));
					dataGridView5[n + 2, m - j + 2]->Value = Task.Mu2(Task.Gety(j));

					dataGridView6[2, m - j + 2]->Value = 0;
					dataGridView6[n + 2, m - j + 2]->Value = 0;
				}
			}

			for (int j = 1; j < m; j++)
				for (int i = 1; i < n; i++)
				{
					if (n < output && m < output) {
						dataGridView4[i + 2, m - j + 2]->Value = Task2.V[Task2.Ind_v(2 * i, 2 * j)];
						dataGridView5[i + 2, m - j + 2]->Value = Task.V[Task.Ind_v(i, j)];
					}
					LP = fabs(Task.V[Task.Ind_v(i, j)] - Task2.V[Task2.Ind_v(2*i,2*j)]);
					if (n < output && m < output)
						dataGridView6[i + 2, m - j + 2]->Value = LP;
					if (LP > max_LP)
					{
						max_LP = LP;
						x_for_max = i;
						y_for_max = j;
					}
				}

			label28->Text = "Max LP = " + Convert::ToString(max_LP);
			label8->Text = "i = "+ Convert::ToString(x_for_max);
			label9->Text = "j = "+ Convert::ToString(y_for_max);

		} // end button click MAIN

        void fill_table(int n, int m, DataGridView ^DGV1, DataGridView ^DGV2, DataGridView ^DGV3)
		{
			DGV1->Columns->Add("Column-1", "y");
			DGV1->Columns[0]->Width = 30;
			DGV1->Columns->Add("Column-2", "j");
			DGV1->Columns[1]->Width = 30;
			DGV1->Rows->Add();
			DGV1->Rows[0]->HeaderCell->Value = "x";
			DGV1->Rows->Add();
			DGV1->Rows[1]->HeaderCell->Value = "i";

			DGV2->Columns->Add("Column-1", "y");
			DGV2->Columns[0]->Width = 30;
			DGV2->Columns->Add("Column-2", "j");
			DGV2->Columns[1]->Width = 30;
			DGV2->Rows->Add();
			DGV2->Rows[0]->HeaderCell->Value = "x";
			DGV2->Rows->Add();
			DGV2->Rows[1]->HeaderCell->Value = "i";

			DGV3->Columns->Add("Column-1", "y");
			DGV3->Columns[0]->Width = 30;
			DGV3->Columns->Add("Column-2", "j");
			DGV3->Columns[1]->Width = 30;
			DGV3->Rows->Add();
			DGV3->Rows[0]->HeaderCell->Value = "x";
			DGV3->Rows->Add();
			DGV3->Rows[1]->HeaderCell->Value = "i";


			for (int i = 0; i < n + 1; i++)
			{
				DGV1->Columns->Add("Column1" + Convert::ToString(i), "");
				DGV1->Columns[i + 2]->Width = 90;
				DGV1[i + 2, 0]->Value = "x" + Convert::ToString(i);
				DGV1[i + 2, 1]->Value = Convert::ToString(i);

				DGV2->Columns->Add("Column1" + Convert::ToString(i), "");
				DGV2->Columns[i + 2]->Width = 90;
				DGV2[i + 2, 0]->Value = "x" + Convert::ToString(i);
				DGV2[i + 2, 1]->Value = Convert::ToString(i);

				DGV3->Columns->Add("Column1" + Convert::ToString(i), "");
				DGV3->Columns[i + 2]->Width = 90;
				DGV3[i + 2, 0]->Value = "x" + Convert::ToString(i);
				DGV3[i + 2, 1]->Value = Convert::ToString(i);
			}
			for (int i = 0; i < m + 1; i++)
			{
				DGV1->Rows->Add();
				DGV1[0, i + 2]->Value = "y" + Convert::ToString(m - i);
				DGV1[1, i + 2]->Value = Convert::ToString(m - i);

				DGV2->Rows->Add();
				DGV2[0, i + 2]->Value = "y" + Convert::ToString(m - i);
				DGV2[1, i + 2]->Value = Convert::ToString(m - i);

				DGV3->Rows->Add();
				DGV3[0, i + 2]->Value = "y" + Convert::ToString(m - i);
				DGV3[1, i + 2]->Value = Convert::ToString(m - i);
			}
		}
};
}
