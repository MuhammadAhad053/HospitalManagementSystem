#include "LoginForm.h"
#include "RegisterForm.h"
#include "Patient.h"
#include "Wallet.h"
#include "PatientDashboard.h"
#include "DoctorDashboard.h"
#include "ReceptionistDashboard.h"
#include "AdminDashboard.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	/*Patient^ patient1 = gcnew Patient;
	patient1->id = 1;
	patient1->firstName = "Admin";
	patient1->lastName = "Admin";
	patient1->phoneNumber = "1234567890";
	patient1->dateofBirth = "1999-01-01";
	patient1->gender = "male";
	patient1->email = "admin@gmail.com";
	HospitalManagement::PatientDashboard^ patientDashboard = gcnew HospitalManagement::PatientDashboard(patient1);
	patientDashboard->ShowDialog();
*/

	//HospitalManagement::Wallet^ w1 = gcnew HospitalManagement::Wallet();

	//w1->ShowDialog();




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