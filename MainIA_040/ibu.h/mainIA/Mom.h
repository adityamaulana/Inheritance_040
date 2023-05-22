#ifndef MOM_H
#define MOM_H


class Mom
{
public:
	string Name;
	vector<Kids*> Kids_list;

	Mom(string pName) :Name(pName)
	{
		cout << "Mom \"" << Name << "\" Available\n";
	}

	~Mom()
	{
		cout << "Mom \"" << Name << "\" Not Available\n";
	}

	void addKid(Kids*);
	void printKid();
};

void Mom::addKid(Kids* pKid)
{
	Kids_list.push_back(pKid);
}

void Mom::printKid()
{
	cout << "Kids List from a Mother \"" << this->Name << "\":n";
	for (auto& a : Kids_list)
	{
		cout << a->Name << "\n";
	}

	cout << endl;
}

#endif
