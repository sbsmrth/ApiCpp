#include "Person.h"
using namespace System;
using namespace System::Windows::Forms;
 [STAThread]

 void main(array<String^>^ args) {
	 Application::EnableVisualStyles();
	 Application::SetCompatibleTextRenderingDefault(false);
	 PeopleProject::Person form;
	 Application::Run(% form);
}

