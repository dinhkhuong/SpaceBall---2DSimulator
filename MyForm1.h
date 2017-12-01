#pragma once
#include <string>
#include "game.cpp"
namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  sdis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  xforce;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  yforce;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Point;
	protected:
		int score;
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->sdis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xforce = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->yforce = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Point = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(45, 172);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"RUN";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"x Force";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"y Force";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(65, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(64, 59);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(77, 22);
			this->textBox2->TabIndex = 4;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Earth", L"Earth\'s moon", L"Mar", L"Venus", L"Mercury" });
			this->comboBox1->Location = System::Drawing::Point(65, 98);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(93, 24);
			this->comboBox1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Planet";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->sdis, this->xforce,
					this->yforce, this->Point
			});
			this->dataGridView1->Location = System::Drawing::Point(184, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(431, 298);
			this->dataGridView1->TabIndex = 7;
			// 
			// sdis
			// 
			this->sdis->FillWeight = 70;
			this->sdis->HeaderText = L"Shortest Distance to goal";
			this->sdis->Name = L"sdis";
			this->sdis->ReadOnly = true;
			this->sdis->Width = 70;
			// 
			// xforce
			// 
			this->xforce->FillWeight = 70;
			this->xforce->HeaderText = L"x Force";
			this->xforce->Name = L"xforce";
			this->xforce->ReadOnly = true;
			this->xforce->Width = 70;
			// 
			// yforce
			// 
			this->yforce->FillWeight = 70;
			this->yforce->HeaderText = L"y Force";
			this->yforce->Name = L"yforce";
			this->yforce->ReadOnly = true;
			this->yforce->Width = 70;
			// 
			// Point
			// 
			this->Point->FillWeight = 70;
			this->Point->HeaderText = L"Score";
			this->Point->Name = L"Point";
			this->Point->ReadOnly = true;
			this->Point->Width = 70;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(627, 323);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		// turn a System::String to float 
		float MarshalString(System::String ^ s) {
			//turn a System::String to regular string
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			string os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			//turn regular string to float 
			return strtof((os).c_str(), 0);
		}
		//assign gravity value when chosen from Combobox
		float gravity(System::Windows::Forms::ComboBox ^ box){
			switch (box->SelectedIndex){
				case 0: return 9.8f;
				case 1: return 1.7f;
				case 2: return 3.7f;
				case 3: return 9.f;
				case 4: return 3.8f;
			}
		}
		
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //get the text from textbox and chosen option from combobox and turn them all into float
				 System::String ^ t1 = textBox1->Text;
				 System::String ^ t2 = textBox2->Text;
				 float c = MarshalString(t1);
				 float d = MarshalString(t2);
				 float g = gravity(comboBox1);
				 //initialize a game object with the converted float input
				 game ga(c,-(d),g);
				 int score;
				 if (ga.distance <= 40.f)score = score + 1;
				 //add all the needed values into the gridview	
				 dataGridView1->Rows->Add(ga.distance.ToString(),t1,t2,score);
	}
	};
}
