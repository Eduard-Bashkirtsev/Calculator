#pragma once

namespace Project1 {
#include <math.h> 
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ nub_btn_1;

	private: System::Windows::Forms::Button^ nub_btn_2;
	private: System::Windows::Forms::Button^ nub_btn_3;
	private: System::Windows::Forms::Button^ btn_del;
	private: System::Windows::Forms::Button^ btn_sqrt;




	private: System::Windows::Forms::Button^ nub_btn_6;

	private: System::Windows::Forms::Button^ nub_btn_5;

	private: System::Windows::Forms::Button^ nub_btn_4;
	private: System::Windows::Forms::Button^ btn_fact;


	private: System::Windows::Forms::Button^ nub_btn_9;

	private: System::Windows::Forms::Button^ nub_btn_8;

	private: System::Windows::Forms::Button^ nub_btn_7;
	private: System::Windows::Forms::Button^ dot_btn;
	private: System::Windows::Forms::Button^ btn_out;




	private: System::Windows::Forms::Button^ nub_btn_0;
	private: System::Windows::Forms::Label^ label_out;
	private: System::Windows::Forms::Button^ clr_btn;
	private: System::Windows::Forms::Button^ btn_plus;

	private: System::Windows::Forms::Button^ btn_minus;
	private: System::Windows::Forms::Button^ btn_x;
	private: System::Windows::Forms::Button^ btn_minpl;








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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->nub_btn_1 = (gcnew System::Windows::Forms::Button());
			this->nub_btn_2 = (gcnew System::Windows::Forms::Button());
			this->nub_btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_del = (gcnew System::Windows::Forms::Button());
			this->btn_sqrt = (gcnew System::Windows::Forms::Button());
			this->nub_btn_6 = (gcnew System::Windows::Forms::Button());
			this->nub_btn_5 = (gcnew System::Windows::Forms::Button());
			this->nub_btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_fact = (gcnew System::Windows::Forms::Button());
			this->nub_btn_9 = (gcnew System::Windows::Forms::Button());
			this->nub_btn_8 = (gcnew System::Windows::Forms::Button());
			this->nub_btn_7 = (gcnew System::Windows::Forms::Button());
			this->dot_btn = (gcnew System::Windows::Forms::Button());
			this->btn_out = (gcnew System::Windows::Forms::Button());
			this->nub_btn_0 = (gcnew System::Windows::Forms::Button());
			this->label_out = (gcnew System::Windows::Forms::Label());
			this->clr_btn = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_x = (gcnew System::Windows::Forms::Button());
			this->btn_minpl = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(425, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(27, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// nub_btn_1
			// 
			this->nub_btn_1->BackColor = System::Drawing::Color::White;
			this->nub_btn_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nub_btn_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nub_btn_1->Location = System::Drawing::Point(14, 356);
			this->nub_btn_1->Name = L"nub_btn_1";
			this->nub_btn_1->Size = System::Drawing::Size(95, 81);
			this->nub_btn_1->TabIndex = 1;
			this->nub_btn_1->Text = L"1";
			this->nub_btn_1->UseVisualStyleBackColor = false;
			this->nub_btn_1->Click += gcnew System::EventHandler(this, &MyForm::btn_num_click);
			// 
			// nub_btn_2
			// 
			this->nub_btn_2->BackColor = System::Drawing::Color::White;
			this->nub_btn_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nub_btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nub_btn_2->Location = System::Drawing::Point(115, 356);
			this->nub_btn_2->Name = L"nub_btn_2";
			this->nub_btn_2->Size = System::Drawing::Size(95, 81);
			this->nub_btn_2->TabIndex = 2;
			this->nub_btn_2->Text = L"2";
			this->nub_btn_2->UseVisualStyleBackColor = false;
			this->nub_btn_2->Click += gcnew System::EventHandler(this, &MyForm::btn_num_click);
			// 
			// nub_btn_3
			// 
			this->nub_btn_3->BackColor = System::Drawing::Color::White;
			this->nub_btn_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nub_btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nub_btn_3->Location = System::Drawing::Point(216, 356);
			this->nub_btn_3->Name = L"nub_btn_3";
			this->nub_btn_3->Size = System::Drawing::Size(95, 81);
			this->nub_btn_3->TabIndex = 3;
			this->nub_btn_3->Text = L"3";
			this->nub_btn_3->UseVisualStyleBackColor = false;
			this->nub_btn_3->Click += gcnew System::EventHandler(this, &MyForm::btn_num_click);
			// 
			// btn_del
			// 
			this->btn_del->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_del->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_del->Location = System::Drawing::Point(317, 443);
			this->btn_del->Name = L"btn_del";
			this->btn_del->Size = System::Drawing::Size(95, 81);
			this->btn_del->TabIndex = 4;
			this->btn_del->Text = L"/";
			this->btn_del->UseVisualStyleBackColor = false;
			this->btn_del->Click += gcnew System::EventHandler(this, &MyForm::btn_del_Click);
			// 
			// btn_sqrt
			// 
			this->btn_sqrt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_sqrt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_sqrt->Location = System::Drawing::Point(317, 95);
			this->btn_sqrt->Name = L"btn_sqrt";
			this->btn_sqrt->Size = System::Drawing::Size(95, 81);
			this->btn_sqrt->TabIndex = 8;
			this->btn_sqrt->Text = L"√";
			this->btn_sqrt->UseVisualStyleBackColor = false;
			this->btn_sqrt->Click += gcnew System::EventHandler(this, &MyForm::btn_sqrt_Click);
			// 
			// nub_btn_6
			// 
			this->nub_btn_6->BackColor = System::Drawing::Color::White;
			this->nub_btn_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nub_btn_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nub_btn_6->Location = System::Drawing::Point(216, 269);
			this->nub_btn_6->Name = L"nub_btn_6";
			this->nub_btn_6->Size = System::Drawing::Size(95, 81);
			this->nub_btn_6->TabIndex = 7;
			this->nub_btn_6->Text = L"6";
			this->nub_btn_6->UseVisualStyleBackColor = false;
			this->nub_btn_6->Click += gcnew System::EventHandler(this, &MyForm::btn_num_click);
			// 
			// nub_btn_5
			// 
			this->nub_btn_5->BackColor = System::Drawing::Color::White;
			this->nub_btn_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nub_btn_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nub_btn_5->Location = System::Drawing::Point(115, 269);
			this->nub_btn_5->Name = L"nub_btn_5";
			this->nub_btn_5->Size = System::Drawing::Size(95, 81);
			this->nub_btn_5->TabIndex = 6;
			this->nub_btn_5->Text = L"5";
			this->nub_btn_5->UseVisualStyleBackColor = false;
			this->nub_btn_5->Click += gcnew System::EventHandler(this, &MyForm::btn_num_click);
			// 
			// nub_btn_4
			// 
			this->nub_btn_4->BackColor = System::Drawing::Color::White;
			this->nub_btn_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nub_btn_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nub_btn_4->Location = System::Drawing::Point(14, 269);
			this->nub_btn_4->Name = L"nub_btn_4";
			this->nub_btn_4->Size = System::Drawing::Size(95, 81);
			this->nub_btn_4->TabIndex = 5;
			this->nub_btn_4->Text = L"4";
			this->nub_btn_4->UseVisualStyleBackColor = false;
			this->nub_btn_4->Click += gcnew System::EventHandler(this, &MyForm::btn_num_click);
			// 
			// btn_fact
			// 
			this->btn_fact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_fact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_fact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_fact->Location = System::Drawing::Point(216, 95);
			this->btn_fact->Name = L"btn_fact";
			this->btn_fact->Size = System::Drawing::Size(95, 81);
			this->btn_fact->TabIndex = 12;
			this->btn_fact->Text = L"!";
			this->btn_fact->UseVisualStyleBackColor = false;
			// 
			// nub_btn_9
			// 
			this->nub_btn_9->BackColor = System::Drawing::Color::White;
			this->nub_btn_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nub_btn_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nub_btn_9->Location = System::Drawing::Point(216, 182);
			this->nub_btn_9->Name = L"nub_btn_9";
			this->nub_btn_9->Size = System::Drawing::Size(95, 81);
			this->nub_btn_9->TabIndex = 11;
			this->nub_btn_9->Text = L"9";
			this->nub_btn_9->UseVisualStyleBackColor = false;
			this->nub_btn_9->Click += gcnew System::EventHandler(this, &MyForm::btn_num_click);
			// 
			// nub_btn_8
			// 
			this->nub_btn_8->BackColor = System::Drawing::Color::White;
			this->nub_btn_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nub_btn_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nub_btn_8->Location = System::Drawing::Point(115, 182);
			this->nub_btn_8->Name = L"nub_btn_8";
			this->nub_btn_8->Size = System::Drawing::Size(95, 81);
			this->nub_btn_8->TabIndex = 10;
			this->nub_btn_8->Text = L"8";
			this->nub_btn_8->UseVisualStyleBackColor = false;
			this->nub_btn_8->Click += gcnew System::EventHandler(this, &MyForm::btn_num_click);
			// 
			// nub_btn_7
			// 
			this->nub_btn_7->BackColor = System::Drawing::Color::White;
			this->nub_btn_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nub_btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nub_btn_7->Location = System::Drawing::Point(12, 182);
			this->nub_btn_7->Name = L"nub_btn_7";
			this->nub_btn_7->Size = System::Drawing::Size(95, 81);
			this->nub_btn_7->TabIndex = 9;
			this->nub_btn_7->Text = L"7";
			this->nub_btn_7->UseVisualStyleBackColor = false;
			this->nub_btn_7->Click += gcnew System::EventHandler(this, &MyForm::btn_num_click);
			// 
			// dot_btn
			// 
			this->dot_btn->BackColor = System::Drawing::Color::White;
			this->dot_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dot_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dot_btn->Location = System::Drawing::Point(14, 443);
			this->dot_btn->Name = L"dot_btn";
			this->dot_btn->Size = System::Drawing::Size(95, 81);
			this->dot_btn->TabIndex = 15;
			this->dot_btn->Text = L",";
			this->dot_btn->UseVisualStyleBackColor = false;
			this->dot_btn->Click += gcnew System::EventHandler(this, &MyForm::dot_btn_Click);
			// 
			// btn_out
			// 
			this->btn_out->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_out->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_out->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_out->Location = System::Drawing::Point(216, 443);
			this->btn_out->Name = L"btn_out";
			this->btn_out->Size = System::Drawing::Size(95, 81);
			this->btn_out->TabIndex = 14;
			this->btn_out->Text = L"=";
			this->btn_out->UseVisualStyleBackColor = false;
			this->btn_out->Click += gcnew System::EventHandler(this, &MyForm::btn_out_Click);
			// 
			// nub_btn_0
			// 
			this->nub_btn_0->BackColor = System::Drawing::Color::White;
			this->nub_btn_0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nub_btn_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nub_btn_0->Location = System::Drawing::Point(115, 443);
			this->nub_btn_0->Name = L"nub_btn_0";
			this->nub_btn_0->Size = System::Drawing::Size(95, 81);
			this->nub_btn_0->TabIndex = 13;
			this->nub_btn_0->Text = L"0";
			this->nub_btn_0->UseVisualStyleBackColor = false;
			this->nub_btn_0->Click += gcnew System::EventHandler(this, &MyForm::btn_num_click);
			// 
			// label_out
			// 
			this->label_out->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label_out->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_out->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_out->Location = System::Drawing::Point(18, 9);
			this->label_out->Name = L"label_out";
			this->label_out->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label_out->Size = System::Drawing::Size(401, 71);
			this->label_out->TabIndex = 17;
			this->label_out->Text = L"0";
			this->label_out->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// clr_btn
			// 
			this->clr_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->clr_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clr_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clr_btn->Location = System::Drawing::Point(12, 95);
			this->clr_btn->Name = L"clr_btn";
			this->clr_btn->Size = System::Drawing::Size(95, 81);
			this->clr_btn->TabIndex = 18;
			this->clr_btn->Text = L"AC";
			this->clr_btn->UseVisualStyleBackColor = false;
			this->clr_btn->Click += gcnew System::EventHandler(this, &MyForm::clr_btn_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus->Location = System::Drawing::Point(317, 182);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(95, 81);
			this->btn_plus->TabIndex = 19;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus->Location = System::Drawing::Point(317, 269);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(95, 81);
			this->btn_minus->TabIndex = 20;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// btn_x
			// 
			this->btn_x->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_x->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_x->Location = System::Drawing::Point(317, 356);
			this->btn_x->Name = L"btn_x";
			this->btn_x->Size = System::Drawing::Size(95, 81);
			this->btn_x->TabIndex = 21;
			this->btn_x->Text = L"*";
			this->btn_x->UseVisualStyleBackColor = false;
			this->btn_x->Click += gcnew System::EventHandler(this, &MyForm::btn_x_Click);
			// 
			// btn_minpl
			// 
			this->btn_minpl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_minpl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_minpl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minpl->Location = System::Drawing::Point(115, 95);
			this->btn_minpl->Name = L"btn_minpl";
			this->btn_minpl->Size = System::Drawing::Size(95, 81);
			this->btn_minpl->TabIndex = 22;
			this->btn_minpl->Text = L"+/-";
			this->btn_minpl->UseVisualStyleBackColor = false;
			this->btn_minpl->Click += gcnew System::EventHandler(this, &MyForm::btn_minpl_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(464, 542);
			this->Controls->Add(this->btn_minpl);
			this->Controls->Add(this->btn_x);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->clr_btn);
			this->Controls->Add(this->label_out);
			this->Controls->Add(this->dot_btn);
			this->Controls->Add(this->btn_out);
			this->Controls->Add(this->nub_btn_0);
			this->Controls->Add(this->btn_fact);
			this->Controls->Add(this->nub_btn_9);
			this->Controls->Add(this->nub_btn_8);
			this->Controls->Add(this->nub_btn_7);
			this->Controls->Add(this->btn_sqrt);
			this->Controls->Add(this->nub_btn_6);
			this->Controls->Add(this->nub_btn_5);
			this->Controls->Add(this->nub_btn_4);
			this->Controls->Add(this->btn_del);
			this->Controls->Add(this->nub_btn_3);
			this->Controls->Add(this->nub_btn_2);
			this->Controls->Add(this->nub_btn_1);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
private: float first_num;
private: char user_action = ' ';
	   private: float res;
private: bool is_lout = false;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_num_click(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = safe_cast<Button^>(sender);
	if (this->label_out->Text == "0" || is_lout) {
		this->label_out->Text = button->Text;
		is_lout = false;
	}
	else
		this->label_out->Text = this->label_out->Text + button->Text;
}
private: System::Void math_action(char action) {
	this->first_num = System::Convert::ToDouble(this->label_out->Text);
	this->user_action = action;
	this-> label_out-> Text = "0";
}
private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('+');
}
private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('-');
}
private: System::Void btn_x_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('*');
}
private: System::Void btn_del_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('/');
}
	private: System::Void btn_out_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ')
			return;
		float second = System::Convert::ToDouble(this->label_out->Text);
		switch (this->user_action) {
		case '+': res = this->first_num + second; break;
		case '-': res = this->first_num - second; break;
		case'*': res = this->first_num * second; break;
		case'/':
			if (second == 0) {
				res = 0;
				MessageBox::Show(this, "Не сегодня", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				res = this-> first_num / second; 
				break;
		}
		is_lout = true;
		this->label_out->Text = System::Convert::ToString(res);

}
private: System::Void clr_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label_out -> Text = "0";
	this->first_num = 0;
	this->user_action = ' ';
	this->is_lout = false;
}
private: System::Void btn_minpl_Click(System::Object^ sender, System::EventArgs^ e) {
	float num = System::Convert::ToDouble(this->label_out->Text);
	num *= -1;
	this->label_out->Text = System::Convert::ToString(num);
}
private: System::Void dot_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = this->label_out->Text;
	if(!text->Contains(","))
	this->label_out->Text = text + ",";

}
private: System::Void btn_sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
	first_num = System::Convert::ToDouble(this->label_out->Text);
	res = sqrt(first_num);
	this->label_out->Text = System::Convert::ToString(res);
}
};
}
