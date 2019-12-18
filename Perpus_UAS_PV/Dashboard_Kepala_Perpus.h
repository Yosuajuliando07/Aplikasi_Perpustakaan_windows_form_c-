#pragma once

namespace Perpus_UAS_PV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Dashboard_Kepala_Perpus
	/// </summary>
	public ref class Dashboard_Kepala_Perpus : public System::Windows::Forms::Form
	{
	public:
		Dashboard_Kepala_Perpus(void)
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
		~Dashboard_Kepala_Perpus()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  pnl_sidebar;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_klik_list_petugas;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_klik_list_buku;


	protected:

	protected:



	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_klik_list_prodi;

	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_klik_list_jurusan;

	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_klik_list_anggota;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_klik_dashboard;


	private: Bunifu::Framework::UI::BunifuSeparator^  bunifuSeparator1;

	private: System::Windows::Forms::Panel^  pnl_header;
	private: System::Windows::Forms::Panel^  pnl_list_petugas;


	private: Bunifu::Framework::UI::BunifuCards^  CardsListPetugas;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_export_list_petugas;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_clear_search_list_petugas;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_search_list_petugas;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_search_list_petugas;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_reload_list_petugas;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  DataGridListPetugas;
	private: Bunifu::Framework::UI::BunifuCards^  CardsFormPetugas;
	private: System::Windows::Forms::Label^  lb_password_petugas;
	private: System::Windows::Forms::Label^  lb_username_petugas;

	private: System::Windows::Forms::Label^  lb_id_petugas;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_password_petugas;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_username_petugas;

	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_id_petugas;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_insert_petugas;
	private: Bunifu::Framework::UI::BunifuThinButton2^  btn_add_petugas;
	private: Bunifu::Framework::UI::BunifuThinButton2^  btn_delete_petugas;
	private: Bunifu::Framework::UI::BunifuThinButton2^  btn_update_petugas;
	private: Bunifu::Framework::UI::BunifuThinButton2^  btn_clear_petugas;
	private: System::Windows::Forms::Panel^  pnl_list_anggota;
	private: Bunifu::Framework::UI::BunifuCards^  CardsListAnggota;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_export_list_anggota;



	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_clear_search_list_anggota;

	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_search_list_anggota;

	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_search_list_anggota;

	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_reload_list_anggota;

	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  DataGridListAnggota;
	private: System::Windows::Forms::Panel^  pnl_list_buku;
	private: Bunifu::Framework::UI::BunifuCards^  CardsListBuku;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_export_list_buku;



	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_clear_search_list_buku;

	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_search_list_buku;

	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_search_list_buku;

	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_reload_list_buku;

	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  DataGridListBuku;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_klik_list_peminjaman;
	private: System::Windows::Forms::Panel^  pnl_list_peminjaman;
	private: Bunifu::Framework::UI::BunifuCards^  CardsListPeminjaman;

	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_export_list_peminjaman;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_clear_search_list_peminjaman;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_search_list_peminjaman;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_search_list_peminjaman;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_reload_list_peminjaman;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  DataGridListPeminjaman;
private: System::Windows::Forms::Panel^  pnl_list_jurusan;
private: Bunifu::Framework::UI::BunifuCards^  CardsListJurusan;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_export_list_jurusan;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_clear_search_list_jurusan;
private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_search_list_jurusan;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_search_list_jurusan;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_reload_list_jurusan;
private: Bunifu::Framework::UI::BunifuCustomDataGrid^  DataGridListJurusan;
private: System::Windows::Forms::Panel^  pnl_list_prodi;
private: Bunifu::Framework::UI::BunifuCards^  CardsListProdi;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_export_list_prodi;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_clear_search_list_prodi;
private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_search_list_prodi;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_search_list_prodi;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_reload_list_prodi;
private: Bunifu::Framework::UI::BunifuCustomDataGrid^  DataGridListProdi;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_klik_exit;
private: System::Windows::Forms::Panel^  pnl_dashboard;
private: Bunifu::Framework::UI::BunifuCards^  CardsDashboard;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_reload_chart;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
private: System::Windows::Forms::BindingSource^  bindingSource1;

























	private: System::ComponentModel::IContainer^  components;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard_Kepala_Perpus::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle25 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle26 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle27 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle28 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle29 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle30 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pnl_sidebar = (gcnew System::Windows::Forms::Panel());
			this->btn_klik_exit = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_klik_list_peminjaman = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_klik_list_petugas = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_klik_list_buku = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_klik_list_prodi = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_klik_list_jurusan = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_klik_list_anggota = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_klik_dashboard = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->pnl_header = (gcnew System::Windows::Forms::Panel());
			this->pnl_list_petugas = (gcnew System::Windows::Forms::Panel());
			this->CardsListPetugas = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_export_list_petugas = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_clear_search_list_petugas = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->tx_search_list_petugas = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->btn_search_list_petugas = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_reload_list_petugas = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->DataGridListPetugas = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->CardsFormPetugas = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_clear_petugas = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_delete_petugas = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_update_petugas = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_add_petugas = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_insert_petugas = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->tx_password_petugas = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->tx_username_petugas = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->tx_id_petugas = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lb_password_petugas = (gcnew System::Windows::Forms::Label());
			this->lb_username_petugas = (gcnew System::Windows::Forms::Label());
			this->lb_id_petugas = (gcnew System::Windows::Forms::Label());
			this->pnl_list_anggota = (gcnew System::Windows::Forms::Panel());
			this->CardsListAnggota = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_export_list_anggota = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_clear_search_list_anggota = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->tx_search_list_anggota = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->btn_search_list_anggota = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_reload_list_anggota = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->DataGridListAnggota = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->pnl_list_buku = (gcnew System::Windows::Forms::Panel());
			this->CardsListBuku = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_export_list_buku = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_clear_search_list_buku = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->tx_search_list_buku = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->btn_search_list_buku = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_reload_list_buku = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->DataGridListBuku = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->pnl_list_peminjaman = (gcnew System::Windows::Forms::Panel());
			this->CardsListPeminjaman = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_export_list_peminjaman = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_clear_search_list_peminjaman = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->tx_search_list_peminjaman = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->btn_search_list_peminjaman = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_reload_list_peminjaman = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->DataGridListPeminjaman = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->pnl_list_jurusan = (gcnew System::Windows::Forms::Panel());
			this->CardsListJurusan = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_export_list_jurusan = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_clear_search_list_jurusan = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->tx_search_list_jurusan = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->btn_search_list_jurusan = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_reload_list_jurusan = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->DataGridListJurusan = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->pnl_list_prodi = (gcnew System::Windows::Forms::Panel());
			this->CardsListProdi = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_export_list_prodi = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_clear_search_list_prodi = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->tx_search_list_prodi = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->btn_search_list_prodi = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_reload_list_prodi = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->DataGridListProdi = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->pnl_dashboard = (gcnew System::Windows::Forms::Panel());
			this->CardsDashboard = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->btn_reload_chart = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->pnl_sidebar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnl_list_petugas->SuspendLayout();
			this->CardsListPetugas->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridListPetugas))->BeginInit();
			this->CardsFormPetugas->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_insert_petugas))->BeginInit();
			this->pnl_list_anggota->SuspendLayout();
			this->CardsListAnggota->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridListAnggota))->BeginInit();
			this->pnl_list_buku->SuspendLayout();
			this->CardsListBuku->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridListBuku))->BeginInit();
			this->pnl_list_peminjaman->SuspendLayout();
			this->CardsListPeminjaman->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridListPeminjaman))->BeginInit();
			this->pnl_list_jurusan->SuspendLayout();
			this->CardsListJurusan->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridListJurusan))->BeginInit();
			this->pnl_list_prodi->SuspendLayout();
			this->CardsListProdi->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridListProdi))->BeginInit();
			this->pnl_dashboard->SuspendLayout();
			this->CardsDashboard->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// pnl_sidebar
			// 
			this->pnl_sidebar->BackColor = System::Drawing::Color::DodgerBlue;
			this->pnl_sidebar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pnl_sidebar->Controls->Add(this->btn_klik_exit);
			this->pnl_sidebar->Controls->Add(this->btn_klik_list_peminjaman);
			this->pnl_sidebar->Controls->Add(this->pictureBox1);
			this->pnl_sidebar->Controls->Add(this->btn_klik_list_petugas);
			this->pnl_sidebar->Controls->Add(this->btn_klik_list_buku);
			this->pnl_sidebar->Controls->Add(this->btn_klik_list_prodi);
			this->pnl_sidebar->Controls->Add(this->btn_klik_list_jurusan);
			this->pnl_sidebar->Controls->Add(this->btn_klik_list_anggota);
			this->pnl_sidebar->Controls->Add(this->btn_klik_dashboard);
			this->pnl_sidebar->Controls->Add(this->bunifuSeparator1);
			this->pnl_sidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnl_sidebar->Location = System::Drawing::Point(0, 0);
			this->pnl_sidebar->Name = L"pnl_sidebar";
			this->pnl_sidebar->Size = System::Drawing::Size(230, 649);
			this->pnl_sidebar->TabIndex = 1;
			// 
			// btn_klik_exit
			// 
			this->btn_klik_exit->Activecolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_exit->BackColor = System::Drawing::Color::Transparent;
			this->btn_klik_exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_klik_exit->BorderRadius = 7;
			this->btn_klik_exit->ButtonText = L"EXIT";
			this->btn_klik_exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_klik_exit->DisabledColor = System::Drawing::Color::Gray;
			this->btn_klik_exit->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_klik_exit->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_klik_exit.Iconimage")));
			this->btn_klik_exit->Iconimage_right = nullptr;
			this->btn_klik_exit->Iconimage_right_Selected = nullptr;
			this->btn_klik_exit->Iconimage_Selected = nullptr;
			this->btn_klik_exit->IconMarginLeft = 0;
			this->btn_klik_exit->IconMarginRight = 0;
			this->btn_klik_exit->IconRightVisible = true;
			this->btn_klik_exit->IconRightZoom = 0;
			this->btn_klik_exit->IconVisible = true;
			this->btn_klik_exit->IconZoom = 40;
			this->btn_klik_exit->IsTab = true;
			this->btn_klik_exit->Location = System::Drawing::Point(14, 476);
			this->btn_klik_exit->Name = L"btn_klik_exit";
			this->btn_klik_exit->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_klik_exit->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_exit->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_klik_exit->selected = false;
			this->btn_klik_exit->Size = System::Drawing::Size(203, 48);
			this->btn_klik_exit->TabIndex = 31;
			this->btn_klik_exit->Text = L"EXIT";
			this->btn_klik_exit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_klik_exit->Textcolor = System::Drawing::Color::White;
			this->btn_klik_exit->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_klik_exit->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_klik_exit_Click);
			// 
			// btn_klik_list_peminjaman
			// 
			this->btn_klik_list_peminjaman->Activecolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_list_peminjaman->BackColor = System::Drawing::Color::Transparent;
			this->btn_klik_list_peminjaman->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_klik_list_peminjaman->BorderRadius = 7;
			this->btn_klik_list_peminjaman->ButtonText = L"LIST PEMINJAMAN";
			this->btn_klik_list_peminjaman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_klik_list_peminjaman->DisabledColor = System::Drawing::Color::Gray;
			this->btn_klik_list_peminjaman->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_klik_list_peminjaman->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_klik_list_peminjaman.Iconimage")));
			this->btn_klik_list_peminjaman->Iconimage_right = nullptr;
			this->btn_klik_list_peminjaman->Iconimage_right_Selected = nullptr;
			this->btn_klik_list_peminjaman->Iconimage_Selected = nullptr;
			this->btn_klik_list_peminjaman->IconMarginLeft = 0;
			this->btn_klik_list_peminjaman->IconMarginRight = 0;
			this->btn_klik_list_peminjaman->IconRightVisible = true;
			this->btn_klik_list_peminjaman->IconRightZoom = 0;
			this->btn_klik_list_peminjaman->IconVisible = true;
			this->btn_klik_list_peminjaman->IconZoom = 40;
			this->btn_klik_list_peminjaman->IsTab = true;
			this->btn_klik_list_peminjaman->Location = System::Drawing::Point(14, 319);
			this->btn_klik_list_peminjaman->Name = L"btn_klik_list_peminjaman";
			this->btn_klik_list_peminjaman->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_klik_list_peminjaman->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_list_peminjaman->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_klik_list_peminjaman->selected = false;
			this->btn_klik_list_peminjaman->Size = System::Drawing::Size(203, 48);
			this->btn_klik_list_peminjaman->TabIndex = 10;
			this->btn_klik_list_peminjaman->Text = L"LIST PEMINJAMAN";
			this->btn_klik_list_peminjaman->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_klik_list_peminjaman->Textcolor = System::Drawing::Color::White;
			this->btn_klik_list_peminjaman->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_klik_list_peminjaman->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_klik_list_peminjaman_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(59, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(94, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// btn_klik_list_petugas
			// 
			this->btn_klik_list_petugas->Activecolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_list_petugas->BackColor = System::Drawing::Color::Transparent;
			this->btn_klik_list_petugas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_klik_list_petugas->BorderRadius = 7;
			this->btn_klik_list_petugas->ButtonText = L"LIST PETUGAS";
			this->btn_klik_list_petugas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_klik_list_petugas->DisabledColor = System::Drawing::Color::Gray;
			this->btn_klik_list_petugas->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_klik_list_petugas->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_klik_list_petugas.Iconimage")));
			this->btn_klik_list_petugas->Iconimage_right = nullptr;
			this->btn_klik_list_petugas->Iconimage_right_Selected = nullptr;
			this->btn_klik_list_petugas->Iconimage_Selected = nullptr;
			this->btn_klik_list_petugas->IconMarginLeft = 0;
			this->btn_klik_list_petugas->IconMarginRight = 0;
			this->btn_klik_list_petugas->IconRightVisible = true;
			this->btn_klik_list_petugas->IconRightZoom = 0;
			this->btn_klik_list_petugas->IconVisible = true;
			this->btn_klik_list_petugas->IconZoom = 40;
			this->btn_klik_list_petugas->IsTab = true;
			this->btn_klik_list_petugas->Location = System::Drawing::Point(14, 160);
			this->btn_klik_list_petugas->Name = L"btn_klik_list_petugas";
			this->btn_klik_list_petugas->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_klik_list_petugas->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_list_petugas->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_klik_list_petugas->selected = false;
			this->btn_klik_list_petugas->Size = System::Drawing::Size(203, 48);
			this->btn_klik_list_petugas->TabIndex = 8;
			this->btn_klik_list_petugas->Text = L"LIST PETUGAS";
			this->btn_klik_list_petugas->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_klik_list_petugas->Textcolor = System::Drawing::Color::White;
			this->btn_klik_list_petugas->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_klik_list_petugas->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_klik_list_petugas_Click);
			// 
			// btn_klik_list_buku
			// 
			this->btn_klik_list_buku->Activecolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_list_buku->BackColor = System::Drawing::Color::Transparent;
			this->btn_klik_list_buku->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_klik_list_buku->BorderRadius = 7;
			this->btn_klik_list_buku->ButtonText = L"LIST BUKU";
			this->btn_klik_list_buku->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_klik_list_buku->DisabledColor = System::Drawing::Color::Gray;
			this->btn_klik_list_buku->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_klik_list_buku->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_klik_list_buku.Iconimage")));
			this->btn_klik_list_buku->Iconimage_right = nullptr;
			this->btn_klik_list_buku->Iconimage_right_Selected = nullptr;
			this->btn_klik_list_buku->Iconimage_Selected = nullptr;
			this->btn_klik_list_buku->IconMarginLeft = 0;
			this->btn_klik_list_buku->IconMarginRight = 0;
			this->btn_klik_list_buku->IconRightVisible = true;
			this->btn_klik_list_buku->IconRightZoom = 0;
			this->btn_klik_list_buku->IconVisible = true;
			this->btn_klik_list_buku->IconZoom = 40;
			this->btn_klik_list_buku->IsTab = true;
			this->btn_klik_list_buku->Location = System::Drawing::Point(14, 265);
			this->btn_klik_list_buku->Name = L"btn_klik_list_buku";
			this->btn_klik_list_buku->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_klik_list_buku->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_list_buku->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_klik_list_buku->selected = false;
			this->btn_klik_list_buku->Size = System::Drawing::Size(203, 48);
			this->btn_klik_list_buku->TabIndex = 4;
			this->btn_klik_list_buku->Text = L"LIST BUKU";
			this->btn_klik_list_buku->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_klik_list_buku->Textcolor = System::Drawing::Color::White;
			this->btn_klik_list_buku->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_klik_list_buku->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_klik_list_buku_Click);
			// 
			// btn_klik_list_prodi
			// 
			this->btn_klik_list_prodi->Activecolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_list_prodi->BackColor = System::Drawing::Color::Transparent;
			this->btn_klik_list_prodi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_klik_list_prodi->BorderRadius = 7;
			this->btn_klik_list_prodi->ButtonText = L"LIST PRODI";
			this->btn_klik_list_prodi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_klik_list_prodi->DisabledColor = System::Drawing::Color::Gray;
			this->btn_klik_list_prodi->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_klik_list_prodi->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_klik_list_prodi.Iconimage")));
			this->btn_klik_list_prodi->Iconimage_right = nullptr;
			this->btn_klik_list_prodi->Iconimage_right_Selected = nullptr;
			this->btn_klik_list_prodi->Iconimage_Selected = nullptr;
			this->btn_klik_list_prodi->IconMarginLeft = 0;
			this->btn_klik_list_prodi->IconMarginRight = 0;
			this->btn_klik_list_prodi->IconRightVisible = true;
			this->btn_klik_list_prodi->IconRightZoom = 0;
			this->btn_klik_list_prodi->IconVisible = true;
			this->btn_klik_list_prodi->IconZoom = 40;
			this->btn_klik_list_prodi->IsTab = true;
			this->btn_klik_list_prodi->Location = System::Drawing::Point(14, 427);
			this->btn_klik_list_prodi->Name = L"btn_klik_list_prodi";
			this->btn_klik_list_prodi->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_klik_list_prodi->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_list_prodi->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_klik_list_prodi->selected = false;
			this->btn_klik_list_prodi->Size = System::Drawing::Size(203, 48);
			this->btn_klik_list_prodi->TabIndex = 1;
			this->btn_klik_list_prodi->Text = L"LIST PRODI";
			this->btn_klik_list_prodi->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_klik_list_prodi->Textcolor = System::Drawing::Color::White;
			this->btn_klik_list_prodi->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_klik_list_prodi->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_klik_list_prodi_Click);
			// 
			// btn_klik_list_jurusan
			// 
			this->btn_klik_list_jurusan->Activecolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_list_jurusan->BackColor = System::Drawing::Color::Transparent;
			this->btn_klik_list_jurusan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_klik_list_jurusan->BorderRadius = 7;
			this->btn_klik_list_jurusan->ButtonText = L"LIST JURUSAN";
			this->btn_klik_list_jurusan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_klik_list_jurusan->DisabledColor = System::Drawing::Color::Gray;
			this->btn_klik_list_jurusan->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_klik_list_jurusan->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_klik_list_jurusan.Iconimage")));
			this->btn_klik_list_jurusan->Iconimage_right = nullptr;
			this->btn_klik_list_jurusan->Iconimage_right_Selected = nullptr;
			this->btn_klik_list_jurusan->Iconimage_Selected = nullptr;
			this->btn_klik_list_jurusan->IconMarginLeft = 0;
			this->btn_klik_list_jurusan->IconMarginRight = 0;
			this->btn_klik_list_jurusan->IconRightVisible = true;
			this->btn_klik_list_jurusan->IconRightZoom = 0;
			this->btn_klik_list_jurusan->IconVisible = true;
			this->btn_klik_list_jurusan->IconZoom = 40;
			this->btn_klik_list_jurusan->IsTab = true;
			this->btn_klik_list_jurusan->Location = System::Drawing::Point(14, 373);
			this->btn_klik_list_jurusan->Name = L"btn_klik_list_jurusan";
			this->btn_klik_list_jurusan->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_klik_list_jurusan->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_list_jurusan->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_klik_list_jurusan->selected = false;
			this->btn_klik_list_jurusan->Size = System::Drawing::Size(203, 48);
			this->btn_klik_list_jurusan->TabIndex = 5;
			this->btn_klik_list_jurusan->Text = L"LIST JURUSAN";
			this->btn_klik_list_jurusan->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_klik_list_jurusan->Textcolor = System::Drawing::Color::White;
			this->btn_klik_list_jurusan->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_klik_list_jurusan->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_klik_list_jurusan_Click);
			// 
			// btn_klik_list_anggota
			// 
			this->btn_klik_list_anggota->Activecolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_list_anggota->BackColor = System::Drawing::Color::Transparent;
			this->btn_klik_list_anggota->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_klik_list_anggota->BorderRadius = 7;
			this->btn_klik_list_anggota->ButtonText = L"LIST ANGGOTA";
			this->btn_klik_list_anggota->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_klik_list_anggota->DisabledColor = System::Drawing::Color::Gray;
			this->btn_klik_list_anggota->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_klik_list_anggota->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_klik_list_anggota.Iconimage")));
			this->btn_klik_list_anggota->Iconimage_right = nullptr;
			this->btn_klik_list_anggota->Iconimage_right_Selected = nullptr;
			this->btn_klik_list_anggota->Iconimage_Selected = nullptr;
			this->btn_klik_list_anggota->IconMarginLeft = 0;
			this->btn_klik_list_anggota->IconMarginRight = 0;
			this->btn_klik_list_anggota->IconRightVisible = true;
			this->btn_klik_list_anggota->IconRightZoom = 0;
			this->btn_klik_list_anggota->IconVisible = true;
			this->btn_klik_list_anggota->IconZoom = 40;
			this->btn_klik_list_anggota->IsTab = true;
			this->btn_klik_list_anggota->Location = System::Drawing::Point(14, 211);
			this->btn_klik_list_anggota->Name = L"btn_klik_list_anggota";
			this->btn_klik_list_anggota->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_klik_list_anggota->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_list_anggota->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_klik_list_anggota->selected = false;
			this->btn_klik_list_anggota->Size = System::Drawing::Size(203, 48);
			this->btn_klik_list_anggota->TabIndex = 3;
			this->btn_klik_list_anggota->Text = L"LIST ANGGOTA";
			this->btn_klik_list_anggota->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_klik_list_anggota->Textcolor = System::Drawing::Color::White;
			this->btn_klik_list_anggota->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_klik_list_anggota->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_klik_list_anggota_Click);
			// 
			// btn_klik_dashboard
			// 
			this->btn_klik_dashboard->Activecolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_dashboard->BackColor = System::Drawing::Color::Transparent;
			this->btn_klik_dashboard->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_klik_dashboard->BorderRadius = 7;
			this->btn_klik_dashboard->ButtonText = L"DASHBOARD";
			this->btn_klik_dashboard->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_klik_dashboard->DisabledColor = System::Drawing::Color::Gray;
			this->btn_klik_dashboard->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_klik_dashboard->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_klik_dashboard.Iconimage")));
			this->btn_klik_dashboard->Iconimage_right = nullptr;
			this->btn_klik_dashboard->Iconimage_right_Selected = nullptr;
			this->btn_klik_dashboard->Iconimage_Selected = nullptr;
			this->btn_klik_dashboard->IconMarginLeft = 0;
			this->btn_klik_dashboard->IconMarginRight = 0;
			this->btn_klik_dashboard->IconRightVisible = true;
			this->btn_klik_dashboard->IconRightZoom = 0;
			this->btn_klik_dashboard->IconVisible = true;
			this->btn_klik_dashboard->IconZoom = 40;
			this->btn_klik_dashboard->IsTab = true;
			this->btn_klik_dashboard->Location = System::Drawing::Point(14, 106);
			this->btn_klik_dashboard->Name = L"btn_klik_dashboard";
			this->btn_klik_dashboard->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_klik_dashboard->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_klik_dashboard->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_klik_dashboard->selected = true;
			this->btn_klik_dashboard->Size = System::Drawing::Size(201, 48);
			this->btn_klik_dashboard->TabIndex = 1;
			this->btn_klik_dashboard->Text = L"DASHBOARD";
			this->btn_klik_dashboard->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_klik_dashboard->Textcolor = System::Drawing::Color::White;
			this->btn_klik_dashboard->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_klik_dashboard->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_klik_dashboard_Click);
			// 
			// bunifuSeparator1
			// 
			this->bunifuSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->bunifuSeparator1->LineThickness = 1;
			this->bunifuSeparator1->Location = System::Drawing::Point(12, 75);
			this->bunifuSeparator1->Name = L"bunifuSeparator1";
			this->bunifuSeparator1->Size = System::Drawing::Size(203, 25);
			this->bunifuSeparator1->TabIndex = 2;
			this->bunifuSeparator1->Transparency = 255;
			this->bunifuSeparator1->Vertical = false;
			// 
			// pnl_header
			// 
			this->pnl_header->BackColor = System::Drawing::Color::DodgerBlue;
			this->pnl_header->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl_header->Location = System::Drawing::Point(230, 0);
			this->pnl_header->Name = L"pnl_header";
			this->pnl_header->Size = System::Drawing::Size(1114, 58);
			this->pnl_header->TabIndex = 2;
			// 
			// pnl_list_petugas
			// 
			this->pnl_list_petugas->Controls->Add(this->CardsListPetugas);
			this->pnl_list_petugas->Controls->Add(this->CardsFormPetugas);
			this->pnl_list_petugas->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_list_petugas->Location = System::Drawing::Point(230, 58);
			this->pnl_list_petugas->Name = L"pnl_list_petugas";
			this->pnl_list_petugas->Size = System::Drawing::Size(1114, 591);
			this->pnl_list_petugas->TabIndex = 0;
			this->pnl_list_petugas->Visible = false;
			// 
			// CardsListPetugas
			// 
			this->CardsListPetugas->BackColor = System::Drawing::Color::White;
			this->CardsListPetugas->BorderRadius = 8;
			this->CardsListPetugas->BottomSahddow = true;
			this->CardsListPetugas->color = System::Drawing::Color::Transparent;
			this->CardsListPetugas->Controls->Add(this->btn_export_list_petugas);
			this->CardsListPetugas->Controls->Add(this->btn_clear_search_list_petugas);
			this->CardsListPetugas->Controls->Add(this->tx_search_list_petugas);
			this->CardsListPetugas->Controls->Add(this->btn_search_list_petugas);
			this->CardsListPetugas->Controls->Add(this->btn_reload_list_petugas);
			this->CardsListPetugas->Controls->Add(this->DataGridListPetugas);
			this->CardsListPetugas->LeftSahddow = true;
			this->CardsListPetugas->Location = System::Drawing::Point(32, 33);
			this->CardsListPetugas->Name = L"CardsListPetugas";
			this->CardsListPetugas->RightSahddow = true;
			this->CardsListPetugas->ShadowDepth = 50;
			this->CardsListPetugas->Size = System::Drawing::Size(1043, 341);
			this->CardsListPetugas->TabIndex = 30;
			// 
			// btn_export_list_petugas
			// 
			this->btn_export_list_petugas->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_petugas->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_petugas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_export_list_petugas->BorderRadius = 0;
			this->btn_export_list_petugas->ButtonText = L"Export";
			this->btn_export_list_petugas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_export_list_petugas->DisabledColor = System::Drawing::Color::Gray;
			this->btn_export_list_petugas->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_export_list_petugas->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_export_list_petugas.Iconimage")));
			this->btn_export_list_petugas->Iconimage_right = nullptr;
			this->btn_export_list_petugas->Iconimage_right_Selected = nullptr;
			this->btn_export_list_petugas->Iconimage_Selected = nullptr;
			this->btn_export_list_petugas->IconMarginLeft = 0;
			this->btn_export_list_petugas->IconMarginRight = 0;
			this->btn_export_list_petugas->IconRightVisible = true;
			this->btn_export_list_petugas->IconRightZoom = 0;
			this->btn_export_list_petugas->IconVisible = true;
			this->btn_export_list_petugas->IconZoom = 40;
			this->btn_export_list_petugas->IsTab = true;
			this->btn_export_list_petugas->Location = System::Drawing::Point(885, 12);
			this->btn_export_list_petugas->Name = L"btn_export_list_petugas";
			this->btn_export_list_petugas->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_petugas->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_export_list_petugas->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_export_list_petugas->selected = false;
			this->btn_export_list_petugas->Size = System::Drawing::Size(112, 38);
			this->btn_export_list_petugas->TabIndex = 21;
			this->btn_export_list_petugas->Text = L"Export";
			this->btn_export_list_petugas->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_export_list_petugas->Textcolor = System::Drawing::Color::White;
			this->btn_export_list_petugas->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_export_list_petugas->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_export_list_petugas_Click);
			// 
			// btn_clear_search_list_petugas
			// 
			this->btn_clear_search_list_petugas->Activecolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_petugas->BackColor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_petugas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_clear_search_list_petugas->BorderRadius = 0;
			this->btn_clear_search_list_petugas->ButtonText = L"Clear";
			this->btn_clear_search_list_petugas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_clear_search_list_petugas->DisabledColor = System::Drawing::Color::Gray;
			this->btn_clear_search_list_petugas->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_clear_search_list_petugas->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_petugas->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clear_search_list_petugas.Iconimage")));
			this->btn_clear_search_list_petugas->Iconimage_right = nullptr;
			this->btn_clear_search_list_petugas->Iconimage_right_Selected = nullptr;
			this->btn_clear_search_list_petugas->Iconimage_Selected = nullptr;
			this->btn_clear_search_list_petugas->IconMarginLeft = 0;
			this->btn_clear_search_list_petugas->IconMarginRight = 0;
			this->btn_clear_search_list_petugas->IconRightVisible = true;
			this->btn_clear_search_list_petugas->IconRightZoom = 0;
			this->btn_clear_search_list_petugas->IconVisible = true;
			this->btn_clear_search_list_petugas->IconZoom = 40;
			this->btn_clear_search_list_petugas->IsTab = true;
			this->btn_clear_search_list_petugas->Location = System::Drawing::Point(767, 12);
			this->btn_clear_search_list_petugas->Name = L"btn_clear_search_list_petugas";
			this->btn_clear_search_list_petugas->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_petugas->OnHovercolor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_search_list_petugas->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_clear_search_list_petugas->selected = false;
			this->btn_clear_search_list_petugas->Size = System::Drawing::Size(103, 38);
			this->btn_clear_search_list_petugas->TabIndex = 20;
			this->btn_clear_search_list_petugas->Text = L"Clear";
			this->btn_clear_search_list_petugas->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_clear_search_list_petugas->Textcolor = System::Drawing::Color::Red;
			this->btn_clear_search_list_petugas->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_clear_search_list_petugas->Visible = false;
			this->btn_clear_search_list_petugas->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_clear_search_list_petugas_Click);
			// 
			// tx_search_list_petugas
			// 
			this->tx_search_list_petugas->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_search_list_petugas->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_search_list_petugas->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_search_list_petugas->BorderThickness = 3;
			this->tx_search_list_petugas->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_search_list_petugas->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_search_list_petugas->ForeColor = System::Drawing::Color::Black;
			this->tx_search_list_petugas->isPassword = false;
			this->tx_search_list_petugas->Location = System::Drawing::Point(289, 12);
			this->tx_search_list_petugas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_search_list_petugas->Name = L"tx_search_list_petugas";
			this->tx_search_list_petugas->Size = System::Drawing::Size(471, 38);
			this->tx_search_list_petugas->TabIndex = 19;
			this->tx_search_list_petugas->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// btn_search_list_petugas
			// 
			this->btn_search_list_petugas->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_petugas->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_petugas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_search_list_petugas->BorderRadius = 0;
			this->btn_search_list_petugas->ButtonText = L"Search";
			this->btn_search_list_petugas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_search_list_petugas->DisabledColor = System::Drawing::Color::Gray;
			this->btn_search_list_petugas->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_search_list_petugas->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search_list_petugas.Iconimage")));
			this->btn_search_list_petugas->Iconimage_right = nullptr;
			this->btn_search_list_petugas->Iconimage_right_Selected = nullptr;
			this->btn_search_list_petugas->Iconimage_Selected = nullptr;
			this->btn_search_list_petugas->IconMarginLeft = 0;
			this->btn_search_list_petugas->IconMarginRight = 0;
			this->btn_search_list_petugas->IconRightVisible = true;
			this->btn_search_list_petugas->IconRightZoom = 0;
			this->btn_search_list_petugas->IconVisible = true;
			this->btn_search_list_petugas->IconZoom = 40;
			this->btn_search_list_petugas->IsTab = true;
			this->btn_search_list_petugas->Location = System::Drawing::Point(170, 12);
			this->btn_search_list_petugas->Name = L"btn_search_list_petugas";
			this->btn_search_list_petugas->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_petugas->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_search_list_petugas->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_search_list_petugas->selected = false;
			this->btn_search_list_petugas->Size = System::Drawing::Size(112, 38);
			this->btn_search_list_petugas->TabIndex = 18;
			this->btn_search_list_petugas->Text = L"Search";
			this->btn_search_list_petugas->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_search_list_petugas->Textcolor = System::Drawing::Color::White;
			this->btn_search_list_petugas->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_search_list_petugas->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_search_list_petugas_Click);
			// 
			// btn_reload_list_petugas
			// 
			this->btn_reload_list_petugas->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_petugas->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_petugas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_reload_list_petugas->BorderRadius = 0;
			this->btn_reload_list_petugas->ButtonText = L"Reload";
			this->btn_reload_list_petugas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reload_list_petugas->DisabledColor = System::Drawing::Color::Gray;
			this->btn_reload_list_petugas->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_reload_list_petugas->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_reload_list_petugas.Iconimage")));
			this->btn_reload_list_petugas->Iconimage_right = nullptr;
			this->btn_reload_list_petugas->Iconimage_right_Selected = nullptr;
			this->btn_reload_list_petugas->Iconimage_Selected = nullptr;
			this->btn_reload_list_petugas->IconMarginLeft = 0;
			this->btn_reload_list_petugas->IconMarginRight = 0;
			this->btn_reload_list_petugas->IconRightVisible = true;
			this->btn_reload_list_petugas->IconRightZoom = 0;
			this->btn_reload_list_petugas->IconVisible = true;
			this->btn_reload_list_petugas->IconZoom = 40;
			this->btn_reload_list_petugas->IsTab = true;
			this->btn_reload_list_petugas->Location = System::Drawing::Point(23, 12);
			this->btn_reload_list_petugas->Name = L"btn_reload_list_petugas";
			this->btn_reload_list_petugas->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_petugas->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_reload_list_petugas->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_reload_list_petugas->selected = false;
			this->btn_reload_list_petugas->Size = System::Drawing::Size(116, 38);
			this->btn_reload_list_petugas->TabIndex = 17;
			this->btn_reload_list_petugas->Text = L"Reload";
			this->btn_reload_list_petugas->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_reload_list_petugas->Textcolor = System::Drawing::Color::White;
			this->btn_reload_list_petugas->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_reload_list_petugas->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_reload_list_petugas_Click);
			// 
			// DataGridListPetugas
			// 
			this->DataGridListPetugas->AllowUserToAddRows = false;
			this->DataGridListPetugas->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			this->DataGridListPetugas->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->DataGridListPetugas->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DataGridListPetugas->BackgroundColor = System::Drawing::Color::White;
			this->DataGridListPetugas->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DataGridListPetugas->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->DataGridListPetugas->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridListPetugas->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->DataGridListPetugas->ColumnHeadersHeight = 40;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::LightSteelBlue;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DataGridListPetugas->DefaultCellStyle = dataGridViewCellStyle3;
			this->DataGridListPetugas->DoubleBuffered = true;
			this->DataGridListPetugas->EnableHeadersVisualStyles = false;
			this->DataGridListPetugas->GridColor = System::Drawing::Color::WhiteSmoke;
			this->DataGridListPetugas->HeaderBgColor = System::Drawing::Color::RoyalBlue;
			this->DataGridListPetugas->HeaderForeColor = System::Drawing::Color::White;
			this->DataGridListPetugas->Location = System::Drawing::Point(23, 69);
			this->DataGridListPetugas->Name = L"DataGridListPetugas";
			this->DataGridListPetugas->ReadOnly = true;
			this->DataGridListPetugas->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridListPetugas->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->DataGridListPetugas->RowHeadersVisible = false;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DataGridListPetugas->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->DataGridListPetugas->RowTemplate->DividerHeight = 1;
			this->DataGridListPetugas->RowTemplate->Height = 30;
			this->DataGridListPetugas->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DataGridListPetugas->Size = System::Drawing::Size(995, 243);
			this->DataGridListPetugas->TabIndex = 7;
			// 
			// CardsFormPetugas
			// 
			this->CardsFormPetugas->BackColor = System::Drawing::Color::White;
			this->CardsFormPetugas->BorderRadius = 8;
			this->CardsFormPetugas->BottomSahddow = true;
			this->CardsFormPetugas->color = System::Drawing::Color::Transparent;
			this->CardsFormPetugas->Controls->Add(this->btn_clear_petugas);
			this->CardsFormPetugas->Controls->Add(this->btn_delete_petugas);
			this->CardsFormPetugas->Controls->Add(this->btn_update_petugas);
			this->CardsFormPetugas->Controls->Add(this->btn_add_petugas);
			this->CardsFormPetugas->Controls->Add(this->btn_insert_petugas);
			this->CardsFormPetugas->Controls->Add(this->tx_password_petugas);
			this->CardsFormPetugas->Controls->Add(this->tx_username_petugas);
			this->CardsFormPetugas->Controls->Add(this->tx_id_petugas);
			this->CardsFormPetugas->Controls->Add(this->lb_password_petugas);
			this->CardsFormPetugas->Controls->Add(this->lb_username_petugas);
			this->CardsFormPetugas->Controls->Add(this->lb_id_petugas);
			this->CardsFormPetugas->LeftSahddow = true;
			this->CardsFormPetugas->Location = System::Drawing::Point(32, 403);
			this->CardsFormPetugas->Name = L"CardsFormPetugas";
			this->CardsFormPetugas->RightSahddow = true;
			this->CardsFormPetugas->ShadowDepth = 50;
			this->CardsFormPetugas->Size = System::Drawing::Size(1043, 160);
			this->CardsFormPetugas->TabIndex = 31;
			// 
			// btn_clear_petugas
			// 
			this->btn_clear_petugas->ActiveBorderThickness = 2;
			this->btn_clear_petugas->ActiveCornerRadius = 20;
			this->btn_clear_petugas->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_petugas->ActiveForecolor = System::Drawing::Color::White;
			this->btn_clear_petugas->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_petugas->BackColor = System::Drawing::Color::White;
			this->btn_clear_petugas->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clear_petugas.BackgroundImage")));
			this->btn_clear_petugas->ButtonText = L"Clear";
			this->btn_clear_petugas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_clear_petugas->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clear_petugas->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_petugas->IdleBorderThickness = 2;
			this->btn_clear_petugas->IdleCornerRadius = 20;
			this->btn_clear_petugas->IdleFillColor = System::Drawing::Color::White;
			this->btn_clear_petugas->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_petugas->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_petugas->Location = System::Drawing::Point(824, 91);
			this->btn_clear_petugas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_clear_petugas->Name = L"btn_clear_petugas";
			this->btn_clear_petugas->Size = System::Drawing::Size(73, 37);
			this->btn_clear_petugas->TabIndex = 35;
			this->btn_clear_petugas->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_clear_petugas->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_clear_petugas_Click);
			// 
			// btn_delete_petugas
			// 
			this->btn_delete_petugas->ActiveBorderThickness = 2;
			this->btn_delete_petugas->ActiveCornerRadius = 20;
			this->btn_delete_petugas->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_petugas->ActiveForecolor = System::Drawing::Color::White;
			this->btn_delete_petugas->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_petugas->BackColor = System::Drawing::Color::White;
			this->btn_delete_petugas->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_delete_petugas.BackgroundImage")));
			this->btn_delete_petugas->ButtonText = L"Delete";
			this->btn_delete_petugas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_delete_petugas->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete_petugas->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_petugas->IdleBorderThickness = 2;
			this->btn_delete_petugas->IdleCornerRadius = 20;
			this->btn_delete_petugas->IdleFillColor = System::Drawing::Color::White;
			this->btn_delete_petugas->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_petugas->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_petugas->Location = System::Drawing::Point(743, 91);
			this->btn_delete_petugas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_delete_petugas->Name = L"btn_delete_petugas";
			this->btn_delete_petugas->Size = System::Drawing::Size(73, 37);
			this->btn_delete_petugas->TabIndex = 34;
			this->btn_delete_petugas->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_delete_petugas->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_delete_petugas_Click);
			// 
			// btn_update_petugas
			// 
			this->btn_update_petugas->ActiveBorderThickness = 2;
			this->btn_update_petugas->ActiveCornerRadius = 20;
			this->btn_update_petugas->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_petugas->ActiveForecolor = System::Drawing::Color::White;
			this->btn_update_petugas->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_petugas->BackColor = System::Drawing::Color::White;
			this->btn_update_petugas->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_update_petugas.BackgroundImage")));
			this->btn_update_petugas->ButtonText = L"Update";
			this->btn_update_petugas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_update_petugas->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update_petugas->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_petugas->IdleBorderThickness = 2;
			this->btn_update_petugas->IdleCornerRadius = 20;
			this->btn_update_petugas->IdleFillColor = System::Drawing::Color::White;
			this->btn_update_petugas->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_update_petugas->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_petugas->Location = System::Drawing::Point(662, 91);
			this->btn_update_petugas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_update_petugas->Name = L"btn_update_petugas";
			this->btn_update_petugas->Size = System::Drawing::Size(73, 37);
			this->btn_update_petugas->TabIndex = 33;
			this->btn_update_petugas->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_update_petugas->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_update_petugas_Click);
			// 
			// btn_add_petugas
			// 
			this->btn_add_petugas->ActiveBorderThickness = 2;
			this->btn_add_petugas->ActiveCornerRadius = 20;
			this->btn_add_petugas->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_petugas->ActiveForecolor = System::Drawing::Color::White;
			this->btn_add_petugas->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_petugas->BackColor = System::Drawing::Color::White;
			this->btn_add_petugas->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_add_petugas.BackgroundImage")));
			this->btn_add_petugas->ButtonText = L"Add";
			this->btn_add_petugas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_add_petugas->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add_petugas->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_petugas->IdleBorderThickness = 2;
			this->btn_add_petugas->IdleCornerRadius = 20;
			this->btn_add_petugas->IdleFillColor = System::Drawing::Color::White;
			this->btn_add_petugas->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_add_petugas->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_petugas->Location = System::Drawing::Point(581, 91);
			this->btn_add_petugas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_add_petugas->Name = L"btn_add_petugas";
			this->btn_add_petugas->Size = System::Drawing::Size(73, 37);
			this->btn_add_petugas->TabIndex = 32;
			this->btn_add_petugas->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_add_petugas->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_add_petugas_Click);
			// 
			// btn_insert_petugas
			// 
			this->btn_insert_petugas->BackColor = System::Drawing::Color::Transparent;
			this->btn_insert_petugas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_insert_petugas->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_insert_petugas.Image")));
			this->btn_insert_petugas->ImageActive = nullptr;
			this->btn_insert_petugas->Location = System::Drawing::Point(373, 52);
			this->btn_insert_petugas->Name = L"btn_insert_petugas";
			this->btn_insert_petugas->Size = System::Drawing::Size(32, 40);
			this->btn_insert_petugas->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_insert_petugas->TabIndex = 31;
			this->btn_insert_petugas->TabStop = false;
			this->btn_insert_petugas->Zoom = 10;
			this->btn_insert_petugas->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_insert_petugas_Click);
			// 
			// tx_password_petugas
			// 
			this->tx_password_petugas->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_password_petugas->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_password_petugas->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_password_petugas->BorderThickness = 3;
			this->tx_password_petugas->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_password_petugas->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_password_petugas->ForeColor = System::Drawing::Color::Black;
			this->tx_password_petugas->isPassword = false;
			this->tx_password_petugas->Location = System::Drawing::Point(601, 28);
			this->tx_password_petugas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_password_petugas->Name = L"tx_password_petugas";
			this->tx_password_petugas->Size = System::Drawing::Size(269, 35);
			this->tx_password_petugas->TabIndex = 21;
			this->tx_password_petugas->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// tx_username_petugas
			// 
			this->tx_username_petugas->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_username_petugas->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_username_petugas->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_username_petugas->BorderThickness = 3;
			this->tx_username_petugas->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_username_petugas->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_username_petugas->ForeColor = System::Drawing::Color::Black;
			this->tx_username_petugas->isPassword = false;
			this->tx_username_petugas->Location = System::Drawing::Point(83, 93);
			this->tx_username_petugas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_username_petugas->Name = L"tx_username_petugas";
			this->tx_username_petugas->Size = System::Drawing::Size(269, 35);
			this->tx_username_petugas->TabIndex = 20;
			this->tx_username_petugas->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// tx_id_petugas
			// 
			this->tx_id_petugas->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_id_petugas->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_id_petugas->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_id_petugas->BorderThickness = 3;
			this->tx_id_petugas->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_id_petugas->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_id_petugas->ForeColor = System::Drawing::Color::Black;
			this->tx_id_petugas->isPassword = false;
			this->tx_id_petugas->Location = System::Drawing::Point(83, 28);
			this->tx_id_petugas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_id_petugas->Name = L"tx_id_petugas";
			this->tx_id_petugas->Size = System::Drawing::Size(269, 35);
			this->tx_id_petugas->TabIndex = 19;
			this->tx_id_petugas->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// lb_password_petugas
			// 
			this->lb_password_petugas->AutoSize = true;
			this->lb_password_petugas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_password_petugas->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_password_petugas->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_password_petugas->Location = System::Drawing::Point(505, 28);
			this->lb_password_petugas->Name = L"lb_password_petugas";
			this->lb_password_petugas->Size = System::Drawing::Size(68, 19);
			this->lb_password_petugas->TabIndex = 18;
			this->lb_password_petugas->Text = L"Password";
			// 
			// lb_username_petugas
			// 
			this->lb_username_petugas->AutoSize = true;
			this->lb_username_petugas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_username_petugas->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_username_petugas->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_username_petugas->Location = System::Drawing::Point(19, 93);
			this->lb_username_petugas->Name = L"lb_username_petugas";
			this->lb_username_petugas->Size = System::Drawing::Size(46, 19);
			this->lb_username_petugas->TabIndex = 17;
			this->lb_username_petugas->Text = L"Nama";
			// 
			// lb_id_petugas
			// 
			this->lb_id_petugas->AutoSize = true;
			this->lb_id_petugas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_id_petugas->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_id_petugas->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_id_petugas->Location = System::Drawing::Point(19, 28);
			this->lb_id_petugas->Name = L"lb_id_petugas";
			this->lb_id_petugas->Size = System::Drawing::Size(23, 19);
			this->lb_id_petugas->TabIndex = 16;
			this->lb_id_petugas->Text = L"ID";
			// 
			// pnl_list_anggota
			// 
			this->pnl_list_anggota->Controls->Add(this->CardsListAnggota);
			this->pnl_list_anggota->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_list_anggota->Location = System::Drawing::Point(230, 58);
			this->pnl_list_anggota->Name = L"pnl_list_anggota";
			this->pnl_list_anggota->Size = System::Drawing::Size(1114, 591);
			this->pnl_list_anggota->TabIndex = 32;
			this->pnl_list_anggota->Visible = false;
			// 
			// CardsListAnggota
			// 
			this->CardsListAnggota->BackColor = System::Drawing::Color::White;
			this->CardsListAnggota->BorderRadius = 8;
			this->CardsListAnggota->BottomSahddow = true;
			this->CardsListAnggota->color = System::Drawing::Color::Transparent;
			this->CardsListAnggota->Controls->Add(this->btn_export_list_anggota);
			this->CardsListAnggota->Controls->Add(this->btn_clear_search_list_anggota);
			this->CardsListAnggota->Controls->Add(this->tx_search_list_anggota);
			this->CardsListAnggota->Controls->Add(this->btn_search_list_anggota);
			this->CardsListAnggota->Controls->Add(this->btn_reload_list_anggota);
			this->CardsListAnggota->Controls->Add(this->DataGridListAnggota);
			this->CardsListAnggota->LeftSahddow = true;
			this->CardsListAnggota->Location = System::Drawing::Point(32, 33);
			this->CardsListAnggota->Name = L"CardsListAnggota";
			this->CardsListAnggota->RightSahddow = true;
			this->CardsListAnggota->ShadowDepth = 50;
			this->CardsListAnggota->Size = System::Drawing::Size(1043, 527);
			this->CardsListAnggota->TabIndex = 30;
			// 
			// btn_export_list_anggota
			// 
			this->btn_export_list_anggota->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_anggota->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_anggota->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_export_list_anggota->BorderRadius = 0;
			this->btn_export_list_anggota->ButtonText = L"Export";
			this->btn_export_list_anggota->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_export_list_anggota->DisabledColor = System::Drawing::Color::Gray;
			this->btn_export_list_anggota->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_export_list_anggota->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_export_list_anggota.Iconimage")));
			this->btn_export_list_anggota->Iconimage_right = nullptr;
			this->btn_export_list_anggota->Iconimage_right_Selected = nullptr;
			this->btn_export_list_anggota->Iconimage_Selected = nullptr;
			this->btn_export_list_anggota->IconMarginLeft = 0;
			this->btn_export_list_anggota->IconMarginRight = 0;
			this->btn_export_list_anggota->IconRightVisible = true;
			this->btn_export_list_anggota->IconRightZoom = 0;
			this->btn_export_list_anggota->IconVisible = true;
			this->btn_export_list_anggota->IconZoom = 40;
			this->btn_export_list_anggota->IsTab = true;
			this->btn_export_list_anggota->Location = System::Drawing::Point(885, 12);
			this->btn_export_list_anggota->Name = L"btn_export_list_anggota";
			this->btn_export_list_anggota->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_anggota->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_export_list_anggota->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_export_list_anggota->selected = false;
			this->btn_export_list_anggota->Size = System::Drawing::Size(112, 38);
			this->btn_export_list_anggota->TabIndex = 21;
			this->btn_export_list_anggota->Text = L"Export";
			this->btn_export_list_anggota->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_export_list_anggota->Textcolor = System::Drawing::Color::White;
			this->btn_export_list_anggota->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_export_list_anggota->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_export_list_anggota_Click);
			// 
			// btn_clear_search_list_anggota
			// 
			this->btn_clear_search_list_anggota->Activecolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_anggota->BackColor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_anggota->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_clear_search_list_anggota->BorderRadius = 0;
			this->btn_clear_search_list_anggota->ButtonText = L"Clear";
			this->btn_clear_search_list_anggota->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_clear_search_list_anggota->DisabledColor = System::Drawing::Color::Gray;
			this->btn_clear_search_list_anggota->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_clear_search_list_anggota->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_anggota->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clear_search_list_anggota.Iconimage")));
			this->btn_clear_search_list_anggota->Iconimage_right = nullptr;
			this->btn_clear_search_list_anggota->Iconimage_right_Selected = nullptr;
			this->btn_clear_search_list_anggota->Iconimage_Selected = nullptr;
			this->btn_clear_search_list_anggota->IconMarginLeft = 0;
			this->btn_clear_search_list_anggota->IconMarginRight = 0;
			this->btn_clear_search_list_anggota->IconRightVisible = true;
			this->btn_clear_search_list_anggota->IconRightZoom = 0;
			this->btn_clear_search_list_anggota->IconVisible = true;
			this->btn_clear_search_list_anggota->IconZoom = 40;
			this->btn_clear_search_list_anggota->IsTab = true;
			this->btn_clear_search_list_anggota->Location = System::Drawing::Point(767, 12);
			this->btn_clear_search_list_anggota->Name = L"btn_clear_search_list_anggota";
			this->btn_clear_search_list_anggota->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_anggota->OnHovercolor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_search_list_anggota->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_clear_search_list_anggota->selected = false;
			this->btn_clear_search_list_anggota->Size = System::Drawing::Size(103, 38);
			this->btn_clear_search_list_anggota->TabIndex = 20;
			this->btn_clear_search_list_anggota->Text = L"Clear";
			this->btn_clear_search_list_anggota->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_clear_search_list_anggota->Textcolor = System::Drawing::Color::Red;
			this->btn_clear_search_list_anggota->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_clear_search_list_anggota->Visible = false;
			this->btn_clear_search_list_anggota->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_clear_search_list_anggota_Click);
			// 
			// tx_search_list_anggota
			// 
			this->tx_search_list_anggota->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_search_list_anggota->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_search_list_anggota->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_search_list_anggota->BorderThickness = 3;
			this->tx_search_list_anggota->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_search_list_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_search_list_anggota->ForeColor = System::Drawing::Color::Black;
			this->tx_search_list_anggota->isPassword = false;
			this->tx_search_list_anggota->Location = System::Drawing::Point(289, 12);
			this->tx_search_list_anggota->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_search_list_anggota->Name = L"tx_search_list_anggota";
			this->tx_search_list_anggota->Size = System::Drawing::Size(471, 38);
			this->tx_search_list_anggota->TabIndex = 19;
			this->tx_search_list_anggota->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// btn_search_list_anggota
			// 
			this->btn_search_list_anggota->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_anggota->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_anggota->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_search_list_anggota->BorderRadius = 0;
			this->btn_search_list_anggota->ButtonText = L"Search";
			this->btn_search_list_anggota->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_search_list_anggota->DisabledColor = System::Drawing::Color::Gray;
			this->btn_search_list_anggota->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_search_list_anggota->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search_list_anggota.Iconimage")));
			this->btn_search_list_anggota->Iconimage_right = nullptr;
			this->btn_search_list_anggota->Iconimage_right_Selected = nullptr;
			this->btn_search_list_anggota->Iconimage_Selected = nullptr;
			this->btn_search_list_anggota->IconMarginLeft = 0;
			this->btn_search_list_anggota->IconMarginRight = 0;
			this->btn_search_list_anggota->IconRightVisible = true;
			this->btn_search_list_anggota->IconRightZoom = 0;
			this->btn_search_list_anggota->IconVisible = true;
			this->btn_search_list_anggota->IconZoom = 40;
			this->btn_search_list_anggota->IsTab = true;
			this->btn_search_list_anggota->Location = System::Drawing::Point(170, 12);
			this->btn_search_list_anggota->Name = L"btn_search_list_anggota";
			this->btn_search_list_anggota->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_anggota->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_search_list_anggota->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_search_list_anggota->selected = false;
			this->btn_search_list_anggota->Size = System::Drawing::Size(112, 38);
			this->btn_search_list_anggota->TabIndex = 18;
			this->btn_search_list_anggota->Text = L"Search";
			this->btn_search_list_anggota->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_search_list_anggota->Textcolor = System::Drawing::Color::White;
			this->btn_search_list_anggota->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_search_list_anggota->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_search_list_anggota_Click);
			// 
			// btn_reload_list_anggota
			// 
			this->btn_reload_list_anggota->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_anggota->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_anggota->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_reload_list_anggota->BorderRadius = 0;
			this->btn_reload_list_anggota->ButtonText = L"Reload";
			this->btn_reload_list_anggota->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reload_list_anggota->DisabledColor = System::Drawing::Color::Gray;
			this->btn_reload_list_anggota->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_reload_list_anggota->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_reload_list_anggota.Iconimage")));
			this->btn_reload_list_anggota->Iconimage_right = nullptr;
			this->btn_reload_list_anggota->Iconimage_right_Selected = nullptr;
			this->btn_reload_list_anggota->Iconimage_Selected = nullptr;
			this->btn_reload_list_anggota->IconMarginLeft = 0;
			this->btn_reload_list_anggota->IconMarginRight = 0;
			this->btn_reload_list_anggota->IconRightVisible = true;
			this->btn_reload_list_anggota->IconRightZoom = 0;
			this->btn_reload_list_anggota->IconVisible = true;
			this->btn_reload_list_anggota->IconZoom = 40;
			this->btn_reload_list_anggota->IsTab = true;
			this->btn_reload_list_anggota->Location = System::Drawing::Point(23, 12);
			this->btn_reload_list_anggota->Name = L"btn_reload_list_anggota";
			this->btn_reload_list_anggota->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_anggota->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_reload_list_anggota->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_reload_list_anggota->selected = false;
			this->btn_reload_list_anggota->Size = System::Drawing::Size(116, 38);
			this->btn_reload_list_anggota->TabIndex = 17;
			this->btn_reload_list_anggota->Text = L"Reload";
			this->btn_reload_list_anggota->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_reload_list_anggota->Textcolor = System::Drawing::Color::White;
			this->btn_reload_list_anggota->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_reload_list_anggota->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_reload_list_anggota_Click);
			// 
			// DataGridListAnggota
			// 
			this->DataGridListAnggota->AllowUserToAddRows = false;
			this->DataGridListAnggota->AllowUserToDeleteRows = false;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::White;
			this->DataGridListAnggota->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle6;
			this->DataGridListAnggota->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DataGridListAnggota->BackgroundColor = System::Drawing::Color::White;
			this->DataGridListAnggota->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DataGridListAnggota->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->DataGridListAnggota->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridListAnggota->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->DataGridListAnggota->ColumnHeadersHeight = 40;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::LightSteelBlue;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DataGridListAnggota->DefaultCellStyle = dataGridViewCellStyle8;
			this->DataGridListAnggota->DoubleBuffered = true;
			this->DataGridListAnggota->EnableHeadersVisualStyles = false;
			this->DataGridListAnggota->GridColor = System::Drawing::Color::WhiteSmoke;
			this->DataGridListAnggota->HeaderBgColor = System::Drawing::Color::RoyalBlue;
			this->DataGridListAnggota->HeaderForeColor = System::Drawing::Color::White;
			this->DataGridListAnggota->Location = System::Drawing::Point(23, 69);
			this->DataGridListAnggota->Name = L"DataGridListAnggota";
			this->DataGridListAnggota->ReadOnly = true;
			this->DataGridListAnggota->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridListAnggota->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->DataGridListAnggota->RowHeadersVisible = false;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DataGridListAnggota->RowsDefaultCellStyle = dataGridViewCellStyle10;
			this->DataGridListAnggota->RowTemplate->DividerHeight = 1;
			this->DataGridListAnggota->RowTemplate->Height = 30;
			this->DataGridListAnggota->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DataGridListAnggota->Size = System::Drawing::Size(995, 429);
			this->DataGridListAnggota->TabIndex = 7;
			// 
			// pnl_list_buku
			// 
			this->pnl_list_buku->Controls->Add(this->CardsListBuku);
			this->pnl_list_buku->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_list_buku->Location = System::Drawing::Point(230, 58);
			this->pnl_list_buku->Name = L"pnl_list_buku";
			this->pnl_list_buku->Size = System::Drawing::Size(1114, 591);
			this->pnl_list_buku->TabIndex = 33;
			this->pnl_list_buku->Visible = false;
			// 
			// CardsListBuku
			// 
			this->CardsListBuku->BackColor = System::Drawing::Color::White;
			this->CardsListBuku->BorderRadius = 8;
			this->CardsListBuku->BottomSahddow = true;
			this->CardsListBuku->color = System::Drawing::Color::Transparent;
			this->CardsListBuku->Controls->Add(this->btn_export_list_buku);
			this->CardsListBuku->Controls->Add(this->btn_clear_search_list_buku);
			this->CardsListBuku->Controls->Add(this->tx_search_list_buku);
			this->CardsListBuku->Controls->Add(this->btn_search_list_buku);
			this->CardsListBuku->Controls->Add(this->btn_reload_list_buku);
			this->CardsListBuku->Controls->Add(this->DataGridListBuku);
			this->CardsListBuku->LeftSahddow = true;
			this->CardsListBuku->Location = System::Drawing::Point(32, 33);
			this->CardsListBuku->Name = L"CardsListBuku";
			this->CardsListBuku->RightSahddow = true;
			this->CardsListBuku->ShadowDepth = 50;
			this->CardsListBuku->Size = System::Drawing::Size(1043, 527);
			this->CardsListBuku->TabIndex = 30;
			// 
			// btn_export_list_buku
			// 
			this->btn_export_list_buku->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_buku->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_buku->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_export_list_buku->BorderRadius = 0;
			this->btn_export_list_buku->ButtonText = L"Export";
			this->btn_export_list_buku->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_export_list_buku->DisabledColor = System::Drawing::Color::Gray;
			this->btn_export_list_buku->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_export_list_buku->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_export_list_buku.Iconimage")));
			this->btn_export_list_buku->Iconimage_right = nullptr;
			this->btn_export_list_buku->Iconimage_right_Selected = nullptr;
			this->btn_export_list_buku->Iconimage_Selected = nullptr;
			this->btn_export_list_buku->IconMarginLeft = 0;
			this->btn_export_list_buku->IconMarginRight = 0;
			this->btn_export_list_buku->IconRightVisible = true;
			this->btn_export_list_buku->IconRightZoom = 0;
			this->btn_export_list_buku->IconVisible = true;
			this->btn_export_list_buku->IconZoom = 40;
			this->btn_export_list_buku->IsTab = true;
			this->btn_export_list_buku->Location = System::Drawing::Point(885, 12);
			this->btn_export_list_buku->Name = L"btn_export_list_buku";
			this->btn_export_list_buku->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_buku->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_export_list_buku->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_export_list_buku->selected = false;
			this->btn_export_list_buku->Size = System::Drawing::Size(112, 38);
			this->btn_export_list_buku->TabIndex = 21;
			this->btn_export_list_buku->Text = L"Export";
			this->btn_export_list_buku->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_export_list_buku->Textcolor = System::Drawing::Color::White;
			this->btn_export_list_buku->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_export_list_buku->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_export_list_buku_Click);
			// 
			// btn_clear_search_list_buku
			// 
			this->btn_clear_search_list_buku->Activecolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_buku->BackColor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_buku->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_clear_search_list_buku->BorderRadius = 0;
			this->btn_clear_search_list_buku->ButtonText = L"Clear";
			this->btn_clear_search_list_buku->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_clear_search_list_buku->DisabledColor = System::Drawing::Color::Gray;
			this->btn_clear_search_list_buku->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_clear_search_list_buku->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_buku->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clear_search_list_buku.Iconimage")));
			this->btn_clear_search_list_buku->Iconimage_right = nullptr;
			this->btn_clear_search_list_buku->Iconimage_right_Selected = nullptr;
			this->btn_clear_search_list_buku->Iconimage_Selected = nullptr;
			this->btn_clear_search_list_buku->IconMarginLeft = 0;
			this->btn_clear_search_list_buku->IconMarginRight = 0;
			this->btn_clear_search_list_buku->IconRightVisible = true;
			this->btn_clear_search_list_buku->IconRightZoom = 0;
			this->btn_clear_search_list_buku->IconVisible = true;
			this->btn_clear_search_list_buku->IconZoom = 40;
			this->btn_clear_search_list_buku->IsTab = true;
			this->btn_clear_search_list_buku->Location = System::Drawing::Point(767, 12);
			this->btn_clear_search_list_buku->Name = L"btn_clear_search_list_buku";
			this->btn_clear_search_list_buku->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_buku->OnHovercolor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_search_list_buku->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_clear_search_list_buku->selected = false;
			this->btn_clear_search_list_buku->Size = System::Drawing::Size(103, 38);
			this->btn_clear_search_list_buku->TabIndex = 20;
			this->btn_clear_search_list_buku->Text = L"Clear";
			this->btn_clear_search_list_buku->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_clear_search_list_buku->Textcolor = System::Drawing::Color::Red;
			this->btn_clear_search_list_buku->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_clear_search_list_buku->Visible = false;
			this->btn_clear_search_list_buku->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_clear_search_list_buku_Click);
			// 
			// tx_search_list_buku
			// 
			this->tx_search_list_buku->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_search_list_buku->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_search_list_buku->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_search_list_buku->BorderThickness = 3;
			this->tx_search_list_buku->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_search_list_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_search_list_buku->ForeColor = System::Drawing::Color::Black;
			this->tx_search_list_buku->isPassword = false;
			this->tx_search_list_buku->Location = System::Drawing::Point(289, 12);
			this->tx_search_list_buku->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_search_list_buku->Name = L"tx_search_list_buku";
			this->tx_search_list_buku->Size = System::Drawing::Size(471, 38);
			this->tx_search_list_buku->TabIndex = 19;
			this->tx_search_list_buku->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// btn_search_list_buku
			// 
			this->btn_search_list_buku->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_buku->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_buku->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_search_list_buku->BorderRadius = 0;
			this->btn_search_list_buku->ButtonText = L"Search";
			this->btn_search_list_buku->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_search_list_buku->DisabledColor = System::Drawing::Color::Gray;
			this->btn_search_list_buku->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_search_list_buku->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search_list_buku.Iconimage")));
			this->btn_search_list_buku->Iconimage_right = nullptr;
			this->btn_search_list_buku->Iconimage_right_Selected = nullptr;
			this->btn_search_list_buku->Iconimage_Selected = nullptr;
			this->btn_search_list_buku->IconMarginLeft = 0;
			this->btn_search_list_buku->IconMarginRight = 0;
			this->btn_search_list_buku->IconRightVisible = true;
			this->btn_search_list_buku->IconRightZoom = 0;
			this->btn_search_list_buku->IconVisible = true;
			this->btn_search_list_buku->IconZoom = 40;
			this->btn_search_list_buku->IsTab = true;
			this->btn_search_list_buku->Location = System::Drawing::Point(170, 12);
			this->btn_search_list_buku->Name = L"btn_search_list_buku";
			this->btn_search_list_buku->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_buku->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_search_list_buku->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_search_list_buku->selected = false;
			this->btn_search_list_buku->Size = System::Drawing::Size(112, 38);
			this->btn_search_list_buku->TabIndex = 18;
			this->btn_search_list_buku->Text = L"Search";
			this->btn_search_list_buku->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_search_list_buku->Textcolor = System::Drawing::Color::White;
			this->btn_search_list_buku->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_search_list_buku->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_search_list_buku_Click);
			// 
			// btn_reload_list_buku
			// 
			this->btn_reload_list_buku->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_buku->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_buku->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_reload_list_buku->BorderRadius = 0;
			this->btn_reload_list_buku->ButtonText = L"Reload";
			this->btn_reload_list_buku->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reload_list_buku->DisabledColor = System::Drawing::Color::Gray;
			this->btn_reload_list_buku->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_reload_list_buku->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_reload_list_buku.Iconimage")));
			this->btn_reload_list_buku->Iconimage_right = nullptr;
			this->btn_reload_list_buku->Iconimage_right_Selected = nullptr;
			this->btn_reload_list_buku->Iconimage_Selected = nullptr;
			this->btn_reload_list_buku->IconMarginLeft = 0;
			this->btn_reload_list_buku->IconMarginRight = 0;
			this->btn_reload_list_buku->IconRightVisible = true;
			this->btn_reload_list_buku->IconRightZoom = 0;
			this->btn_reload_list_buku->IconVisible = true;
			this->btn_reload_list_buku->IconZoom = 40;
			this->btn_reload_list_buku->IsTab = true;
			this->btn_reload_list_buku->Location = System::Drawing::Point(23, 12);
			this->btn_reload_list_buku->Name = L"btn_reload_list_buku";
			this->btn_reload_list_buku->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_buku->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_reload_list_buku->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_reload_list_buku->selected = false;
			this->btn_reload_list_buku->Size = System::Drawing::Size(116, 38);
			this->btn_reload_list_buku->TabIndex = 17;
			this->btn_reload_list_buku->Text = L"Reload";
			this->btn_reload_list_buku->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_reload_list_buku->Textcolor = System::Drawing::Color::White;
			this->btn_reload_list_buku->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_reload_list_buku->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_reload_list_buku_Click);
			// 
			// DataGridListBuku
			// 
			this->DataGridListBuku->AllowUserToAddRows = false;
			this->DataGridListBuku->AllowUserToDeleteRows = false;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::White;
			this->DataGridListBuku->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle11;
			this->DataGridListBuku->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DataGridListBuku->BackgroundColor = System::Drawing::Color::White;
			this->DataGridListBuku->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DataGridListBuku->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->DataGridListBuku->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle12->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridListBuku->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle12;
			this->DataGridListBuku->ColumnHeadersHeight = 40;
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle13->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::Color::LightSteelBlue;
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DataGridListBuku->DefaultCellStyle = dataGridViewCellStyle13;
			this->DataGridListBuku->DoubleBuffered = true;
			this->DataGridListBuku->EnableHeadersVisualStyles = false;
			this->DataGridListBuku->GridColor = System::Drawing::Color::WhiteSmoke;
			this->DataGridListBuku->HeaderBgColor = System::Drawing::Color::RoyalBlue;
			this->DataGridListBuku->HeaderForeColor = System::Drawing::Color::White;
			this->DataGridListBuku->Location = System::Drawing::Point(23, 69);
			this->DataGridListBuku->Name = L"DataGridListBuku";
			this->DataGridListBuku->ReadOnly = true;
			this->DataGridListBuku->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle14->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle14->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle14->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle14->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridListBuku->RowHeadersDefaultCellStyle = dataGridViewCellStyle14;
			this->DataGridListBuku->RowHeadersVisible = false;
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DataGridListBuku->RowsDefaultCellStyle = dataGridViewCellStyle15;
			this->DataGridListBuku->RowTemplate->DividerHeight = 1;
			this->DataGridListBuku->RowTemplate->Height = 30;
			this->DataGridListBuku->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DataGridListBuku->Size = System::Drawing::Size(995, 429);
			this->DataGridListBuku->TabIndex = 7;
			// 
			// pnl_list_peminjaman
			// 
			this->pnl_list_peminjaman->Controls->Add(this->CardsListPeminjaman);
			this->pnl_list_peminjaman->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_list_peminjaman->Location = System::Drawing::Point(230, 58);
			this->pnl_list_peminjaman->Name = L"pnl_list_peminjaman";
			this->pnl_list_peminjaman->Size = System::Drawing::Size(1114, 591);
			this->pnl_list_peminjaman->TabIndex = 34;
			this->pnl_list_peminjaman->Visible = false;
			// 
			// CardsListPeminjaman
			// 
			this->CardsListPeminjaman->BackColor = System::Drawing::Color::White;
			this->CardsListPeminjaman->BorderRadius = 8;
			this->CardsListPeminjaman->BottomSahddow = true;
			this->CardsListPeminjaman->color = System::Drawing::Color::Transparent;
			this->CardsListPeminjaman->Controls->Add(this->btn_export_list_peminjaman);
			this->CardsListPeminjaman->Controls->Add(this->btn_clear_search_list_peminjaman);
			this->CardsListPeminjaman->Controls->Add(this->tx_search_list_peminjaman);
			this->CardsListPeminjaman->Controls->Add(this->btn_search_list_peminjaman);
			this->CardsListPeminjaman->Controls->Add(this->btn_reload_list_peminjaman);
			this->CardsListPeminjaman->Controls->Add(this->DataGridListPeminjaman);
			this->CardsListPeminjaman->LeftSahddow = true;
			this->CardsListPeminjaman->Location = System::Drawing::Point(32, 33);
			this->CardsListPeminjaman->Name = L"CardsListPeminjaman";
			this->CardsListPeminjaman->RightSahddow = true;
			this->CardsListPeminjaman->ShadowDepth = 50;
			this->CardsListPeminjaman->Size = System::Drawing::Size(1043, 527);
			this->CardsListPeminjaman->TabIndex = 30;
			// 
			// btn_export_list_peminjaman
			// 
			this->btn_export_list_peminjaman->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_peminjaman->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_peminjaman->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_export_list_peminjaman->BorderRadius = 0;
			this->btn_export_list_peminjaman->ButtonText = L"Export";
			this->btn_export_list_peminjaman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_export_list_peminjaman->DisabledColor = System::Drawing::Color::Gray;
			this->btn_export_list_peminjaman->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_export_list_peminjaman->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_export_list_peminjaman.Iconimage")));
			this->btn_export_list_peminjaman->Iconimage_right = nullptr;
			this->btn_export_list_peminjaman->Iconimage_right_Selected = nullptr;
			this->btn_export_list_peminjaman->Iconimage_Selected = nullptr;
			this->btn_export_list_peminjaman->IconMarginLeft = 0;
			this->btn_export_list_peminjaman->IconMarginRight = 0;
			this->btn_export_list_peminjaman->IconRightVisible = true;
			this->btn_export_list_peminjaman->IconRightZoom = 0;
			this->btn_export_list_peminjaman->IconVisible = true;
			this->btn_export_list_peminjaman->IconZoom = 40;
			this->btn_export_list_peminjaman->IsTab = true;
			this->btn_export_list_peminjaman->Location = System::Drawing::Point(885, 12);
			this->btn_export_list_peminjaman->Name = L"btn_export_list_peminjaman";
			this->btn_export_list_peminjaman->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_peminjaman->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_export_list_peminjaman->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_export_list_peminjaman->selected = false;
			this->btn_export_list_peminjaman->Size = System::Drawing::Size(112, 38);
			this->btn_export_list_peminjaman->TabIndex = 21;
			this->btn_export_list_peminjaman->Text = L"Export";
			this->btn_export_list_peminjaman->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_export_list_peminjaman->Textcolor = System::Drawing::Color::White;
			this->btn_export_list_peminjaman->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_export_list_peminjaman->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_export_list_peminjaman_Click);
			// 
			// btn_clear_search_list_peminjaman
			// 
			this->btn_clear_search_list_peminjaman->Activecolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_peminjaman->BackColor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_peminjaman->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_clear_search_list_peminjaman->BorderRadius = 0;
			this->btn_clear_search_list_peminjaman->ButtonText = L"Clear";
			this->btn_clear_search_list_peminjaman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_clear_search_list_peminjaman->DisabledColor = System::Drawing::Color::Gray;
			this->btn_clear_search_list_peminjaman->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_clear_search_list_peminjaman->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_peminjaman->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clear_search_list_peminjaman.Iconimage")));
			this->btn_clear_search_list_peminjaman->Iconimage_right = nullptr;
			this->btn_clear_search_list_peminjaman->Iconimage_right_Selected = nullptr;
			this->btn_clear_search_list_peminjaman->Iconimage_Selected = nullptr;
			this->btn_clear_search_list_peminjaman->IconMarginLeft = 0;
			this->btn_clear_search_list_peminjaman->IconMarginRight = 0;
			this->btn_clear_search_list_peminjaman->IconRightVisible = true;
			this->btn_clear_search_list_peminjaman->IconRightZoom = 0;
			this->btn_clear_search_list_peminjaman->IconVisible = true;
			this->btn_clear_search_list_peminjaman->IconZoom = 40;
			this->btn_clear_search_list_peminjaman->IsTab = true;
			this->btn_clear_search_list_peminjaman->Location = System::Drawing::Point(767, 12);
			this->btn_clear_search_list_peminjaman->Name = L"btn_clear_search_list_peminjaman";
			this->btn_clear_search_list_peminjaman->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_peminjaman->OnHovercolor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_search_list_peminjaman->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_clear_search_list_peminjaman->selected = false;
			this->btn_clear_search_list_peminjaman->Size = System::Drawing::Size(103, 38);
			this->btn_clear_search_list_peminjaman->TabIndex = 20;
			this->btn_clear_search_list_peminjaman->Text = L"Clear";
			this->btn_clear_search_list_peminjaman->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_clear_search_list_peminjaman->Textcolor = System::Drawing::Color::Red;
			this->btn_clear_search_list_peminjaman->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_clear_search_list_peminjaman->Visible = false;
			this->btn_clear_search_list_peminjaman->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_clear_search_list_peminjaman_Click);
			// 
			// tx_search_list_peminjaman
			// 
			this->tx_search_list_peminjaman->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_search_list_peminjaman->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_search_list_peminjaman->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_search_list_peminjaman->BorderThickness = 3;
			this->tx_search_list_peminjaman->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_search_list_peminjaman->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_search_list_peminjaman->ForeColor = System::Drawing::Color::Black;
			this->tx_search_list_peminjaman->isPassword = false;
			this->tx_search_list_peminjaman->Location = System::Drawing::Point(289, 12);
			this->tx_search_list_peminjaman->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_search_list_peminjaman->Name = L"tx_search_list_peminjaman";
			this->tx_search_list_peminjaman->Size = System::Drawing::Size(471, 38);
			this->tx_search_list_peminjaman->TabIndex = 19;
			this->tx_search_list_peminjaman->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// btn_search_list_peminjaman
			// 
			this->btn_search_list_peminjaman->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_peminjaman->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_peminjaman->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_search_list_peminjaman->BorderRadius = 0;
			this->btn_search_list_peminjaman->ButtonText = L"Search";
			this->btn_search_list_peminjaman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_search_list_peminjaman->DisabledColor = System::Drawing::Color::Gray;
			this->btn_search_list_peminjaman->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_search_list_peminjaman->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search_list_peminjaman.Iconimage")));
			this->btn_search_list_peminjaman->Iconimage_right = nullptr;
			this->btn_search_list_peminjaman->Iconimage_right_Selected = nullptr;
			this->btn_search_list_peminjaman->Iconimage_Selected = nullptr;
			this->btn_search_list_peminjaman->IconMarginLeft = 0;
			this->btn_search_list_peminjaman->IconMarginRight = 0;
			this->btn_search_list_peminjaman->IconRightVisible = true;
			this->btn_search_list_peminjaman->IconRightZoom = 0;
			this->btn_search_list_peminjaman->IconVisible = true;
			this->btn_search_list_peminjaman->IconZoom = 40;
			this->btn_search_list_peminjaman->IsTab = true;
			this->btn_search_list_peminjaman->Location = System::Drawing::Point(170, 12);
			this->btn_search_list_peminjaman->Name = L"btn_search_list_peminjaman";
			this->btn_search_list_peminjaman->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_peminjaman->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_search_list_peminjaman->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_search_list_peminjaman->selected = false;
			this->btn_search_list_peminjaman->Size = System::Drawing::Size(112, 38);
			this->btn_search_list_peminjaman->TabIndex = 18;
			this->btn_search_list_peminjaman->Text = L"Search";
			this->btn_search_list_peminjaman->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_search_list_peminjaman->Textcolor = System::Drawing::Color::White;
			this->btn_search_list_peminjaman->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_search_list_peminjaman->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_search_list_peminjaman_Click);
			// 
			// btn_reload_list_peminjaman
			// 
			this->btn_reload_list_peminjaman->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_peminjaman->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_peminjaman->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_reload_list_peminjaman->BorderRadius = 0;
			this->btn_reload_list_peminjaman->ButtonText = L"Reload";
			this->btn_reload_list_peminjaman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reload_list_peminjaman->DisabledColor = System::Drawing::Color::Gray;
			this->btn_reload_list_peminjaman->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_reload_list_peminjaman->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_reload_list_peminjaman.Iconimage")));
			this->btn_reload_list_peminjaman->Iconimage_right = nullptr;
			this->btn_reload_list_peminjaman->Iconimage_right_Selected = nullptr;
			this->btn_reload_list_peminjaman->Iconimage_Selected = nullptr;
			this->btn_reload_list_peminjaman->IconMarginLeft = 0;
			this->btn_reload_list_peminjaman->IconMarginRight = 0;
			this->btn_reload_list_peminjaman->IconRightVisible = true;
			this->btn_reload_list_peminjaman->IconRightZoom = 0;
			this->btn_reload_list_peminjaman->IconVisible = true;
			this->btn_reload_list_peminjaman->IconZoom = 40;
			this->btn_reload_list_peminjaman->IsTab = true;
			this->btn_reload_list_peminjaman->Location = System::Drawing::Point(23, 12);
			this->btn_reload_list_peminjaman->Name = L"btn_reload_list_peminjaman";
			this->btn_reload_list_peminjaman->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_peminjaman->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_reload_list_peminjaman->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_reload_list_peminjaman->selected = false;
			this->btn_reload_list_peminjaman->Size = System::Drawing::Size(116, 38);
			this->btn_reload_list_peminjaman->TabIndex = 17;
			this->btn_reload_list_peminjaman->Text = L"Reload";
			this->btn_reload_list_peminjaman->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_reload_list_peminjaman->Textcolor = System::Drawing::Color::White;
			this->btn_reload_list_peminjaman->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_reload_list_peminjaman->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_reload_list_peminjaman_Click);
			// 
			// DataGridListPeminjaman
			// 
			this->DataGridListPeminjaman->AllowUserToAddRows = false;
			this->DataGridListPeminjaman->AllowUserToDeleteRows = false;
			dataGridViewCellStyle16->BackColor = System::Drawing::Color::White;
			this->DataGridListPeminjaman->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle16;
			this->DataGridListPeminjaman->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DataGridListPeminjaman->BackgroundColor = System::Drawing::Color::White;
			this->DataGridListPeminjaman->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DataGridListPeminjaman->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->DataGridListPeminjaman->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle17->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle17->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle17->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle17->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle17->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridListPeminjaman->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle17;
			this->DataGridListPeminjaman->ColumnHeadersHeight = 40;
			dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle18->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle18->SelectionBackColor = System::Drawing::Color::LightSteelBlue;
			dataGridViewCellStyle18->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DataGridListPeminjaman->DefaultCellStyle = dataGridViewCellStyle18;
			this->DataGridListPeminjaman->DoubleBuffered = true;
			this->DataGridListPeminjaman->EnableHeadersVisualStyles = false;
			this->DataGridListPeminjaman->GridColor = System::Drawing::Color::WhiteSmoke;
			this->DataGridListPeminjaman->HeaderBgColor = System::Drawing::Color::RoyalBlue;
			this->DataGridListPeminjaman->HeaderForeColor = System::Drawing::Color::White;
			this->DataGridListPeminjaman->Location = System::Drawing::Point(23, 69);
			this->DataGridListPeminjaman->Name = L"DataGridListPeminjaman";
			this->DataGridListPeminjaman->ReadOnly = true;
			this->DataGridListPeminjaman->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle19->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle19->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle19->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle19->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle19->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle19->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridListPeminjaman->RowHeadersDefaultCellStyle = dataGridViewCellStyle19;
			this->DataGridListPeminjaman->RowHeadersVisible = false;
			dataGridViewCellStyle20->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DataGridListPeminjaman->RowsDefaultCellStyle = dataGridViewCellStyle20;
			this->DataGridListPeminjaman->RowTemplate->DividerHeight = 1;
			this->DataGridListPeminjaman->RowTemplate->Height = 30;
			this->DataGridListPeminjaman->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DataGridListPeminjaman->Size = System::Drawing::Size(995, 429);
			this->DataGridListPeminjaman->TabIndex = 7;
			// 
			// pnl_list_jurusan
			// 
			this->pnl_list_jurusan->Controls->Add(this->CardsListJurusan);
			this->pnl_list_jurusan->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_list_jurusan->Location = System::Drawing::Point(230, 58);
			this->pnl_list_jurusan->Name = L"pnl_list_jurusan";
			this->pnl_list_jurusan->Size = System::Drawing::Size(1114, 591);
			this->pnl_list_jurusan->TabIndex = 35;
			this->pnl_list_jurusan->Visible = false;
			// 
			// CardsListJurusan
			// 
			this->CardsListJurusan->BackColor = System::Drawing::Color::White;
			this->CardsListJurusan->BorderRadius = 8;
			this->CardsListJurusan->BottomSahddow = true;
			this->CardsListJurusan->color = System::Drawing::Color::Transparent;
			this->CardsListJurusan->Controls->Add(this->btn_export_list_jurusan);
			this->CardsListJurusan->Controls->Add(this->btn_clear_search_list_jurusan);
			this->CardsListJurusan->Controls->Add(this->tx_search_list_jurusan);
			this->CardsListJurusan->Controls->Add(this->btn_search_list_jurusan);
			this->CardsListJurusan->Controls->Add(this->btn_reload_list_jurusan);
			this->CardsListJurusan->Controls->Add(this->DataGridListJurusan);
			this->CardsListJurusan->LeftSahddow = true;
			this->CardsListJurusan->Location = System::Drawing::Point(32, 33);
			this->CardsListJurusan->Name = L"CardsListJurusan";
			this->CardsListJurusan->RightSahddow = true;
			this->CardsListJurusan->ShadowDepth = 50;
			this->CardsListJurusan->Size = System::Drawing::Size(1043, 527);
			this->CardsListJurusan->TabIndex = 30;
			// 
			// btn_export_list_jurusan
			// 
			this->btn_export_list_jurusan->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_jurusan->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_jurusan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_export_list_jurusan->BorderRadius = 0;
			this->btn_export_list_jurusan->ButtonText = L"Export";
			this->btn_export_list_jurusan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_export_list_jurusan->DisabledColor = System::Drawing::Color::Gray;
			this->btn_export_list_jurusan->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_export_list_jurusan->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_export_list_jurusan.Iconimage")));
			this->btn_export_list_jurusan->Iconimage_right = nullptr;
			this->btn_export_list_jurusan->Iconimage_right_Selected = nullptr;
			this->btn_export_list_jurusan->Iconimage_Selected = nullptr;
			this->btn_export_list_jurusan->IconMarginLeft = 0;
			this->btn_export_list_jurusan->IconMarginRight = 0;
			this->btn_export_list_jurusan->IconRightVisible = true;
			this->btn_export_list_jurusan->IconRightZoom = 0;
			this->btn_export_list_jurusan->IconVisible = true;
			this->btn_export_list_jurusan->IconZoom = 40;
			this->btn_export_list_jurusan->IsTab = true;
			this->btn_export_list_jurusan->Location = System::Drawing::Point(885, 12);
			this->btn_export_list_jurusan->Name = L"btn_export_list_jurusan";
			this->btn_export_list_jurusan->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_jurusan->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_export_list_jurusan->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_export_list_jurusan->selected = false;
			this->btn_export_list_jurusan->Size = System::Drawing::Size(112, 38);
			this->btn_export_list_jurusan->TabIndex = 21;
			this->btn_export_list_jurusan->Text = L"Export";
			this->btn_export_list_jurusan->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_export_list_jurusan->Textcolor = System::Drawing::Color::White;
			this->btn_export_list_jurusan->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_export_list_jurusan->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_export_list_jurusan_Click);
			// 
			// btn_clear_search_list_jurusan
			// 
			this->btn_clear_search_list_jurusan->Activecolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_jurusan->BackColor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_jurusan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_clear_search_list_jurusan->BorderRadius = 0;
			this->btn_clear_search_list_jurusan->ButtonText = L"Clear";
			this->btn_clear_search_list_jurusan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_clear_search_list_jurusan->DisabledColor = System::Drawing::Color::Gray;
			this->btn_clear_search_list_jurusan->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_clear_search_list_jurusan->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_jurusan->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clear_search_list_jurusan.Iconimage")));
			this->btn_clear_search_list_jurusan->Iconimage_right = nullptr;
			this->btn_clear_search_list_jurusan->Iconimage_right_Selected = nullptr;
			this->btn_clear_search_list_jurusan->Iconimage_Selected = nullptr;
			this->btn_clear_search_list_jurusan->IconMarginLeft = 0;
			this->btn_clear_search_list_jurusan->IconMarginRight = 0;
			this->btn_clear_search_list_jurusan->IconRightVisible = true;
			this->btn_clear_search_list_jurusan->IconRightZoom = 0;
			this->btn_clear_search_list_jurusan->IconVisible = true;
			this->btn_clear_search_list_jurusan->IconZoom = 40;
			this->btn_clear_search_list_jurusan->IsTab = true;
			this->btn_clear_search_list_jurusan->Location = System::Drawing::Point(767, 12);
			this->btn_clear_search_list_jurusan->Name = L"btn_clear_search_list_jurusan";
			this->btn_clear_search_list_jurusan->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_jurusan->OnHovercolor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_search_list_jurusan->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_clear_search_list_jurusan->selected = false;
			this->btn_clear_search_list_jurusan->Size = System::Drawing::Size(103, 38);
			this->btn_clear_search_list_jurusan->TabIndex = 20;
			this->btn_clear_search_list_jurusan->Text = L"Clear";
			this->btn_clear_search_list_jurusan->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_clear_search_list_jurusan->Textcolor = System::Drawing::Color::Red;
			this->btn_clear_search_list_jurusan->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_clear_search_list_jurusan->Visible = false;
			this->btn_clear_search_list_jurusan->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_clear_search_list_jurusan_Click);
			// 
			// tx_search_list_jurusan
			// 
			this->tx_search_list_jurusan->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_search_list_jurusan->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_search_list_jurusan->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_search_list_jurusan->BorderThickness = 3;
			this->tx_search_list_jurusan->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_search_list_jurusan->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_search_list_jurusan->ForeColor = System::Drawing::Color::Black;
			this->tx_search_list_jurusan->isPassword = false;
			this->tx_search_list_jurusan->Location = System::Drawing::Point(289, 12);
			this->tx_search_list_jurusan->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_search_list_jurusan->Name = L"tx_search_list_jurusan";
			this->tx_search_list_jurusan->Size = System::Drawing::Size(471, 38);
			this->tx_search_list_jurusan->TabIndex = 19;
			this->tx_search_list_jurusan->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// btn_search_list_jurusan
			// 
			this->btn_search_list_jurusan->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_jurusan->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_jurusan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_search_list_jurusan->BorderRadius = 0;
			this->btn_search_list_jurusan->ButtonText = L"Search";
			this->btn_search_list_jurusan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_search_list_jurusan->DisabledColor = System::Drawing::Color::Gray;
			this->btn_search_list_jurusan->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_search_list_jurusan->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search_list_jurusan.Iconimage")));
			this->btn_search_list_jurusan->Iconimage_right = nullptr;
			this->btn_search_list_jurusan->Iconimage_right_Selected = nullptr;
			this->btn_search_list_jurusan->Iconimage_Selected = nullptr;
			this->btn_search_list_jurusan->IconMarginLeft = 0;
			this->btn_search_list_jurusan->IconMarginRight = 0;
			this->btn_search_list_jurusan->IconRightVisible = true;
			this->btn_search_list_jurusan->IconRightZoom = 0;
			this->btn_search_list_jurusan->IconVisible = true;
			this->btn_search_list_jurusan->IconZoom = 40;
			this->btn_search_list_jurusan->IsTab = true;
			this->btn_search_list_jurusan->Location = System::Drawing::Point(170, 12);
			this->btn_search_list_jurusan->Name = L"btn_search_list_jurusan";
			this->btn_search_list_jurusan->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_jurusan->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_search_list_jurusan->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_search_list_jurusan->selected = false;
			this->btn_search_list_jurusan->Size = System::Drawing::Size(112, 38);
			this->btn_search_list_jurusan->TabIndex = 18;
			this->btn_search_list_jurusan->Text = L"Search";
			this->btn_search_list_jurusan->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_search_list_jurusan->Textcolor = System::Drawing::Color::White;
			this->btn_search_list_jurusan->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_search_list_jurusan->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_search_list_jurusan_Click);
			// 
			// btn_reload_list_jurusan
			// 
			this->btn_reload_list_jurusan->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_jurusan->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_jurusan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_reload_list_jurusan->BorderRadius = 0;
			this->btn_reload_list_jurusan->ButtonText = L"Reload";
			this->btn_reload_list_jurusan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reload_list_jurusan->DisabledColor = System::Drawing::Color::Gray;
			this->btn_reload_list_jurusan->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_reload_list_jurusan->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_reload_list_jurusan.Iconimage")));
			this->btn_reload_list_jurusan->Iconimage_right = nullptr;
			this->btn_reload_list_jurusan->Iconimage_right_Selected = nullptr;
			this->btn_reload_list_jurusan->Iconimage_Selected = nullptr;
			this->btn_reload_list_jurusan->IconMarginLeft = 0;
			this->btn_reload_list_jurusan->IconMarginRight = 0;
			this->btn_reload_list_jurusan->IconRightVisible = true;
			this->btn_reload_list_jurusan->IconRightZoom = 0;
			this->btn_reload_list_jurusan->IconVisible = true;
			this->btn_reload_list_jurusan->IconZoom = 40;
			this->btn_reload_list_jurusan->IsTab = true;
			this->btn_reload_list_jurusan->Location = System::Drawing::Point(23, 12);
			this->btn_reload_list_jurusan->Name = L"btn_reload_list_jurusan";
			this->btn_reload_list_jurusan->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_jurusan->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_reload_list_jurusan->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_reload_list_jurusan->selected = false;
			this->btn_reload_list_jurusan->Size = System::Drawing::Size(116, 38);
			this->btn_reload_list_jurusan->TabIndex = 17;
			this->btn_reload_list_jurusan->Text = L"Reload";
			this->btn_reload_list_jurusan->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_reload_list_jurusan->Textcolor = System::Drawing::Color::White;
			this->btn_reload_list_jurusan->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_reload_list_jurusan->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_reload_list_jurusan_Click);
			// 
			// DataGridListJurusan
			// 
			this->DataGridListJurusan->AllowUserToAddRows = false;
			this->DataGridListJurusan->AllowUserToDeleteRows = false;
			dataGridViewCellStyle21->BackColor = System::Drawing::Color::White;
			this->DataGridListJurusan->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle21;
			this->DataGridListJurusan->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DataGridListJurusan->BackgroundColor = System::Drawing::Color::White;
			this->DataGridListJurusan->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DataGridListJurusan->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->DataGridListJurusan->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle22->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridViewCellStyle22->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle22->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle22->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle22->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle22->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridListJurusan->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle22;
			this->DataGridListJurusan->ColumnHeadersHeight = 40;
			dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle23->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle23->SelectionBackColor = System::Drawing::Color::LightSteelBlue;
			dataGridViewCellStyle23->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle23->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DataGridListJurusan->DefaultCellStyle = dataGridViewCellStyle23;
			this->DataGridListJurusan->DoubleBuffered = true;
			this->DataGridListJurusan->EnableHeadersVisualStyles = false;
			this->DataGridListJurusan->GridColor = System::Drawing::Color::WhiteSmoke;
			this->DataGridListJurusan->HeaderBgColor = System::Drawing::Color::RoyalBlue;
			this->DataGridListJurusan->HeaderForeColor = System::Drawing::Color::White;
			this->DataGridListJurusan->Location = System::Drawing::Point(23, 69);
			this->DataGridListJurusan->Name = L"DataGridListJurusan";
			this->DataGridListJurusan->ReadOnly = true;
			this->DataGridListJurusan->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle24->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle24->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle24->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle24->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle24->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle24->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridListJurusan->RowHeadersDefaultCellStyle = dataGridViewCellStyle24;
			this->DataGridListJurusan->RowHeadersVisible = false;
			dataGridViewCellStyle25->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DataGridListJurusan->RowsDefaultCellStyle = dataGridViewCellStyle25;
			this->DataGridListJurusan->RowTemplate->DividerHeight = 1;
			this->DataGridListJurusan->RowTemplate->Height = 30;
			this->DataGridListJurusan->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DataGridListJurusan->Size = System::Drawing::Size(995, 429);
			this->DataGridListJurusan->TabIndex = 7;
			// 
			// pnl_list_prodi
			// 
			this->pnl_list_prodi->Controls->Add(this->CardsListProdi);
			this->pnl_list_prodi->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_list_prodi->Location = System::Drawing::Point(230, 58);
			this->pnl_list_prodi->Name = L"pnl_list_prodi";
			this->pnl_list_prodi->Size = System::Drawing::Size(1114, 591);
			this->pnl_list_prodi->TabIndex = 36;
			this->pnl_list_prodi->Visible = false;
			// 
			// CardsListProdi
			// 
			this->CardsListProdi->BackColor = System::Drawing::Color::White;
			this->CardsListProdi->BorderRadius = 8;
			this->CardsListProdi->BottomSahddow = true;
			this->CardsListProdi->color = System::Drawing::Color::Transparent;
			this->CardsListProdi->Controls->Add(this->btn_export_list_prodi);
			this->CardsListProdi->Controls->Add(this->btn_clear_search_list_prodi);
			this->CardsListProdi->Controls->Add(this->tx_search_list_prodi);
			this->CardsListProdi->Controls->Add(this->btn_search_list_prodi);
			this->CardsListProdi->Controls->Add(this->btn_reload_list_prodi);
			this->CardsListProdi->Controls->Add(this->DataGridListProdi);
			this->CardsListProdi->LeftSahddow = true;
			this->CardsListProdi->Location = System::Drawing::Point(32, 33);
			this->CardsListProdi->Name = L"CardsListProdi";
			this->CardsListProdi->RightSahddow = true;
			this->CardsListProdi->ShadowDepth = 50;
			this->CardsListProdi->Size = System::Drawing::Size(1043, 527);
			this->CardsListProdi->TabIndex = 30;
			// 
			// btn_export_list_prodi
			// 
			this->btn_export_list_prodi->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_prodi->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_prodi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_export_list_prodi->BorderRadius = 0;
			this->btn_export_list_prodi->ButtonText = L"Export";
			this->btn_export_list_prodi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_export_list_prodi->DisabledColor = System::Drawing::Color::Gray;
			this->btn_export_list_prodi->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_export_list_prodi->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_export_list_prodi.Iconimage")));
			this->btn_export_list_prodi->Iconimage_right = nullptr;
			this->btn_export_list_prodi->Iconimage_right_Selected = nullptr;
			this->btn_export_list_prodi->Iconimage_Selected = nullptr;
			this->btn_export_list_prodi->IconMarginLeft = 0;
			this->btn_export_list_prodi->IconMarginRight = 0;
			this->btn_export_list_prodi->IconRightVisible = true;
			this->btn_export_list_prodi->IconRightZoom = 0;
			this->btn_export_list_prodi->IconVisible = true;
			this->btn_export_list_prodi->IconZoom = 40;
			this->btn_export_list_prodi->IsTab = true;
			this->btn_export_list_prodi->Location = System::Drawing::Point(885, 12);
			this->btn_export_list_prodi->Name = L"btn_export_list_prodi";
			this->btn_export_list_prodi->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_export_list_prodi->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_export_list_prodi->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_export_list_prodi->selected = false;
			this->btn_export_list_prodi->Size = System::Drawing::Size(112, 38);
			this->btn_export_list_prodi->TabIndex = 21;
			this->btn_export_list_prodi->Text = L"Export";
			this->btn_export_list_prodi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_export_list_prodi->Textcolor = System::Drawing::Color::White;
			this->btn_export_list_prodi->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_export_list_prodi->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_export_list_prodi_Click);
			// 
			// btn_clear_search_list_prodi
			// 
			this->btn_clear_search_list_prodi->Activecolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_prodi->BackColor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_prodi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_clear_search_list_prodi->BorderRadius = 0;
			this->btn_clear_search_list_prodi->ButtonText = L"Clear";
			this->btn_clear_search_list_prodi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_clear_search_list_prodi->DisabledColor = System::Drawing::Color::Gray;
			this->btn_clear_search_list_prodi->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_clear_search_list_prodi->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_prodi->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clear_search_list_prodi.Iconimage")));
			this->btn_clear_search_list_prodi->Iconimage_right = nullptr;
			this->btn_clear_search_list_prodi->Iconimage_right_Selected = nullptr;
			this->btn_clear_search_list_prodi->Iconimage_Selected = nullptr;
			this->btn_clear_search_list_prodi->IconMarginLeft = 0;
			this->btn_clear_search_list_prodi->IconMarginRight = 0;
			this->btn_clear_search_list_prodi->IconRightVisible = true;
			this->btn_clear_search_list_prodi->IconRightZoom = 0;
			this->btn_clear_search_list_prodi->IconVisible = true;
			this->btn_clear_search_list_prodi->IconZoom = 40;
			this->btn_clear_search_list_prodi->IsTab = true;
			this->btn_clear_search_list_prodi->Location = System::Drawing::Point(767, 12);
			this->btn_clear_search_list_prodi->Name = L"btn_clear_search_list_prodi";
			this->btn_clear_search_list_prodi->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_list_prodi->OnHovercolor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_search_list_prodi->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_clear_search_list_prodi->selected = false;
			this->btn_clear_search_list_prodi->Size = System::Drawing::Size(103, 38);
			this->btn_clear_search_list_prodi->TabIndex = 20;
			this->btn_clear_search_list_prodi->Text = L"Clear";
			this->btn_clear_search_list_prodi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_clear_search_list_prodi->Textcolor = System::Drawing::Color::Red;
			this->btn_clear_search_list_prodi->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_clear_search_list_prodi->Visible = false;
			this->btn_clear_search_list_prodi->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_clear_search_list_prodi_Click);
			// 
			// tx_search_list_prodi
			// 
			this->tx_search_list_prodi->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_search_list_prodi->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_search_list_prodi->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_search_list_prodi->BorderThickness = 3;
			this->tx_search_list_prodi->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_search_list_prodi->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_search_list_prodi->ForeColor = System::Drawing::Color::Black;
			this->tx_search_list_prodi->isPassword = false;
			this->tx_search_list_prodi->Location = System::Drawing::Point(289, 12);
			this->tx_search_list_prodi->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_search_list_prodi->Name = L"tx_search_list_prodi";
			this->tx_search_list_prodi->Size = System::Drawing::Size(471, 38);
			this->tx_search_list_prodi->TabIndex = 19;
			this->tx_search_list_prodi->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// btn_search_list_prodi
			// 
			this->btn_search_list_prodi->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_prodi->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_prodi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_search_list_prodi->BorderRadius = 0;
			this->btn_search_list_prodi->ButtonText = L"Search";
			this->btn_search_list_prodi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_search_list_prodi->DisabledColor = System::Drawing::Color::Gray;
			this->btn_search_list_prodi->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_search_list_prodi->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search_list_prodi.Iconimage")));
			this->btn_search_list_prodi->Iconimage_right = nullptr;
			this->btn_search_list_prodi->Iconimage_right_Selected = nullptr;
			this->btn_search_list_prodi->Iconimage_Selected = nullptr;
			this->btn_search_list_prodi->IconMarginLeft = 0;
			this->btn_search_list_prodi->IconMarginRight = 0;
			this->btn_search_list_prodi->IconRightVisible = true;
			this->btn_search_list_prodi->IconRightZoom = 0;
			this->btn_search_list_prodi->IconVisible = true;
			this->btn_search_list_prodi->IconZoom = 40;
			this->btn_search_list_prodi->IsTab = true;
			this->btn_search_list_prodi->Location = System::Drawing::Point(170, 12);
			this->btn_search_list_prodi->Name = L"btn_search_list_prodi";
			this->btn_search_list_prodi->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_list_prodi->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_search_list_prodi->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_search_list_prodi->selected = false;
			this->btn_search_list_prodi->Size = System::Drawing::Size(112, 38);
			this->btn_search_list_prodi->TabIndex = 18;
			this->btn_search_list_prodi->Text = L"Search";
			this->btn_search_list_prodi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_search_list_prodi->Textcolor = System::Drawing::Color::White;
			this->btn_search_list_prodi->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_search_list_prodi->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_search_list_prodi_Click);
			// 
			// btn_reload_list_prodi
			// 
			this->btn_reload_list_prodi->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_prodi->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_prodi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_reload_list_prodi->BorderRadius = 0;
			this->btn_reload_list_prodi->ButtonText = L"Reload";
			this->btn_reload_list_prodi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reload_list_prodi->DisabledColor = System::Drawing::Color::Gray;
			this->btn_reload_list_prodi->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_reload_list_prodi->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_reload_list_prodi.Iconimage")));
			this->btn_reload_list_prodi->Iconimage_right = nullptr;
			this->btn_reload_list_prodi->Iconimage_right_Selected = nullptr;
			this->btn_reload_list_prodi->Iconimage_Selected = nullptr;
			this->btn_reload_list_prodi->IconMarginLeft = 0;
			this->btn_reload_list_prodi->IconMarginRight = 0;
			this->btn_reload_list_prodi->IconRightVisible = true;
			this->btn_reload_list_prodi->IconRightZoom = 0;
			this->btn_reload_list_prodi->IconVisible = true;
			this->btn_reload_list_prodi->IconZoom = 40;
			this->btn_reload_list_prodi->IsTab = true;
			this->btn_reload_list_prodi->Location = System::Drawing::Point(23, 12);
			this->btn_reload_list_prodi->Name = L"btn_reload_list_prodi";
			this->btn_reload_list_prodi->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_list_prodi->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_reload_list_prodi->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_reload_list_prodi->selected = false;
			this->btn_reload_list_prodi->Size = System::Drawing::Size(116, 38);
			this->btn_reload_list_prodi->TabIndex = 17;
			this->btn_reload_list_prodi->Text = L"Reload";
			this->btn_reload_list_prodi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_reload_list_prodi->Textcolor = System::Drawing::Color::White;
			this->btn_reload_list_prodi->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_reload_list_prodi->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_reload_list_prodi_Click);
			// 
			// DataGridListProdi
			// 
			this->DataGridListProdi->AllowUserToAddRows = false;
			this->DataGridListProdi->AllowUserToDeleteRows = false;
			dataGridViewCellStyle26->BackColor = System::Drawing::Color::White;
			this->DataGridListProdi->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle26;
			this->DataGridListProdi->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DataGridListProdi->BackgroundColor = System::Drawing::Color::White;
			this->DataGridListProdi->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DataGridListProdi->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->DataGridListProdi->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle27->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridViewCellStyle27->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle27->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle27->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle27->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle27->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridListProdi->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle27;
			this->DataGridListProdi->ColumnHeadersHeight = 40;
			dataGridViewCellStyle28->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle28->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle28->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle28->SelectionBackColor = System::Drawing::Color::LightSteelBlue;
			dataGridViewCellStyle28->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle28->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DataGridListProdi->DefaultCellStyle = dataGridViewCellStyle28;
			this->DataGridListProdi->DoubleBuffered = true;
			this->DataGridListProdi->EnableHeadersVisualStyles = false;
			this->DataGridListProdi->GridColor = System::Drawing::Color::WhiteSmoke;
			this->DataGridListProdi->HeaderBgColor = System::Drawing::Color::RoyalBlue;
			this->DataGridListProdi->HeaderForeColor = System::Drawing::Color::White;
			this->DataGridListProdi->Location = System::Drawing::Point(23, 69);
			this->DataGridListProdi->Name = L"DataGridListProdi";
			this->DataGridListProdi->ReadOnly = true;
			this->DataGridListProdi->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle29->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle29->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle29->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle29->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle29->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle29->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridListProdi->RowHeadersDefaultCellStyle = dataGridViewCellStyle29;
			this->DataGridListProdi->RowHeadersVisible = false;
			dataGridViewCellStyle30->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DataGridListProdi->RowsDefaultCellStyle = dataGridViewCellStyle30;
			this->DataGridListProdi->RowTemplate->DividerHeight = 1;
			this->DataGridListProdi->RowTemplate->Height = 30;
			this->DataGridListProdi->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DataGridListProdi->Size = System::Drawing::Size(995, 429);
			this->DataGridListProdi->TabIndex = 7;
			// 
			// pnl_dashboard
			// 
			this->pnl_dashboard->Controls->Add(this->CardsDashboard);
			this->pnl_dashboard->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_dashboard->Location = System::Drawing::Point(230, 58);
			this->pnl_dashboard->Name = L"pnl_dashboard";
			this->pnl_dashboard->Size = System::Drawing::Size(1114, 591);
			this->pnl_dashboard->TabIndex = 37;
			// 
			// CardsDashboard
			// 
			this->CardsDashboard->BackColor = System::Drawing::Color::White;
			this->CardsDashboard->BorderRadius = 8;
			this->CardsDashboard->BottomSahddow = true;
			this->CardsDashboard->color = System::Drawing::Color::Transparent;
			this->CardsDashboard->Controls->Add(this->chart1);
			this->CardsDashboard->Controls->Add(this->btn_reload_chart);
			this->CardsDashboard->LeftSahddow = true;
			this->CardsDashboard->Location = System::Drawing::Point(32, 33);
			this->CardsDashboard->Name = L"CardsDashboard";
			this->CardsDashboard->RightSahddow = true;
			this->CardsDashboard->ShadowDepth = 50;
			this->CardsDashboard->Size = System::Drawing::Size(1043, 527);
			this->CardsDashboard->TabIndex = 30;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(23, 123);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Jumlah";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(874, 272);
			this->chart1->TabIndex = 20;
			this->chart1->Text = L"chart1";
			// 
			// btn_reload_chart
			// 
			this->btn_reload_chart->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_chart->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_chart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_reload_chart->BorderRadius = 0;
			this->btn_reload_chart->ButtonText = L"Reload";
			this->btn_reload_chart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reload_chart->DisabledColor = System::Drawing::Color::Gray;
			this->btn_reload_chart->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_reload_chart->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_reload_chart.Iconimage")));
			this->btn_reload_chart->Iconimage_right = nullptr;
			this->btn_reload_chart->Iconimage_right_Selected = nullptr;
			this->btn_reload_chart->Iconimage_Selected = nullptr;
			this->btn_reload_chart->IconMarginLeft = 0;
			this->btn_reload_chart->IconMarginRight = 0;
			this->btn_reload_chart->IconRightVisible = true;
			this->btn_reload_chart->IconRightZoom = 0;
			this->btn_reload_chart->IconVisible = true;
			this->btn_reload_chart->IconZoom = 40;
			this->btn_reload_chart->IsTab = true;
			this->btn_reload_chart->Location = System::Drawing::Point(23, 25);
			this->btn_reload_chart->Name = L"btn_reload_chart";
			this->btn_reload_chart->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_chart->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_reload_chart->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_reload_chart->selected = false;
			this->btn_reload_chart->Size = System::Drawing::Size(116, 38);
			this->btn_reload_chart->TabIndex = 17;
			this->btn_reload_chart->Text = L"Reload";
			this->btn_reload_chart->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_reload_chart->Textcolor = System::Drawing::Color::White;
			this->btn_reload_chart->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_reload_chart->Click += gcnew System::EventHandler(this, &Dashboard_Kepala_Perpus::btn_reload_chart_Click);
			// 
			// Dashboard_Kepala_Perpus
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1344, 649);
			this->Controls->Add(this->pnl_dashboard);
			this->Controls->Add(this->pnl_list_prodi);
			this->Controls->Add(this->pnl_list_jurusan);
			this->Controls->Add(this->pnl_list_peminjaman);
			this->Controls->Add(this->pnl_list_buku);
			this->Controls->Add(this->pnl_list_anggota);
			this->Controls->Add(this->pnl_list_petugas);
			this->Controls->Add(this->pnl_header);
			this->Controls->Add(this->pnl_sidebar);
			this->Name = L"Dashboard_Kepala_Perpus";
			this->Text = L"DASHBOARD";
			this->pnl_sidebar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnl_list_petugas->ResumeLayout(false);
			this->CardsListPetugas->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridListPetugas))->EndInit();
			this->CardsFormPetugas->ResumeLayout(false);
			this->CardsFormPetugas->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_insert_petugas))->EndInit();
			this->pnl_list_anggota->ResumeLayout(false);
			this->CardsListAnggota->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridListAnggota))->EndInit();
			this->pnl_list_buku->ResumeLayout(false);
			this->CardsListBuku->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridListBuku))->EndInit();
			this->pnl_list_peminjaman->ResumeLayout(false);
			this->CardsListPeminjaman->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridListPeminjaman))->EndInit();
			this->pnl_list_jurusan->ResumeLayout(false);
			this->CardsListJurusan->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridListJurusan))->EndInit();
			this->pnl_list_prodi->ResumeLayout(false);
			this->CardsListProdi->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridListProdi))->EndInit();
			this->pnl_dashboard->ResumeLayout(false);
			this->CardsDashboard->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void btn_klik_dashboard_Click(System::Object^  sender, System::EventArgs^  e) {
			 pnl_dashboard->Visible = true;
			 pnl_list_petugas->Visible = false;
			 pnl_list_anggota->Visible = false;
			 pnl_list_buku->Visible = false;
			 pnl_list_peminjaman->Visible = false;
			 pnl_list_jurusan->Visible = false;
			 pnl_list_prodi->Visible = false;
}
private: System::Void btn_klik_exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
}
private: System::Void btn_klik_list_petugas_Click(System::Object^  sender, System::EventArgs^  e) {
			 pnl_list_petugas->Visible = true;
			 pnl_list_anggota->Visible = false;
			 pnl_list_buku->Visible = false;
			 pnl_list_peminjaman->Visible = false;
			 pnl_list_jurusan->Visible = false;
			 pnl_list_prodi->Visible = false;
			 pnl_dashboard->Visible = false;
}
private: System::Void btn_klik_list_anggota_Click(System::Object^  sender, System::EventArgs^  e) {
			 pnl_list_anggota->Visible = true;
			 pnl_list_petugas->Visible = false;
			 pnl_list_buku->Visible = false;
			 pnl_list_peminjaman->Visible = false;
			 pnl_list_jurusan->Visible = false;
			 pnl_list_prodi->Visible = false;
			 pnl_dashboard->Visible = false;
}
private: System::Void btn_klik_list_buku_Click(System::Object^  sender, System::EventArgs^  e) {
			 pnl_list_buku->Visible = true;
			 pnl_list_anggota->Visible = false;
			 pnl_list_petugas->Visible = false;
			 pnl_list_peminjaman->Visible = false;
			 pnl_list_jurusan->Visible = false;
			 pnl_list_prodi->Visible = false;
			 pnl_dashboard->Visible = false;
}
private: System::Void btn_klik_list_peminjaman_Click(System::Object^  sender, System::EventArgs^  e) {
			 pnl_list_peminjaman->Visible = true;
			 pnl_list_buku->Visible = false;
			 pnl_list_anggota->Visible = false;
			 pnl_list_petugas->Visible = false;
			 pnl_list_jurusan->Visible = false;
			 pnl_list_prodi->Visible = false;
			 pnl_dashboard->Visible = false;
}
private: System::Void btn_klik_list_jurusan_Click(System::Object^  sender, System::EventArgs^  e) {
			 pnl_list_jurusan->Visible = true;
			 pnl_list_peminjaman->Visible = false;
			 pnl_list_buku->Visible = false;
			 pnl_list_anggota->Visible = false;
			 pnl_list_petugas->Visible = false;
			 pnl_list_prodi->Visible = false;
			 pnl_dashboard->Visible = false;
}
private: System::Void btn_klik_list_prodi_Click(System::Object^  sender, System::EventArgs^  e) {
			 pnl_list_prodi->Visible = true;
			 pnl_list_jurusan->Visible = false;
			 pnl_list_peminjaman->Visible = false;
			 pnl_list_buku->Visible = false;
			 pnl_list_anggota->Visible = false;
			 pnl_list_petugas->Visible = false;
			 pnl_dashboard->Visible = false;
}
private: System::Void btn_reload_list_petugas_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_petugas_perpustakaan;", con);
				 try{
					 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
					 sda->SelectCommand = cmd;
					 DataTable^ pemrograman_visual = gcnew DataTable();
					 sda->Fill(pemrograman_visual);
					 BindingSource^ bSource = gcnew BindingSource();

					 bSource->DataSource = pemrograman_visual;
					 DataGridListPetugas->DataSource = bSource;
					 sda->Update(pemrograman_visual);
				 }
				 catch (Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
}
private: System::Void btn_search_list_petugas_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_search_list_petugas->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_petugas_perpustakaan WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();
				 while (dr->Read())
				 {
					 tx_search_list_petugas->Text = dr->GetString(1);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 btn_clear_search_list_petugas->Visible = true;
}
private: System::Void btn_clear_search_list_petugas_Click(System::Object^  sender, System::EventArgs^  e) {
			 tx_search_list_petugas->ResetText();
			 btn_clear_search_list_petugas->Visible = false;
}
private: System::Void btn_export_list_petugas_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (DataGridListPetugas->Rows->Count>0)
			 {
				 Microsoft::Office::Interop::Excel::ApplicationClass^ xcelapp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
				 xcelapp->Application->Workbooks->Add(Type::Missing);
				 for (int i = 1; i < DataGridListPetugas->Columns->Count + 1; i++)
				 {
					 xcelapp->Cells[1, i] = DataGridListPetugas->Columns[i - 1]->HeaderText;
				 }
				 for (int i = 0; i < DataGridListPetugas->Rows->Count; i++)
				 {
					 for (int j = 0; j < DataGridListPetugas->Columns->Count; j++){
						 xcelapp->Cells[i + 2, j + 1] = DataGridListPetugas->Rows[i]->Cells[j]->Value->ToString();
					 }
				 }
				 xcelapp->Columns->AutoFit();
				 xcelapp->Visible = true;
				 
			 }	 
}
private: System::Void btn_add_petugas_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO tbl_petugas_perpustakaan (id, username, password) VALUES ('" + this->tx_id_petugas->Text + "', '" + this->tx_username_petugas->Text + "', '" + this->tx_password_petugas->Text + "' ) ;", con);
			 MySqlDataReader^ dr;
			 try{
				 con->Open();
				 dr = cmd->ExecuteReader();
				 MessageBox::Show("Data Tersimpan");
				 while (dr->Read())
				 {

				 }
			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void btn_update_petugas_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 int id = Int32::Parse(tx_id_petugas->Text);
			 String^ username = tx_username_petugas->Text;
			 String^ password = tx_password_petugas->Text;

			 MySqlCommand^ cmd = gcnew MySqlCommand("update tbl_petugas_perpustakaan set username='" + username + "', password='" + password + "'  WHERE id=" + id + "", con);
			 con->Open();
			 MySqlDataReader^ dr = cmd->ExecuteReader();
			 MessageBox::Show("Data Updated");
			 con->Close();
}
private: System::Void btn_insert_petugas_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_id_petugas->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_petugas_perpustakaan WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();

				 while (dr->Read())
				 {
					 tx_username_petugas->Text = dr->GetString(1);
					 tx_password_petugas->Text = dr->GetString(2);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void btn_delete_petugas_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 int id = Int32::Parse(tx_id_petugas->Text);
			 MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM tbl_petugas_perpustakaan WHERE id=" + id + "", con);
			 con->Open();
			 MySqlDataReader^ dr = cmd->ExecuteReader();
			 MessageBox::Show("Sukses Deleted");
			 con->Close();
}
private: System::Void btn_clear_petugas_Click(System::Object^  sender, System::EventArgs^  e) {
			 tx_id_petugas->ResetText();
			 tx_username_petugas->ResetText();
			 tx_password_petugas->ResetText();
}
private: System::Void btn_reload_list_anggota_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_anggota;", con);
			 try{
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmd;
				 DataTable^ pemrograman_visual = gcnew DataTable();
				 sda->Fill(pemrograman_visual);
				 BindingSource^ bSource = gcnew BindingSource();

				 bSource->DataSource = pemrograman_visual;
				 DataGridListAnggota->DataSource = bSource;
				 sda->Update(pemrograman_visual);
			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void btn_search_list_anggota_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_search_list_anggota->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_anggota WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();
				 while (dr->Read())
				 {
					 tx_search_list_anggota->Text = dr->GetString(1);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 btn_clear_search_list_anggota->Visible = true;
}
private: System::Void btn_clear_search_list_anggota_Click(System::Object^  sender, System::EventArgs^  e) {
			 tx_search_list_anggota->ResetText();
			 btn_clear_search_list_anggota->Visible = false;
}
private: System::Void btn_export_list_anggota_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (DataGridListAnggota->Rows->Count>0)
			 {
				 Microsoft::Office::Interop::Excel::ApplicationClass^ xcelapp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
				 xcelapp->Application->Workbooks->Add(Type::Missing);
				 for (int i = 1; i < DataGridListAnggota->Columns->Count + 1; i++)
				 {
					 xcelapp->Cells[1, i] = DataGridListAnggota->Columns[i - 1]->HeaderText;
				 }
				 for (int i = 0; i < DataGridListAnggota->Rows->Count; i++)
				 {
					 for (int j = 0; j < DataGridListAnggota->Columns->Count; j++){
						 xcelapp->Cells[i + 2, j + 1] = DataGridListAnggota->Rows[i]->Cells[j]->Value->ToString();
					 }
				 }
				 xcelapp->Columns->AutoFit();
				 xcelapp->Visible = true;
			 }
}
private: System::Void btn_reload_list_buku_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_buku;", con);
			 try{
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmd;
				 DataTable^ pemrograman_visual = gcnew DataTable();
				 sda->Fill(pemrograman_visual);
				 BindingSource^ bSource = gcnew BindingSource();

				 bSource->DataSource = pemrograman_visual;
				 DataGridListBuku->DataSource = bSource;
				 sda->Update(pemrograman_visual);
			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void btn_search_list_buku_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_search_list_buku->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_buku WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();
				 while (dr->Read())
				 {
					 tx_search_list_buku->Text = dr->GetString(1);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 btn_clear_search_list_buku->Visible = true;
}
private: System::Void btn_clear_search_list_buku_Click(System::Object^  sender, System::EventArgs^  e) {
			 tx_search_list_buku->ResetText();
			 btn_clear_search_list_buku->Visible = false;
}
private: System::Void btn_export_list_buku_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (DataGridListBuku->Rows->Count>0)
			 {
				 Microsoft::Office::Interop::Excel::ApplicationClass^ xcelapp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
				 xcelapp->Application->Workbooks->Add(Type::Missing);
				 for (int i = 1; i < DataGridListBuku->Columns->Count + 1; i++)
				 {
					 xcelapp->Cells[1, i] = DataGridListBuku->Columns[i - 1]->HeaderText;
				 }
				 for (int i = 0; i < DataGridListBuku->Rows->Count; i++)
				 {
					 for (int j = 0; j < DataGridListBuku->Columns->Count; j++){
						 xcelapp->Cells[i + 2, j + 1] = DataGridListBuku->Rows[i]->Cells[j]->Value->ToString();
					 }
				 }
				 xcelapp->Columns->AutoFit();
				 xcelapp->Visible = true;
			 }
}
private: System::Void btn_reload_list_peminjaman_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_pinjaman;", con);
			 try{
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmd;
				 DataTable^ pemrograman_visual = gcnew DataTable();
				 sda->Fill(pemrograman_visual);
				 BindingSource^ bSource = gcnew BindingSource();

				 bSource->DataSource = pemrograman_visual;
				 DataGridListPeminjaman->DataSource = bSource;
				 sda->Update(pemrograman_visual);
			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void btn_search_list_peminjaman_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_search_list_peminjaman->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_pinjaman WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();
				 while (dr->Read())
				 {
					 tx_search_list_peminjaman->Text = dr->GetString(1);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 btn_clear_search_list_peminjaman->Visible = true;
}
private: System::Void btn_clear_search_list_peminjaman_Click(System::Object^  sender, System::EventArgs^  e) {
			 tx_search_list_peminjaman->ResetText();
			 btn_clear_search_list_peminjaman->Visible = false;
}
private: System::Void btn_export_list_peminjaman_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (DataGridListPeminjaman->Rows->Count>0)
			 {
				 Microsoft::Office::Interop::Excel::ApplicationClass^ xcelapp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
				 xcelapp->Application->Workbooks->Add(Type::Missing);
				 for (int i = 1; i < DataGridListPeminjaman->Columns->Count + 1; i++)
				 {
					 xcelapp->Cells[1, i] = DataGridListPeminjaman->Columns[i - 1]->HeaderText;
				 }
				 for (int i = 0; i < DataGridListPeminjaman->Rows->Count; i++)
				 {
					 for (int j = 0; j < DataGridListPeminjaman->Columns->Count; j++){
						 xcelapp->Cells[i + 2, j + 1] = DataGridListPeminjaman->Rows[i]->Cells[j]->Value->ToString();
					 }
				 }
				 xcelapp->Columns->AutoFit();
				 xcelapp->Visible = true;
			 }
}
private: System::Void btn_reload_list_jurusan_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_jurusan;", con);
			 try{
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmd;
				 DataTable^ pemrograman_visual = gcnew DataTable();
				 sda->Fill(pemrograman_visual);
				 BindingSource^ bSource = gcnew BindingSource();

				 bSource->DataSource = pemrograman_visual;
				 DataGridListJurusan->DataSource = bSource;
				 sda->Update(pemrograman_visual);
			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void btn_search_list_jurusan_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_search_list_jurusan->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_jurusan WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();
				 while (dr->Read())
				 {
					 tx_search_list_jurusan->Text = dr->GetString(1);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 btn_clear_search_list_jurusan->Visible = true;
}
private: System::Void btn_clear_search_list_jurusan_Click(System::Object^  sender, System::EventArgs^  e) {
			 tx_search_list_jurusan->ResetText();
			 btn_clear_search_list_jurusan->Visible = false;
}
private: System::Void btn_export_list_jurusan_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (DataGridListJurusan->Rows->Count>0)
			 {
				 Microsoft::Office::Interop::Excel::ApplicationClass^ xcelapp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
				 xcelapp->Application->Workbooks->Add(Type::Missing);
				 for (int i = 1; i < DataGridListJurusan->Columns->Count + 1; i++)
				 {
					 xcelapp->Cells[1, i] = DataGridListJurusan->Columns[i - 1]->HeaderText;
				 }
				 for (int i = 0; i < DataGridListJurusan->Rows->Count; i++)
				 {
					 for (int j = 0; j < DataGridListJurusan->Columns->Count; j++){
						 xcelapp->Cells[i + 2, j + 1] = DataGridListJurusan->Rows[i]->Cells[j]->Value->ToString();
					 }
				 }
				 xcelapp->Columns->AutoFit();
				 xcelapp->Visible = true;
			 }
}

