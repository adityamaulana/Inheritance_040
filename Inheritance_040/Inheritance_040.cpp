#include <iostream>
#include <string>

using namespace std;

class People 

{
public :
	string Name;

	People(string pName) :
		Name(pName) 
	{
		cout<<"People Made\n"<<endl;
	}

	~People()
	{
		cout<<"People Remove\n"<<endl;
	}
};