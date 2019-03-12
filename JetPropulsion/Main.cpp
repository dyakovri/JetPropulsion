#include "Window.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void WinMain() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	JetPropulsion::Window wnd;
	Application::Run(%wnd);
}