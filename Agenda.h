#pragma once
#include "MetodosF.h"
#include "PilaActividades.h"
#include "PilaRecordatorios.h"
#include "PilaAlarmas.h"
#include <ctime>
#include <iostream>
#include <fstream>

namespace Proyecto2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;

	/// <summary>
	/// Resumen de Agenda
	/// </summary>
	public ref class Agenda : public System::Windows::Forms::Form
	{
		//Variables globlales para todos los Forms.
	public:
		static int num2 = 0;
	public:
		static array <PilaActividades^>^ actividades1;
		static array <PilaActividades^>^ actividades2;
		static array <PilaRecordatorios^>^ recordatorios1;
		static array <PilaRecordatorios^>^ recordatorios2;
		static array <PilaAlarmas^>^ alarmas1;
		static array <PilaAlarmas^>^ alarmas2;
		static array <int^>^ almacenarActividadesIguales;
		static array <int^>^ almacenarRecordatoriosIguales;
		static array <int^>^ almacenarAlarmasIguales;
		//
		static array <int^>^ horasActividades;
		static array <int^>^ horasActividades1;
		static array <int^>^ horasRecordatorios1;
		static array <int^>^ horasRecordatorios2;
		static array <int^>^ identificadoresActividades;
		//
	public:

	public:

	private: System::Windows::Forms::TextBox^ txtMostrarRecordatorios;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ btnTerminar;
	private: System::Windows::Forms::Button^ btnConfirmarActividad;
	private: System::Windows::Forms::ComboBox^ cBoxPrioriedadActividades;
	private: System::Windows::Forms::Label^ lblIdentiActividades;
	private: System::Windows::Forms::TextBox^ txtIdentiActividades;
	private: System::Windows::Forms::Label^ lblPrioriedadActividades;
	private: System::Windows::Forms::Label^ lblMaterialesActividades;
	private: System::Windows::Forms::TextBox^ txtMaterialesActividades;
	private: System::Windows::Forms::Label^ lblPersonasActividades;
	private: System::Windows::Forms::TextBox^ txtPersonasActividades;
	private: System::Windows::Forms::Label^ lblLugarActiviadedes;
	private: System::Windows::Forms::Label^ lblDescripcionActividades;
	private: System::Windows::Forms::Label^ lblHoraFinalActividades;
	private: System::Windows::Forms::Label^ lblHoraInicioActividades;
	private: System::Windows::Forms::TextBox^ txtDescripcionActividades;
	private: System::Windows::Forms::TextBox^ txtLugarActividades;
	private: System::Windows::Forms::TextBox^ txtHoraFinActividades;
	private: System::Windows::Forms::TextBox^ txtHoraInicioActividades;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ComboBox^ cBoxPrioridadRecordatorios;
	private: System::Windows::Forms::Button^ btnTerminar1;
	private: System::Windows::Forms::Button^ btnConfrimarRecordatorio;
	private: System::Windows::Forms::TextBox^ txtIdentificadorRecordatorios;
	private: System::Windows::Forms::TextBox^ txtDescripciónRecordatorios;
	private: System::Windows::Forms::TextBox^ txtHoraLímiteRecordatorios;
	private: System::Windows::Forms::Label^ lblIdentificadorRecordatorios;
	private: System::Windows::Forms::Label^ lblPrioridadRecordatorios;
	private: System::Windows::Forms::Label^ lblDescripcionRecordatorios;
	private: System::Windows::Forms::Label^ lblHoraLímiteRecordatorios;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ btnTerminar2;
	private: System::Windows::Forms::Button^ btnAgregarAlarma;
	private: System::Windows::Forms::ComboBox^ cBoxPrioridadAlarmas;
	private: System::Windows::Forms::TextBox^ txtIDAlarmas;
	private: System::Windows::Forms::TextBox^ txtDescripciónAlarmas;
	private: System::Windows::Forms::TextBox^ txtHoraAlrmas;
	private: System::Windows::Forms::Label^ lblIDAlarmas;
	private: System::Windows::Forms::Label^ lblPrioridadAlarmas;
	private: System::Windows::Forms::Label^ lblDescripciónAlarmas;
	private: System::Windows::Forms::Label^ lblHoraAlarmas;
	private: System::Windows::Forms::Label^ lblActividades;
	private: System::Windows::Forms::Label^ lblRecordatorios;
	private: System::Windows::Forms::Label^ lblAlarmas;
	private: System::Windows::Forms::Button^ btnModificarActividad;
	private: System::Windows::Forms::Button^ brnModificarRecordatorio;
	private: System::Windows::Forms::Button^ btnModificarAlarmas;
	private: System::Windows::Forms::Label^ lblModificiarActividad;
	private: System::Windows::Forms::TextBox^ txtModificarActividad;
	private: System::Windows::Forms::Label^ lblTiempo;
	private: System::Windows::Forms::Timer^ timerHoraActual;
	private: System::Windows::Forms::TextBox^ txtActividadesLlegadas;
	private: System::Windows::Forms::TextBox^ txtModificarRecordatorio;
	private: System::Windows::Forms::Label^ lblModificiarRecrdaatorio;
	private: System::Windows::Forms::Label^ lblModificiarAlarma;
	private: System::Windows::Forms::TextBox^ txtModificarAlarmas;
	private: System::Windows::Forms::TextBox^ txtRecordatoriosLlegados;
	private: System::Windows::Forms::TextBox^ txtAlarmasLlegadas;
	private: System::Windows::Forms::Button^ btnDetenerAlarma;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ lblExportar;
	private: System::Windows::Forms::TextBox^ txtExportarAgenda;

	private: System::Windows::Forms::Button^ btnExportar;
	private: System::Windows::Forms::ComboBox^ cBoxBuscarEvento;
	private: System::Windows::Forms::Label^ lblBuscarEvento;
	private: System::Windows::Forms::Button^ btnBuscarEvento;
	private: System::Windows::Forms::TextBox^ txtEventos;

	private: System::Windows::Forms::TextBox^ txtBuscar;
	private: System::Windows::Forms::Label^ lblValorBuscar;
	private: System::Windows::Forms::TextBox^ txtMostrarAlarmas;

	public:
		Agenda(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Agenda()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtAño;
	protected:

	private: System::Windows::Forms::Button^ btnCalcular;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::TextBox^ txtMes;
	private: System::Windows::Forms::Label^ lblAño;
	private: System::Windows::Forms::Label^ lblMes;

	private: System::Windows::Forms::Button^ btnAgregarTarea;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumDo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumLu;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumMa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumMi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumJu;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumVi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumSa;
	private: System::Windows::Forms::TextBox^ txtMostrar;
private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->txtAño = (gcnew System::Windows::Forms::TextBox());
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ColumDo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumLu = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumMa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumMi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumJu = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumVi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumSa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtMes = (gcnew System::Windows::Forms::TextBox());
			this->lblAño = (gcnew System::Windows::Forms::Label());
			this->lblMes = (gcnew System::Windows::Forms::Label());
			this->btnAgregarTarea = (gcnew System::Windows::Forms::Button());
			this->txtMostrar = (gcnew System::Windows::Forms::TextBox());
			this->txtMostrarRecordatorios = (gcnew System::Windows::Forms::TextBox());
			this->txtMostrarAlarmas = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txtModificarActividad = (gcnew System::Windows::Forms::TextBox());
			this->lblModificiarActividad = (gcnew System::Windows::Forms::Label());
			this->btnModificarActividad = (gcnew System::Windows::Forms::Button());
			this->btnTerminar = (gcnew System::Windows::Forms::Button());
			this->btnConfirmarActividad = (gcnew System::Windows::Forms::Button());
			this->cBoxPrioriedadActividades = (gcnew System::Windows::Forms::ComboBox());
			this->lblIdentiActividades = (gcnew System::Windows::Forms::Label());
			this->txtIdentiActividades = (gcnew System::Windows::Forms::TextBox());
			this->lblPrioriedadActividades = (gcnew System::Windows::Forms::Label());
			this->lblMaterialesActividades = (gcnew System::Windows::Forms::Label());
			this->txtMaterialesActividades = (gcnew System::Windows::Forms::TextBox());
			this->lblPersonasActividades = (gcnew System::Windows::Forms::Label());
			this->txtPersonasActividades = (gcnew System::Windows::Forms::TextBox());
			this->lblLugarActiviadedes = (gcnew System::Windows::Forms::Label());
			this->lblDescripcionActividades = (gcnew System::Windows::Forms::Label());
			this->lblHoraFinalActividades = (gcnew System::Windows::Forms::Label());
			this->lblHoraInicioActividades = (gcnew System::Windows::Forms::Label());
			this->txtDescripcionActividades = (gcnew System::Windows::Forms::TextBox());
			this->txtLugarActividades = (gcnew System::Windows::Forms::TextBox());
			this->txtHoraFinActividades = (gcnew System::Windows::Forms::TextBox());
			this->txtHoraInicioActividades = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->txtModificarRecordatorio = (gcnew System::Windows::Forms::TextBox());
			this->lblModificiarRecrdaatorio = (gcnew System::Windows::Forms::Label());
			this->brnModificarRecordatorio = (gcnew System::Windows::Forms::Button());
			this->cBoxPrioridadRecordatorios = (gcnew System::Windows::Forms::ComboBox());
			this->btnTerminar1 = (gcnew System::Windows::Forms::Button());
			this->btnConfrimarRecordatorio = (gcnew System::Windows::Forms::Button());
			this->txtIdentificadorRecordatorios = (gcnew System::Windows::Forms::TextBox());
			this->txtDescripciónRecordatorios = (gcnew System::Windows::Forms::TextBox());
			this->txtHoraLímiteRecordatorios = (gcnew System::Windows::Forms::TextBox());
			this->lblIdentificadorRecordatorios = (gcnew System::Windows::Forms::Label());
			this->lblPrioridadRecordatorios = (gcnew System::Windows::Forms::Label());
			this->lblDescripcionRecordatorios = (gcnew System::Windows::Forms::Label());
			this->lblHoraLímiteRecordatorios = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->txtModificarAlarmas = (gcnew System::Windows::Forms::TextBox());
			this->lblModificiarAlarma = (gcnew System::Windows::Forms::Label());
			this->btnModificarAlarmas = (gcnew System::Windows::Forms::Button());
			this->btnTerminar2 = (gcnew System::Windows::Forms::Button());
			this->btnAgregarAlarma = (gcnew System::Windows::Forms::Button());
			this->cBoxPrioridadAlarmas = (gcnew System::Windows::Forms::ComboBox());
			this->txtIDAlarmas = (gcnew System::Windows::Forms::TextBox());
			this->txtDescripciónAlarmas = (gcnew System::Windows::Forms::TextBox());
			this->txtHoraAlrmas = (gcnew System::Windows::Forms::TextBox());
			this->lblIDAlarmas = (gcnew System::Windows::Forms::Label());
			this->lblPrioridadAlarmas = (gcnew System::Windows::Forms::Label());
			this->lblDescripciónAlarmas = (gcnew System::Windows::Forms::Label());
			this->lblHoraAlarmas = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->lblValorBuscar = (gcnew System::Windows::Forms::Label());
			this->txtEventos = (gcnew System::Windows::Forms::TextBox());
			this->txtBuscar = (gcnew System::Windows::Forms::TextBox());
			this->cBoxBuscarEvento = (gcnew System::Windows::Forms::ComboBox());
			this->lblBuscarEvento = (gcnew System::Windows::Forms::Label());
			this->btnBuscarEvento = (gcnew System::Windows::Forms::Button());
			this->lblExportar = (gcnew System::Windows::Forms::Label());
			this->txtExportarAgenda = (gcnew System::Windows::Forms::TextBox());
			this->btnExportar = (gcnew System::Windows::Forms::Button());
			this->lblActividades = (gcnew System::Windows::Forms::Label());
			this->lblRecordatorios = (gcnew System::Windows::Forms::Label());
			this->lblAlarmas = (gcnew System::Windows::Forms::Label());
			this->lblTiempo = (gcnew System::Windows::Forms::Label());
			this->timerHoraActual = (gcnew System::Windows::Forms::Timer(this->components));
			this->txtActividadesLlegadas = (gcnew System::Windows::Forms::TextBox());
			this->txtRecordatoriosLlegados = (gcnew System::Windows::Forms::TextBox());
			this->txtAlarmasLlegadas = (gcnew System::Windows::Forms::TextBox());
			this->btnDetenerAlarma = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtAño
			// 
			this->txtAño->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAño->Location = System::Drawing::Point(99, 62);
			this->txtAño->Name = L"txtAño";
			this->txtAño->Size = System::Drawing::Size(100, 26);
			this->txtAño->TabIndex = 1;
			this->txtAño->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnCalcular
			// 
			this->btnCalcular->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCalcular->Location = System::Drawing::Point(226, 74);
			this->btnCalcular->Name = L"btnCalcular";
			this->btnCalcular->Size = System::Drawing::Size(112, 48);
			this->btnCalcular->TabIndex = 2;
			this->btnCalcular->Text = L"Mostrar Calendario";
			this->btnCalcular->UseVisualStyleBackColor = true;
			this->btnCalcular->Click += gcnew System::EventHandler(this, &Agenda::BtnCalcular_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCellsExceptHeader;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ColumDo,
					this->ColumLu, this->ColumMa, this->ColumMi, this->ColumJu, this->ColumVi, this->ColumSa
			});
			this->dataGridView1->Location = System::Drawing::Point(42, 195);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(408, 145);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->Visible = false;
			// 
			// ColumDo
			// 
			this->ColumDo->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ColumDo->HeaderText = L"DO";
			this->ColumDo->Name = L"ColumDo";
			this->ColumDo->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// ColumLu
			// 
			this->ColumLu->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ColumLu->HeaderText = L"LU";
			this->ColumLu->Name = L"ColumLu";
			this->ColumLu->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// ColumMa
			// 
			this->ColumMa->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ColumMa->HeaderText = L"MA";
			this->ColumMa->Name = L"ColumMa";
			this->ColumMa->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// ColumMi
			// 
			this->ColumMi->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ColumMi->HeaderText = L"MI";
			this->ColumMi->Name = L"ColumMi";
			this->ColumMi->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// ColumJu
			// 
			this->ColumJu->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ColumJu->HeaderText = L"JU";
			this->ColumJu->Name = L"ColumJu";
			this->ColumJu->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// ColumVi
			// 
			this->ColumVi->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ColumVi->HeaderText = L"VI";
			this->ColumVi->Name = L"ColumVi";
			this->ColumVi->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// ColumSa
			// 
			this->ColumSa->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ColumSa->HeaderText = L"SA";
			this->ColumSa->Name = L"ColumSa";
			this->ColumSa->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// txtMes
			// 
			this->txtMes->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMes->Location = System::Drawing::Point(99, 103);
			this->txtMes->Name = L"txtMes";
			this->txtMes->Size = System::Drawing::Size(100, 26);
			this->txtMes->TabIndex = 4;
			this->txtMes->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblAño
			// 
			this->lblAño->AutoSize = true;
			this->lblAño->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAño->Location = System::Drawing::Point(45, 65);
			this->lblAño->Name = L"lblAño";
			this->lblAño->Size = System::Drawing::Size(35, 18);
			this->lblAño->TabIndex = 5;
			this->lblAño->Text = L"Año:";
			// 
			// lblMes
			// 
			this->lblMes->AutoSize = true;
			this->lblMes->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMes->Location = System::Drawing::Point(45, 106);
			this->lblMes->Name = L"lblMes";
			this->lblMes->Size = System::Drawing::Size(36, 18);
			this->lblMes->TabIndex = 6;
			this->lblMes->Text = L"Mes:";
			// 
			// btnAgregarTarea
			// 
			this->btnAgregarTarea->Enabled = false;
			this->btnAgregarTarea->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarTarea->Location = System::Drawing::Point(292, 363);
			this->btnAgregarTarea->Name = L"btnAgregarTarea";
			this->btnAgregarTarea->Size = System::Drawing::Size(158, 31);
			this->btnAgregarTarea->TabIndex = 7;
			this->btnAgregarTarea->Text = L"Agregar Tarea";
			this->btnAgregarTarea->UseVisualStyleBackColor = true;
			this->btnAgregarTarea->Click += gcnew System::EventHandler(this, &Agenda::BtnAgregarTarea_Click);
			// 
			// txtMostrar
			// 
			this->txtMostrar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMostrar->Location = System::Drawing::Point(493, 45);
			this->txtMostrar->Multiline = true;
			this->txtMostrar->Name = L"txtMostrar";
			this->txtMostrar->ReadOnly = true;
			this->txtMostrar->Size = System::Drawing::Size(210, 90);
			this->txtMostrar->TabIndex = 8;
			// 
			// txtMostrarRecordatorios
			// 
			this->txtMostrarRecordatorios->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtMostrarRecordatorios->Location = System::Drawing::Point(493, 171);
			this->txtMostrarRecordatorios->Multiline = true;
			this->txtMostrarRecordatorios->Name = L"txtMostrarRecordatorios";
			this->txtMostrarRecordatorios->ReadOnly = true;
			this->txtMostrarRecordatorios->Size = System::Drawing::Size(210, 90);
			this->txtMostrarRecordatorios->TabIndex = 10;
			// 
			// txtMostrarAlarmas
			// 
			this->txtMostrarAlarmas->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMostrarAlarmas->Location = System::Drawing::Point(493, 295);
			this->txtMostrarAlarmas->Multiline = true;
			this->txtMostrarAlarmas->Name = L"txtMostrarAlarmas";
			this->txtMostrarAlarmas->ReadOnly = true;
			this->txtMostrarAlarmas->Size = System::Drawing::Size(210, 90);
			this->txtMostrarAlarmas->TabIndex = 11;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Ink Free", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->HotTrack = true;
			this->tabControl1->Location = System::Drawing::Point(70, 20);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(745, 365);
			this->tabControl1->TabIndex = 12;
			this->tabControl1->Visible = false;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->txtModificarActividad);
			this->tabPage1->Controls->Add(this->lblModificiarActividad);
			this->tabPage1->Controls->Add(this->btnModificarActividad);
			this->tabPage1->Controls->Add(this->btnTerminar);
			this->tabPage1->Controls->Add(this->btnConfirmarActividad);
			this->tabPage1->Controls->Add(this->cBoxPrioriedadActividades);
			this->tabPage1->Controls->Add(this->lblIdentiActividades);
			this->tabPage1->Controls->Add(this->txtIdentiActividades);
			this->tabPage1->Controls->Add(this->lblPrioriedadActividades);
			this->tabPage1->Controls->Add(this->lblMaterialesActividades);
			this->tabPage1->Controls->Add(this->txtMaterialesActividades);
			this->tabPage1->Controls->Add(this->lblPersonasActividades);
			this->tabPage1->Controls->Add(this->txtPersonasActividades);
			this->tabPage1->Controls->Add(this->lblLugarActiviadedes);
			this->tabPage1->Controls->Add(this->lblDescripcionActividades);
			this->tabPage1->Controls->Add(this->lblHoraFinalActividades);
			this->tabPage1->Controls->Add(this->lblHoraInicioActividades);
			this->tabPage1->Controls->Add(this->txtDescripcionActividades);
			this->tabPage1->Controls->Add(this->txtLugarActividades);
			this->tabPage1->Controls->Add(this->txtHoraFinActividades);
			this->tabPage1->Controls->Add(this->txtHoraInicioActividades);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(737, 336);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Actividades";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// txtModificarActividad
			// 
			this->txtModificarActividad->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtModificarActividad->Location = System::Drawing::Point(256, 288);
			this->txtModificarActividad->Name = L"txtModificarActividad";
			this->txtModificarActividad->Size = System::Drawing::Size(100, 26);
			this->txtModificarActividad->TabIndex = 21;
			this->txtModificarActividad->Visible = false;
			// 
			// lblModificiarActividad
			// 
			this->lblModificiarActividad->AutoSize = true;
			this->lblModificiarActividad->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblModificiarActividad->Location = System::Drawing::Point(253, 264);
			this->lblModificiarActividad->Name = L"lblModificiarActividad";
			this->lblModificiarActividad->Size = System::Drawing::Size(255, 18);
			this->lblModificiarActividad->TabIndex = 20;
			this->lblModificiarActividad->Text = L"Ingrese el identificador de la Actividad:";
			this->lblModificiarActividad->Visible = false;
			// 
			// btnModificarActividad
			// 
			this->btnModificarActividad->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificarActividad->Location = System::Drawing::Point(70, 271);
			this->btnModificarActividad->Name = L"btnModificarActividad";
			this->btnModificarActividad->Size = System::Drawing::Size(172, 36);
			this->btnModificarActividad->TabIndex = 19;
			this->btnModificarActividad->Text = L"Modificar Actividades";
			this->btnModificarActividad->UseVisualStyleBackColor = true;
			this->btnModificarActividad->Visible = false;
			this->btnModificarActividad->Click += gcnew System::EventHandler(this, &Agenda::BtnModificarActividad_Click);
			// 
			// btnTerminar
			// 
			this->btnTerminar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTerminar->Location = System::Drawing::Point(555, 230);
			this->btnTerminar->Name = L"btnTerminar";
			this->btnTerminar->Size = System::Drawing::Size(88, 32);
			this->btnTerminar->TabIndex = 18;
			this->btnTerminar->Text = L"Terminar";
			this->btnTerminar->UseVisualStyleBackColor = true;
			this->btnTerminar->Click += gcnew System::EventHandler(this, &Agenda::BtnTerminar_Click_1);
			// 
			// btnConfirmarActividad
			// 
			this->btnConfirmarActividad->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfirmarActividad->Location = System::Drawing::Point(524, 191);
			this->btnConfirmarActividad->Name = L"btnConfirmarActividad";
			this->btnConfirmarActividad->Size = System::Drawing::Size(150, 33);
			this->btnConfirmarActividad->TabIndex = 17;
			this->btnConfirmarActividad->Text = L"Agregar Actividad";
			this->btnConfirmarActividad->UseVisualStyleBackColor = true;
			this->btnConfirmarActividad->Click += gcnew System::EventHandler(this, &Agenda::BtnConfirmarActividad_Click_1);
			// 
			// cBoxPrioriedadActividades
			// 
			this->cBoxPrioriedadActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cBoxPrioriedadActividades->FormattingEnabled = true;
			this->cBoxPrioriedadActividades->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"¡Baja!", L"¡¡Media!!", L"¡¡¡Alta!!!" });
			this->cBoxPrioriedadActividades->Location = System::Drawing::Point(524, 110);
			this->cBoxPrioriedadActividades->Name = L"cBoxPrioriedadActividades";
			this->cBoxPrioriedadActividades->Size = System::Drawing::Size(150, 26);
			this->cBoxPrioriedadActividades->TabIndex = 16;
			// 
			// lblIdentiActividades
			// 
			this->lblIdentiActividades->AutoSize = true;
			this->lblIdentiActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIdentiActividades->Location = System::Drawing::Point(360, 156);
			this->lblIdentiActividades->Name = L"lblIdentiActividades";
			this->lblIdentiActividades->Size = System::Drawing::Size(103, 18);
			this->lblIdentiActividades->TabIndex = 15;
			this->lblIdentiActividades->Text = L"Indentificador:";
			// 
			// txtIdentiActividades
			// 
			this->txtIdentiActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIdentiActividades->Location = System::Drawing::Point(524, 150);
			this->txtIdentiActividades->Name = L"txtIdentiActividades";
			this->txtIdentiActividades->Size = System::Drawing::Size(150, 26);
			this->txtIdentiActividades->TabIndex = 14;
			// 
			// lblPrioriedadActividades
			// 
			this->lblPrioriedadActividades->AutoSize = true;
			this->lblPrioriedadActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblPrioriedadActividades->Location = System::Drawing::Point(360, 115);
			this->lblPrioriedadActividades->Name = L"lblPrioriedadActividades";
			this->lblPrioriedadActividades->Size = System::Drawing::Size(69, 18);
			this->lblPrioriedadActividades->TabIndex = 13;
			this->lblPrioriedadActividades->Text = L"Prioridad:";
			// 
			// lblMaterialesActividades
			// 
			this->lblMaterialesActividades->AutoSize = true;
			this->lblMaterialesActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblMaterialesActividades->Location = System::Drawing::Point(360, 73);
			this->lblMaterialesActividades->Name = L"lblMaterialesActividades";
			this->lblMaterialesActividades->Size = System::Drawing::Size(147, 18);
			this->lblMaterialesActividades->TabIndex = 11;
			this->lblMaterialesActividades->Text = L"Materiales a necesitar:";
			// 
			// txtMaterialesActividades
			// 
			this->txtMaterialesActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtMaterialesActividades->Location = System::Drawing::Point(524, 67);
			this->txtMaterialesActividades->Name = L"txtMaterialesActividades";
			this->txtMaterialesActividades->Size = System::Drawing::Size(150, 26);
			this->txtMaterialesActividades->TabIndex = 10;
			// 
			// lblPersonasActividades
			// 
			this->lblPersonasActividades->AutoSize = true;
			this->lblPersonasActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPersonasActividades->Location = System::Drawing::Point(360, 36);
			this->lblPersonasActividades->Name = L"lblPersonasActividades";
			this->lblPersonasActividades->Size = System::Drawing::Size(148, 18);
			this->lblPersonasActividades->TabIndex = 9;
			this->lblPersonasActividades->Text = L"Personas Involucradas:";
			// 
			// txtPersonasActividades
			// 
			this->txtPersonasActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPersonasActividades->Location = System::Drawing::Point(524, 30);
			this->txtPersonasActividades->Name = L"txtPersonasActividades";
			this->txtPersonasActividades->Size = System::Drawing::Size(150, 26);
			this->txtPersonasActividades->TabIndex = 8;
			// 
			// lblLugarActiviadedes
			// 
			this->lblLugarActiviadedes->AutoSize = true;
			this->lblLugarActiviadedes->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLugarActiviadedes->Location = System::Drawing::Point(71, 109);
			this->lblLugarActiviadedes->Name = L"lblLugarActiviadedes";
			this->lblLugarActiviadedes->Size = System::Drawing::Size(46, 18);
			this->lblLugarActiviadedes->TabIndex = 7;
			this->lblLugarActiviadedes->Text = L"Lugar:";
			// 
			// lblDescripcionActividades
			// 
			this->lblDescripcionActividades->AutoSize = true;
			this->lblDescripcionActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblDescripcionActividades->Location = System::Drawing::Point(71, 158);
			this->lblDescripcionActividades->Name = L"lblDescripcionActividades";
			this->lblDescripcionActividades->Size = System::Drawing::Size(83, 18);
			this->lblDescripcionActividades->TabIndex = 6;
			this->lblDescripcionActividades->Text = L"Descripción:";
			// 
			// lblHoraFinalActividades
			// 
			this->lblHoraFinalActividades->AutoSize = true;
			this->lblHoraFinalActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblHoraFinalActividades->Location = System::Drawing::Point(71, 75);
			this->lblHoraFinalActividades->Name = L"lblHoraFinalActividades";
			this->lblHoraFinalActividades->Size = System::Drawing::Size(84, 18);
			this->lblHoraFinalActividades->TabIndex = 5;
			this->lblHoraFinalActividades->Text = L"Hora de Fin:";
			// 
			// lblHoraInicioActividades
			// 
			this->lblHoraInicioActividades->AutoSize = true;
			this->lblHoraInicioActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblHoraInicioActividades->Location = System::Drawing::Point(71, 38);
			this->lblHoraInicioActividades->Name = L"lblHoraInicioActividades";
			this->lblHoraInicioActividades->Size = System::Drawing::Size(101, 18);
			this->lblHoraInicioActividades->TabIndex = 4;
			this->lblHoraInicioActividades->Text = L"Hora de Inicio:";
			// 
			// txtDescripcionActividades
			// 
			this->txtDescripcionActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtDescripcionActividades->Location = System::Drawing::Point(194, 150);
			this->txtDescripcionActividades->Multiline = true;
			this->txtDescripcionActividades->Name = L"txtDescripcionActividades";
			this->txtDescripcionActividades->Size = System::Drawing::Size(150, 91);
			this->txtDescripcionActividades->TabIndex = 3;
			// 
			// txtLugarActividades
			// 
			this->txtLugarActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLugarActividades->Location = System::Drawing::Point(194, 109);
			this->txtLugarActividades->Name = L"txtLugarActividades";
			this->txtLugarActividades->Size = System::Drawing::Size(150, 26);
			this->txtLugarActividades->TabIndex = 2;
			// 
			// txtHoraFinActividades
			// 
			this->txtHoraFinActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtHoraFinActividades->Location = System::Drawing::Point(194, 67);
			this->txtHoraFinActividades->Name = L"txtHoraFinActividades";
			this->txtHoraFinActividades->Size = System::Drawing::Size(150, 26);
			this->txtHoraFinActividades->TabIndex = 1;
			// 
			// txtHoraInicioActividades
			// 
			this->txtHoraInicioActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtHoraInicioActividades->Location = System::Drawing::Point(194, 30);
			this->txtHoraInicioActividades->Name = L"txtHoraInicioActividades";
			this->txtHoraInicioActividades->Size = System::Drawing::Size(150, 26);
			this->txtHoraInicioActividades->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->txtModificarRecordatorio);
			this->tabPage2->Controls->Add(this->lblModificiarRecrdaatorio);
			this->tabPage2->Controls->Add(this->brnModificarRecordatorio);
			this->tabPage2->Controls->Add(this->cBoxPrioridadRecordatorios);
			this->tabPage2->Controls->Add(this->btnTerminar1);
			this->tabPage2->Controls->Add(this->btnConfrimarRecordatorio);
			this->tabPage2->Controls->Add(this->txtIdentificadorRecordatorios);
			this->tabPage2->Controls->Add(this->txtDescripciónRecordatorios);
			this->tabPage2->Controls->Add(this->txtHoraLímiteRecordatorios);
			this->tabPage2->Controls->Add(this->lblIdentificadorRecordatorios);
			this->tabPage2->Controls->Add(this->lblPrioridadRecordatorios);
			this->tabPage2->Controls->Add(this->lblDescripcionRecordatorios);
			this->tabPage2->Controls->Add(this->lblHoraLímiteRecordatorios);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(737, 336);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Recordatorios";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// txtModificarRecordatorio
			// 
			this->txtModificarRecordatorio->AcceptsReturn = true;
			this->txtModificarRecordatorio->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtModificarRecordatorio->Location = System::Drawing::Point(164, 271);
			this->txtModificarRecordatorio->Name = L"txtModificarRecordatorio";
			this->txtModificarRecordatorio->Size = System::Drawing::Size(100, 26);
			this->txtModificarRecordatorio->TabIndex = 24;
			this->txtModificarRecordatorio->Visible = false;
			// 
			// lblModificiarRecrdaatorio
			// 
			this->lblModificiarRecrdaatorio->AutoSize = true;
			this->lblModificiarRecrdaatorio->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblModificiarRecrdaatorio->Location = System::Drawing::Point(156, 248);
			this->lblModificiarRecrdaatorio->Name = L"lblModificiarRecrdaatorio";
			this->lblModificiarRecrdaatorio->Size = System::Drawing::Size(272, 19);
			this->lblModificiarRecrdaatorio->TabIndex = 23;
			this->lblModificiarRecrdaatorio->Text = L"Ingrese el identificador del Recordatorio: ";
			this->lblModificiarRecrdaatorio->Visible = false;
			// 
			// brnModificarRecordatorio
			// 
			this->brnModificarRecordatorio->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->brnModificarRecordatorio->Location = System::Drawing::Point(25, 250);
			this->brnModificarRecordatorio->Name = L"brnModificarRecordatorio";
			this->brnModificarRecordatorio->Size = System::Drawing::Size(125, 45);
			this->brnModificarRecordatorio->TabIndex = 22;
			this->brnModificarRecordatorio->Text = L"Modificar Recordatorios";
			this->brnModificarRecordatorio->UseVisualStyleBackColor = true;
			this->brnModificarRecordatorio->Visible = false;
			this->brnModificarRecordatorio->Click += gcnew System::EventHandler(this, &Agenda::BrnModificarRecordatorio_Click);
			// 
			// cBoxPrioridadRecordatorios
			// 
			this->cBoxPrioridadRecordatorios->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cBoxPrioridadRecordatorios->FormattingEnabled = true;
			this->cBoxPrioridadRecordatorios->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"¡Baja!", L"¡¡Media!!", L"¡¡¡Alta!!!" });
			this->cBoxPrioridadRecordatorios->Location = System::Drawing::Point(208, 101);
			this->cBoxPrioridadRecordatorios->Name = L"cBoxPrioridadRecordatorios";
			this->cBoxPrioridadRecordatorios->Size = System::Drawing::Size(121, 26);
			this->cBoxPrioridadRecordatorios->TabIndex = 21;
			// 
			// btnTerminar1
			// 
			this->btnTerminar1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTerminar1->Location = System::Drawing::Point(514, 230);
			this->btnTerminar1->Name = L"btnTerminar1";
			this->btnTerminar1->Size = System::Drawing::Size(88, 32);
			this->btnTerminar1->TabIndex = 20;
			this->btnTerminar1->Text = L"Terminar";
			this->btnTerminar1->UseVisualStyleBackColor = true;
			this->btnTerminar1->Click += gcnew System::EventHandler(this, &Agenda::BtnTerminar1_Click_1);
			// 
			// btnConfrimarRecordatorio
			// 
			this->btnConfrimarRecordatorio->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnConfrimarRecordatorio->Location = System::Drawing::Point(484, 188);
			this->btnConfrimarRecordatorio->Name = L"btnConfrimarRecordatorio";
			this->btnConfrimarRecordatorio->Size = System::Drawing::Size(150, 33);
			this->btnConfrimarRecordatorio->TabIndex = 19;
			this->btnConfrimarRecordatorio->Text = L"Agregar Recordatorio";
			this->btnConfrimarRecordatorio->UseVisualStyleBackColor = true;
			this->btnConfrimarRecordatorio->Click += gcnew System::EventHandler(this, &Agenda::BtnConfrimarRecordatorio_Click_1);
			// 
			// txtIdentificadorRecordatorios
			// 
			this->txtIdentificadorRecordatorios->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtIdentificadorRecordatorios->Location = System::Drawing::Point(208, 159);
			this->txtIdentificadorRecordatorios->Name = L"txtIdentificadorRecordatorios";
			this->txtIdentificadorRecordatorios->Size = System::Drawing::Size(100, 26);
			this->txtIdentificadorRecordatorios->TabIndex = 6;
			// 
			// txtDescripciónRecordatorios
			// 
			this->txtDescripciónRecordatorios->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtDescripciónRecordatorios->Location = System::Drawing::Point(444, 41);
			this->txtDescripciónRecordatorios->Multiline = true;
			this->txtDescripciónRecordatorios->Name = L"txtDescripciónRecordatorios";
			this->txtDescripciónRecordatorios->Size = System::Drawing::Size(219, 132);
			this->txtDescripciónRecordatorios->TabIndex = 5;
			// 
			// txtHoraLímiteRecordatorios
			// 
			this->txtHoraLímiteRecordatorios->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtHoraLímiteRecordatorios->Location = System::Drawing::Point(208, 41);
			this->txtHoraLímiteRecordatorios->Name = L"txtHoraLímiteRecordatorios";
			this->txtHoraLímiteRecordatorios->Size = System::Drawing::Size(100, 26);
			this->txtHoraLímiteRecordatorios->TabIndex = 4;
			// 
			// lblIdentificadorRecordatorios
			// 
			this->lblIdentificadorRecordatorios->AutoSize = true;
			this->lblIdentificadorRecordatorios->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblIdentificadorRecordatorios->Location = System::Drawing::Point(104, 159);
			this->lblIdentificadorRecordatorios->Name = L"lblIdentificadorRecordatorios";
			this->lblIdentificadorRecordatorios->Size = System::Drawing::Size(96, 18);
			this->lblIdentificadorRecordatorios->TabIndex = 3;
			this->lblIdentificadorRecordatorios->Text = L"Identificador:";
			// 
			// lblPrioridadRecordatorios
			// 
			this->lblPrioridadRecordatorios->AutoSize = true;
			this->lblPrioridadRecordatorios->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblPrioridadRecordatorios->Location = System::Drawing::Point(104, 101);
			this->lblPrioridadRecordatorios->Name = L"lblPrioridadRecordatorios";
			this->lblPrioridadRecordatorios->Size = System::Drawing::Size(69, 18);
			this->lblPrioridadRecordatorios->TabIndex = 2;
			this->lblPrioridadRecordatorios->Text = L"Prioridad:";
			// 
			// lblDescripcionRecordatorios
			// 
			this->lblDescripcionRecordatorios->AutoSize = true;
			this->lblDescripcionRecordatorios->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblDescripcionRecordatorios->Location = System::Drawing::Point(330, 44);
			this->lblDescripcionRecordatorios->Name = L"lblDescripcionRecordatorios";
			this->lblDescripcionRecordatorios->Size = System::Drawing::Size(83, 18);
			this->lblDescripcionRecordatorios->TabIndex = 1;
			this->lblDescripcionRecordatorios->Text = L"Descripción:";
			// 
			// lblHoraLímiteRecordatorios
			// 
			this->lblHoraLímiteRecordatorios->AutoSize = true;
			this->lblHoraLímiteRecordatorios->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblHoraLímiteRecordatorios->Location = System::Drawing::Point(104, 44);
			this->lblHoraLímiteRecordatorios->Name = L"lblHoraLímiteRecordatorios";
			this->lblHoraLímiteRecordatorios->Size = System::Drawing::Size(82, 18);
			this->lblHoraLímiteRecordatorios->TabIndex = 0;
			this->lblHoraLímiteRecordatorios->Text = L"Hora Límite:";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->txtModificarAlarmas);
			this->tabPage3->Controls->Add(this->lblModificiarAlarma);
			this->tabPage3->Controls->Add(this->btnModificarAlarmas);
			this->tabPage3->Controls->Add(this->btnTerminar2);
			this->tabPage3->Controls->Add(this->btnAgregarAlarma);
			this->tabPage3->Controls->Add(this->cBoxPrioridadAlarmas);
			this->tabPage3->Controls->Add(this->txtIDAlarmas);
			this->tabPage3->Controls->Add(this->txtDescripciónAlarmas);
			this->tabPage3->Controls->Add(this->txtHoraAlrmas);
			this->tabPage3->Controls->Add(this->lblIDAlarmas);
			this->tabPage3->Controls->Add(this->lblPrioridadAlarmas);
			this->tabPage3->Controls->Add(this->lblDescripciónAlarmas);
			this->tabPage3->Controls->Add(this->lblHoraAlarmas);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(737, 336);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Alarmas";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// txtModificarAlarmas
			// 
			this->txtModificarAlarmas->Location = System::Drawing::Point(185, 274);
			this->txtModificarAlarmas->Name = L"txtModificarAlarmas";
			this->txtModificarAlarmas->Size = System::Drawing::Size(100, 26);
			this->txtModificarAlarmas->TabIndex = 27;
			this->txtModificarAlarmas->Visible = false;
			// 
			// lblModificiarAlarma
			// 
			this->lblModificiarAlarma->AutoSize = true;
			this->lblModificiarAlarma->Location = System::Drawing::Point(177, 253);
			this->lblModificiarAlarma->Name = L"lblModificiarAlarma";
			this->lblModificiarAlarma->Size = System::Drawing::Size(243, 18);
			this->lblModificiarAlarma->TabIndex = 26;
			this->lblModificiarAlarma->Text = L"Ingrese el identificador de la Alarma: ";
			this->lblModificiarAlarma->Visible = false;
			// 
			// btnModificarAlarmas
			// 
			this->btnModificarAlarmas->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificarAlarmas->Location = System::Drawing::Point(46, 250);
			this->btnModificarAlarmas->Name = L"btnModificarAlarmas";
			this->btnModificarAlarmas->Size = System::Drawing::Size(125, 45);
			this->btnModificarAlarmas->TabIndex = 25;
			this->btnModificarAlarmas->Text = L"Modificar Alarmas";
			this->btnModificarAlarmas->UseVisualStyleBackColor = true;
			this->btnModificarAlarmas->Visible = false;
			this->btnModificarAlarmas->Click += gcnew System::EventHandler(this, &Agenda::BtnModificarAlarmas_Click);
			// 
			// btnTerminar2
			// 
			this->btnTerminar2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTerminar2->Location = System::Drawing::Point(524, 228);
			this->btnTerminar2->Name = L"btnTerminar2";
			this->btnTerminar2->Size = System::Drawing::Size(88, 32);
			this->btnTerminar2->TabIndex = 24;
			this->btnTerminar2->Text = L"Terminar";
			this->btnTerminar2->UseVisualStyleBackColor = true;
			this->btnTerminar2->Click += gcnew System::EventHandler(this, &Agenda::BtnTerminar2_Click_1);
			// 
			// btnAgregarAlarma
			// 
			this->btnAgregarAlarma->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarAlarma->Location = System::Drawing::Point(490, 189);
			this->btnAgregarAlarma->Name = L"btnAgregarAlarma";
			this->btnAgregarAlarma->Size = System::Drawing::Size(150, 33);
			this->btnAgregarAlarma->TabIndex = 23;
			this->btnAgregarAlarma->Text = L"Agregar Alarma";
			this->btnAgregarAlarma->UseVisualStyleBackColor = true;
			this->btnAgregarAlarma->Click += gcnew System::EventHandler(this, &Agenda::BtnAgregarAlarma_Click_1);
			// 
			// cBoxPrioridadAlarmas
			// 
			this->cBoxPrioridadAlarmas->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cBoxPrioridadAlarmas->FormattingEnabled = true;
			this->cBoxPrioridadAlarmas->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"¡Baja!", L"¡¡Media!!", L"¡¡¡Alta!!!" });
			this->cBoxPrioridadAlarmas->Location = System::Drawing::Point(185, 115);
			this->cBoxPrioridadAlarmas->Name = L"cBoxPrioridadAlarmas";
			this->cBoxPrioridadAlarmas->Size = System::Drawing::Size(121, 26);
			this->cBoxPrioridadAlarmas->TabIndex = 22;
			// 
			// txtIDAlarmas
			// 
			this->txtIDAlarmas->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIDAlarmas->Location = System::Drawing::Point(185, 174);
			this->txtIDAlarmas->Name = L"txtIDAlarmas";
			this->txtIDAlarmas->Size = System::Drawing::Size(100, 26);
			this->txtIDAlarmas->TabIndex = 6;
			// 
			// txtDescripciónAlarmas
			// 
			this->txtDescripciónAlarmas->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDescripciónAlarmas->Location = System::Drawing::Point(467, 58);
			this->txtDescripciónAlarmas->Multiline = true;
			this->txtDescripciónAlarmas->Name = L"txtDescripciónAlarmas";
			this->txtDescripciónAlarmas->Size = System::Drawing::Size(192, 111);
			this->txtDescripciónAlarmas->TabIndex = 5;
			// 
			// txtHoraAlrmas
			// 
			this->txtHoraAlrmas->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtHoraAlrmas->Location = System::Drawing::Point(185, 61);
			this->txtHoraAlrmas->Name = L"txtHoraAlrmas";
			this->txtHoraAlrmas->Size = System::Drawing::Size(100, 26);
			this->txtHoraAlrmas->TabIndex = 4;
			// 
			// lblIDAlarmas
			// 
			this->lblIDAlarmas->AutoSize = true;
			this->lblIDAlarmas->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIDAlarmas->Location = System::Drawing::Point(93, 174);
			this->lblIDAlarmas->Name = L"lblIDAlarmas";
			this->lblIDAlarmas->Size = System::Drawing::Size(28, 18);
			this->lblIDAlarmas->TabIndex = 3;
			this->lblIDAlarmas->Text = L"ID:";
			// 
			// lblPrioridadAlarmas
			// 
			this->lblPrioridadAlarmas->AutoSize = true;
			this->lblPrioridadAlarmas->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrioridadAlarmas->Location = System::Drawing::Point(93, 118);
			this->lblPrioridadAlarmas->Name = L"lblPrioridadAlarmas";
			this->lblPrioridadAlarmas->Size = System::Drawing::Size(69, 18);
			this->lblPrioridadAlarmas->TabIndex = 2;
			this->lblPrioridadAlarmas->Text = L"Prioridad:";
			// 
			// lblDescripciónAlarmas
			// 
			this->lblDescripciónAlarmas->AutoSize = true;
			this->lblDescripciónAlarmas->Location = System::Drawing::Point(355, 61);
			this->lblDescripciónAlarmas->Name = L"lblDescripciónAlarmas";
			this->lblDescripciónAlarmas->Size = System::Drawing::Size(83, 18);
			this->lblDescripciónAlarmas->TabIndex = 1;
			this->lblDescripciónAlarmas->Text = L"Descripción:";
			// 
			// lblHoraAlarmas
			// 
			this->lblHoraAlarmas->AutoSize = true;
			this->lblHoraAlarmas->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHoraAlarmas->Location = System::Drawing::Point(93, 64);
			this->lblHoraAlarmas->Name = L"lblHoraAlarmas";
			this->lblHoraAlarmas->Size = System::Drawing::Size(42, 18);
			this->lblHoraAlarmas->TabIndex = 0;
			this->lblHoraAlarmas->Text = L"Hora:";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->lblValorBuscar);
			this->tabPage4->Controls->Add(this->txtEventos);
			this->tabPage4->Controls->Add(this->txtBuscar);
			this->tabPage4->Controls->Add(this->cBoxBuscarEvento);
			this->tabPage4->Controls->Add(this->lblBuscarEvento);
			this->tabPage4->Controls->Add(this->btnBuscarEvento);
			this->tabPage4->Controls->Add(this->lblExportar);
			this->tabPage4->Controls->Add(this->txtExportarAgenda);
			this->tabPage4->Controls->Add(this->btnExportar);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(737, 336);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Otras Opciones";
			this->tabPage4->ToolTipText = L"Acá puede exportar o importar archivos tipo Agenda";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// lblValorBuscar
			// 
			this->lblValorBuscar->AutoSize = true;
			this->lblValorBuscar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblValorBuscar->Location = System::Drawing::Point(276, 242);
			this->lblValorBuscar->Name = L"lblValorBuscar";
			this->lblValorBuscar->Size = System::Drawing::Size(152, 18);
			this->lblValorBuscar->TabIndex = 9;
			this->lblValorBuscar->Text = L"Escriba el valor buscar:";
			this->lblValorBuscar->Visible = false;
			// 
			// txtEventos
			// 
			this->txtEventos->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEventos->Location = System::Drawing::Point(527, 150);
			this->txtEventos->Multiline = true;
			this->txtEventos->Name = L"txtEventos";
			this->txtEventos->ReadOnly = true;
			this->txtEventos->Size = System::Drawing::Size(181, 165);
			this->txtEventos->TabIndex = 8;
			this->txtEventos->Visible = false;
			// 
			// txtBuscar
			// 
			this->txtBuscar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBuscar->Location = System::Drawing::Point(279, 265);
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(100, 26);
			this->txtBuscar->TabIndex = 7;
			this->txtBuscar->Visible = false;
			// 
			// cBoxBuscarEvento
			// 
			this->cBoxBuscarEvento->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cBoxBuscarEvento->FormattingEnabled = true;
			this->cBoxBuscarEvento->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Identificador", L"Fecha", L"Palabras" });
			this->cBoxBuscarEvento->Location = System::Drawing::Point(279, 194);
			this->cBoxBuscarEvento->Name = L"cBoxBuscarEvento";
			this->cBoxBuscarEvento->Size = System::Drawing::Size(121, 26);
			this->cBoxBuscarEvento->TabIndex = 6;
			this->cBoxBuscarEvento->Visible = false;
			// 
			// lblBuscarEvento
			// 
			this->lblBuscarEvento->AutoSize = true;
			this->lblBuscarEvento->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBuscarEvento->Location = System::Drawing::Point(276, 163);
			this->lblBuscarEvento->Name = L"lblBuscarEvento";
			this->lblBuscarEvento->Size = System::Drawing::Size(229, 18);
			this->lblBuscarEvento->TabIndex = 5;
			this->lblBuscarEvento->Text = L"Escoja la forma de buscar el evento:";
			this->lblBuscarEvento->Visible = false;
			// 
			// btnBuscarEvento
			// 
			this->btnBuscarEvento->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarEvento->Location = System::Drawing::Point(57, 182);
			this->btnBuscarEvento->Name = L"btnBuscarEvento";
			this->btnBuscarEvento->Size = System::Drawing::Size(168, 36);
			this->btnBuscarEvento->TabIndex = 3;
			this->btnBuscarEvento->Text = L"Buscar Evento";
			this->btnBuscarEvento->UseVisualStyleBackColor = true;
			this->btnBuscarEvento->Visible = false;
			this->btnBuscarEvento->Click += gcnew System::EventHandler(this, &Agenda::BtnBuscarEvento_Click);
			// 
			// lblExportar
			// 
			this->lblExportar->AutoSize = true;
			this->lblExportar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExportar->Location = System::Drawing::Point(276, 71);
			this->lblExportar->Name = L"lblExportar";
			this->lblExportar->Size = System::Drawing::Size(298, 18);
			this->lblExportar->TabIndex = 2;
			this->lblExportar->Text = L"Ingrese la direccón donde desea el Archivo.csv:";
			this->lblExportar->Visible = false;
			// 
			// txtExportarAgenda
			// 
			this->txtExportarAgenda->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtExportarAgenda->Location = System::Drawing::Point(274, 104);
			this->txtExportarAgenda->Name = L"txtExportarAgenda";
			this->txtExportarAgenda->Size = System::Drawing::Size(100, 26);
			this->txtExportarAgenda->TabIndex = 1;
			this->txtExportarAgenda->Visible = false;
			// 
			// btnExportar
			// 
			this->btnExportar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExportar->Location = System::Drawing::Point(57, 96);
			this->btnExportar->Name = L"btnExportar";
			this->btnExportar->Size = System::Drawing::Size(168, 36);
			this->btnExportar->TabIndex = 0;
			this->btnExportar->Text = L"Exportar Agenda";
			this->btnExportar->UseVisualStyleBackColor = true;
			this->btnExportar->Visible = false;
			this->btnExportar->Click += gcnew System::EventHandler(this, &Agenda::BtnExportar_Click);
			// 
			// lblActividades
			// 
			this->lblActividades->AutoSize = true;
			this->lblActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblActividades->Location = System::Drawing::Point(495, 22);
			this->lblActividades->Name = L"lblActividades";
			this->lblActividades->Size = System::Drawing::Size(83, 18);
			this->lblActividades->TabIndex = 13;
			this->lblActividades->Text = L"Actividades:";
			// 
			// lblRecordatorios
			// 
			this->lblRecordatorios->AutoSize = true;
			this->lblRecordatorios->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRecordatorios->Location = System::Drawing::Point(495, 150);
			this->lblRecordatorios->Name = L"lblRecordatorios";
			this->lblRecordatorios->Size = System::Drawing::Size(97, 18);
			this->lblRecordatorios->TabIndex = 14;
			this->lblRecordatorios->Text = L"Recordatorios:";
			// 
			// lblAlarmas
			// 
			this->lblAlarmas->AutoSize = true;
			this->lblAlarmas->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAlarmas->Location = System::Drawing::Point(495, 275);
			this->lblAlarmas->Name = L"lblAlarmas";
			this->lblAlarmas->Size = System::Drawing::Size(60, 18);
			this->lblAlarmas->TabIndex = 15;
			this->lblAlarmas->Text = L"Alarmas:";
			// 
			// lblTiempo
			// 
			this->lblTiempo->AutoSize = true;
			this->lblTiempo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempo->Location = System::Drawing::Point(13, 392);
			this->lblTiempo->Name = L"lblTiempo";
			this->lblTiempo->Size = System::Drawing::Size(0, 18);
			this->lblTiempo->TabIndex = 16;
			// 
			// timerHoraActual
			// 
			this->timerHoraActual->Enabled = true;
			this->timerHoraActual->Tick += gcnew System::EventHandler(this, &Agenda::TimerHoraActual_Tick);
			// 
			// txtActividadesLlegadas
			// 
			this->txtActividadesLlegadas->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtActividadesLlegadas->Location = System::Drawing::Point(716, 59);
			this->txtActividadesLlegadas->Multiline = true;
			this->txtActividadesLlegadas->Name = L"txtActividadesLlegadas";
			this->txtActividadesLlegadas->ReadOnly = true;
			this->txtActividadesLlegadas->Size = System::Drawing::Size(170, 63);
			this->txtActividadesLlegadas->TabIndex = 17;
			// 
			// txtRecordatoriosLlegados
			// 
			this->txtRecordatoriosLlegados->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtRecordatoriosLlegados->Location = System::Drawing::Point(716, 187);
			this->txtRecordatoriosLlegados->Multiline = true;
			this->txtRecordatoriosLlegados->Name = L"txtRecordatoriosLlegados";
			this->txtRecordatoriosLlegados->ReadOnly = true;
			this->txtRecordatoriosLlegados->Size = System::Drawing::Size(170, 63);
			this->txtRecordatoriosLlegados->TabIndex = 18;
			// 
			// txtAlarmasLlegadas
			// 
			this->txtAlarmasLlegadas->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAlarmasLlegadas->Location = System::Drawing::Point(716, 297);
			this->txtAlarmasLlegadas->Multiline = true;
			this->txtAlarmasLlegadas->Name = L"txtAlarmasLlegadas";
			this->txtAlarmasLlegadas->ReadOnly = true;
			this->txtAlarmasLlegadas->Size = System::Drawing::Size(170, 63);
			this->txtAlarmasLlegadas->TabIndex = 19;
			// 
			// btnDetenerAlarma
			// 
			this->btnDetenerAlarma->Location = System::Drawing::Point(666, 13);
			this->btnDetenerAlarma->Name = L"btnDetenerAlarma";
			this->btnDetenerAlarma->Size = System::Drawing::Size(75, 23);
			this->btnDetenerAlarma->TabIndex = 20;
			this->btnDetenerAlarma->Text = L"Detener Alarma";
			this->btnDetenerAlarma->UseVisualStyleBackColor = true;
			this->btnDetenerAlarma->Visible = false;
			this->btnDetenerAlarma->Click += gcnew System::EventHandler(this, &Agenda::BtnDetenerAlarma_Click);
			// 
			// Agenda
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(904, 420);
			this->Controls->Add(this->btnDetenerAlarma);
			this->Controls->Add(this->txtAlarmasLlegadas);
			this->Controls->Add(this->txtRecordatoriosLlegados);
			this->Controls->Add(this->txtActividadesLlegadas);
			this->Controls->Add(this->lblTiempo);
			this->Controls->Add(this->lblAlarmas);
			this->Controls->Add(this->lblRecordatorios);
			this->Controls->Add(this->lblActividades);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->txtMostrarAlarmas);
			this->Controls->Add(this->txtMostrarRecordatorios);
			this->Controls->Add(this->txtMostrar);
			this->Controls->Add(this->btnAgregarTarea);
			this->Controls->Add(this->lblMes);
			this->Controls->Add(this->lblAño);
			this->Controls->Add(this->txtMes);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnCalcular);
			this->Controls->Add(this->txtAño);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Agenda";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Agenda";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Hora Actividades:
		int contadorHoraActividades1 = 1;
		int contadorHoraActividades2 = 1;
		//Hora Actividades:
		int contadorHoraRecordatorios1 = 1;
		int contadorHoraRecordatorios2 = 1;
		//
		int hora;
		bool detener = false;
		bool sonar;
		//Variables Globales:
		int año;
		int mes;
		int DíaSeleccionado;
		//Variables Globales para Actividades:
		int contador0 = 0;
		int contadorActividades1 = 1;
		int contadorActividades2 = 1;
		bool modificado;
		int posicionNueva;
		//Variables Globales para Recordatorios:
		int contador01 = 0;
		int contadorRecordatorios1 = 1;
		int contadorRecordatorios2 = 1;
		bool modificadoR;
		int posicionNuevaR;
		//Variables Globales para Alarmas:
		int contador011= 0;
		int contadorAlarmas1 = 1;
		int contadorAlarmas2 = 1;
		bool modificadoA;
		int posicionNuevaA;
		//
		//Calcula el calendario.
	private: System::Void BtnCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (txtAño->Text == "" || txtMes->Text == "")
		{
			System::Windows::Forms::MessageBox::Show("ERROR: ¡Debe ingresar una año y un mes!");
		}
		else
		{
			//Constructor de todos los Métodos, Funciones.
			MetodosF^ nuevo = gcnew MetodosF;
			//Agregamos las columnas y las filas al DataGriedView.
			dataGridView1->ColumnCount = 7;
			dataGridView1->RowCount = 6;
			//Leemos el año y el mes de los TextBoxes.
			año = Int32::Parse(txtAño->Text);
			mes = Int32::Parse(txtMes->Text);
			int saberDia = nuevo->zeller(año, mes);
			int saberCantidadDias = nuevo->CalcularDiasDelMes(año, mes);
			int nums = 0;
			//Llenamos el DataGriedView con sus respectivos días.
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					if (i == 0 && (j < saberDia))
					{
						dataGridView1[j, i]->Value = nullptr;
					}
					else
					{
						nums += 1;
						if (nums <= saberCantidadDias)
						{
							dataGridView1[j, i]->Value = nums;
						}
						else
						{
							dataGridView1[j, i]->Value = nullptr;
						}
					}
				}
			}
			dataGridView1->Visible = true;
			btnAgregarTarea->Enabled = true;
		}
	}
		//Agrega tarea y abre otro form.
	private: System::Void BtnAgregarTarea_Click(System::Object^ sender, System::EventArgs^ e) {

	if (dataGridView1->CurrentCell->Value == nullptr)
	{
		System::Windows::Forms::MessageBox::Show("¡Este no es un día del mes!");	
	}
	else
	{
		//Muestra botonos para hacer cambios en las actividades.
		if (actividades1 != nullptr)
		{
			btnModificarActividad->Visible = true;
			lblModificiarActividad->Visible = true;
			txtModificarActividad->Visible = true;
		}
		if (recordatorios1 != nullptr)
		{
			brnModificarRecordatorio->Visible = true;
			lblModificiarRecrdaatorio->Visible = true;
			txtModificarRecordatorio->Visible = true;
		}
		if (alarmas1 != nullptr)
		{
			btnModificarAlarmas->Visible = true;
			lblModificiarAlarma->Visible = true;
			txtModificarAlarmas->Visible = true;
		}
		if (actividades1 != nullptr || recordatorios1 != nullptr || alarmas1 != nullptr)
		{
			btnExportar->Visible = true;
			lblExportar->Visible = true;
			txtExportarAgenda->Visible = true;
			//
			btnBuscarEvento->Visible = true;
			cBoxBuscarEvento->Visible = true;
			lblBuscarEvento->Visible = true;
			lblValorBuscar->Visible = true;
			txtBuscar->Visible = true;
			txtEventos->Visible = true;
			//
		}
		//
		//Limpiamoms siempre el cuadro donde se muestran las actividades.
		txtMostrar->Text = "";
		txtMostrarRecordatorios->Text = "";
		txtMostrarAlarmas->Text = "";
		//Obtengo la celda selecionada por el usuario para saber el día.
		String^ valor = dataGridView1->CurrentCell->Value->ToString();
		DíaSeleccionado = Int32::Parse(valor);
		//
		//
		if (actividades1 == nullptr && recordatorios1 == nullptr && alarmas1 == nullptr)
		{
			lblAño->Visible = false;
			lblMes->Visible = false;
			lblActividades->Visible = false;
			lblRecordatorios->Visible = false;
			lblAlarmas->Visible = false;
			btnCalcular->Visible = false;
			btnAgregarTarea->Visible = false;
			txtMes->Visible = false;
			txtAño->Visible = false;
			txtMostrar->Visible = false;
			txtMostrarRecordatorios->Visible = false;
			txtMostrarAlarmas->Visible = false;
			txtActividadesLlegadas->Visible = false;
			txtRecordatoriosLlegados->Visible = false;
			txtAlarmasLlegadas->Visible = false;
			dataGridView1->Visible = false;
			tabControl1->Visible = true;
		}
		else
		{
			//Esta siempre será la clave para verificar si en el día seleccionado hay alguna Actividad/Recordatorio/Alarma.
			String^ clave1 = (año + mes + DíaSeleccionado).ToString();
			//
			bool fechaEncontradaActividades = false, fechaEncontradaRecordatorios = false, fechaEncontradaAlarmas = false;
			int posicionActividad = 0;
			int posicionRecordatorio = 0;
			int posicionAlarma = 0;
			String^ Actividades = "";
			String^ Recordatorios = "";
			String^ Alarmas = "";
			if (actividades1 != nullptr)
			{
				for (int i = 0; i < actividades1->Length; i++)
				{
					if (clave1 == actividades1[i]->devolverClave())
					{
						posicionActividad++;
						fechaEncontradaActividades = true;
					}
				}
				//
				if (fechaEncontradaActividades == true)
				{
					int contador = 0;
					almacenarActividadesIguales = gcnew array <int^>(posicionActividad);
					for (int i = 0; i < actividades1->Length; i++)
					{
						if (clave1 == actividades1[i]->devolverClave())
						{
							almacenarActividadesIguales[contador] = i;
							contador++;
						}
					}
					//
					for (int i = 0; i < posicionActividad; i++)
					{
						String^ valor = almacenarActividadesIguales[i]->ToString();
						int  imprimirActividades = Int32::Parse(valor);
						String^ horaI = actividades1[imprimirActividades]->devolverHoraInicio();
						String^ horaF = actividades1[imprimirActividades]->devolverHoraFin();
						String^ lugar = actividades1[imprimirActividades]->devolverLugar();
						String^ descripcion = actividades1[imprimirActividades]->devolverDescripcion();
						String^ personas = actividades1[imprimirActividades]->devolverPersonas();
						String^ materiales = actividades1[imprimirActividades]->devolverMateriales();
						String^ prioridad = actividades1[imprimirActividades]->devolverPrioridad();
						String^ identificador = actividades1[imprimirActividades]->devolverIdentificador();
						Actividades += "Hora de Inicio: " + horaI + ". Hora de Fin: " + horaF + ". Lugar: " + lugar + ". Descripción: " + descripcion + ". Personas: " + personas + ". Materiales: " + materiales + ". Prioriedad: " + prioridad + ". Identificador: " + identificador + "." + "   ---   ";
					}
					txtMostrar->Text = Actividades;
				}
				//else
				//{
				//		tabControl1->Visible = true;
				//}				
			}
			//
			if (recordatorios1 != nullptr)
			{
				for (int i = 0; i < recordatorios1->Length; i++)
				{
					if (clave1 == recordatorios1[i]->devolverClave())
					{
						posicionRecordatorio++;
						fechaEncontradaRecordatorios = true;
					}
				}
				//
				if (fechaEncontradaRecordatorios == true)
				{
					int contador = 0;
					almacenarRecordatoriosIguales = gcnew array <int^>(posicionRecordatorio);
					for (int i = 0; i < recordatorios1->Length; i++)
					{
						if (clave1 == recordatorios1[i]->devolverClave())
						{
							almacenarRecordatoriosIguales[contador] = i;
							contador++;
						}
					}
					//
					for (int i = 0; i < posicionRecordatorio; i++)
					{
						String^ valor = almacenarRecordatoriosIguales[i]->ToString();
						int  imprimirRecordatorios = Int32::Parse(valor);
						String^ horaLímite = recordatorios1[imprimirRecordatorios]->devolverHoraLímite();
						String^ descripcion = recordatorios1[imprimirRecordatorios]->devolverDescripcion();
						String^ prioridad = recordatorios1[imprimirRecordatorios]->devolverPrioridad();
						String^ identificador = recordatorios1[imprimirRecordatorios]->devolverIdentificador();
						Recordatorios += "Hora Límite: " + horaLímite + ". Descripción: " + descripcion + ". Prioriedad: " + prioridad + ". Identificador: " + identificador + "." + "   ---   ";
					}
					txtMostrarRecordatorios->Text = Recordatorios;
				}
				//else
				//{
				//		tabControl1->Visible = true;
				//}				
			}
			//
			if (alarmas1 != nullptr)
			{
				for (int i = 0; i < alarmas1->Length; i++)
				{
					if (clave1 == alarmas1[i]->devolverClave())
					{
						posicionAlarma++;
						fechaEncontradaAlarmas = true;
					}
				}
				//
				if (fechaEncontradaAlarmas == true)
				{
					int contador = 0;
					almacenarAlarmasIguales = gcnew array <int^>(posicionAlarma);
					for (int i = 0; i < alarmas1->Length; i++)
					{
						if (clave1 == alarmas1[i]->devolverClave())
						{
							almacenarAlarmasIguales[contador] = i;
							contador++;
						}
					}
					//
					for (int i = 0; i < posicionAlarma; i++)
					{
						String^ valor = almacenarAlarmasIguales[i]->ToString();
						int  imprimirAlarmas = Int32::Parse(valor);
						String^ hora = alarmas1[imprimirAlarmas]->devolverHora();
						String^ descripcion = alarmas1[imprimirAlarmas]->devolverDescripcion();
						String^ prioridad = alarmas1[imprimirAlarmas]->devolverPrioridad();
						String^ ID = alarmas1[imprimirAlarmas]->devolverID();
						Alarmas += "Hora de alarma: " + hora + ". Descripción: " + descripcion + ". Prioriedad: " + prioridad + ". ID: " + ID + "." + "   ---   ";
					}
					txtMostrarAlarmas->Text = Alarmas;
				}
				//else
				//{
				//		tabControl1->Visible = true;
				//}				
			}
			//
            tabControl1->Visible = true;
			//
			lblAño->Visible = false;
			lblMes->Visible = false;
			lblActividades->Visible = false;
			lblRecordatorios->Visible = false;
			lblAlarmas->Visible = false;
			btnCalcular->Visible = false;
			btnAgregarTarea->Visible = false;
			txtMes->Visible = false;
			txtAño->Visible = false;
			txtMostrar->Visible = false;
			txtMostrarRecordatorios->Visible = false;
			txtMostrarAlarmas->Visible = false;
			dataGridView1->Visible = false;
			txtActividadesLlegadas->Visible = false;
			txtRecordatoriosLlegados->Visible = false;
			txtAlarmasLlegadas->Visible = false;
		}		
	}
}
		//Confirma y guarda las Actividades.
	private: System::Void BtnConfirmarActividad_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtHoraInicioActividades->Text == "" || txtHoraFinActividades->Text == "" || txtLugarActividades->Text == "" || txtDescripcionActividades->Text == "" || txtDescripcionActividades->Text == "" || txtMaterialesActividades->Text == "" || cBoxPrioriedadActividades->Text == "" || txtIdentiActividades->Text == "")
	{
		System::Windows::Forms::MessageBox::Show("¡Debe llenar toda la información!");
	}
	else
	{
		//Leo todos los datos ingresados por el usuario de la Actividad.
		String^ HoraInicio = txtHoraInicioActividades->Text->ToString();
		String^ HoraFin = txtHoraFinActividades->Text->ToString();
		String^ Identificador = txtIdentiActividades->Text->ToString();
		int horaInicio = Int32::Parse(HoraInicio), horaFin = Int32::Parse(HoraFin), identificador = Int32::Parse(Identificador);
		int clave = año + mes + DíaSeleccionado;
		String^ lugar = txtLugarActividades->Text->ToString();
		String^ descripcion = txtDescripcionActividades->Text->ToString();
		String^ personas = txtPersonasActividades->Text->ToString();
		String^ materiales = txtMaterialesActividades->Text->ToString();
		String^ prioridad = cBoxPrioriedadActividades->Text->ToString();
		//
		if (contadorActividades1 == 1)
		{
			actividades1 = gcnew array <PilaActividades^>(contadorActividades1);
			actividades2 = gcnew array <PilaActividades^>(contadorActividades1);
			actividades1[0] = gcnew PilaActividades;
			actividades2[0] = gcnew PilaActividades;
			actividades1[contador0]->AgregarDatos(horaInicio, horaFin, identificador, lugar, descripcion, personas, materiales, prioridad, clave);
			actividades2[contador0]->AgregarDatos(horaInicio, horaFin, identificador, lugar, descripcion, personas, materiales, prioridad, clave);
		}
		else
		{
			for (int i = 0; i < contadorActividades1; i++)
			{
				actividades1 = gcnew array <PilaActividades^>(contadorActividades1);
				actividades1[i] = gcnew PilaActividades;
			}
			for (int i = 0; i < contadorActividades1; i++)
			{
				if (i < contadorActividades1 - 1)
				{
					actividades1[i] = actividades2[i];
				}
				else
				{
					actividades1[i]->AgregarDatos(horaInicio, horaFin, identificador, lugar, descripcion, personas, materiales, prioridad, clave);
				}
			}
			contadorActividades2++;
			actividades2 = gcnew array <PilaActividades^>(contadorActividades2);
			for (int i = 0; i < contadorActividades2; i++)
			{
				actividades2[i] = gcnew PilaActividades;
			}
			for (int i = 0; i < actividades1->Length; i++)
			{
				actividades2[i] = actividades1[i];
			}
		}
		contadorActividades1++;
		System::Windows::Forms::MessageBox::Show("¡Actividad agregada con éxito!");
		txtHoraInicioActividades->Text = "";
		txtHoraFinActividades->Text = "";
		txtLugarActividades->Text = "";
		txtDescripcionActividades->Text = "";
		txtPersonasActividades->Text = "";
		txtMaterialesActividades->Text = "";
		cBoxPrioriedadActividades->Text = "";
		txtIdentiActividades->Text = "";
	}
}
	private: System::Void BtnConfirmarActividad_Click_1(System::Object^ sender, System::EventArgs^ e) {

		if (txtHoraInicioActividades->Text == "" || txtHoraFinActividades->Text == "" || txtLugarActividades->Text == "" || txtDescripcionActividades->Text == "" || txtDescripcionActividades->Text == "" || txtMaterialesActividades->Text == "" || cBoxPrioriedadActividades->Text == "" || txtIdentiActividades->Text == "")
		{
			System::Windows::Forms::MessageBox::Show("¡Debe llenar toda la información!");
		}
		else
		{
			//Verifico que el identificador no existe.
			if (identificadoresActividades == nullptr)
			{

			}
			//
			//Leo todos los datos ingresados por el usuario de la Actividad.
			String^ HoraInicio = txtHoraInicioActividades->Text->ToString();
			String^ HoraFin = txtHoraFinActividades->Text->ToString();
			String^ Identificador = txtIdentiActividades->Text->ToString();
			int horaInicio = Int32::Parse(HoraInicio), horaFin = Int32::Parse(HoraFin), identificador = Int32::Parse(Identificador);
			int clave = año + mes + DíaSeleccionado;
			String^ lugar = txtLugarActividades->Text->ToString();
			String^ descripcion = txtDescripcionActividades->Text->ToString();
			String^ personas = txtPersonasActividades->Text->ToString();
			String^ materiales = txtMaterialesActividades->Text->ToString();
			String^ prioridad = cBoxPrioriedadActividades->Text->ToString();
			//
			//
			//Se agrega la hora a un vector.
			/*
			if (modificado == false && horasActividades != nullptr)
			{
				if (contadorHoraActividades1 == 1)
				{
					horasActividades = gcnew array <int^>(contadorHoraActividades1);
					horasActividades1 = gcnew array <int^>(contadorHoraActividades1);
					horasActividades[0] = gcnew int;
					horasActividades1[0] = gcnew int;
					horasActividades[0] = horaInicio;
					horasActividades1[0] = horaInicio;
					System::Windows::Forms::MessageBox::Show("¡Hora agregada con éxito!");
				}
				else
				{
					for (int i = 0; i < contadorHoraActividades1; i++)
					{
						horasActividades = gcnew array <int^>(contadorHoraActividades1);
						horasActividades[i] = gcnew int;
					}
					for (int i = 0; i < contadorHoraActividades1; i++)
					{
						if (i < contadorHoraActividades1 - 1)
						{
							horasActividades[i] = horasActividades1[i];
						}
						else
						{
							horasActividades[i] = horaInicio;
						}
					}
					contadorHoraActividades2++;
					horasActividades1 = gcnew array <int^>(contadorHoraActividades2);
					for (int i = 0; i < contadorHoraActividades2; i++)
					{
						horasActividades1[i] = gcnew int;
					}
					for (int i = 0; i < horasActividades->Length; i++)
					{
						horasActividades1[i] = horasActividades[i];
					}
					System::Windows::Forms::MessageBox::Show("¡Hora agregada con éxito!");
				}
				contadorHoraActividades1++;
			}	
			*/
			//
			//
			//
			if (modificado == true)
			{
				actividades1[posicionNueva]->AgregarDatos(horaInicio, horaFin, identificador, lugar, descripcion, personas, materiales, prioridad, clave);
				System::Windows::Forms::MessageBox::Show("¡Actividad modificada con éxito!");
				modificado = false;
			}
			//
			else
			{
				if (contadorActividades1 == 1)
				{
					actividades1 = gcnew array <PilaActividades^>(contadorActividades1);
					actividades2 = gcnew array <PilaActividades^>(contadorActividades1);
					actividades1[0] = gcnew PilaActividades;
					actividades2[0] = gcnew PilaActividades;
					actividades1[contador0]->AgregarDatos(horaInicio, horaFin, identificador, lugar, descripcion, personas, materiales, prioridad, clave);
					actividades2[contador0]->AgregarDatos(horaInicio, horaFin, identificador, lugar, descripcion, personas, materiales, prioridad, clave);
				}
				else
				{
					for (int i = 0; i < contadorActividades1; i++)
					{
						actividades1 = gcnew array <PilaActividades^>(contadorActividades1);
						actividades1[i] = gcnew PilaActividades;
					}
					for (int i = 0; i < contadorActividades1; i++)
					{
						if (i < contadorActividades1 - 1)
						{
							actividades1[i] = actividades2[i];
						}
						else
						{
							actividades1[i]->AgregarDatos(horaInicio, horaFin, identificador, lugar, descripcion, personas, materiales, prioridad, clave);
						}
					}
					contadorActividades2++;
					actividades2 = gcnew array <PilaActividades^>(contadorActividades2);
					for (int i = 0; i < contadorActividades2; i++)
					{
						actividades2[i] = gcnew PilaActividades;
					}
					for (int i = 0; i < actividades1->Length; i++)
					{
						actividades2[i] = actividades1[i];
					}
				}
				contadorActividades1++;
				System::Windows::Forms::MessageBox::Show("¡Actividad agregada con éxito!");
			}
			//
			txtModificarActividad->Text = "";
			txtHoraInicioActividades->Text = "";
			txtHoraFinActividades->Text = "";
			txtLugarActividades->Text = "";
			txtDescripcionActividades->Text = "";
			txtPersonasActividades->Text = "";
			txtMaterialesActividades->Text = "";
			cBoxPrioriedadActividades->Text = "";
			txtIdentiActividades->Text = "";
		}		   
	}
		//Cierra las Actividades.
	private: System::Void BtnTerminar_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->Visible = false;
	lblAño->Visible = true;
	lblMes->Visible = true;
	btnCalcular->Visible = true;
	btnAgregarTarea->Visible = true;
	txtMes->Visible = true;
	txtAño->Visible = true;
	txtMostrar->Visible = true;
	dataGridView1->Visible = true;
	//Deja en blanco todos los txt.
	txtHoraInicioActividades->Text = "";
	txtHoraFinActividades->Text = "";
	txtLugarActividades->Text = "";
	txtDescripcionActividades->Text = "";
	txtPersonasActividades->Text = "";
	txtMaterialesActividades->Text = "";
	cBoxPrioriedadActividades->Text = "";
	txtIdentiActividades->Text = "";
	//
	txtHoraLímiteRecordatorios->Text = "";
	cBoxPrioridadRecordatorios->Text = "";
	txtIdentificadorRecordatorios->Text = "";
	txtDescripciónRecordatorios->Text = "";
	//
	txtHoraAlrmas->Text = "";
	cBoxPrioridadAlarmas->Text = "";
	txtIDAlarmas->Text = "";
	txtDescripciónAlarmas->Text = "";
}
	private: System::Void BtnTerminar_Click_1(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->Visible = false;
		lblAño->Visible = true;
		lblMes->Visible = true;
		lblActividades->Visible = true;
		lblRecordatorios->Visible = true;
		lblAlarmas->Visible = true;
		btnCalcular->Visible = true;
		btnAgregarTarea->Visible = true;
		txtMes->Visible = true;
		txtAño->Visible = true;
		txtActividadesLlegadas->Visible = true;
		txtRecordatoriosLlegados->Visible = true;
		txtAlarmasLlegadas->Visible = true;
		txtMostrar->Visible = true;
		txtMostrarRecordatorios->Visible = true;
		txtMostrarAlarmas->Visible = true;
		dataGridView1->Visible = true;
		//Deja en blanco todos los txt.
		txtModificarActividad->Text = "";
		txtHoraInicioActividades->Text = "";
		txtHoraFinActividades->Text = "";
		txtLugarActividades->Text = "";
		txtDescripcionActividades->Text = "";
		txtPersonasActividades->Text = "";
		txtMaterialesActividades->Text = "";
		cBoxPrioriedadActividades->Text = "";
		txtIdentiActividades->Text = "";
		//
		txtHoraLímiteRecordatorios->Text = "";
		cBoxPrioridadRecordatorios->Text = "";
		txtIdentificadorRecordatorios->Text = "";
		txtDescripciónRecordatorios->Text = "";
		txtModificarRecordatorio->Text = "";
		//
		txtHoraAlrmas->Text = "";
		cBoxPrioridadAlarmas->Text = "";
		txtIDAlarmas->Text = "";
		txtDescripciónAlarmas->Text = "";
		txtModificarAlarmas->Text = "";
		//
		txtExportarAgenda->Text = "";
		cBoxBuscarEvento->Text = "";
		txtBuscar->Text = "";
		txtEventos->Text = "";
	}
		//Confirma y guarda los Recordatoios.
    private: System::Void BtnConfrimarRecordatorio_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txtHoraLímiteRecordatorios->Text == "" || txtDescripciónRecordatorios->Text == "" || txtIdentificadorRecordatorios->Text == "" || cBoxPrioridadRecordatorios->Text == "")
		{
			System::Windows::Forms::MessageBox::Show("¡Debe llenar toda la información!");
		}
		else
		{
			//Leo todos los datos ingresados por el usuario de la Actividad.
			String^ HoraLímite = txtHoraLímiteRecordatorios->Text->ToString();
			String^ Identificador = txtIdentificadorRecordatorios->Text->ToString();
			int horaLímite = Int32::Parse(HoraLímite), identificador = Int32::Parse(Identificador);
			int clave = año + mes + DíaSeleccionado;
			String^ Descripción = txtDescripciónRecordatorios->Text->ToString();
			String^ Prioridad = cBoxPrioridadRecordatorios->Text->ToString();
			//
			if (contadorAlarmas1 == 1)
			{
				recordatorios1 = gcnew array <PilaRecordatorios^>(contadorRecordatorios1);
				recordatorios2 = gcnew array <PilaRecordatorios^>(contadorRecordatorios2);
				recordatorios1[0] = gcnew PilaRecordatorios;
				recordatorios2[0] = gcnew PilaRecordatorios;
				recordatorios1[contador01]->AgregarDatos(horaLímite, identificador, Descripción, Prioridad, clave);
				recordatorios2[contador01]->AgregarDatos(horaLímite, identificador, Descripción, Prioridad, clave);
			}
			else
			{
				for (int i = 0; i < contadorRecordatorios1; i++)
				{
					recordatorios1 = gcnew array <PilaRecordatorios^>(contadorRecordatorios1);
					recordatorios1[i] = gcnew PilaRecordatorios;
				}
				for (int i = 0; i < contadorRecordatorios1; i++)
				{
					if (i < contadorRecordatorios1 - 1)
					{
						recordatorios1[i] = recordatorios2[i];
					}
					else
					{
						recordatorios1[i]->AgregarDatos(horaLímite, identificador, Descripción, Prioridad, clave);
					}
				}
				contadorRecordatorios2++;
				recordatorios2 = gcnew array <PilaRecordatorios^>(contadorRecordatorios2);
				for (int i = 0; i < contadorRecordatorios2; i++)
				{
					recordatorios2[i] = gcnew PilaRecordatorios;
				}
				for (int i = 0; i < recordatorios1->Length; i++)
				{
					recordatorios2[i] = recordatorios1[i];
				}
			}
			contadorRecordatorios1++;
			System::Windows::Forms::MessageBox::Show("¡Actividad agregada con éxito!");
			txtHoraLímiteRecordatorios->Text = "";
			cBoxPrioridadRecordatorios->Text = "";
			txtIdentificadorRecordatorios->Text = "";
			txtDescripciónRecordatorios->Text = "";
		}
}
	private: System::Void BtnConfrimarRecordatorio_Click_1(System::Object^ sender, System::EventArgs^ e) {

		if (txtHoraLímiteRecordatorios->Text == "" || txtDescripciónRecordatorios->Text == "" || txtIdentificadorRecordatorios->Text == "" || cBoxPrioridadRecordatorios->Text == "")
		{
			System::Windows::Forms::MessageBox::Show("¡Debe llenar toda la información!");
		}
		else
		{
			//Leo todos los datos ingresados por el usuario de la Actividad.
			String^ HoraLímite = txtHoraLímiteRecordatorios->Text->ToString();
			String^ Identificador = txtIdentificadorRecordatorios->Text->ToString();
			int horaLímite = Int32::Parse(HoraLímite), identificador = Int32::Parse(Identificador);
			int clave = año + mes + DíaSeleccionado;
			String^ Descripción = txtDescripciónRecordatorios->Text->ToString();
			String^ Prioridad = cBoxPrioridadRecordatorios->Text->ToString();
			//
			//
			//Se agrega la hora a un vector.
			/*
			if (contadorHoraRecordatorios1 == 1)
			{
				horasRecordatorios1 = gcnew array <int^>(contadorHoraRecordatorios1);
				horasRecordatorios2 = gcnew array <int^>(contadorHoraRecordatorios1);
				horasRecordatorios1[0] = gcnew int;
				horasRecordatorios2[0] = gcnew int;
				horasRecordatorios1[0] = horaLímite;
				horasRecordatorios2[0] = horaLímite;
				System::Windows::Forms::MessageBox::Show("¡Hora agregada con éxito!");
			}
			else
			{
				for (int i = 0; i < contadorHoraRecordatorios1; i++)
				{
					horasRecordatorios1 = gcnew array <int^>(contadorHoraRecordatorios1);
					horasRecordatorios1[i] = gcnew int;
				}
				for (int i = 0; i < contadorHoraRecordatorios1; i++)
				{
					if (i < contadorHoraRecordatorios1 - 1)
					{
						horasRecordatorios1[i] = horasRecordatorios2[i];
					}
					else
					{
						horasRecordatorios1[i] = horaLímite;
					}
				}
				contadorHoraRecordatorios2++;
				horasRecordatorios2 = gcnew array <int^>(contadorHoraRecordatorios2);
				for (int i = 0; i < contadorHoraRecordatorios2; i++)
				{
					horasRecordatorios2[i] = gcnew int;
				}
				for (int i = 0; i < horasRecordatorios1->Length; i++)
				{
					horasRecordatorios2[i] = horasRecordatorios1[i];
				}
				System::Windows::Forms::MessageBox::Show("¡Hora agregada con éxito!");
			}
			contadorHoraActividades1++;
			*/
			//
			//
			//
			if (modificadoR == true)
			{
				recordatorios1[posicionNuevaR]->AgregarDatos(horaLímite, identificador, Descripción, Prioridad, clave);
				System::Windows::Forms::MessageBox::Show("¡Recordatorio modificado con éxito!");
				modificadoR = false;
			}
			else
			{
				if (contadorRecordatorios1 == 1)
				{
					recordatorios1 = gcnew array <PilaRecordatorios^>(contadorRecordatorios1);
					recordatorios2 = gcnew array <PilaRecordatorios^>(contadorRecordatorios2);
					recordatorios1[0] = gcnew PilaRecordatorios;
					recordatorios2[0] = gcnew PilaRecordatorios;
					recordatorios1[contador01]->AgregarDatos(horaLímite, identificador, Descripción, Prioridad, clave);
					recordatorios2[contador01]->AgregarDatos(horaLímite, identificador, Descripción, Prioridad, clave);
				}
				else
				{
					for (int i = 0; i < contadorRecordatorios1; i++)
					{
						recordatorios1 = gcnew array <PilaRecordatorios^>(contadorRecordatorios1);
						recordatorios1[i] = gcnew PilaRecordatorios;
					}
					for (int i = 0; i < contadorRecordatorios1; i++)
					{
						if (i < contadorRecordatorios1 - 1)
						{
							recordatorios1[i] = recordatorios2[i];
						}
						else
						{
							recordatorios1[i]->AgregarDatos(horaLímite, identificador, Descripción, Prioridad, clave);
						}
					}
					contadorRecordatorios2++;
					recordatorios2 = gcnew array <PilaRecordatorios^>(contadorRecordatorios2);
					for (int i = 0; i < contadorRecordatorios2; i++)
					{
						recordatorios2[i] = gcnew PilaRecordatorios;
					}
					for (int i = 0; i < recordatorios1->Length; i++)
					{
						recordatorios2[i] = recordatorios1[i];
					}
				}
				contadorRecordatorios1++;
				System::Windows::Forms::MessageBox::Show("¡Recordatorio agregado con éxito!");
			}
			//
			txtHoraLímiteRecordatorios->Text = "";
			cBoxPrioridadRecordatorios->Text = "";
			txtIdentificadorRecordatorios->Text = "";
			txtDescripciónRecordatorios->Text = "";
			txtModificarRecordatorio->Text = "";
		}
	}
		//Cierra los Recordatorios.
	private: System::Void BtnTerminar1_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->Visible = false;
		lblAño->Visible = true;
		lblMes->Visible = true;
		btnCalcular->Visible = true;
		btnAgregarTarea->Visible = true;
		txtMes->Visible = true;
		txtAño->Visible = true;
		txtMostrar->Visible = true;
		dataGridView1->Visible = true;
		//Deja en blanco todos los txt.
		txtHoraInicioActividades->Text = "";
		txtHoraFinActividades->Text = "";
		txtLugarActividades->Text = "";
		txtDescripcionActividades->Text = "";
		txtPersonasActividades->Text = "";
		txtMaterialesActividades->Text = "";
		cBoxPrioriedadActividades->Text = "";
		txtIdentiActividades->Text = "";
		//
		txtHoraLímiteRecordatorios->Text = "";
		cBoxPrioridadRecordatorios->Text = "";
		txtIdentificadorRecordatorios->Text = "";
		txtDescripciónRecordatorios->Text = "";
		//
		txtHoraAlrmas->Text = "";
		cBoxPrioridadAlarmas->Text = "";
		txtIDAlarmas->Text = "";
		txtDescripciónAlarmas->Text = "";
	}
	private: System::Void BtnTerminar1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->Visible = false;
		lblAño->Visible = true;
		lblMes->Visible = true;
		lblActividades->Visible = true;
		lblRecordatorios->Visible = true;
		lblAlarmas->Visible = true;
		btnCalcular->Visible = true;
		btnAgregarTarea->Visible = true;
		txtMes->Visible = true;
		txtAño->Visible = true;
		txtMostrar->Visible = true;
		txtMostrarRecordatorios->Visible = true;
		txtMostrarAlarmas->Visible = true;
		dataGridView1->Visible = true;
		txtActividadesLlegadas->Visible = true;
		txtRecordatoriosLlegados->Visible = true;
		txtAlarmasLlegadas->Visible = true;
		//Deja en blanco todos los txt.
		txtHoraInicioActividades->Text = "";
		txtHoraFinActividades->Text = "";
		txtLugarActividades->Text = "";
		txtDescripcionActividades->Text = "";
		txtPersonasActividades->Text = "";
		txtMaterialesActividades->Text = "";
		cBoxPrioriedadActividades->Text = "";
		txtIdentiActividades->Text = "";
		//
		txtHoraLímiteRecordatorios->Text = "";
		cBoxPrioridadRecordatorios->Text = "";
		txtIdentificadorRecordatorios->Text = "";
		txtDescripciónRecordatorios->Text = "";
		txtModificarRecordatorio->Text = "";
		//
		txtHoraAlrmas->Text = "";
		cBoxPrioridadAlarmas->Text = "";
		txtIDAlarmas->Text = "";
		txtDescripciónAlarmas->Text = "";
		txtModificarAlarmas->Text = "";
		//
		txtExportarAgenda->Text = "";
		cBoxBuscarEvento->Text = "";
		txtBuscar->Text = "";
		txtEventos->Text = "";
	}
		//Confirma y guarda las Alarmas.
    private: System::Void BtnAgregarAlarma_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txtHoraAlrmas->Text == "" || txtIDAlarmas->Text == "" || txtDescripciónAlarmas->Text == "" || cBoxPrioridadAlarmas->Text == "")
		{
			System::Windows::Forms::MessageBox::Show("¡Debe llenar toda la información!");
		}
		else
		{
			//Leo todos los datos ingresados por el usuario de la Actividad.
			String^ Hora = txtHoraAlrmas->Text->ToString();
			String^ id = txtIDAlarmas->Text->ToString();
			int hora = Int32::Parse(Hora), ID = Int32::Parse(id);
			int clave = año + mes + DíaSeleccionado;
			String^ Descripción = txtDescripciónAlarmas->Text->ToString();
			String^ Prioridad = cBoxPrioridadAlarmas->Text->ToString();
			//
			if (contadorAlarmas1 == 1)
			{
				alarmas1 = gcnew array <PilaAlarmas^>(contadorAlarmas1);
				alarmas2 = gcnew array <PilaAlarmas^>(contadorAlarmas2);
				alarmas1[0] = gcnew PilaAlarmas;
				alarmas2[0] = gcnew PilaAlarmas;
				alarmas1[contador011]->AgregarDatos(hora, ID, Descripción, Prioridad, clave);
				alarmas2[contador011]->AgregarDatos(hora, ID, Descripción, Prioridad, clave);
			}
			else
			{
				for (int i = 0; i < contadorAlarmas1; i++)
				{
					alarmas1 = gcnew array <PilaAlarmas^>(contadorAlarmas1);
					alarmas1[i] = gcnew PilaAlarmas;
				}
				for (int i = 0; i < contadorAlarmas1; i++)
				{
					if (i < contadorAlarmas1 - 1)
					{
						alarmas1[i] = alarmas2[i];
					}
					else
					{
						alarmas1[i]->AgregarDatos(hora, ID, Descripción, Prioridad, clave);
					}
				}
				contadorAlarmas2++;
				alarmas2 = gcnew array <PilaAlarmas^>(contadorAlarmas2);
				for (int i = 0; i < contadorAlarmas2; i++)
				{
					alarmas2[i] = gcnew PilaAlarmas;
				}
				for (int i = 0; i < alarmas1->Length; i++)
				{
					alarmas2[i] = alarmas1[i];
				}
			}
			contadorAlarmas1++;
			System::Windows::Forms::MessageBox::Show("¡Actividad agregada con éxito!");
			txtHoraAlrmas->Text = "";
			cBoxPrioridadAlarmas->Text = "";
			txtIDAlarmas->Text = "";
			txtDescripciónAlarmas->Text = "";
		}

	}
	private: System::Void BtnAgregarAlarma_Click_1(System::Object^ sender, System::EventArgs^ e) {

		if (txtHoraAlrmas->Text == "" || txtIDAlarmas->Text == "" || txtDescripciónAlarmas->Text == "" || cBoxPrioridadAlarmas->Text == "")
		{
			System::Windows::Forms::MessageBox::Show("¡Debe llenar toda la información!");
		}
		else
		{
			//Leo todos los datos ingresados por el usuario de la Actividad.
			String^ Hora = txtHoraAlrmas->Text->ToString();
			String^ id = txtIDAlarmas->Text->ToString();
			int hora = Int32::Parse(Hora), ID = Int32::Parse(id);
			int clave = año + mes + DíaSeleccionado;
			String^ Descripción = txtDescripciónAlarmas->Text->ToString();
			String^ Prioridad = cBoxPrioridadAlarmas->Text->ToString();
			//
			//
			if (modificadoA == true)
			{
				alarmas1[posicionNuevaA]->AgregarDatos(hora, ID, Descripción, Prioridad, clave);
				System::Windows::Forms::MessageBox::Show("¡Alarma modificada con éxito!");
				modificadoA = false;
			}
			else
			{
				if (contadorAlarmas1 == 1)
				{
					alarmas1 = gcnew array <PilaAlarmas^>(contadorAlarmas1);
					alarmas2 = gcnew array <PilaAlarmas^>(contadorAlarmas2);
					alarmas1[0] = gcnew PilaAlarmas;
					alarmas2[0] = gcnew PilaAlarmas;
					alarmas1[contador011]->AgregarDatos(hora, ID, Descripción, Prioridad, clave);
					alarmas2[contador011]->AgregarDatos(hora, ID, Descripción, Prioridad, clave);
				}
				else
				{
					for (int i = 0; i < contadorAlarmas1; i++)
					{
						alarmas1 = gcnew array <PilaAlarmas^>(contadorAlarmas1);
						alarmas1[i] = gcnew PilaAlarmas;
					}
					for (int i = 0; i < contadorAlarmas1; i++)
					{
						if (i < contadorAlarmas1 - 1)
						{
							alarmas1[i] = alarmas2[i];
						}
						else
						{
							alarmas1[i]->AgregarDatos(hora, ID, Descripción, Prioridad, clave);
						}
					}
					contadorAlarmas2++;
					alarmas2 = gcnew array <PilaAlarmas^>(contadorAlarmas2);
					for (int i = 0; i < contadorAlarmas2; i++)
					{
						alarmas2[i] = gcnew PilaAlarmas;
					}
					for (int i = 0; i < alarmas1->Length; i++)
					{
						alarmas2[i] = alarmas1[i];
					}
				}
				contadorAlarmas1++;
				System::Windows::Forms::MessageBox::Show("¡Actividad agregada con éxito!");
			}
			//
			txtHoraAlrmas->Text = "";
			cBoxPrioridadAlarmas->Text = "";
			txtIDAlarmas->Text = "";
			txtDescripciónAlarmas->Text = "";
			txtModificarAlarmas->Text = "";
		}
	}
		//Cierra las Alarmas.
	private: System::Void BtnTerminar2_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->Visible = false;
		lblAño->Visible = true;
		lblMes->Visible = true;
		btnCalcular->Visible = true;
		btnAgregarTarea->Visible = true;
		txtMes->Visible = true;
		txtAño->Visible = true;
		txtMostrar->Visible = true;
		dataGridView1->Visible = true;
		//Deja en blanco todos los txt.
		txtHoraInicioActividades->Text = "";
		txtHoraFinActividades->Text = "";
		txtLugarActividades->Text = "";
		txtDescripcionActividades->Text = "";
		txtPersonasActividades->Text = "";
		txtMaterialesActividades->Text = "";
		cBoxPrioriedadActividades->Text = "";
		txtIdentiActividades->Text = "";
		//
		txtHoraLímiteRecordatorios->Text = "";
		cBoxPrioridadRecordatorios->Text = "";
		txtIdentificadorRecordatorios->Text = "";
		txtDescripciónRecordatorios->Text = "";
		//
		txtHoraAlrmas->Text = "";
		cBoxPrioridadAlarmas->Text = "";
		txtIDAlarmas->Text = "";
		txtDescripciónAlarmas->Text = "";
	}
	private: System::Void BtnTerminar2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->Visible = false;
	lblAño->Visible = true;
	lblMes->Visible = true;
	lblActividades->Visible = true;
	lblRecordatorios->Visible = true;
	lblAlarmas->Visible = true;
	btnCalcular->Visible = true;
	btnAgregarTarea->Visible = true;
	txtMes->Visible = true;
	txtAño->Visible = true;
	txtMostrar->Visible = true;
	txtMostrarRecordatorios->Visible = true;
	txtMostrarAlarmas->Visible = true;
	dataGridView1->Visible = true;
	txtActividadesLlegadas->Visible = true;
	txtRecordatoriosLlegados->Visible = true;
	txtAlarmasLlegadas->Visible = true;
	//Deja en blanco todos los txt.
	txtHoraInicioActividades->Text = "";
	txtHoraFinActividades->Text = "";
	txtLugarActividades->Text = "";
	txtDescripcionActividades->Text = "";
	txtPersonasActividades->Text = "";
	txtMaterialesActividades->Text = "";
	cBoxPrioriedadActividades->Text = "";
	txtIdentiActividades->Text = "";
	//
	txtHoraLímiteRecordatorios->Text = "";
	cBoxPrioridadRecordatorios->Text = "";
	txtIdentificadorRecordatorios->Text = "";
	txtDescripciónRecordatorios->Text = "";
	txtModificarRecordatorio->Text = "";
	//
	txtHoraAlrmas->Text = "";
	cBoxPrioridadAlarmas->Text = "";
	txtIDAlarmas->Text = "";
	txtDescripciónAlarmas->Text = "";
	txtModificarAlarmas->Text = "";
	//
	txtExportarAgenda->Text = "";
	cBoxBuscarEvento->Text = "";
	txtBuscar->Text = "";
	txtEventos->Text = "";
}
		//Modifica las Actividades.
	private: System::Void BtnModificarActividad_Click(System::Object^ sender, System::EventArgs^ e) {
				
		if (txtModificarActividad->Text == "")
		{
			System::Windows::Forms::MessageBox::Show("¡Ingrese el Identificador de la Actividad a editar!");
		}
		else
		{
			String^ valorModificar = txtModificarActividad->Text->ToString();
			int valorM = Int32::Parse(valorModificar), clave = año + mes + DíaSeleccionado, pos = 0;
			bool encontrado = false;
			for (int i = 0; i < actividades1->Length; i++)
			{
				if (valorModificar == actividades1[i]->devolverIdentificador())
				{
					pos = i;
					encontrado = true;
				}
			}
			if (encontrado == true)
			{
				if (actividades1[pos]->devolverClave() == clave.ToString())
				{
					//Enseñamos los datos en la actividad.
					txtHoraInicioActividades->Text = actividades1[pos]->devolverHoraInicio();
					txtHoraFinActividades->Text = actividades1[pos]->devolverHoraFin();
					txtLugarActividades->Text = actividades1[pos]->devolverLugar();
					txtDescripcionActividades->Text = actividades1[pos]->devolverDescripcion();
					txtPersonasActividades->Text = actividades1[pos]->devolverPersonas();
					txtMaterialesActividades->Text = actividades1[pos]->devolverMateriales();
					cBoxPrioriedadActividades->Text = actividades1[pos]->devolverPrioridad();
					txtIdentiActividades->Text = actividades1[pos]->devolverIdentificador();
					//Vaciamos la Actividad a Modificar.
					actividades1[pos]->vaciarPilaActividades(actividades1, pos);
					modificado = true;
					posicionNueva = pos;
					//
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("¡La actividad que está buscando no es de esté día!");
				}
			}
			else
			{
				System::Windows::Forms::MessageBox::Show("¡Este Identificador no existe!");
			}
		}	
	}
		//Modifica los Recordatorios.
	private: System::Void BrnModificarRecordatorio_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txtModificarRecordatorio->Text == "")
		{
			System::Windows::Forms::MessageBox::Show("¡Ingrese el Identificador del Recordatorio a editar!");
		}
		else
		{
			String^ valorModificar = txtModificarRecordatorio->Text->ToString();
			int valorM = Int32::Parse(valorModificar), clave = año + mes + DíaSeleccionado, pos = 0;
			bool encontrado = false;
			for (int i = 0; i < recordatorios1->Length; i++)
			{
				if (valorModificar == recordatorios1[i]->devolverIdentificador())
				{
					pos = i;
					encontrado = true;
				}
			}
			if (encontrado == true)
			{
				if (recordatorios1[pos]->devolverClave() == clave.ToString())
				{
					//Enseñamos los datos en la actividad.
					txtHoraLímiteRecordatorios->Text = recordatorios1[pos]->devolverHoraLímite();
					cBoxPrioridadRecordatorios->Text = recordatorios1[pos]->devolverPrioridad();
					txtIdentificadorRecordatorios->Text = recordatorios1[pos]->devolverIdentificador();
					txtDescripciónRecordatorios->Text = recordatorios1[pos]->devolverDescripcion();
					//Vaciamos la Actividad a Modificar.
					recordatorios1[pos]->VaciarPilaRecordatorios(recordatorios1, pos);
					modificadoR = true;
					posicionNuevaR = pos;
					//
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("¡El recordatorio que está buscando no es de esté día!");
				}
			}
			else
			{
				System::Windows::Forms::MessageBox::Show("¡Este Identificador no existe!");
			}
		}
	}
		//Modifica las Alarmas.
	private: System::Void BtnModificarAlarmas_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txtModificarAlarmas->Text == "")
		{
			System::Windows::Forms::MessageBox::Show("¡Ingrese el Identificador de la Alarma a editar!");
		}
		else
		{
			String^ valorModificar = txtModificarAlarmas->Text->ToString();
			int valorM = Int32::Parse(valorModificar), clave = año + mes + DíaSeleccionado, pos = 0;
			bool encontrado = false;
			for (int i = 0; i < alarmas1->Length; i++)
			{
				if (valorModificar == alarmas1[i]->devolverID())
				{
					pos = i;
					encontrado = true;
				}
			}
			if (encontrado == true)
			{
				if (alarmas1[pos]->devolverClave() == clave.ToString())
				{
					//Enseñamos los datos en la actividad.
					txtHoraAlrmas->Text = alarmas1[pos]->devolverHora();
					cBoxPrioridadAlarmas->Text = alarmas1[pos]->devolverPrioridad();
					txtIDAlarmas->Text = alarmas1[pos]->devolverID();
					txtDescripciónAlarmas->Text = alarmas1[pos]->devolverDescripcion();
					//Vaciamos la Actividad a Modificar.
					alarmas1[pos]->VaciarPilaAlarmas(alarmas1, pos);
					modificadoA = true;
					posicionNuevaA = pos;
					//
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("¡La alarma que está buscando no es de esté día!");
				}
			}
			else
			{
				System::Windows::Forms::MessageBox::Show("¡Esta alarma no existe!");
			}
		}
	}
	    //Muestra la hora en el Form.
	private: System::Void TimerHoraActual_Tick(System::Object^ sender, System::EventArgs^ e) {
	time_t now = time(0);
	tm* time = localtime(&now);
	hora = time->tm_hour;
	if (time->tm_min < 10 && time->tm_sec > 9)
	{
		lblTiempo->Text = hora.ToString() + " : 0" + time->tm_min.ToString() + " : " + time->tm_sec.ToString();
	}
	if (time->tm_min > 9 && time->tm_sec < 10)
	{
		lblTiempo->Text = hora.ToString() + " : " + time->tm_min.ToString() + " : 0" + time->tm_sec.ToString();
	}
	if (time->tm_min < 10 && time->tm_sec < 10)
	{
		lblTiempo->Text = hora.ToString() + " : 0" + time->tm_min.ToString() + " : 0" + time->tm_sec.ToString();
	}
	if (time->tm_min > 9 && time->tm_sec > 9)
	{
		lblTiempo->Text = hora.ToString() + " : " + time->tm_min.ToString() + " : " + time->tm_sec.ToString();
	}
	//
	//
	//También sirve para ver si la hora de un evento llegó.
	//Actividades:
	int conHA = 0;
	bool encontradoHA = false;
	String^ numHA = "";
	if (actividades1 != nullptr)
	{
		for (int i = 0; i < actividades1->Length; i++)
		{
			if (hora.ToString() == actividades1[i]->devolverHoraInicio())
			{
				conHA++;
				encontradoHA = true;
			}
		}
		if (encontradoHA == true)
		{
			array <int^>^ horas = gcnew array <int^>(conHA);
			for (int i = 0; i < actividades1->Length; i++)
			{
				if (hora.ToString() == actividades1[i]->devolverHoraInicio())
				{
					horas[i] = i;
				}
			}
			for (int i = 0; i < conHA; i++)
			{
				String^ pos = horas[i]->ToString();
				int pos1 = Int32::Parse(pos);
				String^ hola = "Descripción: " + actividades1[pos1]->devolverDescripcion() + ". Hora de Fin: " + actividades1[pos1]->devolverHoraFin();
				numHA += hola + "  ---  ";
			}
			txtActividadesLlegadas->Text = "¡Ya llegó la hora de la actividad! " + numHA;
		}
		else
		{
			txtActividadesLlegadas->Text = "";
		}
	}
	//Recordatorios:
	int conHR = 0;
	bool encontradoHR = false;
	String^ numHR = "";
	if (recordatorios1 != nullptr)
	{
		for (int i = 0; i < recordatorios1->Length; i++)
		{
			if (hora.ToString() == recordatorios1[i]->devolverHoraLímite())
			{
				conHR++;
				encontradoHA = true;
			}
		}
		if (encontradoHA == true)
		{
			array <int^>^ horasR = gcnew array <int^>(conHR);
			for (int i = 0; i < recordatorios1->Length; i++)
			{
				if (hora.ToString() == recordatorios1[i]->devolverHoraLímite())
				{
					horasR[i] = i;
				}
			}
			for (int i = 0; i < conHR; i++)
			{
				String^ pos = horasR[i]->ToString();
				int pos1 = Int32::Parse(pos);
				String^ hola = "Descripción: " + recordatorios1[pos1]->devolverDescripcion();
				numHA += hola + "  ---  ";
			}
			txtRecordatoriosLlegados->Text = "¡Ya llegó la hora del Recordatorio! " + numHA;
		}
		else
		{
			txtRecordatoriosLlegados->Text = "";
		}
	}
	//Alarmas:
	int conHL = 0;
	bool encontradoHL = false;

	String^ numHL = "";
	if (alarmas1 != nullptr)
	{
		for (int i = 0; i < alarmas1->Length; i++)
		{
			if (hora.ToString() == alarmas1[i]->devolverHora())
			{
				conHL++;
				encontradoHL = true;
			}
		}
		if (encontradoHL == true)
		{
			array <int^>^ horas = gcnew array <int^>(conHL);
			for (int i = 0; i < alarmas1->Length; i++)
			{
				if (hora.ToString() == alarmas1[i]->devolverHora())
				{
					horas[i] = i;
				}
			}
			for (int i = 0; i < conHL; i++)
			{
				String^ pos = horas[i]->ToString();
				int pos1 = Int32::Parse(pos);
				String^ hola = "Descripción: " + alarmas1[pos1]->devolverDescripcion();
				numHA += hola + "  ---  ";
			}
			txtAlarmasLlegadas->Text = "¡ALARMA! " + numHA;
			btnAgregarTarea->Enabled = false;
			dataGridView1->Enabled = false;
			txtAño->Enabled = false;
			txtMes->Enabled = false;
			btnCalcular->Enabled = false;
			Console::Beep();
		}
		else
		{
			txtAlarmasLlegadas->Text = "";
			btnAgregarTarea->Enabled = true;
			dataGridView1->Enabled = true;
			txtAño->Enabled = true;
			txtMes->Enabled = true;
			btnCalcular->Enabled = true;
		}
	}
}
		//Detiene la alarma.
	private: System::Void BtnDetenerAlarma_Click(System::Object^ sender, System::EventArgs^ e) {

	detener = true;
}
		//Exporta archivos tipo Agenda.
	private: System::Void BtnExportar_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txtExportarAgenda->Text == "")
		{
			System::Windows::Forms::MessageBox::Show("¡Debe ingresar la dirección donde desea guardar el Archivo.csv!");
		}
		if (actividades1 != nullptr)
		{
			String^ respuesta = "";
			String^ direccion = txtExportarAgenda->Text->ToString();
			StreamWriter^ nuevo = gcnew StreamWriter(Path::Combine(direccion, "Agenda.xml"));
			for (int i = 0; i < actividades1->Length; i++)
			{
				String^ horaI = actividades1[i]->devolverHoraInicio()->ToString();
				String^ horaF = actividades1[i]->devolverHoraFin()->ToString();
				String^ de = actividades1[i]->devolverDescripcion()->ToString();
				String^ pri = actividades1[i]->devolverPrioridad()->ToString();
				respuesta += horaI + "-" + horaF + "-" + de + "-" + pri;
			}
			array <String^>^ exportar = respuesta->Split('-');
			for each (String^ var in exportar)
			{
				nuevo->WriteLine(var);
			}
			txtExportarAgenda->Text = "";
		}
}
		//Busca un evento por palabras clave.
	private: System::Void BtnBuscarEvento_Click(System::Object^ sender, System::EventArgs^ e) {

		if (cBoxBuscarEvento->Text == "" || txtBuscar->Text == "")
		{
			System::Windows::Forms::MessageBox::Show("ERROR: ¡Elija una opción!");
		}
		else
		{
			if (cBoxBuscarEvento->Text != "" && txtBuscar->Text != "")
			{
				if (cBoxBuscarEvento->Text == "Identificador")
				{
					String^ identificadorBuscar = txtBuscar->Text->ToString();
					//Actividades
					String^ actividades = "";
					bool encontradoEnActividades;
					int conActividades = 0;
					//
					if (actividades1 != nullptr)
					{
						for (int i = 0; i < actividades1->Length; i++)
						{
							if (identificadorBuscar == actividades1[i]->devolverIdentificador())
							{
								conActividades++;
								encontradoEnActividades = true;
							}
						}
						if (encontradoEnActividades == true)
						{
							array <int^>^ buscarAc = gcnew array <int^>(conActividades);
							for (int i = 0; i < actividades1->Length; i++)
							{
								if (identificadorBuscar == actividades1[i]->devolverIdentificador())
								{
									buscarAc[i] = i;
								}
							}
							for (int i = 0; i < conActividades; i++)
							{
								String^ valoresA = buscarAc[i]->ToString();
								int ValoresA = Int32::Parse(valoresA);
								String^ horaIn = actividades1[ValoresA]->devolverHoraInicio();
								String^ horaFi = actividades1[ValoresA]->devolverHoraFin();
								String^ lugar = actividades1[ValoresA]->devolverLugar();
								String^ desc = actividades1[ValoresA]->devolverDescripcion();
								String^ pers = actividades1[ValoresA]->devolverPersonas();
								String^ mat = actividades1[ValoresA]->devolverMateriales();
								String^ prio = actividades1[ValoresA]->devolverPrioridad();
								String^ iden = actividades1[ValoresA]->devolverIdentificador();
								actividades += "Hora de inicio: " + horaIn + ". Hora de fin: " + horaFi + ". Lugar: " + lugar + ". Descripción: " + desc + ". Personas: " + pers + ". Materiales: " + mat + ". Prioridad: " + prio + ". Identificador: " + iden + "  ---  ";
							}
							actividades = "Actividad: " + actividades;
							//txtEventos->Text = actividades;
						}
					}		
					if (encontradoEnActividades == false)
					{
						if (recordatorios1 != nullptr)
						{
							for (int i = 0; i < recordatorios1->Length; i++)
							{
								if (identificadorBuscar == recordatorios1[i]->devolverIdentificador())
								{
									conActividades++;
									encontradoEnActividades = true;
								}
							}
							if (encontradoEnActividades == true)
							{
								array <int^>^ buscarAc = gcnew array <int^>(conActividades);
								for (int i = 0; i < recordatorios1->Length; i++)
								{
									if (identificadorBuscar == recordatorios1[i]->devolverIdentificador())
									{
										buscarAc[i] = i;
									}
								}
								for (int i = 0; i < conActividades; i++)
								{
									String^ valoresA = buscarAc[i]->ToString();
									int ValoresA = Int32::Parse(valoresA);
									String^ hoL = recordatorios1[ValoresA]->devolverHoraLímite();
									String^ prio = recordatorios1[ValoresA]->devolverPrioridad();
									String^ ide = recordatorios1[ValoresA]->devolverIdentificador();
									String^ des = recordatorios1[ValoresA]->devolverDescripcion();
									actividades += "Hora límite: " + hoL + ". Prioridad: " + prio + ". Identificador: " + ide + ". Descripción: " + des + "  ---  ";
								}
								actividades = "Recordatorio: " + actividades;
								//txtEventos->Text = actividades;
							}
						}
					}
					if (encontradoEnActividades == false)
					{
						if (alarmas1 != nullptr)
						{
							for (int i = 0; i < alarmas1->Length; i++)
							{
								if (identificadorBuscar == alarmas1[i]->devolverID())
								{
									conActividades++;
									encontradoEnActividades = true;
								}
							}
							if (encontradoEnActividades == true)
							{
								array <int^>^ buscarAc = gcnew array <int^>(conActividades);
								for (int i = 0; i < alarmas1->Length; i++)
								{
									if (identificadorBuscar == alarmas1[i]->devolverID())
									{
										buscarAc[i] = i;
									}
								}
								for (int i = 0; i < conActividades; i++)
								{
									String^ valoresA = buscarAc[i]->ToString();
									int ValoresA = Int32::Parse(valoresA);
									String^ hora = alarmas1[ValoresA]->devolverHora();
									String^ prio = alarmas1[ValoresA]->devolverPrioridad();
									String^ ID = alarmas1[ValoresA]->devolverID();
									String^ Des = alarmas1[ValoresA]->devolverDescripcion();
									actividades += "Hora : " + hora + ". Prioridad: " + prio + ". ID: " + ID + ". Descripción: " + Des + "  ---  ";
								}
								actividades = "Alarma: " + actividades;
								//txtEventos->Text = actividades;
							}
						}
					}		
					//
					if (encontradoEnActividades == true)
					{
						txtEventos->Text = actividades;
					}
					else
					{
						txtEventos->Text = "No se encontró ningún evento con este Identificador...";
					}
					if (actividades1 == nullptr && recordatorios1 == nullptr && alarmas1 == nullptr)
					{
						System::Windows::Forms::MessageBox::Show("¡No hay ningun evento agregado!");
					}
					cBoxBuscarEvento->Text = "";
					txtBuscar->Text = "";		
				}
				if (cBoxBuscarEvento->Text == "Fecha")
				{
					String^ identificadorBuscar = txtBuscar->Text->ToString();
					//Actividades
					String^ actividades = "";
					bool encontradoEnActividades;
					bool encontradoEnRecordatorios;
					bool encontradoEnAlarmas;
					int conActividades = 0;
					int conRecordatorios = 0;
					int conAlarmas = 0;
					//
					if (actividades1 != nullptr)
					{
						for (int i = 0; i < actividades1->Length; i++)
						{
							if (identificadorBuscar == actividades1[i]->devolverClave())
							{
								conActividades++;
								encontradoEnActividades = true;
							}
						}
						if (encontradoEnActividades == true)
						{
							array <int^>^ buscarAc = gcnew array <int^>(conActividades);
							for (int i = 0; i < actividades1->Length; i++)
							{
								if (identificadorBuscar == actividades1[i]->devolverClave())
								{
									buscarAc[i] = i;
								}
							}
							for (int i = 0; i < conActividades; i++)
							{
								String^ valoresA = buscarAc[i]->ToString();
								int ValoresA = Int32::Parse(valoresA);
								String^ horaIn = actividades1[ValoresA]->devolverHoraInicio();
								String^ horaFi = actividades1[ValoresA]->devolverHoraFin();
								String^ lugar = actividades1[ValoresA]->devolverLugar();
								String^ desc = actividades1[ValoresA]->devolverDescripcion();
								String^ pers = actividades1[ValoresA]->devolverPersonas();
								String^ mat = actividades1[ValoresA]->devolverMateriales();
								String^ prio = actividades1[ValoresA]->devolverPrioridad();
								String^ iden = actividades1[ValoresA]->devolverIdentificador();
								actividades += "Hora de inicio: " + horaIn + ". Hora de fin: " + horaFi + ". Lugar: " + lugar + ". Descripción: " + desc + ". Personas: " + pers + ". Materiales: " + mat + ". Prioridad: " + prio + ". Identificador: " + iden + "  ---  ";
							}
							actividades = "Actividad: " + actividades;
							//txtEventos->Text = actividades;
						}
					}
					if (recordatorios1 != nullptr)
					{
						for (int i = 0; i < recordatorios1->Length; i++)
						{
							if (identificadorBuscar == recordatorios1[i]->devolverClave())
							{
								conRecordatorios++;
								encontradoEnRecordatorios = true;
							}
						}
						if (encontradoEnRecordatorios == true)
						{
							array <int^>^ buscarRe = gcnew array <int^>(conRecordatorios);
							for (int i = 0; i < recordatorios1->Length; i++)
							{
								if (identificadorBuscar == recordatorios1[i]->devolverClave())
								{
									buscarRe[i] = i;
								}
							}
							for (int i = 0; i < conRecordatorios; i++)
							{
								String^ valoresA = buscarRe[i]->ToString();
								int ValoresA = Int32::Parse(valoresA);
								String^ hoL = recordatorios1[ValoresA]->devolverHoraLímite();
								String^ prio = recordatorios1[ValoresA]->devolverPrioridad();
								String^ ide = recordatorios1[ValoresA]->devolverIdentificador();
								String^ des = recordatorios1[ValoresA]->devolverDescripcion();
								actividades += "Hora límite: " + hoL + ". Prioridad: " + prio + ". Identificador: " + ide + ". Descripción: " + des + "  ---  ";
							}
							actividades = "Recordatorio: " + actividades;
							//txtEventos->Text = actividades;
						}
					}
					if (alarmas1 != nullptr)
					{
						for (int i = 0; i < alarmas1->Length; i++)
						{
							if (identificadorBuscar == alarmas1[i]->devolverClave())
							{
								conAlarmas++;
								encontradoEnAlarmas = true;
							}
						}
						if (encontradoEnAlarmas == true)
						{
							array <int^>^ buscarAl = gcnew array <int^>(conAlarmas);
							for (int i = 0; i < alarmas1->Length; i++)
							{
								if (identificadorBuscar == alarmas1[i]->devolverClave())
								{
									buscarAl[i] = i;
								}
							}
							for (int i = 0; i < conAlarmas; i++)
							{
								String^ valoresA = buscarAl[i]->ToString();
								int ValoresA = Int32::Parse(valoresA);
								String^ hora = alarmas1[ValoresA]->devolverHora();
								String^ prio = alarmas1[ValoresA]->devolverPrioridad();
								String^ ID = alarmas1[ValoresA]->devolverID();
								String^ Des = alarmas1[ValoresA]->devolverDescripcion();
								actividades += "Hora : " + hora + ". Prioridad: " + prio + ". ID: " + ID + ". Descripción: " + Des + "  ---  ";
							}
							actividades = "Alarma: " + actividades;
							//txtEventos->Text = actividades;
						}
					}
					//
					if (encontradoEnActividades == true || encontradoEnRecordatorios == true || encontradoEnAlarmas == true)
					{
						txtEventos->Text = actividades;
					}
					else
					{
						txtEventos->Text = "No se encontró ningún evento con esta Fecha...";
					}
					if (actividades1 == nullptr && recordatorios1 == nullptr && alarmas1 == nullptr)
					{
						System::Windows::Forms::MessageBox::Show("¡No hay ningun evento agregado!");
					}
					cBoxBuscarEvento->Text = "";
					txtBuscar->Text = "";
				}
				if (cBoxBuscarEvento->Text == "Palabras")
				{
					String^ identificadorBuscar = txtBuscar->Text->ToString();
					//Actividades
					String^ actividades = "";
					bool datoEncontrado;
					int posi = 0;
					//
					if (actividades1 != nullptr)
					{
						for (int i = 0; i < actividades1->Length; i++)
						{
							if (actividades1[i]->devolverDescripcion()->Contains(identificadorBuscar) == true)
							{
								posi = i;
								datoEncontrado = true;
							}
						}
						if (datoEncontrado == true)
						{
							String^ horaIn = actividades1[posi]->devolverHoraInicio();
							String^ horaFi = actividades1[posi]->devolverHoraFin();
							String^ lugar = actividades1[posi]->devolverLugar();
							String^ desc = actividades1[posi]->devolverDescripcion();
							String^ pers = actividades1[posi]->devolverPersonas();
							String^ mat = actividades1[posi]->devolverMateriales();
							String^ prio = actividades1[posi]->devolverPrioridad();
							String^ iden = actividades1[posi]->devolverIdentificador();
							actividades += "Hora de inicio: " + horaIn + ". Hora de fin: " + horaFi + ". Lugar: " + lugar + ". Descripción: " + desc + ". Personas: " + pers + ". Materiales: " + mat + ". Prioridad: " + prio + ". Identificador: " + iden + "  ---  ";		
							actividades = "Actividad: " + actividades;
							txtEventos->Text = actividades;
						}
					}
					if (recordatorios1 != nullptr)
					{
						for (int i = 0; i < recordatorios1->Length; i++)
						{
							if (recordatorios1[i]->devolverDescripcion()->Contains(identificadorBuscar) == true)
							{
								posi = i;
								datoEncontrado = true;
							}
						}
						if (datoEncontrado == true)
						{
							String^ hoL = recordatorios1[posi]->devolverHoraLímite();
							String^ prio = recordatorios1[posi]->devolverPrioridad();
							String^ ide = recordatorios1[posi]->devolverIdentificador();
							String^ des = recordatorios1[posi]->devolverDescripcion();
							actividades += "Hora límite: " + hoL + ". Prioridad: " + prio + ". Identificador: " + ide + ". Descripción: " + des + "  ---  ";						
							actividades = "Recordatorio: " + actividades;
							txtEventos->Text = actividades;
						}
					}
					if (alarmas1 != nullptr)
					{
						for (int i = 0; i < alarmas1->Length; i++)
						{
							if (alarmas1[i]->devolverDescripcion()->Contains(identificadorBuscar) == true)
							{
								posi = i;
								datoEncontrado = true;
							}
						}
						if (datoEncontrado == true)
						{
							String^ hora = alarmas1[posi]->devolverHora();
							String^ prio = alarmas1[posi]->devolverPrioridad();
							String^ ID = alarmas1[posi]->devolverID();
							String^ Des = alarmas1[posi]->devolverDescripcion();
							actividades += "Hora : " + hora + ". Prioridad: " + prio + ". ID: " + ID + ". Descripción: " + Des + "  ---  ";
							actividades = "Alarma: " + actividades;
							txtEventos->Text = actividades;
						}
					}
					//
					if (datoEncontrado == false)
					{
						txtEventos->Text = "No se encontró ningún evento con esta descripción...";
					}
					if (actividades1 == nullptr && recordatorios1 == nullptr && alarmas1 == nullptr)
					{
						System::Windows::Forms::MessageBox::Show("¡No hay ningun evento agregado!");
					}
					cBoxBuscarEvento->Text = "";
					txtBuscar->Text = "";
				}
			}
		}	
}
};
}
