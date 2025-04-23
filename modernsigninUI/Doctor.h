#pragma once
#include "Person.h"

public ref class Doctor : public Person {
public:
	String^ department;
	String^ specialization;
	int experienceYears;
	String^ mon;
	String^ tue; 
	String^ wed;
	String^ thur;
	String^ fri;
	String^ sat;
	String^ sun;
};