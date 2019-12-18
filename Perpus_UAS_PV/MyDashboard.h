#pragma once

namespace Perpus_UAS_PV {
	//NAMA : YOSUA JULIANDO
	//NIM : H1101171049
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for MyDashboard
	/// </summary>
	public ref class MyDashboard : public System::Windows::Forms::Form
	{
	public:
		MyDashboard(void)
		{
			InitializeComponent();
			ComboJurusan();
			ComboProdi();
			ComboNamaPeminjam();
			ComboBuku();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_anggota;


	protected:

	private: Bunifu::Framework::UI::BunifuFlatButton^  dashboard;
	private: Bunifu::Framework::UI::BunifuSeparator^  bunifuSeparator1;

	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_buku;

	private: System::Windows::Forms::Panel^  panel2;

	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_prodi;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_jurusan;
	private: System::Windows::Forms::Panel^  pnl_jurusan;
	private: Bunifu::Framework::UI::BunifuThinButton2^  btn_add_jurusan;












	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::Label^  lb_nama_jurusan;
	private: System::Windows::Forms::Label^  lb_id_jurusan;

	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  CustomDataGrid1;
	private: Bunifu::Framework::UI::BunifuCards^  bunifuCards1;


	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_id_jurusan;
	private: Bunifu::Framework::UI::BunifuCards^  bunifuCards2;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_nama_jurusan;
	private: Bunifu::Framework::UI::BunifuThinButton2^  btn_delete;

	private: Bunifu::Framework::UI::BunifuThinButton2^  btn_update_jurusan;


	private: Bunifu::Framework::UI::BunifuImageButton^  btn_excel_jurusan;





	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton2;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_reload;

	private: Bunifu::Framework::UI::BunifuImageButton^  btn_insert;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_search;


	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_search;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_clear_search_jurusan;
	private: System::Windows::Forms::Panel^  pnl_prodi;
	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_clear_search_prodi;



	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_search_prodi;

	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_search_prodi;

	private: Bunifu::Framework::UI::BunifuFlatButton^  btn_reload_prodi;
	private: Bunifu::Framework::UI::BunifuCards^  bunifuCards3;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_export_prodi;

	private: System::Windows::Forms::Label^  label4;
	private: Bunifu::Framework::UI::BunifuCards^  bunifuCards4;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_insert_prodi;

	private: Bunifu::Framework::UI::BunifuThinButton2^  btn_delete_prodi;

	private: Bunifu::Framework::UI::BunifuThinButton2^  btn_update_prodi;

	private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_nama_prodi;

	private: System::Windows::Forms::Label^  label5;
private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_id_prodi;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
private: Bunifu::Framework::UI::BunifuThinButton2^  btn_add_prodi;

	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  CustomDataGrid2;
private: Bunifu::Framework::UI::BunifuThinButton2^  btn_add_anggota;
private: System::Windows::Forms::Panel^  pnl_anggota;
private: Bunifu::Framework::UI::BunifuCards^  bunifuCards7;
private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_id_anggota;
private: System::Windows::Forms::Label^  lb_prodi_anggota;
private: System::Windows::Forms::ComboBox^  cb_prodi_anggota;
private: System::Windows::Forms::Label^  lb_id_anggota;
private: System::Windows::Forms::ComboBox^  cb_jurusan_anggota;
private: System::Windows::Forms::Label^  lb_jurusan_anggota;
private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_nama_anggota;
private: System::Windows::Forms::Label^  lb_nama_anggota;
private: System::Windows::Forms::Label^  lb_nim_anggota;
private: System::Windows::Forms::Label^  lb_notelp_anggota;
private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_telp_anggota;
private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_nim_anggota;
private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_email_anggota;
private: System::Windows::Forms::Label^  lb_email_anggota;
private: Bunifu::Framework::UI::BunifuCards^  bunifuCards6;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_reload_anggota;
private: Bunifu::Framework::UI::BunifuCustomDataGrid^  CustomDataGrid3;
private: Bunifu::Framework::UI::BunifuThinButton2^  btn_delete_anggota;
private: Bunifu::Framework::UI::BunifuThinButton2^  btn_update_anggota;
private: Bunifu::Framework::UI::BunifuImageButton^  btn_insert_anggota;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_search_anggota;
private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_search_anggota;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_clear_search_anggota;
private: Bunifu::Framework::UI::BunifuCards^  bunifuCards5;
private: Bunifu::Framework::UI::BunifuImageButton^  btn_export_anggota;
private: System::Windows::Forms::Panel^  pnl_buku;
private: Bunifu::Framework::UI::BunifuCards^  bunifuCards8;
private: Bunifu::Framework::UI::BunifuImageButton^  btn_export_buku;

private: Bunifu::Framework::UI::BunifuCards^  bunifuCards9;
private: Bunifu::Framework::UI::BunifuImageButton^  btn_insert_buku;
private: Bunifu::Framework::UI::BunifuThinButton2^  btn_delete_buku;


private: Bunifu::Framework::UI::BunifuThinButton2^  btn_update_buku;

private: Bunifu::Framework::UI::BunifuThinButton2^  btn_add_buku;

private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_id_buku;



private: System::Windows::Forms::Label^  lb_id_buku;
private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_judul_buku;





private: System::Windows::Forms::Label^  lb_judul_buku;

private: System::Windows::Forms::Label^  lb_pengarang_buku;
private: System::Windows::Forms::Label^  lb_isbn_buku;
private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_isbn_buku;






private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_pengarang_buku;



private: Bunifu::Framework::UI::BunifuCards^  bunifuCards10;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_clear_search_buku;

private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_search_buku;

private: Bunifu::Framework::UI::BunifuFlatButton^  btn_search_buku;

private: Bunifu::Framework::UI::BunifuFlatButton^  btn_reload_buku;
private: Bunifu::Framework::UI::BunifuCustomDataGrid^  CustomDataGrid4;



private: System::Windows::Forms::Label^  lb_tahun_buku;
private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_jumlah_buku;

private: System::Windows::Forms::Label^  lb_jumlah_buku;
private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_tahun_buku;
private: Bunifu::Framework::UI::BunifuCards^  bunifuCards11;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_peminjaman;
private: System::Windows::Forms::Panel^  pnl_peminjaman;
private: Bunifu::Framework::UI::BunifuCards^  bunifuCards12;
private: Bunifu::Framework::UI::BunifuImageButton^  btn_export_peminjaman;

private: Bunifu::Framework::UI::BunifuCards^  bunifuCards13;

private: System::Windows::Forms::Label^  lb_tgl_peminjaman;

private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton2;
private: Bunifu::Framework::UI::BunifuThinButton2^  btn_delete_peminjaman;



private: Bunifu::Framework::UI::BunifuThinButton2^  btn_add_peminjaman;


private: System::Windows::Forms::Label^  lb_nama_peminjam;


private: System::Windows::Forms::Label^  lb_buku_pinjaman;
private: System::Windows::Forms::Label^  lb_status;







private: Bunifu::Framework::UI::BunifuCards^  bunifuCards14;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_clear_search_peminjaman;


private: Bunifu::Framework::UI::BunifuMetroTextbox^  tx_search_peminjaman;
private: Bunifu::Framework::UI::BunifuFlatButton^  btn_search_peminjaman;


private: Bunifu::Framework::UI::BunifuFlatButton^  btn_reload_peminjaman;

private: Bunifu::Framework::UI::BunifuCustomDataGrid^  CustomDataGrid5;
private: System::Windows::Forms::Label^  lb_tgl_pengembalian;
private: System::Windows::Forms::ComboBox^  cb_nama_peminjam;
private: System::Windows::Forms::ComboBox^  cb_buku;
private: System::Windows::Forms::DateTimePicker^  dp_tgl_peminjaman;
private: System::Windows::Forms::ComboBox^  cb_status;

private: System::Windows::Forms::DateTimePicker^  dp_tgl_pengembalian;
private: Bunifu::Framework::UI::BunifuCards^  bunifuCards15;
private: System::Windows::Forms::Label^  lb_info;

private: Bunifu::Framework::UI::BunifuMaterialTextbox^  tx_id_pinjaman;
private: Bunifu::Framework::UI::BunifuThinButton2^  btn_update_peminjaman;
private: System::Windows::Forms::Panel^  pnl_dashboard;









private: Bunifu::Framework::UI::BunifuFlatButton^  btn_reload_dashboard;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
private: System::Windows::Forms::PictureBox^  pictureBox1;













































































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyDashboard::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle26 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle27 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle28 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle29 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle30 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle31 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle32 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle33 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle34 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle35 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle36 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle37 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle38 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle39 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle40 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle41 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle42 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle43 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle44 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle45 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle46 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle47 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle48 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle49 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle50 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_peminjaman = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_buku = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_prodi = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_jurusan = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_anggota = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->dashboard = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pnl_jurusan = (gcnew System::Windows::Forms::Panel());
			this->bunifuCards1 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_insert = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btn_delete = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_update_jurusan = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->tx_nama_jurusan = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tx_id_jurusan = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lb_nama_jurusan = (gcnew System::Windows::Forms::Label());
			this->lb_id_jurusan = (gcnew System::Windows::Forms::Label());
			this->btn_add_jurusan = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuCards2 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_excel_jurusan = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bunifuCards11 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->CustomDataGrid1 = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->btn_clear_search_jurusan = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->tx_search = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->btn_search = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_reload = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->pnl_prodi = (gcnew System::Windows::Forms::Panel());
			this->bunifuCards15 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->CustomDataGrid2 = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->btn_clear_search_prodi = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->tx_search_prodi = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->btn_search_prodi = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_reload_prodi = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuCards3 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_export_prodi = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->bunifuCards4 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_insert_prodi = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btn_delete_prodi = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_update_prodi = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->tx_nama_prodi = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tx_id_prodi = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btn_add_prodi = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->btn_add_anggota = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->pnl_anggota = (gcnew System::Windows::Forms::Panel());
			this->bunifuCards5 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_export_anggota = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuCards7 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_insert_anggota = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btn_delete_anggota = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_update_anggota = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->tx_id_anggota = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lb_prodi_anggota = (gcnew System::Windows::Forms::Label());
			this->cb_prodi_anggota = (gcnew System::Windows::Forms::ComboBox());
			this->lb_id_anggota = (gcnew System::Windows::Forms::Label());
			this->cb_jurusan_anggota = (gcnew System::Windows::Forms::ComboBox());
			this->lb_jurusan_anggota = (gcnew System::Windows::Forms::Label());
			this->tx_nama_anggota = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lb_nama_anggota = (gcnew System::Windows::Forms::Label());
			this->lb_nim_anggota = (gcnew System::Windows::Forms::Label());
			this->lb_notelp_anggota = (gcnew System::Windows::Forms::Label());
			this->tx_telp_anggota = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->tx_nim_anggota = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->tx_email_anggota = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lb_email_anggota = (gcnew System::Windows::Forms::Label());
			this->bunifuCards6 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_clear_search_anggota = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->tx_search_anggota = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->btn_search_anggota = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_reload_anggota = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->CustomDataGrid3 = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->pnl_buku = (gcnew System::Windows::Forms::Panel());
			this->bunifuCards8 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_export_buku = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuCards9 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->tx_tahun_buku = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lb_tahun_buku = (gcnew System::Windows::Forms::Label());
			this->btn_insert_buku = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btn_delete_buku = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_update_buku = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_add_buku = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->tx_id_buku = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lb_id_buku = (gcnew System::Windows::Forms::Label());
			this->tx_judul_buku = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lb_judul_buku = (gcnew System::Windows::Forms::Label());
			this->lb_pengarang_buku = (gcnew System::Windows::Forms::Label());
			this->lb_isbn_buku = (gcnew System::Windows::Forms::Label());
			this->tx_isbn_buku = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->tx_pengarang_buku = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->tx_jumlah_buku = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lb_jumlah_buku = (gcnew System::Windows::Forms::Label());
			this->bunifuCards10 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_clear_search_buku = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->tx_search_buku = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->btn_search_buku = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_reload_buku = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->CustomDataGrid4 = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->pnl_peminjaman = (gcnew System::Windows::Forms::Panel());
			this->bunifuCards12 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_export_peminjaman = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuCards13 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_update_peminjaman = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->lb_info = (gcnew System::Windows::Forms::Label());
			this->tx_id_pinjaman = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->cb_status = (gcnew System::Windows::Forms::ComboBox());
			this->dp_tgl_pengembalian = (gcnew System::Windows::Forms::DateTimePicker());
			this->dp_tgl_peminjaman = (gcnew System::Windows::Forms::DateTimePicker());
			this->cb_buku = (gcnew System::Windows::Forms::ComboBox());
			this->cb_nama_peminjam = (gcnew System::Windows::Forms::ComboBox());
			this->lb_tgl_pengembalian = (gcnew System::Windows::Forms::Label());
			this->lb_tgl_peminjaman = (gcnew System::Windows::Forms::Label());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btn_delete_peminjaman = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_add_peminjaman = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->lb_nama_peminjam = (gcnew System::Windows::Forms::Label());
			this->lb_buku_pinjaman = (gcnew System::Windows::Forms::Label());
			this->lb_status = (gcnew System::Windows::Forms::Label());
			this->bunifuCards14 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->btn_clear_search_peminjaman = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->tx_search_peminjaman = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->btn_search_peminjaman = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btn_reload_peminjaman = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->CustomDataGrid5 = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->pnl_dashboard = (gcnew System::Windows::Forms::Panel());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->btn_reload_dashboard = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnl_jurusan->SuspendLayout();
			this->bunifuCards1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_insert))->BeginInit();
			this->bunifuCards2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_excel_jurusan))->BeginInit();
			this->bunifuCards11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomDataGrid1))->BeginInit();
			this->pnl_prodi->SuspendLayout();
			this->bunifuCards15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomDataGrid2))->BeginInit();
			this->bunifuCards3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_export_prodi))->BeginInit();
			this->bunifuCards4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_insert_prodi))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->pnl_anggota->SuspendLayout();
			this->bunifuCards5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_export_anggota))->BeginInit();
			this->bunifuCards7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_insert_anggota))->BeginInit();
			this->bunifuCards6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomDataGrid3))->BeginInit();
			this->pnl_buku->SuspendLayout();
			this->bunifuCards8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_export_buku))->BeginInit();
			this->bunifuCards9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_insert_buku))->BeginInit();
			this->bunifuCards10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomDataGrid4))->BeginInit();
			this->pnl_peminjaman->SuspendLayout();
			this->bunifuCards12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_export_peminjaman))->BeginInit();
			this->bunifuCards13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			this->bunifuCards14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomDataGrid5))->BeginInit();
			this->pnl_dashboard->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->btn_peminjaman);
			this->panel1->Controls->Add(this->btn_buku);
			this->panel1->Controls->Add(this->bunifuFlatButton2);
			this->panel1->Controls->Add(this->btn_prodi);
			this->panel1->Controls->Add(this->btn_jurusan);
			this->panel1->Controls->Add(this->btn_anggota);
			this->panel1->Controls->Add(this->dashboard);
			this->panel1->Controls->Add(this->bunifuSeparator1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(230, 649);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(55, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(94, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// btn_peminjaman
			// 
			this->btn_peminjaman->Activecolor = System::Drawing::Color::RoyalBlue;
			this->btn_peminjaman->BackColor = System::Drawing::Color::Transparent;
			this->btn_peminjaman->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_peminjaman->BorderRadius = 7;
			this->btn_peminjaman->ButtonText = L"PEMINJAMAN";
			this->btn_peminjaman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_peminjaman->DisabledColor = System::Drawing::Color::Gray;
			this->btn_peminjaman->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_peminjaman->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_peminjaman.Iconimage")));
			this->btn_peminjaman->Iconimage_right = nullptr;
			this->btn_peminjaman->Iconimage_right_Selected = nullptr;
			this->btn_peminjaman->Iconimage_Selected = nullptr;
			this->btn_peminjaman->IconMarginLeft = 0;
			this->btn_peminjaman->IconMarginRight = 0;
			this->btn_peminjaman->IconRightVisible = true;
			this->btn_peminjaman->IconRightZoom = 0;
			this->btn_peminjaman->IconVisible = true;
			this->btn_peminjaman->IconZoom = 40;
			this->btn_peminjaman->IsTab = true;
			this->btn_peminjaman->Location = System::Drawing::Point(14, 160);
			this->btn_peminjaman->Name = L"btn_peminjaman";
			this->btn_peminjaman->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_peminjaman->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_peminjaman->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_peminjaman->selected = false;
			this->btn_peminjaman->Size = System::Drawing::Size(203, 48);
			this->btn_peminjaman->TabIndex = 8;
			this->btn_peminjaman->Text = L"PEMINJAMAN";
			this->btn_peminjaman->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_peminjaman->Textcolor = System::Drawing::Color::White;
			this->btn_peminjaman->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_peminjaman->Click += gcnew System::EventHandler(this, &MyDashboard::btn_peminjaman_Click);
			// 
			// btn_buku
			// 
			this->btn_buku->Activecolor = System::Drawing::Color::RoyalBlue;
			this->btn_buku->BackColor = System::Drawing::Color::Transparent;
			this->btn_buku->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_buku->BorderRadius = 7;
			this->btn_buku->ButtonText = L"KELOLA BUKU";
			this->btn_buku->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_buku->DisabledColor = System::Drawing::Color::Gray;
			this->btn_buku->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_buku->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_buku.Iconimage")));
			this->btn_buku->Iconimage_right = nullptr;
			this->btn_buku->Iconimage_right_Selected = nullptr;
			this->btn_buku->Iconimage_Selected = nullptr;
			this->btn_buku->IconMarginLeft = 0;
			this->btn_buku->IconMarginRight = 0;
			this->btn_buku->IconRightVisible = true;
			this->btn_buku->IconRightZoom = 0;
			this->btn_buku->IconVisible = true;
			this->btn_buku->IconZoom = 40;
			this->btn_buku->IsTab = true;
			this->btn_buku->Location = System::Drawing::Point(14, 265);
			this->btn_buku->Name = L"btn_buku";
			this->btn_buku->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_buku->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_buku->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_buku->selected = false;
			this->btn_buku->Size = System::Drawing::Size(203, 48);
			this->btn_buku->TabIndex = 4;
			this->btn_buku->Text = L"KELOLA BUKU";
			this->btn_buku->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_buku->Textcolor = System::Drawing::Color::White;
			this->btn_buku->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_buku->Click += gcnew System::EventHandler(this, &MyDashboard::btn_add_anggota_Click);
			// 
			// bunifuFlatButton2
			// 
			this->bunifuFlatButton2->Activecolor = System::Drawing::Color::RoyalBlue;
			this->bunifuFlatButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton2->BorderRadius = 7;
			this->bunifuFlatButton2->ButtonText = L"EXIT";
			this->bunifuFlatButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton2->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton2->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton2.Iconimage")));
			this->bunifuFlatButton2->Iconimage_right = nullptr;
			this->bunifuFlatButton2->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton2->Iconimage_Selected = nullptr;
			this->bunifuFlatButton2->IconMarginLeft = 0;
			this->bunifuFlatButton2->IconMarginRight = 0;
			this->bunifuFlatButton2->IconRightVisible = true;
			this->bunifuFlatButton2->IconRightZoom = 0;
			this->bunifuFlatButton2->IconVisible = true;
			this->bunifuFlatButton2->IconZoom = 40;
			this->bunifuFlatButton2->IsTab = true;
			this->bunifuFlatButton2->Location = System::Drawing::Point(12, 426);
			this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
			this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton2->selected = false;
			this->bunifuFlatButton2->Size = System::Drawing::Size(203, 48);
			this->bunifuFlatButton2->TabIndex = 7;
			this->bunifuFlatButton2->Text = L"EXIT";
			this->bunifuFlatButton2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton2->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton2->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton2->Click += gcnew System::EventHandler(this, &MyDashboard::bunifuFlatButton2_Click);
			// 
			// btn_prodi
			// 
			this->btn_prodi->Activecolor = System::Drawing::Color::RoyalBlue;
			this->btn_prodi->BackColor = System::Drawing::Color::Transparent;
			this->btn_prodi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_prodi->BorderRadius = 7;
			this->btn_prodi->ButtonText = L"KELOLA PRODI";
			this->btn_prodi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_prodi->DisabledColor = System::Drawing::Color::Gray;
			this->btn_prodi->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_prodi->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_prodi.Iconimage")));
			this->btn_prodi->Iconimage_right = nullptr;
			this->btn_prodi->Iconimage_right_Selected = nullptr;
			this->btn_prodi->Iconimage_Selected = nullptr;
			this->btn_prodi->IconMarginLeft = 0;
			this->btn_prodi->IconMarginRight = 0;
			this->btn_prodi->IconRightVisible = true;
			this->btn_prodi->IconRightZoom = 0;
			this->btn_prodi->IconVisible = true;
			this->btn_prodi->IconZoom = 40;
			this->btn_prodi->IsTab = true;
			this->btn_prodi->Location = System::Drawing::Point(14, 373);
			this->btn_prodi->Name = L"btn_prodi";
			this->btn_prodi->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_prodi->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_prodi->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_prodi->selected = false;
			this->btn_prodi->Size = System::Drawing::Size(203, 48);
			this->btn_prodi->TabIndex = 1;
			this->btn_prodi->Text = L"KELOLA PRODI";
			this->btn_prodi->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_prodi->Textcolor = System::Drawing::Color::White;
			this->btn_prodi->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_prodi->Click += gcnew System::EventHandler(this, &MyDashboard::btn_prodi_Click);
			// 
			// btn_jurusan
			// 
			this->btn_jurusan->Activecolor = System::Drawing::Color::RoyalBlue;
			this->btn_jurusan->BackColor = System::Drawing::Color::Transparent;
			this->btn_jurusan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_jurusan->BorderRadius = 7;
			this->btn_jurusan->ButtonText = L"KELOLA JURUSAN";
			this->btn_jurusan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_jurusan->DisabledColor = System::Drawing::Color::Gray;
			this->btn_jurusan->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_jurusan->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_jurusan.Iconimage")));
			this->btn_jurusan->Iconimage_right = nullptr;
			this->btn_jurusan->Iconimage_right_Selected = nullptr;
			this->btn_jurusan->Iconimage_Selected = nullptr;
			this->btn_jurusan->IconMarginLeft = 0;
			this->btn_jurusan->IconMarginRight = 0;
			this->btn_jurusan->IconRightVisible = true;
			this->btn_jurusan->IconRightZoom = 0;
			this->btn_jurusan->IconVisible = true;
			this->btn_jurusan->IconZoom = 40;
			this->btn_jurusan->IsTab = true;
			this->btn_jurusan->Location = System::Drawing::Point(14, 319);
			this->btn_jurusan->Name = L"btn_jurusan";
			this->btn_jurusan->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_jurusan->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_jurusan->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_jurusan->selected = false;
			this->btn_jurusan->Size = System::Drawing::Size(203, 48);
			this->btn_jurusan->TabIndex = 5;
			this->btn_jurusan->Text = L"KELOLA JURUSAN";
			this->btn_jurusan->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_jurusan->Textcolor = System::Drawing::Color::White;
			this->btn_jurusan->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_jurusan->Click += gcnew System::EventHandler(this, &MyDashboard::btn_jurusan_Click);
			// 
			// btn_anggota
			// 
			this->btn_anggota->Activecolor = System::Drawing::Color::RoyalBlue;
			this->btn_anggota->BackColor = System::Drawing::Color::Transparent;
			this->btn_anggota->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_anggota->BorderRadius = 7;
			this->btn_anggota->ButtonText = L"KELOLA ANGGOTA";
			this->btn_anggota->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_anggota->DisabledColor = System::Drawing::Color::Gray;
			this->btn_anggota->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_anggota->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_anggota.Iconimage")));
			this->btn_anggota->Iconimage_right = nullptr;
			this->btn_anggota->Iconimage_right_Selected = nullptr;
			this->btn_anggota->Iconimage_Selected = nullptr;
			this->btn_anggota->IconMarginLeft = 0;
			this->btn_anggota->IconMarginRight = 0;
			this->btn_anggota->IconRightVisible = true;
			this->btn_anggota->IconRightZoom = 0;
			this->btn_anggota->IconVisible = true;
			this->btn_anggota->IconZoom = 40;
			this->btn_anggota->IsTab = true;
			this->btn_anggota->Location = System::Drawing::Point(14, 211);
			this->btn_anggota->Name = L"btn_anggota";
			this->btn_anggota->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_anggota->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_anggota->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_anggota->selected = false;
			this->btn_anggota->Size = System::Drawing::Size(203, 48);
			this->btn_anggota->TabIndex = 3;
			this->btn_anggota->Text = L"KELOLA ANGGOTA";
			this->btn_anggota->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_anggota->Textcolor = System::Drawing::Color::White;
			this->btn_anggota->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_anggota->Click += gcnew System::EventHandler(this, &MyDashboard::btn_anggota_Click);
			// 
			// dashboard
			// 
			this->dashboard->Activecolor = System::Drawing::Color::RoyalBlue;
			this->dashboard->BackColor = System::Drawing::Color::Transparent;
			this->dashboard->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->dashboard->BorderRadius = 7;
			this->dashboard->ButtonText = L"DASHBOARD";
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
			this->dashboard->Location = System::Drawing::Point(14, 106);
			this->dashboard->Name = L"dashboard";
			this->dashboard->Normalcolor = System::Drawing::Color::Transparent;
			this->dashboard->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->dashboard->OnHoverTextColor = System::Drawing::Color::White;
			this->dashboard->selected = true;
			this->dashboard->Size = System::Drawing::Size(201, 48);
			this->dashboard->TabIndex = 1;
			this->dashboard->Text = L"DASHBOARD";
			this->dashboard->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->dashboard->Textcolor = System::Drawing::Color::White;
			this->dashboard->TextFont = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dashboard->Click += gcnew System::EventHandler(this, &MyDashboard::dashboard_Click);
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
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(230, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1114, 58);
			this->panel2->TabIndex = 1;
			// 
			// pnl_jurusan
			// 
			this->pnl_jurusan->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pnl_jurusan->Controls->Add(this->bunifuCards1);
			this->pnl_jurusan->Controls->Add(this->bunifuCards2);
			this->pnl_jurusan->Controls->Add(this->bunifuCards11);
			this->pnl_jurusan->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_jurusan->Location = System::Drawing::Point(230, 58);
			this->pnl_jurusan->Name = L"pnl_jurusan";
			this->pnl_jurusan->Size = System::Drawing::Size(1114, 591);
			this->pnl_jurusan->TabIndex = 0;
			this->pnl_jurusan->Visible = false;
			// 
			// bunifuCards1
			// 
			this->bunifuCards1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bunifuCards1->BorderRadius = 9;
			this->bunifuCards1->BottomSahddow = true;
			this->bunifuCards1->color = System::Drawing::Color::Transparent;
			this->bunifuCards1->Controls->Add(this->btn_insert);
			this->bunifuCards1->Controls->Add(this->btn_delete);
			this->bunifuCards1->Controls->Add(this->btn_update_jurusan);
			this->bunifuCards1->Controls->Add(this->tx_nama_jurusan);
			this->bunifuCards1->Controls->Add(this->label2);
			this->bunifuCards1->Controls->Add(this->tx_id_jurusan);
			this->bunifuCards1->Controls->Add(this->lb_nama_jurusan);
			this->bunifuCards1->Controls->Add(this->lb_id_jurusan);
			this->bunifuCards1->Controls->Add(this->btn_add_jurusan);
			this->bunifuCards1->LeftSahddow = true;
			this->bunifuCards1->Location = System::Drawing::Point(27, 376);
			this->bunifuCards1->Name = L"bunifuCards1";
			this->bunifuCards1->RightSahddow = true;
			this->bunifuCards1->ShadowDepth = 20;
			this->bunifuCards1->Size = System::Drawing::Size(787, 205);
			this->bunifuCards1->TabIndex = 9;
			// 
			// btn_insert
			// 
			this->btn_insert->BackColor = System::Drawing::Color::Transparent;
			this->btn_insert->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_insert->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_insert.Image")));
			this->btn_insert->ImageActive = nullptr;
			this->btn_insert->Location = System::Drawing::Point(635, 70);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(32, 40);
			this->btn_insert->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_insert->TabIndex = 16;
			this->btn_insert->TabStop = false;
			this->btn_insert->Zoom = 10;
			this->btn_insert->Click += gcnew System::EventHandler(this, &MyDashboard::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->ActiveBorderThickness = 2;
			this->btn_delete->ActiveCornerRadius = 20;
			this->btn_delete->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete->ActiveForecolor = System::Drawing::Color::White;
			this->btn_delete->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_delete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_delete.BackgroundImage")));
			this->btn_delete->ButtonText = L"Delete";
			this->btn_delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete->IdleBorderThickness = 2;
			this->btn_delete->IdleCornerRadius = 20;
			this->btn_delete->IdleFillColor = System::Drawing::Color::White;
			this->btn_delete->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_delete->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete->Location = System::Drawing::Point(522, 150);
			this->btn_delete->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(82, 41);
			this->btn_delete->TabIndex = 15;
			this->btn_delete->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyDashboard::bunifuThinButton22_Click);
			// 
			// btn_update_jurusan
			// 
			this->btn_update_jurusan->ActiveBorderThickness = 2;
			this->btn_update_jurusan->ActiveCornerRadius = 20;
			this->btn_update_jurusan->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_jurusan->ActiveForecolor = System::Drawing::Color::White;
			this->btn_update_jurusan->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_jurusan->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_update_jurusan->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_update_jurusan.BackgroundImage")));
			this->btn_update_jurusan->ButtonText = L"Update";
			this->btn_update_jurusan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_update_jurusan->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update_jurusan->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_jurusan->IdleBorderThickness = 2;
			this->btn_update_jurusan->IdleCornerRadius = 20;
			this->btn_update_jurusan->IdleFillColor = System::Drawing::Color::White;
			this->btn_update_jurusan->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_update_jurusan->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_jurusan->Location = System::Drawing::Point(338, 148);
			this->btn_update_jurusan->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_update_jurusan->Name = L"btn_update_jurusan";
			this->btn_update_jurusan->Size = System::Drawing::Size(82, 41);
			this->btn_update_jurusan->TabIndex = 14;
			this->btn_update_jurusan->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_update_jurusan->Click += gcnew System::EventHandler(this, &MyDashboard::btn_update_jurusan_Click);
			// 
			// tx_nama_jurusan
			// 
			this->tx_nama_jurusan->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_nama_jurusan->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_nama_jurusan->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_nama_jurusan->BorderThickness = 3;
			this->tx_nama_jurusan->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_nama_jurusan->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_nama_jurusan->ForeColor = System::Drawing::Color::Black;
			this->tx_nama_jurusan->isPassword = false;
			this->tx_nama_jurusan->Location = System::Drawing::Point(119, 98);
			this->tx_nama_jurusan->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_nama_jurusan->Name = L"tx_nama_jurusan";
			this->tx_nama_jurusan->Size = System::Drawing::Size(485, 40);
			this->tx_nama_jurusan->TabIndex = 13;
			this->tx_nama_jurusan->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 21);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Action";
			// 
			// tx_id_jurusan
			// 
			this->tx_id_jurusan->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_id_jurusan->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_id_jurusan->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_id_jurusan->BorderThickness = 3;
			this->tx_id_jurusan->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_id_jurusan->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_id_jurusan->ForeColor = System::Drawing::Color::Black;
			this->tx_id_jurusan->isPassword = false;
			this->tx_id_jurusan->Location = System::Drawing::Point(119, 34);
			this->tx_id_jurusan->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_id_jurusan->Name = L"tx_id_jurusan";
			this->tx_id_jurusan->Size = System::Drawing::Size(485, 40);
			this->tx_id_jurusan->TabIndex = 11;
			this->tx_id_jurusan->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->tx_id_jurusan->OnValueChanged += gcnew System::EventHandler(this, &MyDashboard::tx_id_jurusan_OnValueChanged);
			// 
			// lb_nama_jurusan
			// 
			this->lb_nama_jurusan->AutoSize = true;
			this->lb_nama_jurusan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_nama_jurusan->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_nama_jurusan->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_nama_jurusan->Location = System::Drawing::Point(14, 102);
			this->lb_nama_jurusan->Name = L"lb_nama_jurusan";
			this->lb_nama_jurusan->Size = System::Drawing::Size(52, 21);
			this->lb_nama_jurusan->TabIndex = 8;
			this->lb_nama_jurusan->Text = L"Nama";
			// 
			// lb_id_jurusan
			// 
			this->lb_id_jurusan->AutoSize = true;
			this->lb_id_jurusan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_id_jurusan->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_id_jurusan->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_id_jurusan->Location = System::Drawing::Point(14, 42);
			this->lb_id_jurusan->Name = L"lb_id_jurusan";
			this->lb_id_jurusan->Size = System::Drawing::Size(26, 21);
			this->lb_id_jurusan->TabIndex = 7;
			this->lb_id_jurusan->Text = L"ID";
			// 
			// btn_add_jurusan
			// 
			this->btn_add_jurusan->ActiveBorderThickness = 2;
			this->btn_add_jurusan->ActiveCornerRadius = 20;
			this->btn_add_jurusan->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_jurusan->ActiveForecolor = System::Drawing::Color::White;
			this->btn_add_jurusan->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_jurusan->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_add_jurusan->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_add_jurusan.BackgroundImage")));
			this->btn_add_jurusan->ButtonText = L"Add";
			this->btn_add_jurusan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_add_jurusan->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add_jurusan->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_jurusan->IdleBorderThickness = 2;
			this->btn_add_jurusan->IdleCornerRadius = 20;
			this->btn_add_jurusan->IdleFillColor = System::Drawing::Color::White;
			this->btn_add_jurusan->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_add_jurusan->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_jurusan->Location = System::Drawing::Point(119, 148);
			this->btn_add_jurusan->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_add_jurusan->Name = L"btn_add_jurusan";
			this->btn_add_jurusan->Size = System::Drawing::Size(82, 41);
			this->btn_add_jurusan->TabIndex = 2;
			this->btn_add_jurusan->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_add_jurusan->Click += gcnew System::EventHandler(this, &MyDashboard::btn_add_jurusan_Click);
			// 
			// bunifuCards2
			// 
			this->bunifuCards2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bunifuCards2->BorderRadius = 9;
			this->bunifuCards2->BottomSahddow = true;
			this->bunifuCards2->color = System::Drawing::Color::Transparent;
			this->bunifuCards2->Controls->Add(this->btn_excel_jurusan);
			this->bunifuCards2->Controls->Add(this->label3);
			this->bunifuCards2->LeftSahddow = true;
			this->bunifuCards2->Location = System::Drawing::Point(829, 376);
			this->bunifuCards2->Name = L"bunifuCards2";
			this->bunifuCards2->RightSahddow = true;
			this->bunifuCards2->ShadowDepth = 50;
			this->bunifuCards2->Size = System::Drawing::Size(252, 205);
			this->bunifuCards2->TabIndex = 12;
			// 
			// btn_excel_jurusan
			// 
			this->btn_excel_jurusan->BackColor = System::Drawing::Color::Transparent;
			this->btn_excel_jurusan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_excel_jurusan->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_excel_jurusan.Image")));
			this->btn_excel_jurusan->ImageActive = nullptr;
			this->btn_excel_jurusan->Location = System::Drawing::Point(105, 65);
			this->btn_excel_jurusan->Name = L"btn_excel_jurusan";
			this->btn_excel_jurusan->Size = System::Drawing::Size(55, 91);
			this->btn_excel_jurusan->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btn_excel_jurusan->TabIndex = 14;
			this->btn_excel_jurusan->TabStop = false;
			this->btn_excel_jurusan->Zoom = 10;
			this->btn_excel_jurusan->Click += gcnew System::EventHandler(this, &MyDashboard::bunifuImageButton1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label3->Location = System::Drawing::Point(3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 21);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Export";
			// 
			// bunifuCards11
			// 
			this->bunifuCards11->BackColor = System::Drawing::Color::White;
			this->bunifuCards11->BorderRadius = 20;
			this->bunifuCards11->BottomSahddow = true;
			this->bunifuCards11->color = System::Drawing::Color::Transparent;
			this->bunifuCards11->Controls->Add(this->CustomDataGrid1);
			this->bunifuCards11->Controls->Add(this->btn_clear_search_jurusan);
			this->bunifuCards11->Controls->Add(this->tx_search);
			this->bunifuCards11->Controls->Add(this->btn_search);
			this->bunifuCards11->Controls->Add(this->btn_reload);
			this->bunifuCards11->LeftSahddow = true;
			this->bunifuCards11->Location = System::Drawing::Point(27, 27);
			this->bunifuCards11->Name = L"bunifuCards11";
			this->bunifuCards11->RightSahddow = true;
			this->bunifuCards11->ShadowDepth = 50;
			this->bunifuCards11->Size = System::Drawing::Size(1054, 339);
			this->bunifuCards11->TabIndex = 17;
			// 
			// CustomDataGrid1
			// 
			this->CustomDataGrid1->AllowUserToAddRows = false;
			this->CustomDataGrid1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle26->BackColor = System::Drawing::Color::White;
			this->CustomDataGrid1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle26;
			this->CustomDataGrid1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CustomDataGrid1->BackgroundColor = System::Drawing::Color::White;
			this->CustomDataGrid1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CustomDataGrid1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->CustomDataGrid1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle27->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridViewCellStyle27->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle27->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle27->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle27->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle27->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->CustomDataGrid1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle27;
			this->CustomDataGrid1->ColumnHeadersHeight = 40;
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
			this->CustomDataGrid1->DefaultCellStyle = dataGridViewCellStyle28;
			this->CustomDataGrid1->DoubleBuffered = true;
			this->CustomDataGrid1->EnableHeadersVisualStyles = false;
			this->CustomDataGrid1->GridColor = System::Drawing::Color::WhiteSmoke;
			this->CustomDataGrid1->HeaderBgColor = System::Drawing::Color::RoyalBlue;
			this->CustomDataGrid1->HeaderForeColor = System::Drawing::Color::White;
			this->CustomDataGrid1->Location = System::Drawing::Point(35, 102);
			this->CustomDataGrid1->Name = L"CustomDataGrid1";
			this->CustomDataGrid1->ReadOnly = true;
			this->CustomDataGrid1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle29->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle29->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle29->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle29->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle29->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle29->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->CustomDataGrid1->RowHeadersDefaultCellStyle = dataGridViewCellStyle29;
			this->CustomDataGrid1->RowHeadersVisible = false;
			dataGridViewCellStyle30->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomDataGrid1->RowsDefaultCellStyle = dataGridViewCellStyle30;
			this->CustomDataGrid1->RowTemplate->DividerHeight = 1;
			this->CustomDataGrid1->RowTemplate->Height = 30;
			this->CustomDataGrid1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->CustomDataGrid1->Size = System::Drawing::Size(999, 224);
			this->CustomDataGrid1->TabIndex = 6;
			this->CustomDataGrid1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyDashboard::CustomDataGrid1_CellContentClick_1);
			// 
			// btn_clear_search_jurusan
			// 
			this->btn_clear_search_jurusan->Activecolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_jurusan->BackColor = System::Drawing::Color::Transparent;
			this->btn_clear_search_jurusan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_clear_search_jurusan->BorderRadius = 0;
			this->btn_clear_search_jurusan->ButtonText = L"Clear";
			this->btn_clear_search_jurusan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_clear_search_jurusan->DisabledColor = System::Drawing::Color::Gray;
			this->btn_clear_search_jurusan->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_clear_search_jurusan->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_jurusan->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clear_search_jurusan.Iconimage")));
			this->btn_clear_search_jurusan->Iconimage_right = nullptr;
			this->btn_clear_search_jurusan->Iconimage_right_Selected = nullptr;
			this->btn_clear_search_jurusan->Iconimage_Selected = nullptr;
			this->btn_clear_search_jurusan->IconMarginLeft = 0;
			this->btn_clear_search_jurusan->IconMarginRight = 0;
			this->btn_clear_search_jurusan->IconRightVisible = true;
			this->btn_clear_search_jurusan->IconRightZoom = 0;
			this->btn_clear_search_jurusan->IconVisible = true;
			this->btn_clear_search_jurusan->IconZoom = 40;
			this->btn_clear_search_jurusan->IsTab = true;
			this->btn_clear_search_jurusan->Location = System::Drawing::Point(816, 48);
			this->btn_clear_search_jurusan->Name = L"btn_clear_search_jurusan";
			this->btn_clear_search_jurusan->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_jurusan->OnHovercolor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_search_jurusan->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_clear_search_jurusan->selected = false;
			this->btn_clear_search_jurusan->Size = System::Drawing::Size(103, 38);
			this->btn_clear_search_jurusan->TabIndex = 18;
			this->btn_clear_search_jurusan->Text = L"Clear";
			this->btn_clear_search_jurusan->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_clear_search_jurusan->Textcolor = System::Drawing::Color::Red;
			this->btn_clear_search_jurusan->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_clear_search_jurusan->Visible = false;
			this->btn_clear_search_jurusan->Click += gcnew System::EventHandler(this, &MyDashboard::btn_clear_search_jurusan_Click);
			// 
			// tx_search
			// 
			this->tx_search->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_search->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_search->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_search->BorderThickness = 3;
			this->tx_search->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_search->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_search->ForeColor = System::Drawing::Color::Black;
			this->tx_search->isPassword = false;
			this->tx_search->Location = System::Drawing::Point(338, 48);
			this->tx_search->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_search->Name = L"tx_search";
			this->tx_search->Size = System::Drawing::Size(471, 38);
			this->tx_search->TabIndex = 17;
			this->tx_search->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// btn_search
			// 
			this->btn_search->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_search->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_search->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_search->BorderRadius = 0;
			this->btn_search->ButtonText = L"Search";
			this->btn_search->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_search->DisabledColor = System::Drawing::Color::Gray;
			this->btn_search->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_search->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search.Iconimage")));
			this->btn_search->Iconimage_right = nullptr;
			this->btn_search->Iconimage_right_Selected = nullptr;
			this->btn_search->Iconimage_Selected = nullptr;
			this->btn_search->IconMarginLeft = 0;
			this->btn_search->IconMarginRight = 0;
			this->btn_search->IconRightVisible = true;
			this->btn_search->IconRightZoom = 0;
			this->btn_search->IconVisible = true;
			this->btn_search->IconZoom = 40;
			this->btn_search->IsTab = true;
			this->btn_search->Location = System::Drawing::Point(156, 48);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_search->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_search->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_search->selected = false;
			this->btn_search->Size = System::Drawing::Size(112, 38);
			this->btn_search->TabIndex = 17;
			this->btn_search->Text = L"Search";
			this->btn_search->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_search->Textcolor = System::Drawing::Color::White;
			this->btn_search->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search->Click += gcnew System::EventHandler(this, &MyDashboard::btn_search_Click);
			// 
			// btn_reload
			// 
			this->btn_reload->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_reload->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_reload->BorderRadius = 0;
			this->btn_reload->ButtonText = L"Reload";
			this->btn_reload->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reload->DisabledColor = System::Drawing::Color::Gray;
			this->btn_reload->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_reload->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_reload.Iconimage")));
			this->btn_reload->Iconimage_right = nullptr;
			this->btn_reload->Iconimage_right_Selected = nullptr;
			this->btn_reload->Iconimage_Selected = nullptr;
			this->btn_reload->IconMarginLeft = 0;
			this->btn_reload->IconMarginRight = 0;
			this->btn_reload->IconRightVisible = true;
			this->btn_reload->IconRightZoom = 0;
			this->btn_reload->IconVisible = true;
			this->btn_reload->IconZoom = 40;
			this->btn_reload->IsTab = true;
			this->btn_reload->Location = System::Drawing::Point(35, 48);
			this->btn_reload->Name = L"btn_reload";
			this->btn_reload->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_reload->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_reload->selected = false;
			this->btn_reload->Size = System::Drawing::Size(105, 38);
			this->btn_reload->TabIndex = 16;
			this->btn_reload->Text = L"Reload";
			this->btn_reload->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_reload->Textcolor = System::Drawing::Color::White;
			this->btn_reload->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_reload->Click += gcnew System::EventHandler(this, &MyDashboard::btn_reload_Click);
			// 
			// pnl_prodi
			// 
			this->pnl_prodi->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pnl_prodi->Controls->Add(this->bunifuCards15);
			this->pnl_prodi->Controls->Add(this->bunifuCards3);
			this->pnl_prodi->Controls->Add(this->bunifuCards4);
			this->pnl_prodi->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_prodi->Location = System::Drawing::Point(230, 58);
			this->pnl_prodi->Name = L"pnl_prodi";
			this->pnl_prodi->Size = System::Drawing::Size(1114, 591);
			this->pnl_prodi->TabIndex = 2;
			this->pnl_prodi->Visible = false;
			this->pnl_prodi->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyDashboard::pnl_prodi_Paint);
			// 
			// bunifuCards15
			// 
			this->bunifuCards15->BackColor = System::Drawing::Color::White;
			this->bunifuCards15->BorderRadius = 8;
			this->bunifuCards15->BottomSahddow = true;
			this->bunifuCards15->color = System::Drawing::Color::Transparent;
			this->bunifuCards15->Controls->Add(this->CustomDataGrid2);
			this->bunifuCards15->Controls->Add(this->btn_clear_search_prodi);
			this->bunifuCards15->Controls->Add(this->tx_search_prodi);
			this->bunifuCards15->Controls->Add(this->btn_search_prodi);
			this->bunifuCards15->Controls->Add(this->btn_reload_prodi);
			this->bunifuCards15->LeftSahddow = true;
			this->bunifuCards15->Location = System::Drawing::Point(27, 26);
			this->bunifuCards15->Name = L"bunifuCards15";
			this->bunifuCards15->RightSahddow = true;
			this->bunifuCards15->ShadowDepth = 50;
			this->bunifuCards15->Size = System::Drawing::Size(1051, 317);
			this->bunifuCards15->TabIndex = 19;
			// 
			// CustomDataGrid2
			// 
			this->CustomDataGrid2->AllowUserToAddRows = false;
			this->CustomDataGrid2->AllowUserToDeleteRows = false;
			dataGridViewCellStyle31->BackColor = System::Drawing::Color::White;
			this->CustomDataGrid2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle31;
			this->CustomDataGrid2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CustomDataGrid2->BackgroundColor = System::Drawing::Color::White;
			this->CustomDataGrid2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CustomDataGrid2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->CustomDataGrid2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle32->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridViewCellStyle32->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle32->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle32->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle32->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle32->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->CustomDataGrid2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle32;
			this->CustomDataGrid2->ColumnHeadersHeight = 40;
			dataGridViewCellStyle33->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle33->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle33->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle33->SelectionBackColor = System::Drawing::Color::LightSteelBlue;
			dataGridViewCellStyle33->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle33->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->CustomDataGrid2->DefaultCellStyle = dataGridViewCellStyle33;
			this->CustomDataGrid2->DoubleBuffered = true;
			this->CustomDataGrid2->EnableHeadersVisualStyles = false;
			this->CustomDataGrid2->GridColor = System::Drawing::Color::WhiteSmoke;
			this->CustomDataGrid2->HeaderBgColor = System::Drawing::Color::RoyalBlue;
			this->CustomDataGrid2->HeaderForeColor = System::Drawing::Color::White;
			this->CustomDataGrid2->Location = System::Drawing::Point(35, 81);
			this->CustomDataGrid2->Name = L"CustomDataGrid2";
			this->CustomDataGrid2->ReadOnly = true;
			this->CustomDataGrid2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle34->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle34->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle34->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle34->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle34->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle34->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->CustomDataGrid2->RowHeadersDefaultCellStyle = dataGridViewCellStyle34;
			this->CustomDataGrid2->RowHeadersVisible = false;
			dataGridViewCellStyle35->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomDataGrid2->RowsDefaultCellStyle = dataGridViewCellStyle35;
			this->CustomDataGrid2->RowTemplate->DividerHeight = 1;
			this->CustomDataGrid2->RowTemplate->Height = 30;
			this->CustomDataGrid2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->CustomDataGrid2->Size = System::Drawing::Size(979, 205);
			this->CustomDataGrid2->TabIndex = 6;
			// 
			// btn_clear_search_prodi
			// 
			this->btn_clear_search_prodi->Activecolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_prodi->BackColor = System::Drawing::Color::Transparent;
			this->btn_clear_search_prodi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_clear_search_prodi->BorderRadius = 0;
			this->btn_clear_search_prodi->ButtonText = L"Clear";
			this->btn_clear_search_prodi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_clear_search_prodi->DisabledColor = System::Drawing::Color::Gray;
			this->btn_clear_search_prodi->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_clear_search_prodi->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_prodi->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clear_search_prodi.Iconimage")));
			this->btn_clear_search_prodi->Iconimage_right = nullptr;
			this->btn_clear_search_prodi->Iconimage_right_Selected = nullptr;
			this->btn_clear_search_prodi->Iconimage_Selected = nullptr;
			this->btn_clear_search_prodi->IconMarginLeft = 0;
			this->btn_clear_search_prodi->IconMarginRight = 0;
			this->btn_clear_search_prodi->IconRightVisible = true;
			this->btn_clear_search_prodi->IconRightZoom = 0;
			this->btn_clear_search_prodi->IconVisible = true;
			this->btn_clear_search_prodi->IconZoom = 40;
			this->btn_clear_search_prodi->IsTab = true;
			this->btn_clear_search_prodi->Location = System::Drawing::Point(809, 22);
			this->btn_clear_search_prodi->Name = L"btn_clear_search_prodi";
			this->btn_clear_search_prodi->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_prodi->OnHovercolor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_search_prodi->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_clear_search_prodi->selected = false;
			this->btn_clear_search_prodi->Size = System::Drawing::Size(103, 38);
			this->btn_clear_search_prodi->TabIndex = 18;
			this->btn_clear_search_prodi->Text = L"Clear";
			this->btn_clear_search_prodi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_clear_search_prodi->Textcolor = System::Drawing::Color::Red;
			this->btn_clear_search_prodi->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_clear_search_prodi->Visible = false;
			this->btn_clear_search_prodi->Click += gcnew System::EventHandler(this, &MyDashboard::btn_clear_search_prodi_Click);
			// 
			// tx_search_prodi
			// 
			this->tx_search_prodi->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_search_prodi->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_search_prodi->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_search_prodi->BorderThickness = 3;
			this->tx_search_prodi->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_search_prodi->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_search_prodi->ForeColor = System::Drawing::Color::Black;
			this->tx_search_prodi->isPassword = false;
			this->tx_search_prodi->Location = System::Drawing::Point(291, 22);
			this->tx_search_prodi->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_search_prodi->Name = L"tx_search_prodi";
			this->tx_search_prodi->Size = System::Drawing::Size(508, 38);
			this->tx_search_prodi->TabIndex = 17;
			this->tx_search_prodi->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// btn_search_prodi
			// 
			this->btn_search_prodi->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_prodi->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_search_prodi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_search_prodi->BorderRadius = 0;
			this->btn_search_prodi->ButtonText = L"Search";
			this->btn_search_prodi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_search_prodi->DisabledColor = System::Drawing::Color::Gray;
			this->btn_search_prodi->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_search_prodi->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search_prodi.Iconimage")));
			this->btn_search_prodi->Iconimage_right = nullptr;
			this->btn_search_prodi->Iconimage_right_Selected = nullptr;
			this->btn_search_prodi->Iconimage_Selected = nullptr;
			this->btn_search_prodi->IconMarginLeft = 0;
			this->btn_search_prodi->IconMarginRight = 0;
			this->btn_search_prodi->IconRightVisible = true;
			this->btn_search_prodi->IconRightZoom = 0;
			this->btn_search_prodi->IconVisible = true;
			this->btn_search_prodi->IconZoom = 40;
			this->btn_search_prodi->IsTab = true;
			this->btn_search_prodi->Location = System::Drawing::Point(172, 22);
			this->btn_search_prodi->Name = L"btn_search_prodi";
			this->btn_search_prodi->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_prodi->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_search_prodi->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_search_prodi->selected = false;
			this->btn_search_prodi->Size = System::Drawing::Size(112, 38);
			this->btn_search_prodi->TabIndex = 17;
			this->btn_search_prodi->Text = L"Search";
			this->btn_search_prodi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_search_prodi->Textcolor = System::Drawing::Color::White;
			this->btn_search_prodi->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_search_prodi->Click += gcnew System::EventHandler(this, &MyDashboard::btn_search_prodi_Click);
			// 
			// btn_reload_prodi
			// 
			this->btn_reload_prodi->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_prodi->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_prodi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_reload_prodi->BorderRadius = 0;
			this->btn_reload_prodi->ButtonText = L"Reload";
			this->btn_reload_prodi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reload_prodi->DisabledColor = System::Drawing::Color::Gray;
			this->btn_reload_prodi->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_reload_prodi->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_reload_prodi.Iconimage")));
			this->btn_reload_prodi->Iconimage_right = nullptr;
			this->btn_reload_prodi->Iconimage_right_Selected = nullptr;
			this->btn_reload_prodi->Iconimage_Selected = nullptr;
			this->btn_reload_prodi->IconMarginLeft = 0;
			this->btn_reload_prodi->IconMarginRight = 0;
			this->btn_reload_prodi->IconRightVisible = true;
			this->btn_reload_prodi->IconRightZoom = 0;
			this->btn_reload_prodi->IconVisible = true;
			this->btn_reload_prodi->IconZoom = 40;
			this->btn_reload_prodi->IsTab = true;
			this->btn_reload_prodi->Location = System::Drawing::Point(35, 22);
			this->btn_reload_prodi->Name = L"btn_reload_prodi";
			this->btn_reload_prodi->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_prodi->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_reload_prodi->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_reload_prodi->selected = false;
			this->btn_reload_prodi->Size = System::Drawing::Size(105, 38);
			this->btn_reload_prodi->TabIndex = 16;
			this->btn_reload_prodi->Text = L"Reload";
			this->btn_reload_prodi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_reload_prodi->Textcolor = System::Drawing::Color::White;
			this->btn_reload_prodi->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_reload_prodi->Click += gcnew System::EventHandler(this, &MyDashboard::btn_reload_prodi_Click);
			// 
			// bunifuCards3
			// 
			this->bunifuCards3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bunifuCards3->BorderRadius = 8;
			this->bunifuCards3->BottomSahddow = true;
			this->bunifuCards3->color = System::Drawing::Color::Transparent;
			this->bunifuCards3->Controls->Add(this->btn_export_prodi);
			this->bunifuCards3->Controls->Add(this->label4);
			this->bunifuCards3->LeftSahddow = true;
			this->bunifuCards3->Location = System::Drawing::Point(905, 368);
			this->bunifuCards3->Name = L"bunifuCards3";
			this->bunifuCards3->RightSahddow = true;
			this->bunifuCards3->ShadowDepth = 50;
			this->bunifuCards3->Size = System::Drawing::Size(173, 205);
			this->bunifuCards3->TabIndex = 12;
			// 
			// btn_export_prodi
			// 
			this->btn_export_prodi->BackColor = System::Drawing::Color::Transparent;
			this->btn_export_prodi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_export_prodi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_export_prodi.Image")));
			this->btn_export_prodi->ImageActive = nullptr;
			this->btn_export_prodi->Location = System::Drawing::Point(54, 54);
			this->btn_export_prodi->Name = L"btn_export_prodi";
			this->btn_export_prodi->Size = System::Drawing::Size(69, 111);
			this->btn_export_prodi->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btn_export_prodi->TabIndex = 14;
			this->btn_export_prodi->TabStop = false;
			this->btn_export_prodi->Zoom = 10;
			this->btn_export_prodi->Click += gcnew System::EventHandler(this, &MyDashboard::btn_export_prodi_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label4->Location = System::Drawing::Point(3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 21);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Export";
			// 
			// bunifuCards4
			// 
			this->bunifuCards4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bunifuCards4->BorderRadius = 8;
			this->bunifuCards4->BottomSahddow = true;
			this->bunifuCards4->color = System::Drawing::Color::Transparent;
			this->bunifuCards4->Controls->Add(this->btn_insert_prodi);
			this->bunifuCards4->Controls->Add(this->btn_delete_prodi);
			this->bunifuCards4->Controls->Add(this->btn_update_prodi);
			this->bunifuCards4->Controls->Add(this->tx_nama_prodi);
			this->bunifuCards4->Controls->Add(this->label5);
			this->bunifuCards4->Controls->Add(this->tx_id_prodi);
			this->bunifuCards4->Controls->Add(this->label6);
			this->bunifuCards4->Controls->Add(this->label7);
			this->bunifuCards4->Controls->Add(this->btn_add_prodi);
			this->bunifuCards4->LeftSahddow = true;
			this->bunifuCards4->Location = System::Drawing::Point(30, 368);
			this->bunifuCards4->Name = L"bunifuCards4";
			this->bunifuCards4->RightSahddow = true;
			this->bunifuCards4->ShadowDepth = 50;
			this->bunifuCards4->Size = System::Drawing::Size(855, 205);
			this->bunifuCards4->TabIndex = 9;
			// 
			// btn_insert_prodi
			// 
			this->btn_insert_prodi->BackColor = System::Drawing::Color::Transparent;
			this->btn_insert_prodi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_insert_prodi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_insert_prodi.Image")));
			this->btn_insert_prodi->ImageActive = nullptr;
			this->btn_insert_prodi->Location = System::Drawing::Point(487, 65);
			this->btn_insert_prodi->Name = L"btn_insert_prodi";
			this->btn_insert_prodi->Size = System::Drawing::Size(32, 40);
			this->btn_insert_prodi->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_insert_prodi->TabIndex = 16;
			this->btn_insert_prodi->TabStop = false;
			this->btn_insert_prodi->Zoom = 10;
			this->btn_insert_prodi->Click += gcnew System::EventHandler(this, &MyDashboard::btn_insert_prodi_Click);
			// 
			// btn_delete_prodi
			// 
			this->btn_delete_prodi->ActiveBorderThickness = 2;
			this->btn_delete_prodi->ActiveCornerRadius = 20;
			this->btn_delete_prodi->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_prodi->ActiveForecolor = System::Drawing::Color::White;
			this->btn_delete_prodi->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_prodi->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_delete_prodi->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_delete_prodi.BackgroundImage")));
			this->btn_delete_prodi->ButtonText = L"Delete";
			this->btn_delete_prodi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_delete_prodi->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete_prodi->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_prodi->IdleBorderThickness = 2;
			this->btn_delete_prodi->IdleCornerRadius = 20;
			this->btn_delete_prodi->IdleFillColor = System::Drawing::Color::White;
			this->btn_delete_prodi->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_prodi->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_prodi->Location = System::Drawing::Point(362, 148);
			this->btn_delete_prodi->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_delete_prodi->Name = L"btn_delete_prodi";
			this->btn_delete_prodi->Size = System::Drawing::Size(82, 41);
			this->btn_delete_prodi->TabIndex = 15;
			this->btn_delete_prodi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_delete_prodi->Click += gcnew System::EventHandler(this, &MyDashboard::btn_delete_prodi_Click);
			// 
			// btn_update_prodi
			// 
			this->btn_update_prodi->ActiveBorderThickness = 2;
			this->btn_update_prodi->ActiveCornerRadius = 20;
			this->btn_update_prodi->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_prodi->ActiveForecolor = System::Drawing::Color::White;
			this->btn_update_prodi->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_prodi->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_update_prodi->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_update_prodi.BackgroundImage")));
			this->btn_update_prodi->ButtonText = L"Update";
			this->btn_update_prodi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_update_prodi->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update_prodi->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_prodi->IdleBorderThickness = 2;
			this->btn_update_prodi->IdleCornerRadius = 20;
			this->btn_update_prodi->IdleFillColor = System::Drawing::Color::White;
			this->btn_update_prodi->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_update_prodi->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_prodi->Location = System::Drawing::Point(225, 148);
			this->btn_update_prodi->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_update_prodi->Name = L"btn_update_prodi";
			this->btn_update_prodi->Size = System::Drawing::Size(82, 41);
			this->btn_update_prodi->TabIndex = 14;
			this->btn_update_prodi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_update_prodi->Click += gcnew System::EventHandler(this, &MyDashboard::btn_update_prodi_Click);
			// 
			// tx_nama_prodi
			// 
			this->tx_nama_prodi->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_nama_prodi->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_nama_prodi->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_nama_prodi->BorderThickness = 3;
			this->tx_nama_prodi->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_nama_prodi->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_nama_prodi->ForeColor = System::Drawing::Color::Black;
			this->tx_nama_prodi->isPassword = false;
			this->tx_nama_prodi->Location = System::Drawing::Point(81, 98);
			this->tx_nama_prodi->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_nama_prodi->Name = L"tx_nama_prodi";
			this->tx_nama_prodi->Size = System::Drawing::Size(363, 40);
			this->tx_nama_prodi->TabIndex = 13;
			this->tx_nama_prodi->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label5->Location = System::Drawing::Point(3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 21);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Action";
			// 
			// tx_id_prodi
			// 
			this->tx_id_prodi->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_id_prodi->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_id_prodi->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_id_prodi->BorderThickness = 3;
			this->tx_id_prodi->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_id_prodi->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_id_prodi->ForeColor = System::Drawing::Color::Black;
			this->tx_id_prodi->isPassword = false;
			this->tx_id_prodi->Location = System::Drawing::Point(81, 34);
			this->tx_id_prodi->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_id_prodi->Name = L"tx_id_prodi";
			this->tx_id_prodi->Size = System::Drawing::Size(363, 40);
			this->tx_id_prodi->TabIndex = 11;
			this->tx_id_prodi->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(14, 102);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 21);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Nama";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label7->Location = System::Drawing::Point(14, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 21);
			this->label7->TabIndex = 7;
			this->label7->Text = L"ID";
			// 
			// btn_add_prodi
			// 
			this->btn_add_prodi->ActiveBorderThickness = 2;
			this->btn_add_prodi->ActiveCornerRadius = 20;
			this->btn_add_prodi->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_prodi->ActiveForecolor = System::Drawing::Color::White;
			this->btn_add_prodi->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_prodi->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_add_prodi->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_add_prodi.BackgroundImage")));
			this->btn_add_prodi->ButtonText = L"Add";
			this->btn_add_prodi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_add_prodi->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add_prodi->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_prodi->IdleBorderThickness = 2;
			this->btn_add_prodi->IdleCornerRadius = 20;
			this->btn_add_prodi->IdleFillColor = System::Drawing::Color::White;
			this->btn_add_prodi->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_add_prodi->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_prodi->Location = System::Drawing::Point(81, 148);
			this->btn_add_prodi->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_add_prodi->Name = L"btn_add_prodi";
			this->btn_add_prodi->Size = System::Drawing::Size(82, 41);
			this->btn_add_prodi->TabIndex = 2;
			this->btn_add_prodi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_add_prodi->Click += gcnew System::EventHandler(this, &MyDashboard::btn_add_prodi_Click);
			// 
			// btn_add_anggota
			// 
			this->btn_add_anggota->ActiveBorderThickness = 2;
			this->btn_add_anggota->ActiveCornerRadius = 20;
			this->btn_add_anggota->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_anggota->ActiveForecolor = System::Drawing::Color::White;
			this->btn_add_anggota->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_anggota->BackColor = System::Drawing::Color::White;
			this->btn_add_anggota->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_add_anggota.BackgroundImage")));
			this->btn_add_anggota->ButtonText = L"Add";
			this->btn_add_anggota->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_add_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add_anggota->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_anggota->IdleBorderThickness = 2;
			this->btn_add_anggota->IdleCornerRadius = 20;
			this->btn_add_anggota->IdleFillColor = System::Drawing::Color::White;
			this->btn_add_anggota->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_add_anggota->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_anggota->Location = System::Drawing::Point(571, 195);
			this->btn_add_anggota->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_add_anggota->Name = L"btn_add_anggota";
			this->btn_add_anggota->Size = System::Drawing::Size(73, 37);
			this->btn_add_anggota->TabIndex = 3;
			this->btn_add_anggota->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_add_anggota->Click += gcnew System::EventHandler(this, &MyDashboard::btn_add_anggota_Click_1);
			// 
			// pnl_anggota
			// 
			this->pnl_anggota->Controls->Add(this->bunifuCards5);
			this->pnl_anggota->Controls->Add(this->bunifuCards7);
			this->pnl_anggota->Controls->Add(this->bunifuCards6);
			this->pnl_anggota->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_anggota->Location = System::Drawing::Point(230, 58);
			this->pnl_anggota->Name = L"pnl_anggota";
			this->pnl_anggota->Size = System::Drawing::Size(1114, 591);
			this->pnl_anggota->TabIndex = 21;
			this->pnl_anggota->Visible = false;
			// 
			// bunifuCards5
			// 
			this->bunifuCards5->BackColor = System::Drawing::Color::White;
			this->bunifuCards5->BorderRadius = 5;
			this->bunifuCards5->BottomSahddow = true;
			this->bunifuCards5->color = System::Drawing::Color::Transparent;
			this->bunifuCards5->Controls->Add(this->btn_export_anggota);
			this->bunifuCards5->LeftSahddow = true;
			this->bunifuCards5->Location = System::Drawing::Point(946, 327);
			this->bunifuCards5->Name = L"bunifuCards5";
			this->bunifuCards5->RightSahddow = true;
			this->bunifuCards5->ShadowDepth = 50;
			this->bunifuCards5->Size = System::Drawing::Size(139, 252);
			this->bunifuCards5->TabIndex = 31;
			// 
			// btn_export_anggota
			// 
			this->btn_export_anggota->BackColor = System::Drawing::Color::Transparent;
			this->btn_export_anggota->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_export_anggota->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_export_anggota.Image")));
			this->btn_export_anggota->ImageActive = nullptr;
			this->btn_export_anggota->Location = System::Drawing::Point(46, 74);
			this->btn_export_anggota->Name = L"btn_export_anggota";
			this->btn_export_anggota->Size = System::Drawing::Size(49, 111);
			this->btn_export_anggota->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btn_export_anggota->TabIndex = 21;
			this->btn_export_anggota->TabStop = false;
			this->btn_export_anggota->Zoom = 10;
			this->btn_export_anggota->Click += gcnew System::EventHandler(this, &MyDashboard::btn_export_anggota_Click);
			// 
			// bunifuCards7
			// 
			this->bunifuCards7->BackColor = System::Drawing::Color::White;
			this->bunifuCards7->BorderRadius = 8;
			this->bunifuCards7->BottomSahddow = true;
			this->bunifuCards7->color = System::Drawing::Color::Transparent;
			this->bunifuCards7->Controls->Add(this->btn_insert_anggota);
			this->bunifuCards7->Controls->Add(this->btn_delete_anggota);
			this->bunifuCards7->Controls->Add(this->btn_update_anggota);
			this->bunifuCards7->Controls->Add(this->btn_add_anggota);
			this->bunifuCards7->Controls->Add(this->tx_id_anggota);
			this->bunifuCards7->Controls->Add(this->lb_prodi_anggota);
			this->bunifuCards7->Controls->Add(this->cb_prodi_anggota);
			this->bunifuCards7->Controls->Add(this->lb_id_anggota);
			this->bunifuCards7->Controls->Add(this->cb_jurusan_anggota);
			this->bunifuCards7->Controls->Add(this->lb_jurusan_anggota);
			this->bunifuCards7->Controls->Add(this->tx_nama_anggota);
			this->bunifuCards7->Controls->Add(this->lb_nama_anggota);
			this->bunifuCards7->Controls->Add(this->lb_nim_anggota);
			this->bunifuCards7->Controls->Add(this->lb_notelp_anggota);
			this->bunifuCards7->Controls->Add(this->tx_telp_anggota);
			this->bunifuCards7->Controls->Add(this->tx_nim_anggota);
			this->bunifuCards7->Controls->Add(this->tx_email_anggota);
			this->bunifuCards7->Controls->Add(this->lb_email_anggota);
			this->bunifuCards7->LeftSahddow = true;
			this->bunifuCards7->Location = System::Drawing::Point(24, 327);
			this->bunifuCards7->Name = L"bunifuCards7";
			this->bunifuCards7->RightSahddow = true;
			this->bunifuCards7->ShadowDepth = 50;
			this->bunifuCards7->Size = System::Drawing::Size(895, 252);
			this->bunifuCards7->TabIndex = 29;
			// 
			// btn_insert_anggota
			// 
			this->btn_insert_anggota->BackColor = System::Drawing::Color::Transparent;
			this->btn_insert_anggota->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_insert_anggota->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_insert_anggota.Image")));
			this->btn_insert_anggota->ImageActive = nullptr;
			this->btn_insert_anggota->Location = System::Drawing::Point(376, 35);
			this->btn_insert_anggota->Name = L"btn_insert_anggota";
			this->btn_insert_anggota->Size = System::Drawing::Size(32, 40);
			this->btn_insert_anggota->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_insert_anggota->TabIndex = 30;
			this->btn_insert_anggota->TabStop = false;
			this->btn_insert_anggota->Zoom = 10;
			this->btn_insert_anggota->Click += gcnew System::EventHandler(this, &MyDashboard::btn_insert_anggota_Click);
			// 
			// btn_delete_anggota
			// 
			this->btn_delete_anggota->ActiveBorderThickness = 2;
			this->btn_delete_anggota->ActiveCornerRadius = 20;
			this->btn_delete_anggota->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_anggota->ActiveForecolor = System::Drawing::Color::White;
			this->btn_delete_anggota->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_anggota->BackColor = System::Drawing::Color::White;
			this->btn_delete_anggota->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_delete_anggota.BackgroundImage")));
			this->btn_delete_anggota->ButtonText = L"Delete";
			this->btn_delete_anggota->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_delete_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete_anggota->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_anggota->IdleBorderThickness = 2;
			this->btn_delete_anggota->IdleCornerRadius = 20;
			this->btn_delete_anggota->IdleFillColor = System::Drawing::Color::White;
			this->btn_delete_anggota->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_anggota->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_anggota->Location = System::Drawing::Point(767, 195);
			this->btn_delete_anggota->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_delete_anggota->Name = L"btn_delete_anggota";
			this->btn_delete_anggota->Size = System::Drawing::Size(73, 37);
			this->btn_delete_anggota->TabIndex = 30;
			this->btn_delete_anggota->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_delete_anggota->Click += gcnew System::EventHandler(this, &MyDashboard::btn_delete_anggota_Click);
			// 
			// btn_update_anggota
			// 
			this->btn_update_anggota->ActiveBorderThickness = 2;
			this->btn_update_anggota->ActiveCornerRadius = 20;
			this->btn_update_anggota->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_anggota->ActiveForecolor = System::Drawing::Color::White;
			this->btn_update_anggota->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_anggota->BackColor = System::Drawing::Color::White;
			this->btn_update_anggota->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_update_anggota.BackgroundImage")));
			this->btn_update_anggota->ButtonText = L"Update";
			this->btn_update_anggota->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_update_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update_anggota->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_anggota->IdleBorderThickness = 2;
			this->btn_update_anggota->IdleCornerRadius = 20;
			this->btn_update_anggota->IdleFillColor = System::Drawing::Color::White;
			this->btn_update_anggota->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_update_anggota->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_anggota->Location = System::Drawing::Point(669, 195);
			this->btn_update_anggota->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_update_anggota->Name = L"btn_update_anggota";
			this->btn_update_anggota->Size = System::Drawing::Size(73, 37);
			this->btn_update_anggota->TabIndex = 29;
			this->btn_update_anggota->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_update_anggota->Click += gcnew System::EventHandler(this, &MyDashboard::btn_update_anggota_Click);
			// 
			// tx_id_anggota
			// 
			this->tx_id_anggota->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_id_anggota->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_id_anggota->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_id_anggota->BorderThickness = 3;
			this->tx_id_anggota->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_id_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_id_anggota->ForeColor = System::Drawing::Color::Black;
			this->tx_id_anggota->isPassword = false;
			this->tx_id_anggota->Location = System::Drawing::Point(87, 24);
			this->tx_id_anggota->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_id_anggota->Name = L"tx_id_anggota";
			this->tx_id_anggota->Size = System::Drawing::Size(269, 35);
			this->tx_id_anggota->TabIndex = 14;
			this->tx_id_anggota->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// lb_prodi_anggota
			// 
			this->lb_prodi_anggota->AutoSize = true;
			this->lb_prodi_anggota->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_prodi_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_prodi_anggota->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_prodi_anggota->Location = System::Drawing::Point(470, 134);
			this->lb_prodi_anggota->Name = L"lb_prodi_anggota";
			this->lb_prodi_anggota->Size = System::Drawing::Size(42, 19);
			this->lb_prodi_anggota->TabIndex = 26;
			this->lb_prodi_anggota->Text = L"Prodi";
			// 
			// cb_prodi_anggota
			// 
			this->cb_prodi_anggota->BackColor = System::Drawing::Color::WhiteSmoke;
			this->cb_prodi_anggota->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cb_prodi_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cb_prodi_anggota->FormattingEnabled = true;
			this->cb_prodi_anggota->Location = System::Drawing::Point(571, 141);
			this->cb_prodi_anggota->Name = L"cb_prodi_anggota";
			this->cb_prodi_anggota->Size = System::Drawing::Size(269, 28);
			this->cb_prodi_anggota->TabIndex = 28;
			// 
			// lb_id_anggota
			// 
			this->lb_id_anggota->AutoSize = true;
			this->lb_id_anggota->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_id_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_id_anggota->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_id_anggota->Location = System::Drawing::Point(16, 24);
			this->lb_id_anggota->Name = L"lb_id_anggota";
			this->lb_id_anggota->Size = System::Drawing::Size(23, 19);
			this->lb_id_anggota->TabIndex = 15;
			this->lb_id_anggota->Text = L"ID";
			// 
			// cb_jurusan_anggota
			// 
			this->cb_jurusan_anggota->BackColor = System::Drawing::Color::WhiteSmoke;
			this->cb_jurusan_anggota->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cb_jurusan_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cb_jurusan_anggota->FormattingEnabled = true;
			this->cb_jurusan_anggota->Location = System::Drawing::Point(571, 85);
			this->cb_jurusan_anggota->Name = L"cb_jurusan_anggota";
			this->cb_jurusan_anggota->Size = System::Drawing::Size(269, 28);
			this->cb_jurusan_anggota->TabIndex = 27;
			// 
			// lb_jurusan_anggota
			// 
			this->lb_jurusan_anggota->AutoSize = true;
			this->lb_jurusan_anggota->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_jurusan_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_jurusan_anggota->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_jurusan_anggota->Location = System::Drawing::Point(470, 78);
			this->lb_jurusan_anggota->Name = L"lb_jurusan_anggota";
			this->lb_jurusan_anggota->Size = System::Drawing::Size(57, 19);
			this->lb_jurusan_anggota->TabIndex = 24;
			this->lb_jurusan_anggota->Text = L"Jurusan";
			// 
			// tx_nama_anggota
			// 
			this->tx_nama_anggota->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_nama_anggota->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_nama_anggota->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_nama_anggota->BorderThickness = 3;
			this->tx_nama_anggota->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_nama_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_nama_anggota->ForeColor = System::Drawing::Color::Black;
			this->tx_nama_anggota->isPassword = false;
			this->tx_nama_anggota->Location = System::Drawing::Point(87, 74);
			this->tx_nama_anggota->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_nama_anggota->Name = L"tx_nama_anggota";
			this->tx_nama_anggota->Size = System::Drawing::Size(269, 35);
			this->tx_nama_anggota->TabIndex = 17;
			this->tx_nama_anggota->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// lb_nama_anggota
			// 
			this->lb_nama_anggota->AutoSize = true;
			this->lb_nama_anggota->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_nama_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_nama_anggota->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_nama_anggota->Location = System::Drawing::Point(16, 74);
			this->lb_nama_anggota->Name = L"lb_nama_anggota";
			this->lb_nama_anggota->Size = System::Drawing::Size(46, 19);
			this->lb_nama_anggota->TabIndex = 16;
			this->lb_nama_anggota->Text = L"Nama";
			// 
			// lb_nim_anggota
			// 
			this->lb_nim_anggota->AutoSize = true;
			this->lb_nim_anggota->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_nim_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_nim_anggota->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_nim_anggota->Location = System::Drawing::Point(16, 130);
			this->lb_nim_anggota->Name = L"lb_nim_anggota";
			this->lb_nim_anggota->Size = System::Drawing::Size(37, 19);
			this->lb_nim_anggota->TabIndex = 19;
			this->lb_nim_anggota->Text = L"NIM";
			// 
			// lb_notelp_anggota
			// 
			this->lb_notelp_anggota->AutoSize = true;
			this->lb_notelp_anggota->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_notelp_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_notelp_anggota->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_notelp_anggota->Location = System::Drawing::Point(17, 187);
			this->lb_notelp_anggota->Name = L"lb_notelp_anggota";
			this->lb_notelp_anggota->Size = System::Drawing::Size(58, 19);
			this->lb_notelp_anggota->TabIndex = 22;
			this->lb_notelp_anggota->Text = L"No Telp";
			// 
			// tx_telp_anggota
			// 
			this->tx_telp_anggota->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_telp_anggota->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_telp_anggota->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_telp_anggota->BorderThickness = 3;
			this->tx_telp_anggota->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_telp_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_telp_anggota->ForeColor = System::Drawing::Color::Black;
			this->tx_telp_anggota->isPassword = false;
			this->tx_telp_anggota->Location = System::Drawing::Point(87, 186);
			this->tx_telp_anggota->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_telp_anggota->Name = L"tx_telp_anggota";
			this->tx_telp_anggota->Size = System::Drawing::Size(269, 35);
			this->tx_telp_anggota->TabIndex = 23;
			this->tx_telp_anggota->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// tx_nim_anggota
			// 
			this->tx_nim_anggota->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_nim_anggota->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_nim_anggota->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_nim_anggota->BorderThickness = 3;
			this->tx_nim_anggota->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_nim_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_nim_anggota->ForeColor = System::Drawing::Color::Black;
			this->tx_nim_anggota->isPassword = false;
			this->tx_nim_anggota->Location = System::Drawing::Point(87, 130);
			this->tx_nim_anggota->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_nim_anggota->Name = L"tx_nim_anggota";
			this->tx_nim_anggota->Size = System::Drawing::Size(269, 35);
			this->tx_nim_anggota->TabIndex = 18;
			this->tx_nim_anggota->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// tx_email_anggota
			// 
			this->tx_email_anggota->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_email_anggota->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_email_anggota->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_email_anggota->BorderThickness = 3;
			this->tx_email_anggota->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_email_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_email_anggota->ForeColor = System::Drawing::Color::Black;
			this->tx_email_anggota->isPassword = false;
			this->tx_email_anggota->Location = System::Drawing::Point(571, 24);
			this->tx_email_anggota->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_email_anggota->Name = L"tx_email_anggota";
			this->tx_email_anggota->Size = System::Drawing::Size(269, 35);
			this->tx_email_anggota->TabIndex = 21;
			this->tx_email_anggota->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// lb_email_anggota
			// 
			this->lb_email_anggota->AutoSize = true;
			this->lb_email_anggota->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_email_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_email_anggota->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_email_anggota->Location = System::Drawing::Point(468, 24);
			this->lb_email_anggota->Name = L"lb_email_anggota";
			this->lb_email_anggota->Size = System::Drawing::Size(50, 19);
			this->lb_email_anggota->TabIndex = 20;
			this->lb_email_anggota->Text = L"E-Mail";
			// 
			// bunifuCards6
			// 
			this->bunifuCards6->BackColor = System::Drawing::Color::White;
			this->bunifuCards6->BorderRadius = 8;
			this->bunifuCards6->BottomSahddow = true;
			this->bunifuCards6->color = System::Drawing::Color::Transparent;
			this->bunifuCards6->Controls->Add(this->btn_clear_search_anggota);
			this->bunifuCards6->Controls->Add(this->tx_search_anggota);
			this->bunifuCards6->Controls->Add(this->btn_search_anggota);
			this->bunifuCards6->Controls->Add(this->btn_reload_anggota);
			this->bunifuCards6->Controls->Add(this->CustomDataGrid3);
			this->bunifuCards6->LeftSahddow = true;
			this->bunifuCards6->Location = System::Drawing::Point(21, 17);
			this->bunifuCards6->Name = L"bunifuCards6";
			this->bunifuCards6->RightSahddow = true;
			this->bunifuCards6->ShadowDepth = 50;
			this->bunifuCards6->Size = System::Drawing::Size(1064, 295);
			this->bunifuCards6->TabIndex = 29;
			// 
			// btn_clear_search_anggota
			// 
			this->btn_clear_search_anggota->Activecolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_anggota->BackColor = System::Drawing::Color::Transparent;
			this->btn_clear_search_anggota->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_clear_search_anggota->BorderRadius = 0;
			this->btn_clear_search_anggota->ButtonText = L"Clear";
			this->btn_clear_search_anggota->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_clear_search_anggota->DisabledColor = System::Drawing::Color::Gray;
			this->btn_clear_search_anggota->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_clear_search_anggota->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_anggota->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clear_search_anggota.Iconimage")));
			this->btn_clear_search_anggota->Iconimage_right = nullptr;
			this->btn_clear_search_anggota->Iconimage_right_Selected = nullptr;
			this->btn_clear_search_anggota->Iconimage_Selected = nullptr;
			this->btn_clear_search_anggota->IconMarginLeft = 0;
			this->btn_clear_search_anggota->IconMarginRight = 0;
			this->btn_clear_search_anggota->IconRightVisible = true;
			this->btn_clear_search_anggota->IconRightZoom = 0;
			this->btn_clear_search_anggota->IconVisible = true;
			this->btn_clear_search_anggota->IconZoom = 40;
			this->btn_clear_search_anggota->IsTab = true;
			this->btn_clear_search_anggota->Location = System::Drawing::Point(749, 12);
			this->btn_clear_search_anggota->Name = L"btn_clear_search_anggota";
			this->btn_clear_search_anggota->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_anggota->OnHovercolor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_search_anggota->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_clear_search_anggota->selected = false;
			this->btn_clear_search_anggota->Size = System::Drawing::Size(103, 38);
			this->btn_clear_search_anggota->TabIndex = 20;
			this->btn_clear_search_anggota->Text = L"Clear";
			this->btn_clear_search_anggota->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_clear_search_anggota->Textcolor = System::Drawing::Color::Red;
			this->btn_clear_search_anggota->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_clear_search_anggota->Visible = false;
			this->btn_clear_search_anggota->Click += gcnew System::EventHandler(this, &MyDashboard::btn_clear_search_anggota_Click);
			// 
			// tx_search_anggota
			// 
			this->tx_search_anggota->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_search_anggota->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_search_anggota->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_search_anggota->BorderThickness = 3;
			this->tx_search_anggota->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_search_anggota->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_search_anggota->ForeColor = System::Drawing::Color::Black;
			this->tx_search_anggota->isPassword = false;
			this->tx_search_anggota->Location = System::Drawing::Point(271, 12);
			this->tx_search_anggota->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_search_anggota->Name = L"tx_search_anggota";
			this->tx_search_anggota->Size = System::Drawing::Size(471, 38);
			this->tx_search_anggota->TabIndex = 19;
			this->tx_search_anggota->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// btn_search_anggota
			// 
			this->btn_search_anggota->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_anggota->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_search_anggota->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_search_anggota->BorderRadius = 0;
			this->btn_search_anggota->ButtonText = L"Search";
			this->btn_search_anggota->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_search_anggota->DisabledColor = System::Drawing::Color::Gray;
			this->btn_search_anggota->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_search_anggota->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search_anggota.Iconimage")));
			this->btn_search_anggota->Iconimage_right = nullptr;
			this->btn_search_anggota->Iconimage_right_Selected = nullptr;
			this->btn_search_anggota->Iconimage_Selected = nullptr;
			this->btn_search_anggota->IconMarginLeft = 0;
			this->btn_search_anggota->IconMarginRight = 0;
			this->btn_search_anggota->IconRightVisible = true;
			this->btn_search_anggota->IconRightZoom = 0;
			this->btn_search_anggota->IconVisible = true;
			this->btn_search_anggota->IconZoom = 40;
			this->btn_search_anggota->IsTab = true;
			this->btn_search_anggota->Location = System::Drawing::Point(152, 12);
			this->btn_search_anggota->Name = L"btn_search_anggota";
			this->btn_search_anggota->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_anggota->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_search_anggota->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_search_anggota->selected = false;
			this->btn_search_anggota->Size = System::Drawing::Size(112, 38);
			this->btn_search_anggota->TabIndex = 18;
			this->btn_search_anggota->Text = L"Search";
			this->btn_search_anggota->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_search_anggota->Textcolor = System::Drawing::Color::White;
			this->btn_search_anggota->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_search_anggota->Click += gcnew System::EventHandler(this, &MyDashboard::btn_search_anggota_Click);
			// 
			// btn_reload_anggota
			// 
			this->btn_reload_anggota->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_anggota->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_anggota->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_reload_anggota->BorderRadius = 0;
			this->btn_reload_anggota->ButtonText = L"Reload";
			this->btn_reload_anggota->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reload_anggota->DisabledColor = System::Drawing::Color::Gray;
			this->btn_reload_anggota->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_reload_anggota->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_reload_anggota.Iconimage")));
			this->btn_reload_anggota->Iconimage_right = nullptr;
			this->btn_reload_anggota->Iconimage_right_Selected = nullptr;
			this->btn_reload_anggota->Iconimage_Selected = nullptr;
			this->btn_reload_anggota->IconMarginLeft = 0;
			this->btn_reload_anggota->IconMarginRight = 0;
			this->btn_reload_anggota->IconRightVisible = true;
			this->btn_reload_anggota->IconRightZoom = 0;
			this->btn_reload_anggota->IconVisible = true;
			this->btn_reload_anggota->IconZoom = 40;
			this->btn_reload_anggota->IsTab = true;
			this->btn_reload_anggota->Location = System::Drawing::Point(20, 12);
			this->btn_reload_anggota->Name = L"btn_reload_anggota";
			this->btn_reload_anggota->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_anggota->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_reload_anggota->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_reload_anggota->selected = false;
			this->btn_reload_anggota->Size = System::Drawing::Size(116, 38);
			this->btn_reload_anggota->TabIndex = 17;
			this->btn_reload_anggota->Text = L"Reload";
			this->btn_reload_anggota->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_reload_anggota->Textcolor = System::Drawing::Color::White;
			this->btn_reload_anggota->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_reload_anggota->Click += gcnew System::EventHandler(this, &MyDashboard::btn_reload_anggota_Click);
			// 
			// CustomDataGrid3
			// 
			this->CustomDataGrid3->AllowUserToAddRows = false;
			this->CustomDataGrid3->AllowUserToDeleteRows = false;
			dataGridViewCellStyle36->BackColor = System::Drawing::Color::White;
			this->CustomDataGrid3->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle36;
			this->CustomDataGrid3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CustomDataGrid3->BackgroundColor = System::Drawing::Color::White;
			this->CustomDataGrid3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CustomDataGrid3->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->CustomDataGrid3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle37->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridViewCellStyle37->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle37->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle37->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle37->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle37->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->CustomDataGrid3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle37;
			this->CustomDataGrid3->ColumnHeadersHeight = 40;
			dataGridViewCellStyle38->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle38->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle38->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle38->SelectionBackColor = System::Drawing::Color::LightSteelBlue;
			dataGridViewCellStyle38->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle38->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->CustomDataGrid3->DefaultCellStyle = dataGridViewCellStyle38;
			this->CustomDataGrid3->DoubleBuffered = true;
			this->CustomDataGrid3->EnableHeadersVisualStyles = false;
			this->CustomDataGrid3->GridColor = System::Drawing::Color::WhiteSmoke;
			this->CustomDataGrid3->HeaderBgColor = System::Drawing::Color::RoyalBlue;
			this->CustomDataGrid3->HeaderForeColor = System::Drawing::Color::White;
			this->CustomDataGrid3->Location = System::Drawing::Point(20, 69);
			this->CustomDataGrid3->Name = L"CustomDataGrid3";
			this->CustomDataGrid3->ReadOnly = true;
			this->CustomDataGrid3->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle39->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle39->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle39->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle39->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle39->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle39->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->CustomDataGrid3->RowHeadersDefaultCellStyle = dataGridViewCellStyle39;
			this->CustomDataGrid3->RowHeadersVisible = false;
			dataGridViewCellStyle40->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomDataGrid3->RowsDefaultCellStyle = dataGridViewCellStyle40;
			this->CustomDataGrid3->RowTemplate->DividerHeight = 1;
			this->CustomDataGrid3->RowTemplate->Height = 30;
			this->CustomDataGrid3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->CustomDataGrid3->Size = System::Drawing::Size(1024, 204);
			this->CustomDataGrid3->TabIndex = 7;
			// 
			// pnl_buku
			// 
			this->pnl_buku->Controls->Add(this->bunifuCards8);
			this->pnl_buku->Controls->Add(this->bunifuCards9);
			this->pnl_buku->Controls->Add(this->bunifuCards10);
			this->pnl_buku->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_buku->Location = System::Drawing::Point(230, 58);
			this->pnl_buku->Name = L"pnl_buku";
			this->pnl_buku->Size = System::Drawing::Size(1114, 591);
			this->pnl_buku->TabIndex = 32;
			this->pnl_buku->Visible = false;
			// 
			// bunifuCards8
			// 
			this->bunifuCards8->BackColor = System::Drawing::Color::White;
			this->bunifuCards8->BorderRadius = 5;
			this->bunifuCards8->BottomSahddow = true;
			this->bunifuCards8->color = System::Drawing::Color::Transparent;
			this->bunifuCards8->Controls->Add(this->btn_export_buku);
			this->bunifuCards8->LeftSahddow = true;
			this->bunifuCards8->Location = System::Drawing::Point(943, 330);
			this->bunifuCards8->Name = L"bunifuCards8";
			this->bunifuCards8->RightSahddow = true;
			this->bunifuCards8->ShadowDepth = 50;
			this->bunifuCards8->Size = System::Drawing::Size(139, 235);
			this->bunifuCards8->TabIndex = 31;
			// 
			// btn_export_buku
			// 
			this->btn_export_buku->BackColor = System::Drawing::Color::Transparent;
			this->btn_export_buku->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_export_buku->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_export_buku.Image")));
			this->btn_export_buku->ImageActive = nullptr;
			this->btn_export_buku->Location = System::Drawing::Point(49, 74);
			this->btn_export_buku->Name = L"btn_export_buku";
			this->btn_export_buku->Size = System::Drawing::Size(46, 86);
			this->btn_export_buku->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btn_export_buku->TabIndex = 21;
			this->btn_export_buku->TabStop = false;
			this->btn_export_buku->Zoom = 10;
			this->btn_export_buku->Click += gcnew System::EventHandler(this, &MyDashboard::btn_export_buku_Click);
			// 
			// bunifuCards9
			// 
			this->bunifuCards9->BackColor = System::Drawing::Color::White;
			this->bunifuCards9->BorderRadius = 8;
			this->bunifuCards9->BottomSahddow = true;
			this->bunifuCards9->color = System::Drawing::Color::Transparent;
			this->bunifuCards9->Controls->Add(this->tx_tahun_buku);
			this->bunifuCards9->Controls->Add(this->lb_tahun_buku);
			this->bunifuCards9->Controls->Add(this->btn_insert_buku);
			this->bunifuCards9->Controls->Add(this->btn_delete_buku);
			this->bunifuCards9->Controls->Add(this->btn_update_buku);
			this->bunifuCards9->Controls->Add(this->btn_add_buku);
			this->bunifuCards9->Controls->Add(this->tx_id_buku);
			this->bunifuCards9->Controls->Add(this->lb_id_buku);
			this->bunifuCards9->Controls->Add(this->tx_judul_buku);
			this->bunifuCards9->Controls->Add(this->lb_judul_buku);
			this->bunifuCards9->Controls->Add(this->lb_pengarang_buku);
			this->bunifuCards9->Controls->Add(this->lb_isbn_buku);
			this->bunifuCards9->Controls->Add(this->tx_isbn_buku);
			this->bunifuCards9->Controls->Add(this->tx_pengarang_buku);
			this->bunifuCards9->Controls->Add(this->tx_jumlah_buku);
			this->bunifuCards9->Controls->Add(this->lb_jumlah_buku);
			this->bunifuCards9->LeftSahddow = true;
			this->bunifuCards9->Location = System::Drawing::Point(18, 330);
			this->bunifuCards9->Name = L"bunifuCards9";
			this->bunifuCards9->RightSahddow = true;
			this->bunifuCards9->ShadowDepth = 50;
			this->bunifuCards9->Size = System::Drawing::Size(898, 237);
			this->bunifuCards9->TabIndex = 29;
			// 
			// tx_tahun_buku
			// 
			this->tx_tahun_buku->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_tahun_buku->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_tahun_buku->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_tahun_buku->BorderThickness = 3;
			this->tx_tahun_buku->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_tahun_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_tahun_buku->ForeColor = System::Drawing::Color::Black;
			this->tx_tahun_buku->isPassword = false;
			this->tx_tahun_buku->Location = System::Drawing::Point(112, 127);
			this->tx_tahun_buku->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_tahun_buku->Name = L"tx_tahun_buku";
			this->tx_tahun_buku->Size = System::Drawing::Size(269, 35);
			this->tx_tahun_buku->TabIndex = 32;
			this->tx_tahun_buku->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// lb_tahun_buku
			// 
			this->lb_tahun_buku->AutoSize = true;
			this->lb_tahun_buku->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_tahun_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_tahun_buku->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_tahun_buku->Location = System::Drawing::Point(16, 127);
			this->lb_tahun_buku->Name = L"lb_tahun_buku";
			this->lb_tahun_buku->Size = System::Drawing::Size(47, 19);
			this->lb_tahun_buku->TabIndex = 31;
			this->lb_tahun_buku->Text = L"Tahun";
			// 
			// btn_insert_buku
			// 
			this->btn_insert_buku->BackColor = System::Drawing::Color::Transparent;
			this->btn_insert_buku->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_insert_buku->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_insert_buku.Image")));
			this->btn_insert_buku->ImageActive = nullptr;
			this->btn_insert_buku->Location = System::Drawing::Point(393, 38);
			this->btn_insert_buku->Name = L"btn_insert_buku";
			this->btn_insert_buku->Size = System::Drawing::Size(32, 40);
			this->btn_insert_buku->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_insert_buku->TabIndex = 30;
			this->btn_insert_buku->TabStop = false;
			this->btn_insert_buku->Zoom = 10;
			this->btn_insert_buku->Click += gcnew System::EventHandler(this, &MyDashboard::btn_insert_buku_Click);
			// 
			// btn_delete_buku
			// 
			this->btn_delete_buku->ActiveBorderThickness = 2;
			this->btn_delete_buku->ActiveCornerRadius = 20;
			this->btn_delete_buku->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_buku->ActiveForecolor = System::Drawing::Color::White;
			this->btn_delete_buku->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_buku->BackColor = System::Drawing::Color::White;
			this->btn_delete_buku->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_delete_buku.BackgroundImage")));
			this->btn_delete_buku->ButtonText = L"Delete";
			this->btn_delete_buku->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_delete_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete_buku->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_buku->IdleBorderThickness = 2;
			this->btn_delete_buku->IdleCornerRadius = 20;
			this->btn_delete_buku->IdleFillColor = System::Drawing::Color::White;
			this->btn_delete_buku->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_buku->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_buku->Location = System::Drawing::Point(800, 181);
			this->btn_delete_buku->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_delete_buku->Name = L"btn_delete_buku";
			this->btn_delete_buku->Size = System::Drawing::Size(73, 37);
			this->btn_delete_buku->TabIndex = 30;
			this->btn_delete_buku->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_delete_buku->Click += gcnew System::EventHandler(this, &MyDashboard::btn_delete_buku_Click);
			// 
			// btn_update_buku
			// 
			this->btn_update_buku->ActiveBorderThickness = 2;
			this->btn_update_buku->ActiveCornerRadius = 20;
			this->btn_update_buku->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_buku->ActiveForecolor = System::Drawing::Color::White;
			this->btn_update_buku->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_buku->BackColor = System::Drawing::Color::White;
			this->btn_update_buku->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_update_buku.BackgroundImage")));
			this->btn_update_buku->ButtonText = L"Update";
			this->btn_update_buku->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_update_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update_buku->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_buku->IdleBorderThickness = 2;
			this->btn_update_buku->IdleCornerRadius = 20;
			this->btn_update_buku->IdleFillColor = System::Drawing::Color::White;
			this->btn_update_buku->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_update_buku->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_buku->Location = System::Drawing::Point(702, 181);
			this->btn_update_buku->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_update_buku->Name = L"btn_update_buku";
			this->btn_update_buku->Size = System::Drawing::Size(73, 37);
			this->btn_update_buku->TabIndex = 29;
			this->btn_update_buku->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_update_buku->Click += gcnew System::EventHandler(this, &MyDashboard::btn_update_buku_Click);
			// 
			// btn_add_buku
			// 
			this->btn_add_buku->ActiveBorderThickness = 2;
			this->btn_add_buku->ActiveCornerRadius = 20;
			this->btn_add_buku->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_buku->ActiveForecolor = System::Drawing::Color::White;
			this->btn_add_buku->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_buku->BackColor = System::Drawing::Color::White;
			this->btn_add_buku->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_add_buku.BackgroundImage")));
			this->btn_add_buku->ButtonText = L"Add";
			this->btn_add_buku->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_add_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add_buku->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_buku->IdleBorderThickness = 2;
			this->btn_add_buku->IdleCornerRadius = 20;
			this->btn_add_buku->IdleFillColor = System::Drawing::Color::White;
			this->btn_add_buku->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_add_buku->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_buku->Location = System::Drawing::Point(604, 181);
			this->btn_add_buku->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_add_buku->Name = L"btn_add_buku";
			this->btn_add_buku->Size = System::Drawing::Size(73, 37);
			this->btn_add_buku->TabIndex = 3;
			this->btn_add_buku->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_add_buku->Click += gcnew System::EventHandler(this, &MyDashboard::btn_add_buku_Click);
			// 
			// tx_id_buku
			// 
			this->tx_id_buku->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_id_buku->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_id_buku->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_id_buku->BorderThickness = 3;
			this->tx_id_buku->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_id_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_id_buku->ForeColor = System::Drawing::Color::Black;
			this->tx_id_buku->isPassword = false;
			this->tx_id_buku->Location = System::Drawing::Point(112, 24);
			this->tx_id_buku->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_id_buku->Name = L"tx_id_buku";
			this->tx_id_buku->Size = System::Drawing::Size(269, 35);
			this->tx_id_buku->TabIndex = 14;
			this->tx_id_buku->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// lb_id_buku
			// 
			this->lb_id_buku->AutoSize = true;
			this->lb_id_buku->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_id_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_id_buku->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_id_buku->Location = System::Drawing::Point(16, 24);
			this->lb_id_buku->Name = L"lb_id_buku";
			this->lb_id_buku->Size = System::Drawing::Size(23, 19);
			this->lb_id_buku->TabIndex = 15;
			this->lb_id_buku->Text = L"ID";
			// 
			// tx_judul_buku
			// 
			this->tx_judul_buku->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_judul_buku->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_judul_buku->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_judul_buku->BorderThickness = 3;
			this->tx_judul_buku->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_judul_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_judul_buku->ForeColor = System::Drawing::Color::Black;
			this->tx_judul_buku->isPassword = false;
			this->tx_judul_buku->Location = System::Drawing::Point(112, 74);
			this->tx_judul_buku->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_judul_buku->Name = L"tx_judul_buku";
			this->tx_judul_buku->Size = System::Drawing::Size(269, 35);
			this->tx_judul_buku->TabIndex = 17;
			this->tx_judul_buku->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// lb_judul_buku
			// 
			this->lb_judul_buku->AutoSize = true;
			this->lb_judul_buku->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_judul_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_judul_buku->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_judul_buku->Location = System::Drawing::Point(16, 74);
			this->lb_judul_buku->Name = L"lb_judul_buku";
			this->lb_judul_buku->Size = System::Drawing::Size(43, 19);
			this->lb_judul_buku->TabIndex = 16;
			this->lb_judul_buku->Text = L"Judul";
			// 
			// lb_pengarang_buku
			// 
			this->lb_pengarang_buku->AutoSize = true;
			this->lb_pengarang_buku->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_pengarang_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_pengarang_buku->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_pengarang_buku->Location = System::Drawing::Point(489, 24);
			this->lb_pengarang_buku->Name = L"lb_pengarang_buku";
			this->lb_pengarang_buku->Size = System::Drawing::Size(75, 19);
			this->lb_pengarang_buku->TabIndex = 19;
			this->lb_pengarang_buku->Text = L"Pengarang";
			// 
			// lb_isbn_buku
			// 
			this->lb_isbn_buku->AutoSize = true;
			this->lb_isbn_buku->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_isbn_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_isbn_buku->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_isbn_buku->Location = System::Drawing::Point(489, 75);
			this->lb_isbn_buku->Name = L"lb_isbn_buku";
			this->lb_isbn_buku->Size = System::Drawing::Size(40, 19);
			this->lb_isbn_buku->TabIndex = 22;
			this->lb_isbn_buku->Text = L"ISBN";
			// 
			// tx_isbn_buku
			// 
			this->tx_isbn_buku->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_isbn_buku->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_isbn_buku->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_isbn_buku->BorderThickness = 3;
			this->tx_isbn_buku->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_isbn_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_isbn_buku->ForeColor = System::Drawing::Color::Black;
			this->tx_isbn_buku->isPassword = false;
			this->tx_isbn_buku->Location = System::Drawing::Point(604, 73);
			this->tx_isbn_buku->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_isbn_buku->Name = L"tx_isbn_buku";
			this->tx_isbn_buku->Size = System::Drawing::Size(269, 35);
			this->tx_isbn_buku->TabIndex = 23;
			this->tx_isbn_buku->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// tx_pengarang_buku
			// 
			this->tx_pengarang_buku->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_pengarang_buku->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_pengarang_buku->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_pengarang_buku->BorderThickness = 3;
			this->tx_pengarang_buku->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_pengarang_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_pengarang_buku->ForeColor = System::Drawing::Color::Black;
			this->tx_pengarang_buku->isPassword = false;
			this->tx_pengarang_buku->Location = System::Drawing::Point(604, 24);
			this->tx_pengarang_buku->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_pengarang_buku->Name = L"tx_pengarang_buku";
			this->tx_pengarang_buku->Size = System::Drawing::Size(269, 35);
			this->tx_pengarang_buku->TabIndex = 18;
			this->tx_pengarang_buku->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// tx_jumlah_buku
			// 
			this->tx_jumlah_buku->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_jumlah_buku->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_jumlah_buku->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_jumlah_buku->BorderThickness = 3;
			this->tx_jumlah_buku->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_jumlah_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_jumlah_buku->ForeColor = System::Drawing::Color::Black;
			this->tx_jumlah_buku->isPassword = false;
			this->tx_jumlah_buku->Location = System::Drawing::Point(604, 127);
			this->tx_jumlah_buku->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_jumlah_buku->Name = L"tx_jumlah_buku";
			this->tx_jumlah_buku->Size = System::Drawing::Size(269, 35);
			this->tx_jumlah_buku->TabIndex = 21;
			this->tx_jumlah_buku->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// lb_jumlah_buku
			// 
			this->lb_jumlah_buku->AutoSize = true;
			this->lb_jumlah_buku->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_jumlah_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_jumlah_buku->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_jumlah_buku->Location = System::Drawing::Point(489, 124);
			this->lb_jumlah_buku->Name = L"lb_jumlah_buku";
			this->lb_jumlah_buku->Size = System::Drawing::Size(54, 19);
			this->lb_jumlah_buku->TabIndex = 20;
			this->lb_jumlah_buku->Text = L"Jumlah";
			// 
			// bunifuCards10
			// 
			this->bunifuCards10->BackColor = System::Drawing::Color::White;
			this->bunifuCards10->BorderRadius = 8;
			this->bunifuCards10->BottomSahddow = true;
			this->bunifuCards10->color = System::Drawing::Color::Transparent;
			this->bunifuCards10->Controls->Add(this->btn_clear_search_buku);
			this->bunifuCards10->Controls->Add(this->tx_search_buku);
			this->bunifuCards10->Controls->Add(this->btn_search_buku);
			this->bunifuCards10->Controls->Add(this->btn_reload_buku);
			this->bunifuCards10->Controls->Add(this->CustomDataGrid4);
			this->bunifuCards10->LeftSahddow = true;
			this->bunifuCards10->Location = System::Drawing::Point(21, 17);
			this->bunifuCards10->Name = L"bunifuCards10";
			this->bunifuCards10->RightSahddow = true;
			this->bunifuCards10->ShadowDepth = 50;
			this->bunifuCards10->Size = System::Drawing::Size(1064, 292);
			this->bunifuCards10->TabIndex = 29;
			// 
			// btn_clear_search_buku
			// 
			this->btn_clear_search_buku->Activecolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_buku->BackColor = System::Drawing::Color::Transparent;
			this->btn_clear_search_buku->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_clear_search_buku->BorderRadius = 0;
			this->btn_clear_search_buku->ButtonText = L"Clear";
			this->btn_clear_search_buku->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_clear_search_buku->DisabledColor = System::Drawing::Color::Gray;
			this->btn_clear_search_buku->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_clear_search_buku->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_buku->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clear_search_buku.Iconimage")));
			this->btn_clear_search_buku->Iconimage_right = nullptr;
			this->btn_clear_search_buku->Iconimage_right_Selected = nullptr;
			this->btn_clear_search_buku->Iconimage_Selected = nullptr;
			this->btn_clear_search_buku->IconMarginLeft = 0;
			this->btn_clear_search_buku->IconMarginRight = 0;
			this->btn_clear_search_buku->IconRightVisible = true;
			this->btn_clear_search_buku->IconRightZoom = 0;
			this->btn_clear_search_buku->IconVisible = true;
			this->btn_clear_search_buku->IconZoom = 40;
			this->btn_clear_search_buku->IsTab = true;
			this->btn_clear_search_buku->Location = System::Drawing::Point(749, 12);
			this->btn_clear_search_buku->Name = L"btn_clear_search_buku";
			this->btn_clear_search_buku->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_buku->OnHovercolor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_search_buku->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_clear_search_buku->selected = false;
			this->btn_clear_search_buku->Size = System::Drawing::Size(103, 38);
			this->btn_clear_search_buku->TabIndex = 20;
			this->btn_clear_search_buku->Text = L"Clear";
			this->btn_clear_search_buku->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_clear_search_buku->Textcolor = System::Drawing::Color::Red;
			this->btn_clear_search_buku->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_clear_search_buku->Visible = false;
			this->btn_clear_search_buku->Click += gcnew System::EventHandler(this, &MyDashboard::btn_clear_search_buku_Click);
			// 
			// tx_search_buku
			// 
			this->tx_search_buku->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_search_buku->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_search_buku->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_search_buku->BorderThickness = 3;
			this->tx_search_buku->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_search_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_search_buku->ForeColor = System::Drawing::Color::Black;
			this->tx_search_buku->isPassword = false;
			this->tx_search_buku->Location = System::Drawing::Point(271, 12);
			this->tx_search_buku->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_search_buku->Name = L"tx_search_buku";
			this->tx_search_buku->Size = System::Drawing::Size(471, 38);
			this->tx_search_buku->TabIndex = 19;
			this->tx_search_buku->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// btn_search_buku
			// 
			this->btn_search_buku->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_buku->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_search_buku->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_search_buku->BorderRadius = 0;
			this->btn_search_buku->ButtonText = L"Search";
			this->btn_search_buku->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_search_buku->DisabledColor = System::Drawing::Color::Gray;
			this->btn_search_buku->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_search_buku->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search_buku.Iconimage")));
			this->btn_search_buku->Iconimage_right = nullptr;
			this->btn_search_buku->Iconimage_right_Selected = nullptr;
			this->btn_search_buku->Iconimage_Selected = nullptr;
			this->btn_search_buku->IconMarginLeft = 0;
			this->btn_search_buku->IconMarginRight = 0;
			this->btn_search_buku->IconRightVisible = true;
			this->btn_search_buku->IconRightZoom = 0;
			this->btn_search_buku->IconVisible = true;
			this->btn_search_buku->IconZoom = 40;
			this->btn_search_buku->IsTab = true;
			this->btn_search_buku->Location = System::Drawing::Point(152, 12);
			this->btn_search_buku->Name = L"btn_search_buku";
			this->btn_search_buku->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_buku->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_search_buku->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_search_buku->selected = false;
			this->btn_search_buku->Size = System::Drawing::Size(112, 38);
			this->btn_search_buku->TabIndex = 18;
			this->btn_search_buku->Text = L"Search";
			this->btn_search_buku->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_search_buku->Textcolor = System::Drawing::Color::White;
			this->btn_search_buku->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_search_buku->Click += gcnew System::EventHandler(this, &MyDashboard::btn_search_buku_Click);
			// 
			// btn_reload_buku
			// 
			this->btn_reload_buku->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_buku->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_buku->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_reload_buku->BorderRadius = 0;
			this->btn_reload_buku->ButtonText = L"Reload";
			this->btn_reload_buku->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reload_buku->DisabledColor = System::Drawing::Color::Gray;
			this->btn_reload_buku->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_reload_buku->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_reload_buku.Iconimage")));
			this->btn_reload_buku->Iconimage_right = nullptr;
			this->btn_reload_buku->Iconimage_right_Selected = nullptr;
			this->btn_reload_buku->Iconimage_Selected = nullptr;
			this->btn_reload_buku->IconMarginLeft = 0;
			this->btn_reload_buku->IconMarginRight = 0;
			this->btn_reload_buku->IconRightVisible = true;
			this->btn_reload_buku->IconRightZoom = 0;
			this->btn_reload_buku->IconVisible = true;
			this->btn_reload_buku->IconZoom = 40;
			this->btn_reload_buku->IsTab = true;
			this->btn_reload_buku->Location = System::Drawing::Point(20, 12);
			this->btn_reload_buku->Name = L"btn_reload_buku";
			this->btn_reload_buku->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_buku->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_reload_buku->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_reload_buku->selected = false;
			this->btn_reload_buku->Size = System::Drawing::Size(116, 38);
			this->btn_reload_buku->TabIndex = 17;
			this->btn_reload_buku->Text = L"Reload";
			this->btn_reload_buku->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_reload_buku->Textcolor = System::Drawing::Color::White;
			this->btn_reload_buku->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_reload_buku->Click += gcnew System::EventHandler(this, &MyDashboard::btn_reload_buku_Click);
			// 
			// CustomDataGrid4
			// 
			this->CustomDataGrid4->AllowUserToAddRows = false;
			this->CustomDataGrid4->AllowUserToDeleteRows = false;
			dataGridViewCellStyle41->BackColor = System::Drawing::Color::White;
			this->CustomDataGrid4->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle41;
			this->CustomDataGrid4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CustomDataGrid4->BackgroundColor = System::Drawing::Color::White;
			this->CustomDataGrid4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CustomDataGrid4->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->CustomDataGrid4->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle42->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridViewCellStyle42->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle42->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle42->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle42->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle42->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->CustomDataGrid4->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle42;
			this->CustomDataGrid4->ColumnHeadersHeight = 40;
			dataGridViewCellStyle43->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle43->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle43->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle43->SelectionBackColor = System::Drawing::Color::LightSteelBlue;
			dataGridViewCellStyle43->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle43->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->CustomDataGrid4->DefaultCellStyle = dataGridViewCellStyle43;
			this->CustomDataGrid4->DoubleBuffered = true;
			this->CustomDataGrid4->EnableHeadersVisualStyles = false;
			this->CustomDataGrid4->GridColor = System::Drawing::Color::WhiteSmoke;
			this->CustomDataGrid4->HeaderBgColor = System::Drawing::Color::RoyalBlue;
			this->CustomDataGrid4->HeaderForeColor = System::Drawing::Color::White;
			this->CustomDataGrid4->Location = System::Drawing::Point(20, 69);
			this->CustomDataGrid4->Name = L"CustomDataGrid4";
			this->CustomDataGrid4->ReadOnly = true;
			this->CustomDataGrid4->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle44->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle44->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle44->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle44->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle44->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle44->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->CustomDataGrid4->RowHeadersDefaultCellStyle = dataGridViewCellStyle44;
			this->CustomDataGrid4->RowHeadersVisible = false;
			dataGridViewCellStyle45->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomDataGrid4->RowsDefaultCellStyle = dataGridViewCellStyle45;
			this->CustomDataGrid4->RowTemplate->DividerHeight = 1;
			this->CustomDataGrid4->RowTemplate->Height = 30;
			this->CustomDataGrid4->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->CustomDataGrid4->Size = System::Drawing::Size(1024, 204);
			this->CustomDataGrid4->TabIndex = 7;
			// 
			// pnl_peminjaman
			// 
			this->pnl_peminjaman->Controls->Add(this->bunifuCards12);
			this->pnl_peminjaman->Controls->Add(this->bunifuCards13);
			this->pnl_peminjaman->Controls->Add(this->bunifuCards14);
			this->pnl_peminjaman->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_peminjaman->Location = System::Drawing::Point(230, 58);
			this->pnl_peminjaman->Name = L"pnl_peminjaman";
			this->pnl_peminjaman->Size = System::Drawing::Size(1114, 591);
			this->pnl_peminjaman->TabIndex = 33;
			this->pnl_peminjaman->Visible = false;
			// 
			// bunifuCards12
			// 
			this->bunifuCards12->BackColor = System::Drawing::Color::White;
			this->bunifuCards12->BorderRadius = 5;
			this->bunifuCards12->BottomSahddow = true;
			this->bunifuCards12->color = System::Drawing::Color::Transparent;
			this->bunifuCards12->Controls->Add(this->btn_export_peminjaman);
			this->bunifuCards12->LeftSahddow = true;
			this->bunifuCards12->Location = System::Drawing::Point(911, 344);
			this->bunifuCards12->Name = L"bunifuCards12";
			this->bunifuCards12->RightSahddow = true;
			this->bunifuCards12->ShadowDepth = 50;
			this->bunifuCards12->Size = System::Drawing::Size(174, 223);
			this->bunifuCards12->TabIndex = 31;
			// 
			// btn_export_peminjaman
			// 
			this->btn_export_peminjaman->BackColor = System::Drawing::Color::Transparent;
			this->btn_export_peminjaman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_export_peminjaman->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_export_peminjaman.Image")));
			this->btn_export_peminjaman->ImageActive = nullptr;
			this->btn_export_peminjaman->Location = System::Drawing::Point(57, 75);
			this->btn_export_peminjaman->Name = L"btn_export_peminjaman";
			this->btn_export_peminjaman->Size = System::Drawing::Size(70, 86);
			this->btn_export_peminjaman->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btn_export_peminjaman->TabIndex = 21;
			this->btn_export_peminjaman->TabStop = false;
			this->btn_export_peminjaman->Zoom = 10;
			this->btn_export_peminjaman->Click += gcnew System::EventHandler(this, &MyDashboard::btn_export_peminjaman_Click);
			// 
			// bunifuCards13
			// 
			this->bunifuCards13->BackColor = System::Drawing::Color::White;
			this->bunifuCards13->BorderRadius = 8;
			this->bunifuCards13->BottomSahddow = true;
			this->bunifuCards13->color = System::Drawing::Color::Transparent;
			this->bunifuCards13->Controls->Add(this->btn_update_peminjaman);
			this->bunifuCards13->Controls->Add(this->lb_info);
			this->bunifuCards13->Controls->Add(this->tx_id_pinjaman);
			this->bunifuCards13->Controls->Add(this->cb_status);
			this->bunifuCards13->Controls->Add(this->dp_tgl_pengembalian);
			this->bunifuCards13->Controls->Add(this->dp_tgl_peminjaman);
			this->bunifuCards13->Controls->Add(this->cb_buku);
			this->bunifuCards13->Controls->Add(this->cb_nama_peminjam);
			this->bunifuCards13->Controls->Add(this->lb_tgl_pengembalian);
			this->bunifuCards13->Controls->Add(this->lb_tgl_peminjaman);
			this->bunifuCards13->Controls->Add(this->bunifuImageButton2);
			this->bunifuCards13->Controls->Add(this->btn_delete_peminjaman);
			this->bunifuCards13->Controls->Add(this->btn_add_peminjaman);
			this->bunifuCards13->Controls->Add(this->lb_nama_peminjam);
			this->bunifuCards13->Controls->Add(this->lb_buku_pinjaman);
			this->bunifuCards13->Controls->Add(this->lb_status);
			this->bunifuCards13->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCards13->LeftSahddow = true;
			this->bunifuCards13->Location = System::Drawing::Point(24, 344);
			this->bunifuCards13->Name = L"bunifuCards13";
			this->bunifuCards13->RightSahddow = true;
			this->bunifuCards13->ShadowDepth = 50;
			this->bunifuCards13->Size = System::Drawing::Size(861, 223);
			this->bunifuCards13->TabIndex = 29;
			// 
			// btn_update_peminjaman
			// 
			this->btn_update_peminjaman->ActiveBorderThickness = 2;
			this->btn_update_peminjaman->ActiveCornerRadius = 20;
			this->btn_update_peminjaman->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_peminjaman->ActiveForecolor = System::Drawing::Color::White;
			this->btn_update_peminjaman->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_peminjaman->BackColor = System::Drawing::Color::White;
			this->btn_update_peminjaman->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_update_peminjaman.BackgroundImage")));
			this->btn_update_peminjaman->ButtonText = L"Update";
			this->btn_update_peminjaman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_update_peminjaman->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update_peminjaman->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_peminjaman->IdleBorderThickness = 2;
			this->btn_update_peminjaman->IdleCornerRadius = 20;
			this->btn_update_peminjaman->IdleFillColor = System::Drawing::Color::White;
			this->btn_update_peminjaman->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_update_peminjaman->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_update_peminjaman->Location = System::Drawing::Point(638, 172);
			this->btn_update_peminjaman->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_update_peminjaman->Name = L"btn_update_peminjaman";
			this->btn_update_peminjaman->Size = System::Drawing::Size(73, 37);
			this->btn_update_peminjaman->TabIndex = 40;
			this->btn_update_peminjaman->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_update_peminjaman->Click += gcnew System::EventHandler(this, &MyDashboard::btn_update_peminjaman_Click);
			// 
			// lb_info
			// 
			this->lb_info->AutoSize = true;
			this->lb_info->BackColor = System::Drawing::Color::Transparent;
			this->lb_info->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Light", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_info->Location = System::Drawing::Point(580, 140);
			this->lb_info->Name = L"lb_info";
			this->lb_info->Size = System::Drawing::Size(189, 13);
			this->lb_info->TabIndex = 39;
			this->lb_info->Text = L"Masukan ID untuk action Update-Delete";
			// 
			// tx_id_pinjaman
			// 
			this->tx_id_pinjaman->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_id_pinjaman->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_id_pinjaman->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tx_id_pinjaman->HintForeColor = System::Drawing::Color::Empty;
			this->tx_id_pinjaman->HintText = L"";
			this->tx_id_pinjaman->isPassword = false;
			this->tx_id_pinjaman->LineFocusedColor = System::Drawing::Color::Blue;
			this->tx_id_pinjaman->LineIdleColor = System::Drawing::Color::Gray;
			this->tx_id_pinjaman->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->tx_id_pinjaman->LineThickness = 4;
			this->tx_id_pinjaman->Location = System::Drawing::Point(548, 117);
			this->tx_id_pinjaman->Margin = System::Windows::Forms::Padding(4);
			this->tx_id_pinjaman->Name = L"tx_id_pinjaman";
			this->tx_id_pinjaman->Size = System::Drawing::Size(254, 44);
			this->tx_id_pinjaman->TabIndex = 38;
			this->tx_id_pinjaman->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->tx_id_pinjaman->OnValueChanged += gcnew System::EventHandler(this, &MyDashboard::tx_id_pinjaman_OnValueChanged);
			// 
			// cb_status
			// 
			this->cb_status->BackColor = System::Drawing::Color::WhiteSmoke;
			this->cb_status->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cb_status->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cb_status->FormattingEnabled = true;
			this->cb_status->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Pinjam", L"Kembali" });
			this->cb_status->Location = System::Drawing::Point(115, 136);
			this->cb_status->Name = L"cb_status";
			this->cb_status->Size = System::Drawing::Size(269, 28);
			this->cb_status->TabIndex = 37;
			// 
			// dp_tgl_pengembalian
			// 
			this->dp_tgl_pengembalian->CalendarFont = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dp_tgl_pengembalian->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
			this->dp_tgl_pengembalian->CalendarTitleForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->dp_tgl_pengembalian->CustomFormat = L"yyyy/MM/dd";
			this->dp_tgl_pengembalian->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dp_tgl_pengembalian->Location = System::Drawing::Point(656, 78);
			this->dp_tgl_pengembalian->Name = L"dp_tgl_pengembalian";
			this->dp_tgl_pengembalian->Size = System::Drawing::Size(146, 25);
			this->dp_tgl_pengembalian->TabIndex = 36;
			this->dp_tgl_pengembalian->Value = System::DateTime(2019, 12, 16, 7, 24, 55, 0);
			// 
			// dp_tgl_peminjaman
			// 
			this->dp_tgl_peminjaman->CalendarFont = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dp_tgl_peminjaman->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
			this->dp_tgl_peminjaman->CalendarTitleForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->dp_tgl_peminjaman->CustomFormat = L"yyyy/MM/dd";
			this->dp_tgl_peminjaman->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dp_tgl_peminjaman->Location = System::Drawing::Point(656, 31);
			this->dp_tgl_peminjaman->Name = L"dp_tgl_peminjaman";
			this->dp_tgl_peminjaman->Size = System::Drawing::Size(146, 25);
			this->dp_tgl_peminjaman->TabIndex = 35;
			this->dp_tgl_peminjaman->Value = System::DateTime(2019, 12, 16, 7, 24, 55, 0);
			// 
			// cb_buku
			// 
			this->cb_buku->BackColor = System::Drawing::Color::WhiteSmoke;
			this->cb_buku->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cb_buku->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cb_buku->FormattingEnabled = true;
			this->cb_buku->Location = System::Drawing::Point(115, 82);
			this->cb_buku->Name = L"cb_buku";
			this->cb_buku->Size = System::Drawing::Size(269, 28);
			this->cb_buku->TabIndex = 34;
			// 
			// cb_nama_peminjam
			// 
			this->cb_nama_peminjam->BackColor = System::Drawing::Color::WhiteSmoke;
			this->cb_nama_peminjam->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cb_nama_peminjam->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cb_nama_peminjam->FormattingEnabled = true;
			this->cb_nama_peminjam->Location = System::Drawing::Point(115, 29);
			this->cb_nama_peminjam->Name = L"cb_nama_peminjam";
			this->cb_nama_peminjam->Size = System::Drawing::Size(269, 28);
			this->cb_nama_peminjam->TabIndex = 32;
			// 
			// lb_tgl_pengembalian
			// 
			this->lb_tgl_pengembalian->AutoSize = true;
			this->lb_tgl_pengembalian->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_tgl_pengembalian->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_tgl_pengembalian->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_tgl_pengembalian->Location = System::Drawing::Point(471, 86);
			this->lb_tgl_pengembalian->Name = L"lb_tgl_pengembalian";
			this->lb_tgl_pengembalian->Size = System::Drawing::Size(150, 19);
			this->lb_tgl_pengembalian->TabIndex = 33;
			this->lb_tgl_pengembalian->Text = L"Tanggal Pengembalian";
			// 
			// lb_tgl_peminjaman
			// 
			this->lb_tgl_peminjaman->AutoSize = true;
			this->lb_tgl_peminjaman->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_tgl_peminjaman->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_tgl_peminjaman->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_tgl_peminjaman->Location = System::Drawing::Point(471, 29);
			this->lb_tgl_peminjaman->Name = L"lb_tgl_peminjaman";
			this->lb_tgl_peminjaman->Size = System::Drawing::Size(139, 19);
			this->lb_tgl_peminjaman->TabIndex = 31;
			this->lb_tgl_peminjaman->Text = L"Tanggal Peminjaman";
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(812, 137);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(32, 40);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->bunifuImageButton2->TabIndex = 30;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &MyDashboard::bunifuImageButton2_Click);
			// 
			// btn_delete_peminjaman
			// 
			this->btn_delete_peminjaman->ActiveBorderThickness = 2;
			this->btn_delete_peminjaman->ActiveCornerRadius = 20;
			this->btn_delete_peminjaman->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_peminjaman->ActiveForecolor = System::Drawing::Color::White;
			this->btn_delete_peminjaman->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_peminjaman->BackColor = System::Drawing::Color::White;
			this->btn_delete_peminjaman->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_delete_peminjaman.BackgroundImage")));
			this->btn_delete_peminjaman->ButtonText = L"Delete";
			this->btn_delete_peminjaman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_delete_peminjaman->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete_peminjaman->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_peminjaman->IdleBorderThickness = 2;
			this->btn_delete_peminjaman->IdleCornerRadius = 20;
			this->btn_delete_peminjaman->IdleFillColor = System::Drawing::Color::White;
			this->btn_delete_peminjaman->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_peminjaman->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_delete_peminjaman->Location = System::Drawing::Point(732, 172);
			this->btn_delete_peminjaman->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_delete_peminjaman->Name = L"btn_delete_peminjaman";
			this->btn_delete_peminjaman->Size = System::Drawing::Size(73, 37);
			this->btn_delete_peminjaman->TabIndex = 30;
			this->btn_delete_peminjaman->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_delete_peminjaman->Click += gcnew System::EventHandler(this, &MyDashboard::btn_delete_peminjaman_Click);
			// 
			// btn_add_peminjaman
			// 
			this->btn_add_peminjaman->ActiveBorderThickness = 2;
			this->btn_add_peminjaman->ActiveCornerRadius = 20;
			this->btn_add_peminjaman->ActiveFillColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_peminjaman->ActiveForecolor = System::Drawing::Color::White;
			this->btn_add_peminjaman->ActiveLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_peminjaman->BackColor = System::Drawing::Color::White;
			this->btn_add_peminjaman->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_add_peminjaman.BackgroundImage")));
			this->btn_add_peminjaman->ButtonText = L"Add";
			this->btn_add_peminjaman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_add_peminjaman->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add_peminjaman->ForeColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_peminjaman->IdleBorderThickness = 2;
			this->btn_add_peminjaman->IdleCornerRadius = 20;
			this->btn_add_peminjaman->IdleFillColor = System::Drawing::Color::White;
			this->btn_add_peminjaman->IdleForecolor = System::Drawing::Color::DodgerBlue;
			this->btn_add_peminjaman->IdleLineColor = System::Drawing::Color::DodgerBlue;
			this->btn_add_peminjaman->Location = System::Drawing::Point(548, 172);
			this->btn_add_peminjaman->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_add_peminjaman->Name = L"btn_add_peminjaman";
			this->btn_add_peminjaman->Size = System::Drawing::Size(73, 37);
			this->btn_add_peminjaman->TabIndex = 3;
			this->btn_add_peminjaman->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_add_peminjaman->Click += gcnew System::EventHandler(this, &MyDashboard::btn_add_peminjaman_Click);
			// 
			// lb_nama_peminjam
			// 
			this->lb_nama_peminjam->AutoSize = true;
			this->lb_nama_peminjam->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_nama_peminjam->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_nama_peminjam->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_nama_peminjam->Location = System::Drawing::Point(51, 31);
			this->lb_nama_peminjam->Name = L"lb_nama_peminjam";
			this->lb_nama_peminjam->Size = System::Drawing::Size(46, 19);
			this->lb_nama_peminjam->TabIndex = 15;
			this->lb_nama_peminjam->Text = L"Nama";
			// 
			// lb_buku_pinjaman
			// 
			this->lb_buku_pinjaman->AutoSize = true;
			this->lb_buku_pinjaman->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_buku_pinjaman->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_buku_pinjaman->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_buku_pinjaman->Location = System::Drawing::Point(52, 80);
			this->lb_buku_pinjaman->Name = L"lb_buku_pinjaman";
			this->lb_buku_pinjaman->Size = System::Drawing::Size(40, 19);
			this->lb_buku_pinjaman->TabIndex = 16;
			this->lb_buku_pinjaman->Text = L"Buku";
			// 
			// lb_status
			// 
			this->lb_status->AutoSize = true;
			this->lb_status->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_status->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_status->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lb_status->Location = System::Drawing::Point(51, 137);
			this->lb_status->Name = L"lb_status";
			this->lb_status->Size = System::Drawing::Size(48, 19);
			this->lb_status->TabIndex = 19;
			this->lb_status->Text = L"Status";
			// 
			// bunifuCards14
			// 
			this->bunifuCards14->BackColor = System::Drawing::Color::White;
			this->bunifuCards14->BorderRadius = 8;
			this->bunifuCards14->BottomSahddow = true;
			this->bunifuCards14->color = System::Drawing::Color::Transparent;
			this->bunifuCards14->Controls->Add(this->btn_clear_search_peminjaman);
			this->bunifuCards14->Controls->Add(this->tx_search_peminjaman);
			this->bunifuCards14->Controls->Add(this->btn_search_peminjaman);
			this->bunifuCards14->Controls->Add(this->btn_reload_peminjaman);
			this->bunifuCards14->Controls->Add(this->CustomDataGrid5);
			this->bunifuCards14->LeftSahddow = true;
			this->bunifuCards14->Location = System::Drawing::Point(21, 17);
			this->bunifuCards14->Name = L"bunifuCards14";
			this->bunifuCards14->RightSahddow = true;
			this->bunifuCards14->ShadowDepth = 50;
			this->bunifuCards14->Size = System::Drawing::Size(1064, 292);
			this->bunifuCards14->TabIndex = 29;
			// 
			// btn_clear_search_peminjaman
			// 
			this->btn_clear_search_peminjaman->Activecolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_peminjaman->BackColor = System::Drawing::Color::Transparent;
			this->btn_clear_search_peminjaman->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_clear_search_peminjaman->BorderRadius = 0;
			this->btn_clear_search_peminjaman->ButtonText = L"Clear";
			this->btn_clear_search_peminjaman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_clear_search_peminjaman->DisabledColor = System::Drawing::Color::Gray;
			this->btn_clear_search_peminjaman->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_clear_search_peminjaman->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_peminjaman->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clear_search_peminjaman.Iconimage")));
			this->btn_clear_search_peminjaman->Iconimage_right = nullptr;
			this->btn_clear_search_peminjaman->Iconimage_right_Selected = nullptr;
			this->btn_clear_search_peminjaman->Iconimage_Selected = nullptr;
			this->btn_clear_search_peminjaman->IconMarginLeft = 0;
			this->btn_clear_search_peminjaman->IconMarginRight = 0;
			this->btn_clear_search_peminjaman->IconRightVisible = true;
			this->btn_clear_search_peminjaman->IconRightZoom = 0;
			this->btn_clear_search_peminjaman->IconVisible = true;
			this->btn_clear_search_peminjaman->IconZoom = 40;
			this->btn_clear_search_peminjaman->IsTab = true;
			this->btn_clear_search_peminjaman->Location = System::Drawing::Point(749, 12);
			this->btn_clear_search_peminjaman->Name = L"btn_clear_search_peminjaman";
			this->btn_clear_search_peminjaman->Normalcolor = System::Drawing::Color::Transparent;
			this->btn_clear_search_peminjaman->OnHovercolor = System::Drawing::Color::DodgerBlue;
			this->btn_clear_search_peminjaman->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_clear_search_peminjaman->selected = false;
			this->btn_clear_search_peminjaman->Size = System::Drawing::Size(103, 38);
			this->btn_clear_search_peminjaman->TabIndex = 20;
			this->btn_clear_search_peminjaman->Text = L"Clear";
			this->btn_clear_search_peminjaman->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_clear_search_peminjaman->Textcolor = System::Drawing::Color::Red;
			this->btn_clear_search_peminjaman->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_clear_search_peminjaman->Visible = false;
			this->btn_clear_search_peminjaman->Click += gcnew System::EventHandler(this, &MyDashboard::btn_clear_search_peminjaman_Click);
			// 
			// tx_search_peminjaman
			// 
			this->tx_search_peminjaman->BorderColorFocused = System::Drawing::Color::DodgerBlue;
			this->tx_search_peminjaman->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tx_search_peminjaman->BorderColorMouseHover = System::Drawing::Color::DodgerBlue;
			this->tx_search_peminjaman->BorderThickness = 3;
			this->tx_search_peminjaman->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tx_search_peminjaman->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx_search_peminjaman->ForeColor = System::Drawing::Color::Black;
			this->tx_search_peminjaman->isPassword = false;
			this->tx_search_peminjaman->Location = System::Drawing::Point(271, 12);
			this->tx_search_peminjaman->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tx_search_peminjaman->Name = L"tx_search_peminjaman";
			this->tx_search_peminjaman->Size = System::Drawing::Size(471, 38);
			this->tx_search_peminjaman->TabIndex = 19;
			this->tx_search_peminjaman->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// btn_search_peminjaman
			// 
			this->btn_search_peminjaman->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_peminjaman->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_search_peminjaman->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_search_peminjaman->BorderRadius = 0;
			this->btn_search_peminjaman->ButtonText = L"Search";
			this->btn_search_peminjaman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_search_peminjaman->DisabledColor = System::Drawing::Color::Gray;
			this->btn_search_peminjaman->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_search_peminjaman->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search_peminjaman.Iconimage")));
			this->btn_search_peminjaman->Iconimage_right = nullptr;
			this->btn_search_peminjaman->Iconimage_right_Selected = nullptr;
			this->btn_search_peminjaman->Iconimage_Selected = nullptr;
			this->btn_search_peminjaman->IconMarginLeft = 0;
			this->btn_search_peminjaman->IconMarginRight = 0;
			this->btn_search_peminjaman->IconRightVisible = true;
			this->btn_search_peminjaman->IconRightZoom = 0;
			this->btn_search_peminjaman->IconVisible = true;
			this->btn_search_peminjaman->IconZoom = 40;
			this->btn_search_peminjaman->IsTab = true;
			this->btn_search_peminjaman->Location = System::Drawing::Point(152, 12);
			this->btn_search_peminjaman->Name = L"btn_search_peminjaman";
			this->btn_search_peminjaman->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_search_peminjaman->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_search_peminjaman->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_search_peminjaman->selected = false;
			this->btn_search_peminjaman->Size = System::Drawing::Size(112, 38);
			this->btn_search_peminjaman->TabIndex = 18;
			this->btn_search_peminjaman->Text = L"Search";
			this->btn_search_peminjaman->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_search_peminjaman->Textcolor = System::Drawing::Color::White;
			this->btn_search_peminjaman->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_search_peminjaman->Click += gcnew System::EventHandler(this, &MyDashboard::btn_search_peminjaman_Click);
			// 
			// btn_reload_peminjaman
			// 
			this->btn_reload_peminjaman->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_peminjaman->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_peminjaman->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_reload_peminjaman->BorderRadius = 0;
			this->btn_reload_peminjaman->ButtonText = L"Reload";
			this->btn_reload_peminjaman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reload_peminjaman->DisabledColor = System::Drawing::Color::Gray;
			this->btn_reload_peminjaman->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_reload_peminjaman->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_reload_peminjaman.Iconimage")));
			this->btn_reload_peminjaman->Iconimage_right = nullptr;
			this->btn_reload_peminjaman->Iconimage_right_Selected = nullptr;
			this->btn_reload_peminjaman->Iconimage_Selected = nullptr;
			this->btn_reload_peminjaman->IconMarginLeft = 0;
			this->btn_reload_peminjaman->IconMarginRight = 0;
			this->btn_reload_peminjaman->IconRightVisible = true;
			this->btn_reload_peminjaman->IconRightZoom = 0;
			this->btn_reload_peminjaman->IconVisible = true;
			this->btn_reload_peminjaman->IconZoom = 40;
			this->btn_reload_peminjaman->IsTab = true;
			this->btn_reload_peminjaman->Location = System::Drawing::Point(20, 12);
			this->btn_reload_peminjaman->Name = L"btn_reload_peminjaman";
			this->btn_reload_peminjaman->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_peminjaman->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_reload_peminjaman->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_reload_peminjaman->selected = false;
			this->btn_reload_peminjaman->Size = System::Drawing::Size(116, 38);
			this->btn_reload_peminjaman->TabIndex = 17;
			this->btn_reload_peminjaman->Text = L"Reload";
			this->btn_reload_peminjaman->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_reload_peminjaman->Textcolor = System::Drawing::Color::White;
			this->btn_reload_peminjaman->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_reload_peminjaman->Click += gcnew System::EventHandler(this, &MyDashboard::btn_reload_peminjaman_Click);
			// 
			// CustomDataGrid5
			// 
			this->CustomDataGrid5->AllowUserToAddRows = false;
			this->CustomDataGrid5->AllowUserToDeleteRows = false;
			dataGridViewCellStyle46->BackColor = System::Drawing::Color::White;
			this->CustomDataGrid5->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle46;
			this->CustomDataGrid5->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CustomDataGrid5->BackgroundColor = System::Drawing::Color::White;
			this->CustomDataGrid5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CustomDataGrid5->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->CustomDataGrid5->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle47->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridViewCellStyle47->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle47->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle47->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle47->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle47->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->CustomDataGrid5->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle47;
			this->CustomDataGrid5->ColumnHeadersHeight = 40;
			dataGridViewCellStyle48->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle48->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle48->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle48->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle48->SelectionBackColor = System::Drawing::Color::LightSteelBlue;
			dataGridViewCellStyle48->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle48->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->CustomDataGrid5->DefaultCellStyle = dataGridViewCellStyle48;
			this->CustomDataGrid5->DoubleBuffered = true;
			this->CustomDataGrid5->EnableHeadersVisualStyles = false;
			this->CustomDataGrid5->GridColor = System::Drawing::Color::WhiteSmoke;
			this->CustomDataGrid5->HeaderBgColor = System::Drawing::Color::RoyalBlue;
			this->CustomDataGrid5->HeaderForeColor = System::Drawing::Color::White;
			this->CustomDataGrid5->Location = System::Drawing::Point(20, 69);
			this->CustomDataGrid5->Name = L"CustomDataGrid5";
			this->CustomDataGrid5->ReadOnly = true;
			this->CustomDataGrid5->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle49->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle49->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle49->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle49->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle49->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle49->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->CustomDataGrid5->RowHeadersDefaultCellStyle = dataGridViewCellStyle49;
			this->CustomDataGrid5->RowHeadersVisible = false;
			dataGridViewCellStyle50->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomDataGrid5->RowsDefaultCellStyle = dataGridViewCellStyle50;
			this->CustomDataGrid5->RowTemplate->DividerHeight = 1;
			this->CustomDataGrid5->RowTemplate->Height = 30;
			this->CustomDataGrid5->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->CustomDataGrid5->Size = System::Drawing::Size(1024, 204);
			this->CustomDataGrid5->TabIndex = 7;
			// 
			// pnl_dashboard
			// 
			this->pnl_dashboard->Controls->Add(this->chart1);
			this->pnl_dashboard->Controls->Add(this->btn_reload_dashboard);
			this->pnl_dashboard->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_dashboard->Location = System::Drawing::Point(230, 58);
			this->pnl_dashboard->Name = L"pnl_dashboard";
			this->pnl_dashboard->Size = System::Drawing::Size(1114, 591);
			this->pnl_dashboard->TabIndex = 34;
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(41, 86);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Jumlah";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(1044, 310);
			this->chart1->TabIndex = 19;
			this->chart1->Text = L"chart1";
			// 
			// btn_reload_dashboard
			// 
			this->btn_reload_dashboard->Activecolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_dashboard->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_dashboard->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_reload_dashboard->BorderRadius = 0;
			this->btn_reload_dashboard->ButtonText = L"Reload";
			this->btn_reload_dashboard->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reload_dashboard->DisabledColor = System::Drawing::Color::Gray;
			this->btn_reload_dashboard->Iconcolor = System::Drawing::Color::Transparent;
			this->btn_reload_dashboard->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_reload_dashboard.Iconimage")));
			this->btn_reload_dashboard->Iconimage_right = nullptr;
			this->btn_reload_dashboard->Iconimage_right_Selected = nullptr;
			this->btn_reload_dashboard->Iconimage_Selected = nullptr;
			this->btn_reload_dashboard->IconMarginLeft = 0;
			this->btn_reload_dashboard->IconMarginRight = 0;
			this->btn_reload_dashboard->IconRightVisible = true;
			this->btn_reload_dashboard->IconRightZoom = 0;
			this->btn_reload_dashboard->IconVisible = true;
			this->btn_reload_dashboard->IconZoom = 40;
			this->btn_reload_dashboard->IsTab = true;
			this->btn_reload_dashboard->Location = System::Drawing::Point(41, 26);
			this->btn_reload_dashboard->Name = L"btn_reload_dashboard";
			this->btn_reload_dashboard->Normalcolor = System::Drawing::Color::DodgerBlue;
			this->btn_reload_dashboard->OnHovercolor = System::Drawing::Color::RoyalBlue;
			this->btn_reload_dashboard->OnHoverTextColor = System::Drawing::Color::White;
			this->btn_reload_dashboard->selected = false;
			this->btn_reload_dashboard->Size = System::Drawing::Size(116, 38);
			this->btn_reload_dashboard->TabIndex = 18;
			this->btn_reload_dashboard->Text = L"Reload";
			this->btn_reload_dashboard->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_reload_dashboard->Textcolor = System::Drawing::Color::White;
			this->btn_reload_dashboard->TextFont = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_reload_dashboard->Click += gcnew System::EventHandler(this, &MyDashboard::btn_reload_dashboard_Click);
			// 
			// MyDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1344, 649);
			this->Controls->Add(this->pnl_dashboard);
			this->Controls->Add(this->pnl_anggota);
			this->Controls->Add(this->pnl_peminjaman);
			this->Controls->Add(this->pnl_buku);
			this->Controls->Add(this->pnl_jurusan);
			this->Controls->Add(this->pnl_prodi);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyDashboard";
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &MyDashboard::MyDashboard_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnl_jurusan->ResumeLayout(false);
			this->bunifuCards1->ResumeLayout(false);
			this->bunifuCards1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_insert))->EndInit();
			this->bunifuCards2->ResumeLayout(false);
			this->bunifuCards2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_excel_jurusan))->EndInit();
			this->bunifuCards11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomDataGrid1))->EndInit();
			this->pnl_prodi->ResumeLayout(false);
			this->bunifuCards15->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomDataGrid2))->EndInit();
			this->bunifuCards3->ResumeLayout(false);
			this->bunifuCards3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_export_prodi))->EndInit();
			this->bunifuCards4->ResumeLayout(false);
			this->bunifuCards4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_insert_prodi))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->pnl_anggota->ResumeLayout(false);
			this->bunifuCards5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_export_anggota))->EndInit();
			this->bunifuCards7->ResumeLayout(false);
			this->bunifuCards7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_insert_anggota))->EndInit();
			this->bunifuCards6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomDataGrid3))->EndInit();
			this->pnl_buku->ResumeLayout(false);
			this->bunifuCards8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_export_buku))->EndInit();
			this->bunifuCards9->ResumeLayout(false);
			this->bunifuCards9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_insert_buku))->EndInit();
			this->bunifuCards10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomDataGrid4))->EndInit();
			this->pnl_peminjaman->ResumeLayout(false);
			this->bunifuCards12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_export_peminjaman))->EndInit();
			this->bunifuCards13->ResumeLayout(false);
			this->bunifuCards13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			this->bunifuCards14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomDataGrid5))->EndInit();
			this->pnl_dashboard->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyDashboard_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btn_anggota_Click(System::Object^  sender, System::EventArgs^  e) {
			 pnl_anggota->Visible = true;
			 pnl_jurusan->Visible = false;
			 pnl_prodi->Visible = false;
			 pnl_buku->Visible = false;
			 pnl_peminjaman->Visible = false;
			 pnl_dashboard->Visible = false;
}
private: System::Void btn_add_anggota_Click(System::Object^  sender, System::EventArgs^  e) {
			 pnl_buku->Visible = true;
			 pnl_anggota->Visible = false;
			 pnl_jurusan->Visible = false;
			 pnl_prodi->Visible = false;
			 pnl_peminjaman->Visible = false;
			 pnl_dashboard->Visible = false;
}

