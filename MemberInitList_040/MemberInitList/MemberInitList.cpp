#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	const int Id;
	string Name;
	float Grade;

public:
	Student(int pId, string pName, float pGrade) : Id(pId), Name(pName), Grade(pGrade)
	{}
		~Student()
		{
			cout << "Id     = " << Id << endl;
			cout << "Name	= " << Name << endl;
			cout << "Grade	= " << Grade << endl;
		}
	
};

int main()
{
	Student std(99, "James Gunn", 40);

	return 0;
}