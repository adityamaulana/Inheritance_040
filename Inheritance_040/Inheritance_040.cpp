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
		cout<<"People Make\n"<<endl;
	}

	~People()
	{
		cout<<"People Remove\n"<<endl;
	}

	int Total (int a, int b)
	{
		return a + b;
	}
};



class Student : public People
{
	public:
		string School;

		Student(string pName, string pSchool) :
			People(pName),
			School(pSchool)
		{
			cout<<"Student Make\n"<<endl;
		}

		~Student()
		{
			cout<<"Student Remove\n"<<endl;
		}

		string Intro()
		{
			return "Holla, Je sui Vincent " + Name + " From LBS" + School + "\n\n";
		}
};

int main()
{
	Student Dummy1("Coki Pardede", "Gunadharma");

	cout<<Dummy1.Intro();
	cout << "Result = " << Dummy1.Total(10,90)<<endl;

	return 0;
}

