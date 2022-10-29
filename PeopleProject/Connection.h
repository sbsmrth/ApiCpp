#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class Connection
{

public:

	Connection();

	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;

	void Connect() {
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "LAPTOP-O37O867Q";
		st->InitialCatalog = "DB";
		st->IntegratedSecurity = true;

		cn = gcnew SqlConnection(Convert::ToString(st));
	}

public: 
	
	void Insert(String^ name, String^ lastName,  DateTime birth) {
		try {
			Connect();
			String^ sentence = "Insert into Personas values(@nm, @lastNm, @brth)";
			SqlCommand^ execute = gcnew SqlCommand(sentence, cn);

			execute->Parameters->AddWithValue("@nm", name);
			execute->Parameters->AddWithValue("@lastNm", lastName);
			execute->Parameters->AddWithValue("@brth", birth);

			cn->Open();
			
			execute->ExecuteNonQuery();
		}
		finally {
			if (cn != nullptr) {
				cn->Close();
			}
		}
	}
};

 