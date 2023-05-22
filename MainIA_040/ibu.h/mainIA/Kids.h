#ifndef KIDS_H
#define KIDS_H

class Kids
{
public:
	string Name;
	Kids(string pName) :Name(pName)
	{
		cout << " Kids \ "" << Name "\" Available\n";
	}

	~Kids()
	{
		cout << "Kids \"" << Name << "\" Not Available\n";
	}
};


#endif // !KIDS_H
