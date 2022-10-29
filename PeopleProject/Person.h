#pragma once
#include "Connection.h"

namespace PeopleProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Person
	/// </summary>
	public ref class Person : public System::Windows::Forms::Form
	{
	public:
		Person(void)
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
		~Person()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ name;
	protected:




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ fLastname;
	private: System::Windows::Forms::TextBox^ sLastname;
	private: System::Windows::Forms::DateTimePicker^ birthday;




	protected:

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
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->fLastname = (gcnew System::Windows::Forms::TextBox());
			this->sLastname = (gcnew System::Windows::Forms::TextBox());
			this->birthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(230, 69);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(179, 20);
			this->name->TabIndex = 0;
			this->name->TextChanged += gcnew System::EventHandler(this, &Person::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(305, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nombre";
			this->label1->Click += gcnew System::EventHandler(this, &Person::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(285, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Primer Apellido";
			this->label2->Click += gcnew System::EventHandler(this, &Person::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(285, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Segundo Apellido";
			this->label3->Click += gcnew System::EventHandler(this, &Person::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(282, 232);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Fecha Nacimiento";
			this->label4->Click += gcnew System::EventHandler(this, &Person::label4_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->button1->Location = System::Drawing::Point(285, 297);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 25);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Enviar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Person::button1_Click);
			// 
			// fLastname
			// 
			this->fLastname->Location = System::Drawing::Point(230, 135);
			this->fLastname->Name = L"fLastname";
			this->fLastname->Size = System::Drawing::Size(179, 20);
			this->fLastname->TabIndex = 9;
			// 
			// sLastname
			// 
			this->sLastname->Location = System::Drawing::Point(230, 196);
			this->sLastname->Name = L"sLastname";
			this->sLastname->Size = System::Drawing::Size(179, 20);
			this->sLastname->TabIndex = 10;
			// 
			// birthday
			// 
			this->birthday->Location = System::Drawing::Point(230, 258);
			this->birthday->Name = L"birthday";
			this->birthday->Size = System::Drawing::Size(179, 20);
			this->birthday->TabIndex = 12;
			// 
			// Person
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 365);
			this->Controls->Add(this->birthday);
			this->Controls->Add(this->sLastname);
			this->Controls->Add(this->fLastname);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->name);
			this->Name = L"Person";
			this->Text = L"Person";
			this->Load += gcnew System::EventHandler(this, &Person::Person_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Person_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Connection cnction;

	cnction.Insert(name->Text, fLastname->Text, sLastname->Text, birthday->Value);
}
};
}
