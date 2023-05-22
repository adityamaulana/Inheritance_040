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
		cout << "Patient \"" << Name << "\" Empty\n";
	}

	void addDoctor(Doctor*);
	void printDoctor();
};