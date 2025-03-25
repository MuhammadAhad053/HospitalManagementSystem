#include "LoginForm.h"
#include "RegisterForm.h"
#include "Patient.h"
#include "PatientDashboard.h"
#include "DoctorDashboard.h"
#include "ReceptionistDashboard.h"
#include "AdminDashboard.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	Receptionist^ res1 = gcnew Receptionist;
	res1->id = 1;
	res1->firstName = "John";
	res1->lastName = "Doe";
	res1->gender = "male";
	res1->dateofBirth = "1999-01-01";
	res1->phoneNumber = "1234567890";
	res1->email = "aaaa";
	HospitalManagement::ReceptionistDashboard^receptionistDashboard = gcnew HospitalManagement::ReceptionistDashboard(res1);
	receptionistDashboard->ShowDialog();
}
//
//	Patient^ patient = nullptr;	
//
//	while (true) {
//		HospitalManagement::LoginForm loginForm;	
//		loginForm.ShowDialog();
//		if (loginForm.switchtoRegister) {
//			HospitalManagement::RegisterForm registerForm;
//			registerForm.ShowDialog();
//			if (registerForm.switchtoLogin) {
//				continue;
//			}
//			else {
//				patient = registerForm.patient;
//				break;
//			}
//		}
//		else {
//			patient = loginForm.patient;
//			break;
//		}
//	}
//}