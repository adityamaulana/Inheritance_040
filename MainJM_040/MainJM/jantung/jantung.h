#ifndef HEART_H
#define HEART_H

using namespace std;

class Heart
{
public:
	Heart()
	{
		cout << "Heart turned on\n";
	}

	~Heart()
	{
		cout << "Heart turned off\n";
	}
};
#endif // !HEART_H
