#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main() 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	// Create the UI
	HeadsetConfigurator::MyForm form;
	
	Application::Run(%form);
	
}