private: System::Void btn_reload_list_prodi_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_prodi;", con);
			 try{
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmd;
				 DataTable^ pemrograman_visual = gcnew DataTable();
				 sda->Fill(pemrograman_visual);
				 BindingSource^ bSource = gcnew BindingSource();

				 bSource->DataSource = pemrograman_visual;
				 DataGridListProdi->DataSource = bSource;
				 sda->Update(pemrograman_visual);
			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void btn_search_list_prodi_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_search_list_prodi->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_prodi WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();
				 while (dr->Read())
				 {
					 tx_search_list_prodi->Text = dr->GetString(1);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 btn_clear_search_list_prodi->Visible = true;
}
private: System::Void btn_clear_search_list_prodi_Click(System::Object^  sender, System::EventArgs^  e) {
			 tx_search_list_prodi->ResetText();
			 btn_clear_search_list_prodi->Visible = false;
}
private: System::Void btn_export_list_prodi_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (DataGridListProdi->Rows->Count>0)
			 {
				 Microsoft::Office::Interop::Excel::ApplicationClass^ xcelapp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
				 xcelapp->Application->Workbooks->Add(Type::Missing);
				 for (int i = 1; i < DataGridListProdi->Columns->Count + 1; i++)
				 {
					 xcelapp->Cells[1, i] = DataGridListProdi->Columns[i - 1]->HeaderText;
				 }
				 for (int i = 0; i < DataGridListProdi->Rows->Count; i++)
				 {
					 for (int j = 0; j < DataGridListProdi->Columns->Count; j++){
						 xcelapp->Cells[i + 2, j + 1] = DataGridListProdi->Rows[i]->Cells[j]->Value->ToString();
					 }
				 }
				 xcelapp->Columns->AutoFit();
				 xcelapp->Visible = true;
			 }
}

private: System::Void btn_reload_chart_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_buku;", con);
			 MySqlDataReader^ dr;

			 try{
				 con->Open();
				 dr = cmd->ExecuteReader();
				 while (dr->Read()){
					 String^ vJudul;
					 vJudul = dr->GetString("judul");
					 String^ vJumlah = dr->GetInt32("jumlah").ToString();

					 this->chart1->Series["Jumlah"]->Points->AddXY(vJudul = dr->GetString("judul"), dr->GetInt32("jumlah"));
				 }

			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }

}
};
}
