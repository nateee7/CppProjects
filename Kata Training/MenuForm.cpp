#include "MenuForm.h"
#include <windows.h>

using namespace System;
using namespace System::Windows::Forms;

void main_form(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    KataTraining::MenuForm form;
    Application::Run(% form);
    //ShowWindow(GetConsoleWindow(), SW_HIDE);
}