#ifndef MAN_H
#define MAN_H

using namespace std;

class Man
{
public:
	string Name;
	Heart varHeart;

	Man(string pName)
		: Name(pName)
	{
		cout << Name << " Alive\n";
	}

	~Man()
	{
		cout << Name << " Dead\n";
	}
};
#endif // !MAN_H
