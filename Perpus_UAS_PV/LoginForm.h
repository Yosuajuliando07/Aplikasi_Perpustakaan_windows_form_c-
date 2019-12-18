#pragma once
#include "MyDashboard.h"
#include "Dashboard_Kepala_Perpus.h"
namespace Perpus_UAS_PV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_username;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_password;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: Bunifu::Framework::UI::BunifuCards^  card_petugas;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_kepala_perpus;


	private: Bunifu::Framework::UI::BunifuFlatButton^  dashboard;
	private: Bunifu::Framework::UI::BunifuCards^  card_kepala;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  btn_kepala;

	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_password_kepala;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_username_kepala;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->card_kepala = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_kepala = (gcnew System::Windows::Forms::Button());
			this->tx_password_kepala = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tx_username_kepala = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->btn_kepala_perpus = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->dashboard = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->card_petugas = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tx_password = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tx_username = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->card_kepala->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->card_petugas->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(359, 610);
			this->panel1->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Papyrus", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(140, 267);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 31);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Welcome";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Papyrus", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(70, 333);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(265, 54);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Silahkan Login";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Highlight;
			this->panel3->Controls->Add(this->label3);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 575);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(359, 35);
			this->panel3->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(100, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Pemrograman Visual 2019";
			this->label3->Click += gcnew System::EventHandler(this, &LoginForm::label3_Click);
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel2->Controls->Add(this->card_kepala);
			this->panel2->Controls->Add(this->btn_kepala_perpus);
			this->panel2->Controls->Add(this->dashboard);
			this->panel2->Controls->Add(this->card_petugas);
			this->panel2->Location = System::Drawing::Point(359, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(811, 610);
			this->panel2->TabIndex = 0;
			// 
			// card_kepala
			// 
			this->card_kepala->BackColor = System::Drawing::Color::White;
			this->card_kepala->BorderRadius = 8;
			this->card_kepala->BottomSahddow = true;
			this->card_kepala->color = System::Drawing::Color::Transparent;
			this->card_kepala->Controls->Add(this->pictureBox2);
			this->card_kepala->Controls->Add(this->btn_kepala);
			this->card_kepala->Controls->Add(this->tx_password_kepala);
			this->card_kepala->Controls->Add(this->label6);
			this->card_kepala->Controls->Add(this->label7);
			this->card_kepala->Controls->Add(this->tx_username_kepala);
			this->card_kepala->LeftSahddow = true;
			this->card_kepala->Location = System::Drawing::Point(160, 109);
			this->card_kepala->Name = L"card_kepala";
			this->card_kepala->RightSahddow = true;
			this->card_kepala->ShadowDepth = 50;
			this->card_kepala->Size = System::Drawing::Size(490, 397);
			this->card_kepala->TabIndex = 12;
			this->card_kepala->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(120, 32);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(234, 62);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// btn_kepala
			// 
			this->btn_kepala->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_kepala->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_kepala->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_kepala->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_kepala->Location = System::Drawing::Point(187, 328);
			this->btn_kepala->Name = L"btn_kepala";
			this->btn_kepala->Size = System::Drawing::Size(106, 35);
			this->btn_kepala->TabIndex = 2;
			this->btn_kepala->Text = L"LOGIN";
			this->btn_kepala->UseVisualStyleBackColor = false;
			this->btn_kepala->Click += gcnew System::EventHandler(this, &LoginForm::btn_kepala_Click);
			// 
			// tx_password_kepala
			// 
			this->tx_password_kepala->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_password_kepala->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_password_kepala->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_password_kepala->BorderThickness = 3;
			this->tx_password_kepala->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_password_kepala->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_password_kepala->ForeColor = System::Drawing::Color::Black;
			this->tx_password_kepala->isPassword = true;
			this->tx_password_kepala->Location = System::Drawing::Point(78, 261);
			this->tx_password_kepala->Margin = System::Windows::Forms::Padding(4);
			this->tx_password_kepala->Name = L"tx_password_kepala";
			this->tx_password_kepala->Size = System::Drawing::Size(330, 44);
			this->tx_password_kepala->TabIndex = 8;
			this->tx_password_kepala->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label6->Location = System::Drawing::Point(200, 121);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Username";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label7->Location = System::Drawing::Point(200, 237);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 20);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Password";
			// 
			// tx_username_kepala
			// 
			this->tx_username_kepala->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_username_kepala->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_username_kepala->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_username_kepala->BorderThickness = 3;
			this->tx_username_kepala->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_username_kepala->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_username_kepala->ForeColor = System::Drawing::Color::Black;
			this->tx_username_kepala->isPassword = false;
			this->tx_username_kepala->Location = System::Drawing::Point(78, 145);
			this->tx_username_kepala->Margin = System::Windows::Forms::Padding(4);
			this->tx_username_kepala->Name = L"tx_username_kepala";
			this->tx_username_kepala->Size = System::Drawing::Size(330, 44);
			this->tx_username_kepala->TabIndex = 7;
			this->tx_username_kepala->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// btn_kepala_perpus
			// 
			this->btn_kepala_perpus->Activecolor = System::Drawing::Color::RoyalBlue;
			this->btn_kepala_perpus->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_kepala_perpus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_kepala_perpus->BorderRadius = 7;
			this->btn_kepala_perpus->ButtonText = L"KEPALA PERPUS";
			this->btn_kepala_perpus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_kepala_perpus->DisabledColor = System::Drawing::Color::Gray;
			this->btn_kepala_perpus->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_kepala_perpus->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_kepala_perpus.Iconimage")));
			this->btn_kepala_perpus->Iconimage_right = nullptr;
			this->btn_kepala_perpus->Iconimage_right_Selected = nullptr;
			this->btn_kepala_perpus->Iconimage_Selected = nullptr;
			this->btn_kepala_perpus->IconMarginLeft = 0;
			this->btn_kepala_perpus->IconMarginRight = 0;
			this->btn_kepala_perpus->IconRightVisible = true;
			this->btn_kepala_perpus->IconRightZoom = 0;
			this->btn_kepala_perpus->IconVisible = true;
			this->btn_kepala_perpus->IconZoom = 40;
			this->btn_kepala_perpus->IsTab = true;
			this->btn_kepala_perpus->Location = System::Drawing::Point(412, 61);
			this->btn_kepala_perpus->Name = L"btn_kepala_perpus";
			this->btn_kepala_perpus->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_kepala_perpus->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_kepala_perpus->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_kepala_perpus->selected = true;
			this->btn_kepala_perpus->Size = System::Drawing::Size(156, 42);
			this->btn_kepala_perpus->TabIndex = 13;
			this->btn_kepala_perpus->Text = L"KEPALA PERPUS";
			this->btn_kepala_perpus->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_kepala_perpus->Textcolor = System::Drawing::Color::White;
			this->btn_kepala_perpus->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->btn_kepala_perpus->Click += gcnew System::EventHandler(this, &LoginForm::bunifuFlatButton1_Click);
			// 
			// dashboard
			// 
			this->dashboard->Activecolor = System::Drawing::Color::RoyalBlue;
			this->dashboard->BackColor = System::Drawing::Color::DodgerBlue;
			this->dashboard->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->dashboard->BorderRadius = 7;
			this->dashboard->ButtonText = L"PETUGAS PERPUS";
			this->dashboard->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dashboard->DisabledColor = System::Drawing::Color::Gray;
			this->dashboard->Iconcolor = System::Drawing::Color::Transparent;
			this->dashboard->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dashboard.Iconimage")));
			this->dashboard->Iconimage_right = nullptr;
			this->dashboard->Iconimage_right_Selected = nullptr;
			this->dashboard->Iconimage_Selected = nullptr;
			this->dashboard->IconMarginLeft = 0;
			this->dashboard->IconMarginRight = 0;
			this->dashboard->IconRightVisible = true;
			this->dashboard->IconRightZoom = 0;
			this->dashboard->IconVisible = true;
			this->dashboard->IconZoom = 40;
			this->dashboard->IsTab = true;
			this->dashboard->Location = System::Drawing::Point(238, 61);
			this->dashboard->Name = L"dashboard";
			this->dashboard->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->dashboard->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->dashboard->OnHoverTextColor = System::Drawing::Color::White;
			this->dashboard->selected = true;
			this->dashboard->Size = System::Drawing::Size(156, 42);
			this->dashboard->TabIndex = 12;
			this->dashboard->Text = L"PETUGAS PERPUS";
			this->dashboard->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->dashboard->Textcolor = System::Drawing::Color::White;
			this->dashboard->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->dashboard->Click += gcnew System::EventHandler(this, &LoginForm::dashboard_Click);
			// 
			// card_petugas
			// 
			this->card_petugas->BackColor = System::Drawing::Color::White;
			this->card_petugas->BorderRadius = 8;
			this->card_petugas->BottomSahddow = true;
			this->card_petugas->color = System::Drawing::Color::Transparent;
			this->card_petugas->Controls->Add(this->pictureBox1);
			this->card_petugas->Controls->Add(this->button1);
			this->card_petugas->Controls->Add(this->tx_password);
			this->card_petugas->Controls->Add(this->label1);
			this->card_petugas->Controls->Add(this->label2);
			this->card_petugas->Controls->Add(this->tx_username);
			this->card_petugas->LeftSahddow = true;
			this->card_petugas->Location = System::Drawing::Point(160, 109);
			this->card_petugas->Name = L"card_petugas";
			this->card_petugas->RightSahddow = true;
			this->card_petugas->ShadowDepth = 50;
			this->card_petugas->Size = System::Drawing::Size(490, 397);
			this->card_petugas->TabIndex = 11;
			this->card_petugas->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(120, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(234, 62);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(187, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"LOGIN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// tx_password
			// 
			this->tx_password->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_password->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_password->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_password->BorderThickness = 3;
			this->tx_password->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_password->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_password->ForeColor = System::Drawing::Color::Black;
			this->tx_password->isPassword = true;
			this->tx_password->Location = System::Drawing::Point(78, 261);
			this->tx_password->Margin = System::Windows::Forms::Padding(4);
			this->tx_password->Name = L"tx_password";
			this->tx_password->Size = System::Drawing::Size(330, 44);
			this->tx_password->TabIndex = 8;
			this->tx_password->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label1->Location = System::Drawing::Point(200, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label2->Location = System::Drawing::Point(200, 237);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Password";
			// 
			// tx_username
			// 
			this->tx_username->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_username->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_username->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_username->BorderThickness = 3;
			this->tx_username->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_username->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_username->ForeColor = System::Drawing::Color::Black;
			this->tx_username->isPassword = false;
			this->tx_username->Location = System::Drawing::Point(78, 145);
			this->tx_username->Margin = System::Windows::Forms::Padding(4);
			this->tx_username->Name = L"tx_username";
			this->tx_username->Size = System::Drawing::Size(330, 44);
			this->tx_username->TabIndex = 7;
			this->tx_username->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->tx_username->OnValueChanged += gcnew System::EventHandler(this, &LoginForm::tx_username_OnValueChanged);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1170, 610);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->card_kepala->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->card_petugas->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_petugas_perpustakaan WHERE username='" + this->tx_username->Text + "' and password='" + this->tx_password->Text + "' ;", con);
				 MySqlDataReader^ dr;
				 try{
					 con->Open();
					 dr = cmd->ExecuteReader();
					 int count = 0;
					 while (dr->Read())
					 {
						 count = count + 1;
					 }
					 if (count == 1)
					 {
						 MessageBox::Show("Autentikasi Sukses");
						 MyDashboard^ geserForm = gcnew MyDashboard();
						 geserForm->Show();
						 this->Hide();
						
					 }
					 else
					 {
						 MessageBox::Show("Username dan Password Salah, coba ulangi kembali :)");
					 }
				 }
				 catch (Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
	}
	private: System::Void bunifuMaterialTextbox1_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void password_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tx_username_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bunifuFlatButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 card_kepala->Visible = true;
			 card_petugas->Visible = false;
}
private: System::Void dashboard_Click(System::Object^  sender, System::EventArgs^  e) {
			 card_kepala->Visible = false;
			 card_petugas->Visible = true;
}
private: System::Void btn_kepala_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_kepala_perpustakaan WHERE username='" + this->tx_username_kepala->Text + "' and password='" + this->tx_password_kepala->Text + "' ;", con);
			 MySqlDataReader^ dr;
			 try{
				 con->Open();
				 dr = cmd->ExecuteReader();
				 int count = 0;
				 while (dr->Read())
				 {
					 count = count + 1;
				 }
				 if (count == 1)
				 {
					 MessageBox::Show("Autentikasi Sukses");
					 Dashboard_Kepala_Perpus^ geserForm = gcnew Dashboard_Kepala_Perpus();
					 geserForm->Show();
					 this->Hide();

				 }
				 else
				 {
					 MessageBox::Show("Username dan Password Salah, coba ulangi kembali :)");
				 }
			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }

}
};
}
