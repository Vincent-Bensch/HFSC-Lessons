#include "UI-Interface.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	HFSCLessonSignup::StudentSearch form;
	Application::Run(%form);
}
