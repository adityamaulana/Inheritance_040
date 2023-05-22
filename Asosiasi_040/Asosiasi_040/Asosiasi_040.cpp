#include <iostream>
#include <vector>

using namespace std;

class Doctor;
class Patient
{
public:
	string Name;
	vector<Doctor*> Doctor_list;
	Patient(string pName) :Name(pName)
	{
		cout << "Patient \"" << Name << "\" Not Available\n";
	}

	void addDoctor(Doctor*);
	void printDoctor();
};

class Doctor
{
public:
	string Name;
	vector<Patient*> Patient_list;

	Doctor(string pName) :Name(pName)
	{
		cout << "Doctor \"" << Name << "\" Available\n";
	}

	~Doctor()
	{
		cout << "Doctor \"" << Name << "\" Not Available\n";
	}

	~Doctor()
	{
		cout << "Doctor \"" << Name << "\" Not Available\n";
	}

	void addPatient(Patient*);
	void printPatient();
};