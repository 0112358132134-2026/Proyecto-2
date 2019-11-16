#pragma once
#include "PilaActividades.h"
//#include "Agenda.h"
namespace Proyecto2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Actividades
	/// </summary>
	public ref class Actividades : public System::Windows::Forms::Form
	{
	public:
		static String^ texto1 = "";
	//public:
		//static int contadorActividades1 = 1;
		//static int contadorActividades2 = 1;
	public:
		static array <PilaActividades^>^ actividades1;
		static array <PilaActividades^>^ actividades2;
	

	public:
		Actividades(void)
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
		~Actividades()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ lblLugarActiviadedes;
	private: System::Windows::Forms::Label^ lblDescripcionActividades;
	private: System::Windows::Forms::Label^ lblHoraFinalActividades;
	private: System::Windows::Forms::Label^ lblHoraInicioActividades;
	private: System::Windows::Forms::TextBox^ txtDescripcionActividades;

	private: System::Windows::Forms::TextBox^ txtLugarActividades;

	private: System::Windows::Forms::TextBox^ txtHoraFinActividades;

	private: System::Windows::Forms::TextBox^ txtHoraInicioActividades;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ btnTerminar;
	private: System::Windows::Forms::ComboBox^ cBoxPrioriedadActividades;

	private: System::Windows::Forms::Label^ lblIdentiActividades;
	private: System::Windows::Forms::TextBox^ txtIdentiActividades;

	private: System::Windows::Forms::Label^ lblPrioriedadActividades;
	private: System::Windows::Forms::Label^ lblMaterialesActividades;
	private: System::Windows::Forms::TextBox^ txtMaterialesActividades;

	private: System::Windows::Forms::Label^ lblPersonasActividades;
	private: System::Windows::Forms::TextBox^ txtPersonasActividades;
	private: System::Windows::Forms::Button^ btnConfirmarActividad;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->lblLugarActiviadedes = (gcnew System::Windows::Forms::Label());
			this->lblDescripcionActividades = (gcnew System::Windows::Forms::Label());
			this->lblHoraFinalActividades = (gcnew System::Windows::Forms::Label());
			this->lblHoraInicioActividades = (gcnew System::Windows::Forms::Label());
			this->txtDescripcionActividades = (gcnew System::Windows::Forms::TextBox());
			this->txtLugarActividades = (gcnew System::Windows::Forms::TextBox());
			this->txtHoraFinActividades = (gcnew System::Windows::Forms::TextBox());
			this->txtHoraInicioActividades = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->btnTerminar = (gcnew System::Windows::Forms::Button());
			this->lblPersonasActividades = (gcnew System::Windows::Forms::Label());
			this->txtPersonasActividades = (gcnew System::Windows::Forms::TextBox());
			this->lblMaterialesActividades = (gcnew System::Windows::Forms::Label());
			this->txtMaterialesActividades = (gcnew System::Windows::Forms::TextBox());
			this->lblPrioriedadActividades = (gcnew System::Windows::Forms::Label());
			this->lblIdentiActividades = (gcnew System::Windows::Forms::Label());
			this->txtIdentiActividades = (gcnew System::Windows::Forms::TextBox());
			this->cBoxPrioriedadActividades = (gcnew System::Windows::Forms::ComboBox());
			this->btnConfirmarActividad = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(33, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(668, 304);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
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
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(660, 278);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Actividades";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// lblLugarActiviadedes
			// 
			this->lblLugarActiviadedes->AutoSize = true;
			this->lblLugarActiviadedes->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLugarActiviadedes->Location = System::Drawing::Point(26, 113);
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
			this->lblDescripcionActividades->Location = System::Drawing::Point(26, 162);
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
			this->lblHoraFinalActividades->Location = System::Drawing::Point(26, 79);
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
			this->lblHoraInicioActividades->Location = System::Drawing::Point(26, 42);
			this->lblHoraInicioActividades->Name = L"lblHoraInicioActividades";
			this->lblHoraInicioActividades->Size = System::Drawing::Size(101, 18);
			this->lblHoraInicioActividades->TabIndex = 4;
			this->lblHoraInicioActividades->Text = L"Hora de Inicio:";
			// 
			// txtDescripcionActividades
			// 
			this->txtDescripcionActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtDescripcionActividades->Location = System::Drawing::Point(149, 154);
			this->txtDescripcionActividades->Multiline = true;
			this->txtDescripcionActividades->Name = L"txtDescripcionActividades";
			this->txtDescripcionActividades->Size = System::Drawing::Size(150, 91);
			this->txtDescripcionActividades->TabIndex = 3;
			// 
			// txtLugarActividades
			// 
			this->txtLugarActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLugarActividades->Location = System::Drawing::Point(149, 113);
			this->txtLugarActividades->Name = L"txtLugarActividades";
			this->txtLugarActividades->Size = System::Drawing::Size(150, 26);
			this->txtLugarActividades->TabIndex = 2;
			// 
			// txtHoraFinActividades
			// 
			this->txtHoraFinActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtHoraFinActividades->Location = System::Drawing::Point(149, 71);
			this->txtHoraFinActividades->Name = L"txtHoraFinActividades";
			this->txtHoraFinActividades->Size = System::Drawing::Size(150, 26);
			this->txtHoraFinActividades->TabIndex = 1;
			// 
			// txtHoraInicioActividades
			// 
			this->txtHoraInicioActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtHoraInicioActividades->Location = System::Drawing::Point(149, 34);
			this->txtHoraInicioActividades->Name = L"txtHoraInicioActividades";
			this->txtHoraInicioActividades->Size = System::Drawing::Size(150, 26);
			this->txtHoraInicioActividades->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(660, 278);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Recordatorios";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(660, 278);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Alarmas";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// btnTerminar
			// 
			this->btnTerminar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTerminar->Location = System::Drawing::Point(315, 322);
			this->btnTerminar->Name = L"btnTerminar";
			this->btnTerminar->Size = System::Drawing::Size(88, 32);
			this->btnTerminar->TabIndex = 1;
			this->btnTerminar->Text = L"Terminar";
			this->btnTerminar->UseVisualStyleBackColor = true;
			this->btnTerminar->Click += gcnew System::EventHandler(this, &Actividades::BtnTerminar_Click);
			// 
			// lblPersonasActividades
			// 
			this->lblPersonasActividades->AutoSize = true;
			this->lblPersonasActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPersonasActividades->Location = System::Drawing::Point(315, 40);
			this->lblPersonasActividades->Name = L"lblPersonasActividades";
			this->lblPersonasActividades->Size = System::Drawing::Size(148, 18);
			this->lblPersonasActividades->TabIndex = 9;
			this->lblPersonasActividades->Text = L"Personas Involucradas:";
			// 
			// txtPersonasActividades
			// 
			this->txtPersonasActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPersonasActividades->Location = System::Drawing::Point(479, 34);
			this->txtPersonasActividades->Name = L"txtPersonasActividades";
			this->txtPersonasActividades->Size = System::Drawing::Size(150, 26);
			this->txtPersonasActividades->TabIndex = 8;
			// 
			// lblMaterialesActividades
			// 
			this->lblMaterialesActividades->AutoSize = true;
			this->lblMaterialesActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblMaterialesActividades->Location = System::Drawing::Point(315, 77);
			this->lblMaterialesActividades->Name = L"lblMaterialesActividades";
			this->lblMaterialesActividades->Size = System::Drawing::Size(147, 18);
			this->lblMaterialesActividades->TabIndex = 11;
			this->lblMaterialesActividades->Text = L"Materiales a necesitar:";
			// 
			// txtMaterialesActividades
			// 
			this->txtMaterialesActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtMaterialesActividades->Location = System::Drawing::Point(479, 71);
			this->txtMaterialesActividades->Name = L"txtMaterialesActividades";
			this->txtMaterialesActividades->Size = System::Drawing::Size(150, 26);
			this->txtMaterialesActividades->TabIndex = 10;
			// 
			// lblPrioriedadActividades
			// 
			this->lblPrioriedadActividades->AutoSize = true;
			this->lblPrioriedadActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblPrioriedadActividades->Location = System::Drawing::Point(315, 119);
			this->lblPrioriedadActividades->Name = L"lblPrioriedadActividades";
			this->lblPrioriedadActividades->Size = System::Drawing::Size(69, 18);
			this->lblPrioriedadActividades->TabIndex = 13;
			this->lblPrioriedadActividades->Text = L"Prioridad:";
			// 
			// lblIdentiActividades
			// 
			this->lblIdentiActividades->AutoSize = true;
			this->lblIdentiActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIdentiActividades->Location = System::Drawing::Point(315, 160);
			this->lblIdentiActividades->Name = L"lblIdentiActividades";
			this->lblIdentiActividades->Size = System::Drawing::Size(103, 18);
			this->lblIdentiActividades->TabIndex = 15;
			this->lblIdentiActividades->Text = L"Indentificador:";
			// 
			// txtIdentiActividades
			// 
			this->txtIdentiActividades->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIdentiActividades->Location = System::Drawing::Point(479, 154);
			this->txtIdentiActividades->Name = L"txtIdentiActividades";
			this->txtIdentiActividades->Size = System::Drawing::Size(150, 26);
			this->txtIdentiActividades->TabIndex = 14;
			// 
			// cBoxPrioriedadActividades
			// 
			this->cBoxPrioriedadActividades->FormattingEnabled = true;
			this->cBoxPrioriedadActividades->Location = System::Drawing::Point(479, 113);
			this->cBoxPrioriedadActividades->Name = L"cBoxPrioriedadActividades";
			this->cBoxPrioriedadActividades->Size = System::Drawing::Size(150, 21);
			this->cBoxPrioriedadActividades->TabIndex = 16;
			// 
			// btnConfirmarActividad
			// 
			this->btnConfirmarActividad->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfirmarActividad->Location = System::Drawing::Point(479, 203);
			this->btnConfirmarActividad->Name = L"btnConfirmarActividad";
			this->btnConfirmarActividad->Size = System::Drawing::Size(150, 33);
			this->btnConfirmarActividad->TabIndex = 17;
			this->btnConfirmarActividad->Text = L"Agregar Actividad";
			this->btnConfirmarActividad->UseVisualStyleBackColor = true;
			this->btnConfirmarActividad->Click += gcnew System::EventHandler(this, &Actividades::BtnConfirmarActividad_Click);
			// 
			// Actividades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(722, 362);
			this->Controls->Add(this->btnTerminar);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Actividades";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Actividades";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//
		int contador0 = 0;
		int contadorActividades1 = 1;
		int contadorActividades2 = 1;
		//
private: System::Void BtnTerminar_Click(System::Object^ sender, System::EventArgs^ e) {
	//Cuando el usuario ya terminó de ingresar actividades.
	//this->Hide();
	//Proyecto2::Agenda objeto1;
	//objeto1.Show();
	//Agenda^ regresar = gcnew Agenda();
	//regresar->Show();
}
private: System::Void BtnConfirmarActividad_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (txtHoraInicioActividades->Text == "" || txtHoraFinActividades->Text == "" || txtLugarActividades->Text == "" || txtDescripcionActividades->Text =="" || txtDescripcionActividades->Text == "" || txtMaterialesActividades->Text == "" || cBoxPrioriedadActividades->Text == "" || txtIdentiActividades->Text == "")
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
		String^ lugar = txtLugarActividades->Text->ToString();
		String^ descripcion = txtDescripcionActividades->Text->ToString();
		String^ personas = txtPersonasActividades->Text->ToString();
		String^ materiales = txtMaterialesActividades->Text->ToString();
		String^ prioridad = cBoxPrioriedadActividades->Text->ToString();
		int clave = 0;
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
	}	
}
};
}
