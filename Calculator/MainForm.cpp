#include "MainForm.h"
#include <iostream>
#include "windows.h"
#include <string>


using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    VyatsuCalculatorlab::MainForm form;
    Application::Run(% form);
}