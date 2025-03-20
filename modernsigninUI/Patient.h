#pragma once

using namespace System;

public ref class Patient {
public:
	int id;
	String^ firstName;
	String^ lastName;
	String^ gender;
	String^ dateofBirth;
	String^ phoneNumber;
	String^ email;
	String^ password;
};