private: System::Void bunifuMetroTextbox1_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lb_nama_jurusan_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_add_jurusan_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO tbl_jurusan (id, nama_jurusan) VALUES ('" + this->tx_id_jurusan->Text + "', '" + this->tx_nama_jurusan->Text + "' ) ;", con);
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

private: System::Void CustomDataGrid1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void bunifuMetroTextbox1_OnValueChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void CustomDataGrid1_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void bunifuFlatButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
}
private: System::Void btn_jurusan_Click(System::Object^  sender, System::EventArgs^  e) {
			 pnl_jurusan->Visible = true;
			 pnl_prodi->Visible = false;
			 pnl_anggota->Visible = false;
			 pnl_buku->Visible = false;
			 pnl_peminjaman->Visible = false;
			 pnl_dashboard->Visible = false;
}
private: System::Void btn_update_jurusan_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 int id = Int32::Parse(tx_id_jurusan->Text);
			 String^ nama_jurusan = tx_nama_jurusan->Text;

			 MySqlCommand^ cmd = gcnew MySqlCommand("update tbl_jurusan set nama_jurusan='" + nama_jurusan + "' WHERE id=" + id + "", con);
			 con->Open();
			 MySqlDataReader^ dr = cmd->ExecuteReader();
			 MessageBox::Show("Data Updated");
			 con->Close();
}
private: System::Void btn_reload_Click(System::Object^  sender, System::EventArgs^  e) {
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
				 CustomDataGrid1->DataSource = bSource;
				 sda->Update(pemrograman_visual);
			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void tx_id_jurusan_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void bunifuThinButton21_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_insert_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_id_jurusan->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_jurusan WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();

				 while (dr->Read())
				 {
					 tx_nama_jurusan->Text = dr->GetString(1);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (CustomDataGrid1->Rows->Count>0)
			 {
				 Microsoft::Office::Interop::Excel::ApplicationClass^ xcelapp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
				 xcelapp->Application->Workbooks->Add(Type::Missing);
				 for (int i = 1; i < CustomDataGrid1->Columns->Count + 1; i++)
				 {
					 xcelapp->Cells[1, i] = CustomDataGrid1->Columns[i - 1]->HeaderText;
				 }
				 for (int i = 0; i < CustomDataGrid1->Rows->Count; i++)
				 {
					 for (int j = 0; j < CustomDataGrid1->Columns->Count; j++){
						 xcelapp->Cells[i + 2, j + 1] = CustomDataGrid1->Rows[i]->Cells[j]->Value->ToString();
					 }
				 }
				 xcelapp->Columns->AutoFit();
				 xcelapp->Visible = true;
			 }

}
private: System::Void bunifuThinButton22_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 int id = Int32::Parse(tx_id_jurusan->Text);
			 MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM tbl_jurusan WHERE id=" + id + "", con);
			 con->Open();
			 MySqlDataReader^ dr = cmd->ExecuteReader();
			 MessageBox::Show("Sukses Deleted" + id);
			 con->Close();

}
private: System::Void btn_search_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_search->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_jurusan WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();
				 while (dr->Read())
				 {
					 tx_search->Text = dr->GetString(1);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 btn_clear_search_jurusan->Visible = true;
}
private: System::Void btn_clear_search_jurusan_Click(System::Object^  sender, System::EventArgs^  e) {
			 tx_search->ResetText();
			 btn_clear_search_jurusan->Visible = false;
}

