#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
int main(){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);
	return 0;
}



