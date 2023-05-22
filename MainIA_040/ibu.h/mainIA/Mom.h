#ifndef MOM_H
#define MOM_H


class Mom
{
public:
	string Name;
	vector<kid*> Kids_list;

	Mom(string pName) :Name(pName)
	{
		cout << "Mom \"" << Name << "\" Available\n";
	}

	~Mom()
	{
		cout << "Mom \"" << Name << "\" Not Available\n";
	}

	void addKid(Kid*);
	void printKid();
};
