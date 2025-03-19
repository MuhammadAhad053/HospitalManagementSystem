#include "LoginForm.h"
#include "RegisterForm.h"
#include "Patient.h"
#include "PatientDashboard.h"
#include "DoctorDashboard.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Patient^ patient = nullptr;

	while (true) {
		HospitalManagement::LoginForm loginForm;	
		loginForm.ShowDialog();
		if (loginForm.switchtoRegister) {
			HospitalManagement::RegisterForm registerForm;
			registerForm.ShowDialog();
			if (registerForm.switchtoLogin) {
				continue;
			}
			else {
				patient = registerForm.patient;
				break;
			}
		}
		else {
			patient = loginForm.patient;
			break;
		}
	}
}