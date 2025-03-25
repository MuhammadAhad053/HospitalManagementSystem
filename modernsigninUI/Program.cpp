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


	Doctor^ doc1 = gcnew Doctor;
	doc1->firstName = "John";
	doc1->lastName = "Doe";
	doc1->gender = "male";
	doc1->dateofBirth = "1990-01-01";
	doc1->phoneNumber = "1234567890";
	doc1->email = "random@gmail.com";
	doc1->department = "Cardiology";
	doc1->specialization = "Heart";
	doc1->experienceYears = 5;
	HospitalManagement::DoctorDashboard^doctorDashboard = gcnew HospitalManagement::DoctorDashboard(doc1);
	doctorDashboard->ShowDialog();
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