#pragma once
#include <string>
#include <iostream>
namespace Calculatorn {

	using namespace std;
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button28;

	private: System::Windows::Forms::Button^ button29;

	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SteelBlue;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::LightBlue;
			this->button1->Location = System::Drawing::Point(29, 252);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 70);
			this->button1->TabIndex = 0;
			this->button1->Text = L"CE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SteelBlue;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::LightBlue;
			this->button2->Location = System::Drawing::Point(118, 252);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 70);
			this->button2->TabIndex = 1;
			this->button2->Text = L"0";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SteelBlue;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::LightBlue;
			this->button3->Location = System::Drawing::Point(207, 252);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 70);
			this->button3->TabIndex = 2;
			this->button3->Text = L",";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SteelBlue;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::LightBlue;
			this->button4->Location = System::Drawing::Point(29, 176);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 70);
			this->button4->TabIndex = 3;
			this->button4->Text = L"7";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::SteelBlue;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::LightBlue;
			this->button5->Location = System::Drawing::Point(118, 176);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(83, 70);
			this->button5->TabIndex = 4;
			this->button5->Text = L"8";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::SteelBlue;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button6->FlatAppearance->BorderSize = 2;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::LightBlue;
			this->button6->Location = System::Drawing::Point(207, 176);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(83, 70);
			this->button6->TabIndex = 5;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::SteelBlue;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button7->FlatAppearance->BorderSize = 2;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::LightBlue;
			this->button7->Location = System::Drawing::Point(29, 100);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(83, 70);
			this->button7->TabIndex = 6;
			this->button7->Text = L"4";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::SteelBlue;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button8->FlatAppearance->BorderSize = 2;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::LightBlue;
			this->button8->Location = System::Drawing::Point(118, 100);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(83, 70);
			this->button8->TabIndex = 7;
			this->button8->Text = L"5";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::SteelBlue;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button9->FlatAppearance->BorderSize = 2;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::LightBlue;
			this->button9->Location = System::Drawing::Point(207, 100);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(83, 70);
			this->button9->TabIndex = 8;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::SteelBlue;
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button10->FlatAppearance->BorderSize = 2;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::LightBlue;
			this->button10->Location = System::Drawing::Point(29, 24);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(83, 70);
			this->button10->TabIndex = 9;
			this->button10->Text = L"1";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::SteelBlue;
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button11->FlatAppearance->BorderSize = 2;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::LightBlue;
			this->button11->Location = System::Drawing::Point(118, 24);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(83, 70);
			this->button11->TabIndex = 10;
			this->button11->Text = L"2";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::SteelBlue;
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button12->FlatAppearance->BorderSize = 2;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::LightBlue;
			this->button12->Location = System::Drawing::Point(207, 24);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(83, 70);
			this->button12->TabIndex = 11;
			this->button12->Text = L"3";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::SteelBlue;
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button13->FlatAppearance->BorderSize = 2;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::LightBlue;
			this->button13->Location = System::Drawing::Point(296, 24);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(83, 70);
			this->button13->TabIndex = 12;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::SteelBlue;
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button14->FlatAppearance->BorderSize = 2;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::LightBlue;
			this->button14->Location = System::Drawing::Point(296, 100);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(83, 70);
			this->button14->TabIndex = 13;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::SteelBlue;
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button15->FlatAppearance->BorderSize = 2;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Fuchsia;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::LightBlue;
			this->button15->Location = System::Drawing::Point(296, 176);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(83, 70);
			this->button15->TabIndex = 14;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::SteelBlue;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button16->FlatAppearance->BorderSize = 2;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::LightBlue;
			this->button16->Location = System::Drawing::Point(296, 252);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(83, 70);
			this->button16->TabIndex = 15;
			this->button16->Text = L"/";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::SteelBlue;
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button17->FlatAppearance->BorderSize = 2;
			this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::Color::LightBlue;
			this->button17->Location = System::Drawing::Point(385, 100);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(83, 70);
			this->button17->TabIndex = 16;
			this->button17->Text = L"(";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::SteelBlue;
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button18->FlatAppearance->BorderSize = 2;
			this->button18->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Fuchsia;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::Color::LightBlue;
			this->button18->Location = System::Drawing::Point(385, 176);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(83, 70);
			this->button18->TabIndex = 17;
			this->button18->Text = L")";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::SteelBlue;
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button19->FlatAppearance->BorderSize = 2;
			this->button19->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::Color::LightBlue;
			this->button19->Location = System::Drawing::Point(385, 252);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(83, 70);
			this->button19->TabIndex = 18;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(363, 205);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(246, 46);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::SteelBlue;
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button20->FlatAppearance->BorderSize = 2;
			this->button20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::Color::LightBlue;
			this->button20->Location = System::Drawing::Point(385, 24);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(83, 70);
			this->button20->TabIndex = 20;
			this->button20->Text = L"<-";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(634, 205);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(21, 17);
			this->listBox1->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightBlue;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(634, 205);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(229, 46);
			this->textBox2->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::LightBlue;
			this->label1->Location = System::Drawing::Point(366, 177);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 25);
			this->label1->TabIndex = 23;
			this->label1->Text = L"������� ���������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::LightBlue;
			this->label2->Location = System::Drawing::Point(705, 178);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 25);
			this->label2->TabIndex = 24;
			this->label2->Text = L"�����";
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::DarkViolet;
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button21->FlatAppearance->BorderSize = 2;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::Color::LightBlue;
			this->button21->Location = System::Drawing::Point(1239, 1);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(123, 86);
			this->button21->TabIndex = 25;
			this->button21->Text = L"�����";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button22->FlatAppearance->BorderSize = 2;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(1123, 279);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(114, 103);
			this->button22->TabIndex = 26;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Visible = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button23->FlatAppearance->BorderSize = 2;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(1003, 497);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(114, 103);
			this->button23->TabIndex = 27;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Visible = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.BackgroundImage")));
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->FlatAppearance->BorderColor = System::Drawing::Color::DarkOrange;
			this->button24->FlatAppearance->BorderSize = 2;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(1123, 497);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(114, 103);
			this->button24->TabIndex = 28;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Visible = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button25->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button25->FlatAppearance->BorderSize = 2;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(1003, 388);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(114, 103);
			this->button25->TabIndex = 29;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Visible = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::LightBlue;
			this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.BackgroundImage")));
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button26->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button26->FlatAppearance->BorderSize = 2;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(1003, 279);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(114, 103);
			this->button26->TabIndex = 30;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Visible = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.BackgroundImage")));
			this->button27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button27->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->button27->FlatAppearance->BorderSize = 2;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Location = System::Drawing::Point(1123, 388);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(114, 103);
			this->button27->TabIndex = 31;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Visible = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::LightBlue;
			this->label3->Location = System::Drawing::Point(1057, 241);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 25);
			this->label3->TabIndex = 32;
			this->label3->Text = L"��� �����";
			this->label3->Visible = false;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::DarkViolet;
			this->button28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.BackgroundImage")));
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button28->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button28->FlatAppearance->BorderSize = 2;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->ForeColor = System::Drawing::Color::SkyBlue;
			this->button28->Location = System::Drawing::Point(700, 626);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(163, 45);
			this->button28->TabIndex = 33;
			this->button28->Text = L"�������";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::DarkViolet;
			this->button29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button29.BackgroundImage")));
			this->button29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button29->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button29->FlatAppearance->BorderSize = 2;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->ForeColor = System::Drawing::Color::SkyBlue;
			this->button29->Location = System::Drawing::Point(363, 626);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(179, 45);
			this->button29->TabIndex = 35;
			this->button29->Text = L"������� �����";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::DarkViolet;
			this->button30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button30.BackgroundImage")));
			this->button30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button30->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button30->FlatAppearance->BorderSize = 2;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button30->ForeColor = System::Drawing::Color::LightBlue;
			this->button30->Location = System::Drawing::Point(548, 626);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(146, 45);
			this->button30->TabIndex = 37;
			this->button30->Text = L"��������";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button20);
			this->panel1->Controls->Add(this->button19);
			this->panel1->Controls->Add(this->button18);
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel1->ForeColor = System::Drawing::Color::LightBlue;
			this->panel1->Location = System::Drawing::Point(363, 276);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 344);
			this->panel1->TabIndex = 38;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(90, 36);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(221, 268);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 39;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(90, 36);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(221, 268);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 40;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(90, 36);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(221, 268);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 41;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(90, 36);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(221, 268);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 42;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::White;
			this->button31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button31.BackgroundImage")));
			this->button31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button31->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button31->FlatAppearance->BorderSize = 2;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->ForeColor = System::Drawing::Color::SkyBlue;
			this->button31->Location = System::Drawing::Point(122, 626);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(158, 45);
			this->button31->TabIndex = 43;
			this->button31->Text = L"�������� ������";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::LightBlue;
			this->label4->Location = System::Drawing::Point(146, 330);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 25);
			this->label4->TabIndex = 44;
			this->label4->Text = L"��� �����";
			this->label4->Visible = false;
			// 
			// button32
			// 
			this->button32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button32.BackgroundImage")));
			this->button32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button32->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button32->FlatAppearance->BorderSize = 2;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Location = System::Drawing::Point(99, 365);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(86, 113);
			this->button32->TabIndex = 45;
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Visible = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.BackgroundImage")));
			this->button33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button33->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button33->FlatAppearance->BorderSize = 2;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Location = System::Drawing::Point(203, 365);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(86, 113);
			this->button33->TabIndex = 46;
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Visible = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click_1);
			// 
			// button34
			// 
			this->button34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button34.BackgroundImage")));
			this->button34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button34->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button34->FlatAppearance->BorderSize = 2;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Location = System::Drawing::Point(100, 492);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(85, 113);
			this->button34->TabIndex = 47;
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Visible = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click_1);
			// 
			// button35
			// 
			this->button35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button35.BackgroundImage")));
			this->button35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button35->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button35->FlatAppearance->BorderSize = 2;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Location = System::Drawing::Point(204, 492);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(85, 113);
			this->button35->TabIndex = 48;
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Visible = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click_1);
			// 
			// button36
			// 
			this->button36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button36.BackgroundImage")));
			this->button36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button36->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->button36->FlatAppearance->BorderSize = 2;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button36->ForeColor = System::Drawing::Color::LightBlue;
			this->button36->Location = System::Drawing::Point(1045, 619);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(162, 45);
			this->button36->TabIndex = 49;
			this->button36->Text = L"�������� ���� ������";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1386, 788);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "1";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "2";
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "3";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "4";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "5";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "6";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "7";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "8";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "9";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "0";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//if (!textBox1->Text->Contains(","))
		textBox1->Text = textBox1->Text + ",";
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "+";
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "-";
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "*";
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "/";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length > 0)
			textBox1->Text = textBox1->Text->Substring(0, textBox1->Text->Length - 1);
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "(";
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += ")";
	}
		   // ������� ������ ������
	private: System::String^ search(System::String^ text) {
		bool open = false; bool close = false;
		int open_pos = -1; int close_pos = -1;
		System::String^ text1 = "";
		for (int i = 0; i < text->Length; i++) {
			if (text[i] == '(') {
				open = true;
				open_pos = i;
			}
			if (text[i] == ')') {
				if (open) {
					close = true;
					close_pos = i;
					String^ res = calculate(text->Substring(open_pos + 1, close_pos - open_pos - 1));
					text = text->Remove(open_pos, close_pos - open_pos + 1);
					text = text->Insert(open_pos, res);
					i = 0;
					for (int j = 0; j < text->Length; j++)
						if (j != text->Length - 1) {
							if ((text[j] == '+') && (text[j + 1] == '-')) {
								for (int f = j + 1; f < text->Length; f++)
									text1 += text[f];
								text = text->Remove(j);
								text += text1;
							}
						}
					for (int j = 0; j < text->Length; j++)
						if (j != text->Length - 1) {
							if ((text[j] == '-') && (text[j + 1] == '-')) {
								text1 = "+";
								for (int f = j + 2; f < text->Length; f++)
									text1 += text[f];
								text = text->Remove(j);
								text += text1;
							}
						}
					open = false; close = false;
					open_pos = -1; close_pos = -1;
				}
				else return "������: �� �� ������� ������ ";
			}
		}
		if (open && !close)
			return "������: �� �� ������� ������";
		for (int i = 0; i < text->Length; i++) {
			if (text[i] == '(')
				search(text);
		}
		return calculate(text);
	}
		   // ������� ��������
	private: System::String^ calculate(System::String^ text) {
		listBox1->Items->Clear();
		System::String^ tmp = "";
		for (int i = 0; i < text->Length; i++) {

			if (text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/')
			{
				listBox1->Items->Add(tmp);
				listBox1->Items->Add(text[i]);
				tmp = "";
			}
			else tmp += text[i];
		}
		listBox1->Items->Add(tmp);
		for (int i = 0; i < listBox1->Items->Count; i++) {
			if (listBox1->Items[i]->ToString() == "*" || listBox1->Items[i]->ToString() == "/") {
				if (i == 0 || i == listBox1->Items->Count - 1)
					return "������";
				System::String^ res = calc1(listBox1->Items[i - 1]->ToString(), listBox1->Items[i]->ToString(), listBox1->Items[i + 1]->ToString());
				if (res == "������") return "������";
				listBox1->Items->RemoveAt(i - 1);
				listBox1->Items->RemoveAt(i - 1);
				listBox1->Items->RemoveAt(i - 1);
				listBox1->Items->Insert(i - 1, res);
				i--;
			}
		}
		for (int i = 0; i < listBox1->Items->Count; i++) {
			if (listBox1->Items[i]->ToString() == "+" || listBox1->Items[i]->ToString() == "-") {
				if (i == 0 || i == listBox1->Items->Count - 1)
					return "������";
				if ((listBox1->Items[i - 1]->ToString() == "") && (listBox1->Items[i]->ToString() == "-")) {
					System::String^ res1 = "-" + listBox1->Items[i + 1]->ToString();
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->Insert(i - 1, res1);
					i = 0;
				}
				else {
					System::String^ res = calc1(listBox1->Items[i - 1]->ToString(), listBox1->Items[i]->ToString(), listBox1->Items[i + 1]->ToString());
					if (res == "������") return "������";
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->Insert(i - 1, res);
					i = 0;
				}
			}
		}
		return listBox1->Items[0]->ToString();
	}
		   // ������ ���������� ��������
	private: System::String^ calc1(System::String^ n1, System::String^ d, System::String^ n2) {
		try {
			double number1 = Convert::ToDouble(n1);
			double number2 = Convert::ToDouble(n2);
			if (d == "/") {
				if (number2 != 0) {
					return (number1 / number2).ToString();
				}
				else return "������. �� ���� ������ ������";
			}
			if (d == "*") {
				return (number1 * number2).ToString();
			}
			if (d == "+")
			{
				return (number1 + number2).ToString();
			}
			if (d == "-")
			{
				return (number1 - number2).ToString();
			}
		}
		catch (SystemException^ e1) {
			return "������";
		}
		return "������";
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		search(textBox1->Text);
	}
		   System::String^ c; System::String^ c1;
	private: System::Void button19_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->Text->Contains("-"))
			textBox2->Text = "-" + search(textBox1->Text);
		else textBox2->Text = search(textBox1->Text);
		c = textBox1->Text; c1 = textBox2->Text;
	}
		   // ���������
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->FlatAppearance->BorderColor = Color::Red;
		button1->ForeColor = Color::Red;
		button2->FlatAppearance->BorderColor = Color::Red;
		button2->ForeColor = Color::Red;
		button3->FlatAppearance->BorderColor = Color::Red;
		button3->ForeColor = Color::Red;
		button4->FlatAppearance->BorderColor = Color::Red;
		button4->ForeColor = Color::Red;
		button5->FlatAppearance->BorderColor = Color::Red;
		button5->ForeColor = Color::Red;
		button6->FlatAppearance->BorderColor = Color::Red;
		button6->ForeColor = Color::Red;
		button7->FlatAppearance->BorderColor = Color::Red;
		button7->ForeColor = Color::Red;
		button8->FlatAppearance->BorderColor = Color::Red;
		button8->ForeColor = Color::Red;
		button9->FlatAppearance->BorderColor = Color::Red;
		button9->ForeColor = Color::Red;
		button10->FlatAppearance->BorderColor = Color::Red;
		button10->ForeColor = Color::Red;
		button11->FlatAppearance->BorderColor = Color::Red;
		button11->ForeColor = Color::Red;
		button12->FlatAppearance->BorderColor = Color::Red;
		button12->ForeColor = Color::Red;
		button13->FlatAppearance->BorderColor = Color::Red;
		button13->ForeColor = Color::Red;
		button14->FlatAppearance->BorderColor = Color::Red;
		button14->ForeColor = Color::Red;
		button15->FlatAppearance->BorderColor = Color::Red;
		button15->ForeColor = Color::Red;
		button16->FlatAppearance->BorderColor = Color::Red;
		button16->ForeColor = Color::Red;
		button17->FlatAppearance->BorderColor = Color::Red;
		button17->ForeColor = Color::Red;
		button18->FlatAppearance->BorderColor = Color::Red;
		button18->ForeColor = Color::Red;
		button19->FlatAppearance->BorderColor = Color::Red;
		button19->ForeColor = Color::Red;
		button20->FlatAppearance->BorderColor = Color::Red;
		button20->ForeColor = Color::Red;
		button29->FlatAppearance->BorderColor = Color::Red;
		button29->ForeColor = Color::Red;
		button30->FlatAppearance->BorderColor = Color::Red;
		button30->ForeColor = Color::Red;
		button28->FlatAppearance->BorderColor = Color::Red;
		button28->ForeColor = Color::Red;
		button21->FlatAppearance->BorderColor = Color::Red;
		button21->ForeColor = Color::Red;
		button31->FlatAppearance->BorderColor = Color::Red;
		button31->ForeColor = Color::Red;
		button36->FlatAppearance->BorderColor = Color::Red;
		button36->ForeColor = Color::Red;
		
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->FlatAppearance->BorderColor = Color::Orange;
		button1->ForeColor = Color::Orange;
		button2->FlatAppearance->BorderColor = Color::Orange;
		button2->ForeColor = Color::Orange;
		button3->FlatAppearance->BorderColor = Color::Orange;
		button3->ForeColor = Color::Orange;
		button4->FlatAppearance->BorderColor = Color::Orange;
		button4->ForeColor = Color::Orange;
		button5->FlatAppearance->BorderColor = Color::Orange;
		button5->ForeColor = Color::Orange;
		button6->FlatAppearance->BorderColor = Color::Orange;
		button6->ForeColor = Color::Orange;
		button7->FlatAppearance->BorderColor = Color::Orange;
		button7->ForeColor = Color::Orange;
		button8->FlatAppearance->BorderColor = Color::Orange;
		button8->ForeColor = Color::Orange;
		button9->FlatAppearance->BorderColor = Color::Orange;
		button9->ForeColor = Color::Orange;
		button10->FlatAppearance->BorderColor = Color::Orange;
		button10->ForeColor = Color::Orange;
		button11->FlatAppearance->BorderColor = Color::Orange;
		button11->ForeColor = Color::Orange;
		button12->FlatAppearance->BorderColor = Color::Orange;
		button12->ForeColor = Color::Orange;
		button13->FlatAppearance->BorderColor = Color::Orange;
		button13->ForeColor = Color::Orange;
		button14->FlatAppearance->BorderColor = Color::Orange;
		button14->ForeColor = Color::Orange;
		button15->FlatAppearance->BorderColor = Color::Orange;
		button15->ForeColor = Color::Orange;
		button16->FlatAppearance->BorderColor = Color::Orange;
		button16->ForeColor = Color::Orange;
		button17->FlatAppearance->BorderColor = Color::Orange;
		button17->ForeColor = Color::Orange;
		button18->FlatAppearance->BorderColor = Color::Orange;
		button18->ForeColor = Color::Orange;
		button19->FlatAppearance->BorderColor = Color::Orange;
		button19->ForeColor = Color::Orange;
		button20->FlatAppearance->BorderColor = Color::Orange;
		button20->ForeColor = Color::Orange;
		button29->FlatAppearance->BorderColor = Color::Orange;
		button29->ForeColor = Color::Orange;
		button30->FlatAppearance->BorderColor = Color::Orange;
		button30->ForeColor = Color::Orange;
		button28->FlatAppearance->BorderColor = Color::Orange;
		button28->ForeColor = Color::Orange;
		button21->FlatAppearance->BorderColor = Color::Orange;
		button21->ForeColor = Color::Orange;
		button31->FlatAppearance->BorderColor = Color::Orange;
		button31->ForeColor = Color::Orange;
		button36->FlatAppearance->BorderColor = Color::Orange;
		button36->ForeColor = Color::Orange;
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->FlatAppearance->BorderColor = Color::Green;
		button1->ForeColor = Color::Green;
		button2->FlatAppearance->BorderColor = Color::Green;
		button2->ForeColor = Color::Green;
		button3->FlatAppearance->BorderColor = Color::Green;
		button3->ForeColor = Color::Green;
		button4->FlatAppearance->BorderColor = Color::Green;
		button4->ForeColor = Color::Green;
		button5->FlatAppearance->BorderColor = Color::Green;
		button5->ForeColor = Color::Green;
		button6->FlatAppearance->BorderColor = Color::Green;
		button6->ForeColor = Color::Green;
		button7->FlatAppearance->BorderColor = Color::Green;
		button7->ForeColor = Color::Green;
		button8->FlatAppearance->BorderColor = Color::Green;
		button8->ForeColor = Color::Green;
		button9->FlatAppearance->BorderColor = Color::Green;
		button9->ForeColor = Color::Green;
		button10->FlatAppearance->BorderColor = Color::Green;
		button10->ForeColor = Color::Green;
		button11->FlatAppearance->BorderColor = Color::Green;
		button11->ForeColor = Color::Green;
		button12->FlatAppearance->BorderColor = Color::Green;
		button12->ForeColor = Color::Green;
		button13->FlatAppearance->BorderColor = Color::Green;
		button13->ForeColor = Color::Green;
		button14->FlatAppearance->BorderColor = Color::Green;
		button14->ForeColor = Color::Green;
		button15->FlatAppearance->BorderColor = Color::Green;
		button15->ForeColor = Color::Green;
		button16->FlatAppearance->BorderColor = Color::Green;
		button16->ForeColor = Color::Green;
		button17->FlatAppearance->BorderColor = Color::Green;
		button17->ForeColor = Color::Green;
		button18->FlatAppearance->BorderColor = Color::Green;
		button18->ForeColor = Color::Green;
		button19->FlatAppearance->BorderColor = Color::Green;
		button19->ForeColor = Color::Green;
		button20->FlatAppearance->BorderColor = Color::Green;
		button20->ForeColor = Color::Green;
		button29->FlatAppearance->BorderColor = Color::Green;
		button29->ForeColor = Color::Green;
		button30->FlatAppearance->BorderColor = Color::Green;
		button30->ForeColor = Color::Green;
		button28->FlatAppearance->BorderColor = Color::Green;
		button28->ForeColor = Color::Green;
		button21->FlatAppearance->BorderColor = Color::Green;
		button21->ForeColor = Color::Green;
		button31->FlatAppearance->BorderColor = Color::Green;
		button31->ForeColor = Color::Green;
		button36->FlatAppearance->BorderColor = Color::Green;
		button36->ForeColor = Color::Green;
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->FlatAppearance->BorderColor = Color::LightBlue;
		button1->ForeColor = Color::LightBlue;
		button2->FlatAppearance->BorderColor = Color::LightBlue;
		button2->ForeColor = Color::LightBlue;
		button3->FlatAppearance->BorderColor = Color::LightBlue;
		button3->ForeColor = Color::LightBlue;
		button4->FlatAppearance->BorderColor = Color::LightBlue;
		button4->ForeColor = Color::LightBlue;
		button5->FlatAppearance->BorderColor = Color::LightBlue;
		button5->ForeColor = Color::LightBlue;
		button6->FlatAppearance->BorderColor = Color::LightBlue;
		button6->ForeColor = Color::LightBlue;
		button7->FlatAppearance->BorderColor = Color::LightBlue;
		button7->ForeColor = Color::LightBlue;
		button8->FlatAppearance->BorderColor = Color::LightBlue;
		button8->ForeColor = Color::LightBlue;
		button9->FlatAppearance->BorderColor = Color::LightBlue;
		button9->ForeColor = Color::LightBlue;
		button10->FlatAppearance->BorderColor = Color::LightBlue;
		button10->ForeColor = Color::LightBlue;
		button11->FlatAppearance->BorderColor = Color::LightBlue;
		button11->ForeColor = Color::LightBlue;
		button12->FlatAppearance->BorderColor = Color::LightBlue;
		button12->ForeColor = Color::LightBlue;
		button13->FlatAppearance->BorderColor = Color::LightBlue;
		button13->ForeColor = Color::LightBlue;
		button14->FlatAppearance->BorderColor = Color::LightBlue;
		button14->ForeColor = Color::LightBlue;
		button15->FlatAppearance->BorderColor = Color::LightBlue;
		button15->ForeColor = Color::LightBlue;
		button16->FlatAppearance->BorderColor = Color::LightBlue;
		button16->ForeColor = Color::LightBlue;
		button17->FlatAppearance->BorderColor = Color::LightBlue;
		button17->ForeColor = Color::LightBlue;
		button18->FlatAppearance->BorderColor = Color::LightBlue;
		button18->ForeColor = Color::LightBlue;
		button19->FlatAppearance->BorderColor = Color::LightBlue;
		button19->ForeColor = Color::LightBlue;
		button20->FlatAppearance->BorderColor = Color::LightBlue;
		button20->ForeColor = Color::LightBlue;
		button29->FlatAppearance->BorderColor = Color::LightBlue;
		button29->ForeColor = Color::LightBlue;
		button30->FlatAppearance->BorderColor = Color::LightBlue;
		button30->ForeColor = Color::LightBlue;
		button28->FlatAppearance->BorderColor = Color::LightBlue;
		button28->ForeColor = Color::LightBlue;
		button21->FlatAppearance->BorderColor = Color::LightBlue;
		button21->ForeColor = Color::LightBlue;
		button31->FlatAppearance->BorderColor = Color::LightBlue;
		button31->ForeColor = Color::LightBlue;
		button36->FlatAppearance->BorderColor = Color::LightBlue;
		button36->ForeColor = Color::LightBlue;
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->FlatAppearance->BorderColor = Color::Yellow;
		button1->ForeColor = Color::Yellow;
		button2->FlatAppearance->BorderColor = Color::Yellow;
		button2->ForeColor = Color::Yellow;
		button3->FlatAppearance->BorderColor = Color::Yellow;
		button3->ForeColor = Color::Yellow;
		button4->FlatAppearance->BorderColor = Color::Yellow;
		button4->ForeColor = Color::Yellow;
		button5->FlatAppearance->BorderColor = Color::Yellow;
		button5->ForeColor = Color::Yellow;
		button6->FlatAppearance->BorderColor = Color::Yellow;
		button6->ForeColor = Color::Yellow;
		button7->FlatAppearance->BorderColor = Color::Yellow;
		button7->ForeColor = Color::Yellow;
		button8->FlatAppearance->BorderColor = Color::Yellow;
		button8->ForeColor = Color::Yellow;
		button9->FlatAppearance->BorderColor = Color::Yellow;
		button9->ForeColor = Color::Yellow;
		button10->FlatAppearance->BorderColor = Color::Yellow;
		button10->ForeColor = Color::Yellow;
		button11->FlatAppearance->BorderColor = Color::Yellow;
		button11->ForeColor = Color::Yellow;
		button12->FlatAppearance->BorderColor = Color::Yellow;
		button12->ForeColor = Color::Yellow;
		button13->FlatAppearance->BorderColor = Color::Yellow;
		button13->ForeColor = Color::Yellow;
		button14->FlatAppearance->BorderColor = Color::Yellow;
		button14->ForeColor = Color::Yellow;
		button15->FlatAppearance->BorderColor = Color::Yellow;
		button15->ForeColor = Color::Yellow;
		button16->FlatAppearance->BorderColor = Color::Yellow;
		button16->ForeColor = Color::Yellow;
		button17->FlatAppearance->BorderColor = Color::Yellow;
		button17->ForeColor = Color::Yellow;
		button18->FlatAppearance->BorderColor = Color::Yellow;
		button18->ForeColor = Color::Yellow;
		button19->FlatAppearance->BorderColor = Color::Yellow;
		button19->ForeColor = Color::Yellow;
		button20->FlatAppearance->BorderColor = Color::Yellow;
		button20->ForeColor = Color::Yellow;
		button29->FlatAppearance->BorderColor = Color::Yellow;
		button29->ForeColor = Color::Yellow;
		button30->FlatAppearance->BorderColor = Color::Yellow;
		button30->ForeColor = Color::Yellow;
		button28->FlatAppearance->BorderColor = Color::Yellow;
		button28->ForeColor = Color::Yellow;
		button21->FlatAppearance->BorderColor = Color::Yellow;
		button21->ForeColor = Color::Yellow;
		button31->FlatAppearance->BorderColor = Color::Yellow;
		button31->ForeColor = Color::Yellow;
		button36->FlatAppearance->BorderColor = Color::Yellow;
		button36->ForeColor = Color::Yellow;
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->FlatAppearance->BorderColor = Color::Beige;
		button1->ForeColor = Color::Beige;
		button2->FlatAppearance->BorderColor = Color::Beige;
		button2->ForeColor = Color::Beige;
		button3->FlatAppearance->BorderColor = Color::Beige;
		button3->ForeColor = Color::Beige;
		button4->FlatAppearance->BorderColor = Color::Beige;
		button4->ForeColor = Color::Beige;
		button5->FlatAppearance->BorderColor = Color::Beige;
		button5->ForeColor = Color::Beige;
		button6->FlatAppearance->BorderColor = Color::Beige;
		button6->ForeColor = Color::Beige;
		button7->FlatAppearance->BorderColor = Color::Beige;
		button7->ForeColor = Color::Beige;
		button8->FlatAppearance->BorderColor = Color::Beige;
		button8->ForeColor = Color::Beige;
		button9->FlatAppearance->BorderColor = Color::Beige;
		button9->ForeColor = Color::Beige;
		button10->FlatAppearance->BorderColor = Color::Beige;
		button10->ForeColor = Color::Beige;
		button11->FlatAppearance->BorderColor = Color::Beige;
		button11->ForeColor = Color::Beige;
		button12->FlatAppearance->BorderColor = Color::Beige;
		button12->ForeColor = Color::Beige;
		button13->FlatAppearance->BorderColor = Color::Beige;
		button13->ForeColor = Color::Beige;
		button14->FlatAppearance->BorderColor = Color::Beige;
		button14->ForeColor = Color::Beige;
		button15->FlatAppearance->BorderColor = Color::Beige;
		button15->ForeColor = Color::Beige;
		button16->FlatAppearance->BorderColor = Color::Beige;
		button16->ForeColor = Color::Beige;
		button17->FlatAppearance->BorderColor = Color::Beige;
		button17->ForeColor = Color::Beige;
		button18->FlatAppearance->BorderColor = Color::Beige;
		button18->ForeColor = Color::Beige;
		button19->FlatAppearance->BorderColor = Color::Beige;
		button19->ForeColor = Color::Beige;
		button20->FlatAppearance->BorderColor = Color::Beige;
		button20->ForeColor = Color::Beige;
		button29->FlatAppearance->BorderColor = Color::Beige;
		button29->ForeColor = Color::Beige;
		button30->FlatAppearance->BorderColor = Color::Beige;
		button30->ForeColor = Color::Beige;
		button28->FlatAppearance->BorderColor = Color::Beige;
		button28->ForeColor = Color::Beige;
		button21->FlatAppearance->BorderColor = Color::Beige;
		button21->ForeColor = Color::Beige;
		button31->FlatAppearance->BorderColor = Color::Beige;
		button31->ForeColor = Color::Beige;
		button36->FlatAppearance->BorderColor = Color::Beige;
		button36->ForeColor = Color::Beige;
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("�������� �������������!\n� ������ ���� ���-19-1�", "Calculator 2020 by vanchousssss");
	}
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(c1, "������� �����");
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->Text->Contains("-"))
			textBox2->Text = "-" + search(textBox1->Text);
		else textBox2->Text = search(textBox1->Text);
		c = textBox1->Text; c1 = textBox2->Text;
	}
	private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Visible) {
		label4->Visible = false;
		button32->Visible = false;
		button33->Visible = false;
		button34->Visible = false;
		button35->Visible = false;
	}
	else {
		label4->Visible = true;
		button32->Visible = true;
		button33->Visible = true;
		button34->Visible = true;
		button35->Visible = true;
	}

	
}
	private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Visible = true;
	pictureBox2->Visible = false;
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	}
	private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Visible = false;
	pictureBox2->Visible = true;
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	}
	private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Visible = false;
	pictureBox2->Visible = false;
	pictureBox3->Visible = true;
	pictureBox4->Visible = false;
	}
	private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Visible = false;
	pictureBox2->Visible = false;
	pictureBox3->Visible = false;
	pictureBox4->Visible = true;
	}

private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label3->Visible) {
		label3->Visible = false;
		button22->Visible = false;
		button23->Visible = false;
		button24->Visible = false;
		button25->Visible = false;
		button26->Visible = false;
		button27->Visible = false;
	}
	else {
		label3->Visible = true;
		button22->Visible = true;
		button23->Visible = true;
		button24->Visible = true;
		button25->Visible = true;
		button26->Visible = true;
		button27->Visible = true;
	}
}

private: System::Void button35_Click_1(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Visible = false;
	pictureBox2->Visible = false;
	pictureBox3->Visible = false;
	pictureBox4->Visible = true;
}
private: System::Void button34_Click_1(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Visible = false;
	pictureBox2->Visible = false;
	pictureBox3->Visible = true;
	pictureBox4->Visible = false;

}
private: System::Void button33_Click_1(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Visible = false;
	pictureBox2->Visible = true;
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
}
};
};