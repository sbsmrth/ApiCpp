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
	private: System::Windows::Forms::Label^ label3;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ lastName;


	private: System::Windows::Forms::DateTimePicker^ birthday;
	private: System::Windows::Forms::Label^ label2;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Person::typeid));
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lastName = (gcnew System::Windows::Forms::TextBox());
			this->birthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(230, 78);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(179, 20);
			this->name->TabIndex = 0;
			this->name->TextChanged += gcnew System::EventHandler(this, &Person::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AccessibleDescription = L"";
			this->label1->AccessibleName = L"Tu nombre";
			this->label1->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(291, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nombre";
			this->label1->Click += gcnew System::EventHandler(this, &Person::label1_Click);
			// 
			// label3
			// 
			this->label3->AccessibleName = L"Tu fecha de nacimiento";
			this->label3->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(263, 207);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Fecha Nacimiento";
			this->label3->Click += gcnew System::EventHandler(this, &Person::label4_Click);
			// 
			// button1
			// 
			this->button1->AccessibleName = L"Enviar tu info";
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(285, 284);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 28);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Enviar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Person::button1_Click);
			// 
			// lastName
			// 
			this->lastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->lastName->Location = System::Drawing::Point(230, 159);
			this->lastName->Name = L"lastName";
			this->lastName->Size = System::Drawing::Size(179, 20);
			this->lastName->TabIndex = 9;
			// 
			// birthday
			// 
			this->birthday->CalendarTrailingForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->birthday->Location = System::Drawing::Point(230, 237);
			this->birthday->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->birthday->Name = L"birthday";
			this->birthday->Size = System::Drawing::Size(179, 20);
			this->birthday->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AccessibleName = L"Tu apellido";
			this->label2->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(292, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 17);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Apellido";
			this->label2->Click += gcnew System::EventHandler(this, &Person::label5_Click);
			// 
			// Person
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(665, 368);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->birthday);
			this->Controls->Add(this->lastName);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
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
	Connection connection;

	connection.Insert(name->Text, lastName->Text, birthday->Value);
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
