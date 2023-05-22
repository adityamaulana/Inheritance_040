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

	void addKids();
	void printKids();
};

void Mom::addKids(Kids* pKids)
{
	Kids_list.push_back(pKids);
}

void Mom::printKids()
{
	cout << "Kids List from a Mother \"" << this->Name << "\":n";
	for (auto& a : Kids_list)
	{
		cout << a->Name << "\n";
	}

	cout << endl;
}

#endif
