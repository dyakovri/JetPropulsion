#include "Window.h"
#include "Rocket.h"

namespace JetPropulsion {
	Rocket *R;

	System::Void Window::StartButton_Click(System::Object^  sender, System::EventArgs^  e) {
		StartButton->Enabled = false;
		//PauseButton->Enabled = true;
		StopButton->Enabled = true;

		rMass->Enabled = false;
		fMass->Enabled = false;
		pMass->Enabled = false;
		pRadius->Enabled = false;

		timer1->Enabled = true;

		HeightChart->Series["Series1"]->Points->Clear();
		VelocityChart->Series["Series1"]->Points->Clear();
		AccelChart->Series["Series1"]->Points->Clear();
		MassChart->Series["Series1"]->Points->Clear();

		R = new Rocket((double)pMass->Value, (double)pRadius->Value, (double)rMass->Value, (double)fMass->Value, (double)fVel->Value, (double)fCons->Value);
	}

	/*System::Void Window::PauseButton_Click(System::Object^  sender, System::EventArgs^  e) {
		StartButton->Enabled = !StartButton->Enabled;
		PauseButton->Enabled = !PauseButton->Enabled;

		timer1->Enabled = !timer1->Enabled;
	}*/

	System::Void Window::StopButton_Click(System::Object^  sender, System::EventArgs^  e) {
		StartButton->Enabled = true;
		//PauseButton->Enabled = false;
		StopButton->Enabled = false;

		rMass->Enabled = true;
		fMass->Enabled = true;
		pMass->Enabled = true;

		timer1->Enabled = false;

		delete R; R = 0;
	}

	System::Void Window::fCons_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		if (R != nullptr) R->fCons = (double)fCons->Value;
	}

	System::Void Window::fVel_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		if (R != nullptr) R->fVel = (double)fVel->Value;
	}

	System::Void Window::timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		R->Step((double)timer1->Interval / 1000.0);

		HeightChart->Series[R->get_V() > 0 ? "Series1" : "Series2"]->Points->AddXY(0.000001, R->get_h());
		VelocityChart->Series["Series1"]->Points->AddXY(R->get_t(), R->get_V());
		AccelChart->Series["Series1"]->Points->AddXY(R->get_t(), R->get_a());
		MassChart->Series["Series1"]->Points->AddXY(R->get_t(), R->get_m());

		if (R->get_h() < 0) StopButton_Click(timer1, e);
	}
}