private: System::Void btn_reload_prodi_Click(System::Object^  sender, System::EventArgs^  e) {
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
				 CustomDataGrid2->DataSource = bSource;
				 sda->Update(pemrograman_visual);
			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void btn_prodi_Click(System::Object^  sender, System::EventArgs^  e) {
			 pnl_prodi->Visible = true;
			 pnl_jurusan->Visible = false;
			 pnl_anggota->Visible = false;
			 pnl_buku->Visible = false;
			 pnl_peminjaman->Visible = false;
			 pnl_dashboard->Visible = false;
}
private: System::Void pnl_prodi_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void btn_search_prodi_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_search_prodi->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_prodi WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();
				 while (dr->Read())
				 {
					 tx_search_prodi->Text = dr->GetString(1);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 btn_clear_search_prodi->Visible = true;
}
private: System::Void btn_clear_search_prodi_Click(System::Object^  sender, System::EventArgs^  e) {
			 tx_search_prodi->ResetText();
			 btn_clear_search_prodi->Visible = false;

}
private: System::Void btn_add_prodi_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO tbl_prodi (id, nama_prodi) VALUES ('" + this->tx_id_prodi->Text + "', '" + this->tx_nama_prodi->Text + "' ) ;", con);
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
private: System::Void btn_update_prodi_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 int id = Int32::Parse(tx_id_prodi->Text);
			 String^ nama_prodi = tx_nama_prodi->Text;

			 MySqlCommand^ cmd = gcnew MySqlCommand("update tbl_prodi set nama_prodi='" + nama_prodi + "' WHERE id=" + id + "", con);
			 con->Open();
			 MySqlDataReader^ dr = cmd->ExecuteReader();
			 MessageBox::Show("Data Updated");
			 con->Close();
}
private: System::Void btn_delete_prodi_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 int id = Int32::Parse(tx_id_prodi->Text);
			 MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM tbl_prodi WHERE id=" + id + "", con);
			 con->Open();
			 MySqlDataReader^ dr = cmd->ExecuteReader();
			 MessageBox::Show("Sukses Deleted" + id);
			 con->Close();
}
private: System::Void btn_insert_prodi_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_id_prodi->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_prodi WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();

				 while (dr->Read())
				 {
					 tx_nama_prodi->Text = dr->GetString(1);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void btn_export_prodi_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (CustomDataGrid2->Rows->Count>0)
			 {
				 Microsoft::Office::Interop::Excel::ApplicationClass^ xcelapp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
				 xcelapp->Application->Workbooks->Add(Type::Missing);
				 for (int i = 1; i < CustomDataGrid2->Columns->Count + 1; i++)
				 {
					 xcelapp->Cells[1, i] = CustomDataGrid2->Columns[i - 1]->HeaderText;
				 }
				 for (int i = 0; i < CustomDataGrid2->Rows->Count; i++)
				 {
					 for (int j = 0; j < CustomDataGrid2->Columns->Count; j++){
						 xcelapp->Cells[i + 2, j + 1] = CustomDataGrid2->Rows[i]->Cells[j]->Value->ToString();
					 }
				 }
				 xcelapp->Columns->AutoFit();
				 xcelapp->Visible = true;
			 }
}
private: void ComboJurusan(void){
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand(" SELECT * FROM tbl_jurusan ;", con);
			 MySqlDataReader^ dr;
			 try{
				 con->Open();
				 dr = cmd->ExecuteReader();
				 while (dr->Read())
				 {
					 String^ vJurusan;
					 vJurusan = dr->GetString("nama_jurusan");
					 cb_jurusan_anggota->Items->Add(vJurusan);
				 }
			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void cb_prodi_anggota_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
		private: void ComboProdi(void){
					 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
					 MySqlConnection^ con = gcnew MySqlConnection(constr);
					 MySqlCommand^ cmd = gcnew MySqlCommand(" SELECT * FROM tbl_prodi ;", con);
					 MySqlDataReader^ dr;
					 try{
						 con->Open();
						 dr = cmd->ExecuteReader();
						 while (dr->Read())
						 {
							 String^ vProdi;
							 vProdi = dr->GetString("nama_prodi");
							 cb_prodi_anggota->Items->Add(vProdi);
						 }
					 }
					 catch (Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
		}


private: System::Void btn_add_anggota_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO tbl_anggota (id, nama, nim, email, telp, jurusan, prodi) VALUES ('" + this->tx_id_anggota->Text + "', '" + this->tx_nama_anggota->Text + "', '" + this->tx_nim_anggota->Text + "', '" + this->tx_email_anggota->Text + "', '" + this->tx_telp_anggota->Text + "', '" + this->cb_jurusan_anggota->Text + "', '" + this->cb_prodi_anggota->Text + "'  ) ;", con);
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

private: System::Void btn_reload_anggota_Click(System::Object^  sender, System::EventArgs^  e) {
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
				 CustomDataGrid3->DataSource = bSource;
				 sda->Update(pemrograman_visual);
			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}

private: System::Void btn_insert_anggota_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_id_anggota->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_anggota WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();

				 while (dr->Read())
				 {
					 tx_nama_anggota->Text = dr->GetString(1);
					 tx_nim_anggota->Text = dr->GetString(2);
					 tx_email_anggota->Text = dr->GetString(3);
					 tx_telp_anggota->Text = dr->GetString(4);
					 cb_jurusan_anggota->Text = dr->GetString(5);
					 cb_prodi_anggota->Text = dr->GetString(6);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }

}
private: System::Void btn_update_anggota_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 int id = Int32::Parse(tx_id_anggota->Text);
			 String^ nama = tx_nama_anggota->Text;
			 String^ nim = tx_nim_anggota->Text;
			 String^ telp = tx_telp_anggota->Text;
			 String^ email = tx_email_anggota->Text;
			 String^ jurusan = cb_jurusan_anggota->Text;
			 String^ prodi = cb_prodi_anggota->Text;

			 MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE tbl_anggota set nama='" + nama + "', nim='" + nim + "',  telp='" + telp + "', email='" + email + "',  jurusan='" + jurusan + "', prodi='" + prodi + "' WHERE id=" + id + "", con);
			 con->Open();
			 MySqlDataReader^ dr = cmd->ExecuteReader();
			 MessageBox::Show("Data Updated");
			 con->Close();

}
private: System::Void btn_delete_anggota_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 int id = Int32::Parse(tx_id_anggota->Text);
			 String^ nama = tx_nama_anggota->Text;
			 MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM tbl_anggota WHERE id=" + id + "", con);
			 con->Open();
			 MySqlDataReader^ dr = cmd->ExecuteReader();
			 MessageBox::Show("Sukses Deleted" + nama);
			 con->Close();
}
private: System::Void btn_search_anggota_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_search_anggota->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_anggota WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();
				 while (dr->Read())
				 {
					 tx_search_anggota->Text = dr->GetString(1);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 btn_clear_search_anggota->Visible = true;
}
private: System::Void btn_clear_search_anggota_Click(System::Object^  sender, System::EventArgs^  e) {
			 tx_search_anggota->ResetText();
			 btn_clear_search_anggota->Visible = false;
}
private: System::Void btn_export_anggota_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (CustomDataGrid3->Rows->Count>0)
			 {
				 Microsoft::Office::Interop::Excel::ApplicationClass^ xcelapp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
				 xcelapp->Application->Workbooks->Add(Type::Missing);
				 for (int i = 1; i < CustomDataGrid3->Columns->Count + 1; i++)
				 {
					 xcelapp->Cells[1, i] = CustomDataGrid3->Columns[i - 1]->HeaderText;
				 }
				 for (int i = 0; i < CustomDataGrid3->Rows->Count; i++)
				 {
					 for (int j = 0; j < CustomDataGrid3->Columns->Count; j++){
						 xcelapp->Cells[i + 2, j + 1] = CustomDataGrid3->Rows[i]->Cells[j]->Value->ToString();
					 }
				 }
				 xcelapp->Columns->AutoFit();
				 xcelapp->Visible = true;
			 }
}
private: System::Void btn_reload_buku_Click(System::Object^  sender, System::EventArgs^  e) {
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
				 CustomDataGrid4->DataSource = bSource;
				 sda->Update(pemrograman_visual);
			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void btn_search_buku_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_search_buku->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_buku WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();
				 while (dr->Read())
				 {
					 tx_search_buku->Text = dr->GetString(1);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 btn_clear_search_buku->Visible = true;

}
private: System::Void btn_clear_search_buku_Click(System::Object^  sender, System::EventArgs^  e) {
			 tx_search_buku->ResetText();
			 btn_clear_search_buku->Visible = false;
}
private: System::Void btn_add_buku_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO tbl_buku (id, judul, pengarang, isbn, tahun, jumlah) VALUES ('" + this->tx_id_buku->Text + "', '" + this->tx_judul_buku->Text + "', '" + this->tx_pengarang_buku->Text + "', '" + this->tx_isbn_buku->Text + "', '" + this->tx_tahun_buku->Text + "', '" + this->tx_jumlah_buku->Text + "') ;", con);
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
private: System::Void btn_update_buku_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 int id = Int32::Parse(tx_id_buku->Text);
			 String^ judul = tx_judul_buku->Text;
			 String^ pengarang = tx_pengarang_buku->Text;
			 String^ isbn = tx_isbn_buku->Text;
			 String^ tahun = tx_tahun_buku->Text;
			 String^ jumlah = tx_jumlah_buku->Text;

			 MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE tbl_buku set judul='" + judul + "', pengarang='" + pengarang + "',  isbn='" + isbn + "', tahun='" + tahun + "',  jumlah='" + jumlah + "' WHERE id=" + id + "", con);
			 con->Open();
			 MySqlDataReader^ dr = cmd->ExecuteReader();
			 MessageBox::Show("Data Updated");
			 con->Close();
}
private: System::Void btn_insert_buku_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_id_buku->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_buku WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();

				 while (dr->Read())
				 {
					 tx_judul_buku->Text = dr->GetString(1);
					 tx_tahun_buku->Text = dr->GetString(4);
					 tx_pengarang_buku->Text = dr->GetString(2);
					 tx_isbn_buku->Text = dr->GetString(3);
					 tx_jumlah_buku->Text = dr->GetString(5);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }


}
private: System::Void btn_delete_buku_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 int id = Int32::Parse(tx_id_buku->Text);
			 String^ judul = tx_judul_buku->Text;
			 MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM tbl_buku WHERE id=" + id + "", con);
			 con->Open();
			 MySqlDataReader^ dr = cmd->ExecuteReader();
			 MessageBox::Show("Sukses Deleted" + judul);
			 con->Close();

}
private: System::Void btn_export_buku_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (CustomDataGrid4->Rows->Count>0)
			 {
				 Microsoft::Office::Interop::Excel::ApplicationClass^ xcelapp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
				 xcelapp->Application->Workbooks->Add(Type::Missing);
				 for (int i = 1; i < CustomDataGrid4->Columns->Count + 1; i++)
				 {
					 xcelapp->Cells[1, i] = CustomDataGrid4->Columns[i - 1]->HeaderText;
				 }
				 for (int i = 0; i < CustomDataGrid4->Rows->Count; i++)
				 {
					 for (int j = 0; j < CustomDataGrid4->Columns->Count; j++){
						 xcelapp->Cells[i + 2, j + 1] = CustomDataGrid4->Rows[i]->Cells[j]->Value->ToString();
					 }
				 }
				 xcelapp->Columns->AutoFit();
				 xcelapp->Visible = true;
			 }
}
private: System::Void btn_peminjaman_Click(System::Object^  sender, System::EventArgs^  e) {
			 pnl_peminjaman->Visible = true;
			 pnl_prodi->Visible = false;
			 pnl_jurusan->Visible = false;
			 pnl_anggota->Visible = false;
			 pnl_buku->Visible = false; 
			 pnl_dashboard->Visible = false;
}
private: System::Void btn_reload_peminjaman_Click(System::Object^  sender, System::EventArgs^  e) {
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
				 CustomDataGrid5->DataSource = bSource;
				 sda->Update(pemrograman_visual);
			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void btn_search_peminjaman_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_search_peminjaman->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_buku WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();
				 while (dr->Read())
				 {
					 tx_search_peminjaman->Text = dr->GetString(1);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 btn_clear_search_peminjaman->Visible = true;
}
private: System::Void btn_clear_search_peminjaman_Click(System::Object^  sender, System::EventArgs^  e) {
			 tx_search_peminjaman->ResetText();
			 btn_clear_search_peminjaman->Visible = false;
}
private: void ComboNamaPeminjam(void){
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand(" SELECT * FROM tbl_anggota ;", con);
			 MySqlDataReader^ dr;
			 try{
				 con->Open();
				 dr = cmd->ExecuteReader();
				 while (dr->Read())
				 {
					 String^ vNama;
					 vNama = dr->GetString("nama");
					 cb_nama_peminjam->Items->Add(vNama);
				 }
			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
		 private: void ComboBuku(void){
					  String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
					  MySqlConnection^ con = gcnew MySqlConnection(constr);
					  MySqlCommand^ cmd = gcnew MySqlCommand(" SELECT * FROM tbl_buku ;", con);
					  MySqlDataReader^ dr;
					  try{
						  con->Open();
						  dr = cmd->ExecuteReader();
						  while (dr->Read())
						  {
							  String^ vBuku;
							  vBuku = dr->GetString("judul");
							  cb_buku->Items->Add(vBuku);
						  }
					  }
					  catch (Exception^ex)
					  {
						  MessageBox::Show(ex->Message);
					  }
		 }
private: System::Void btn_add_peminjaman_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO tbl_pinjaman (nama_peminjam, buku_pinjaman, status, tanggal_pinjaman, tanggal_pengembalian) VALUES ('" + this->cb_nama_peminjam->Text + "', '" + this->cb_buku->Text + "', '" + this->cb_status->Text + "', '" + this->dp_tgl_peminjaman->Text + "', '" + this->dp_tgl_pengembalian->Text + "') ;", con);
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
private: System::Void bunifuImageButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 int id = Int32::Parse(tx_id_pinjaman->Text);
				 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM tbl_pinjaman WHERE id=" + id + "", con);
				 con->Open();
				 MySqlDataReader^ dr = cmd->ExecuteReader();

				 while (dr->Read())
				 {
					 cb_nama_peminjam->Text = dr->GetString(1);
					 cb_buku->Text = dr->GetString(2);
					 cb_status->Text = dr->GetString(5);
					 dp_tgl_peminjaman->Text = dr->GetString(3);
					 dp_tgl_pengembalian->Text = dr->GetString(4);
				 }
				 con->Close();
			 }
			 catch (Exception^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void tx_id_pinjaman_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
		
			 if (lb_info->Visible == false)
			 {
				 lb_info->Visible = true;
			 }
			 else
			 {
				 lb_info->Visible = false;
			 }
}

private: System::Void btn_update_peminjaman_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 int id = Int32::Parse(tx_id_pinjaman->Text);
			 String^ nama = cb_nama_peminjam->Text;
			 String^ buku = cb_buku->Text;
			 String^ status = cb_status->Text;
			 String^ tgl_peminjaman = dp_tgl_peminjaman->Text;
			 String^ tgl_pengembalian = dp_tgl_pengembalian->Text;
			 MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE tbl_pinjaman set nama_peminjam='" + nama + "', buku_pinjaman='" + buku + "',  tanggal_pinjaman='" + tgl_peminjaman + "', tanggal_pengembalian='" + tgl_pengembalian + "',  status='" + status + "' WHERE id=" + id + "", con);
			 con->Open();
			 MySqlDataReader^ dr = cmd->ExecuteReader();
			 MessageBox::Show("Data Updated");
			 con->Close();
}
private: System::Void btn_delete_peminjaman_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "Server=127.0.0.1;Userid=root;Password=samsung404;Database=pemrograman_visual";;
			 MySqlConnection^ con = gcnew MySqlConnection(constr);
			 int id = Int32::Parse(tx_id_pinjaman->Text);
			 MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM tbl_pinjaman WHERE id=" + id + "", con);
			 con->Open();
			 MySqlDataReader^ dr = cmd->ExecuteReader();
			 MessageBox::Show("Sukses Deleted");
			 con->Close();
}
private: System::Void btn_export_peminjaman_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (CustomDataGrid4->Rows->Count>0)
			 {
				 Microsoft::Office::Interop::Excel::ApplicationClass^ xcelapp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
				 xcelapp->Application->Workbooks->Add(Type::Missing);
				 for (int i = 1; i < CustomDataGrid5->Columns->Count + 1; i++)
				 {
					 xcelapp->Cells[1, i] = CustomDataGrid5->Columns[i - 1]->HeaderText;
				 }
				 for (int i = 0; i < CustomDataGrid5->Rows->Count; i++)
				 {
					 for (int j = 0; j < CustomDataGrid5->Columns->Count; j++){
						 xcelapp->Cells[i + 2, j + 1] = CustomDataGrid5->Rows[i]->Cells[j]->Value->ToString();
					 }
				 }
				 xcelapp->Columns->AutoFit();
				 xcelapp->Visible = true;
			 }
}
private: System::Void dashboard_Click(System::Object^  sender, System::EventArgs^  e) {
			 pnl_peminjaman->Visible = false;
			 pnl_prodi->Visible = false;
			 pnl_jurusan->Visible = false;
			 pnl_anggota->Visible = false;
			 pnl_buku->Visible = false;
			 pnl_dashboard->Visible = true;
}
private: System::Void btn_reload_dashboard_Click(System::Object^  sender, System::EventArgs^  e) {
			 /* this->chart1->Series["Jumlah"]->Points->AddXY("Yosua", 100);
			 this->chart1->Series["Jumlah"]->Points->AddXY("Della", 300);
			 this->chart1->Series["Jumlah"]->Points->AddXY("Jumi", 400); */
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
