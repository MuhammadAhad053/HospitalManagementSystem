#pragma once
#include "Person.h"

public ref class Doctor : public Person {
public:
	String^ department;
	String^ specialization;
	int experienceYears;
};