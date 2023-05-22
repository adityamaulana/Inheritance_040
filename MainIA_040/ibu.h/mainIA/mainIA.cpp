#include <iostream>
#include <vector>

using namespace std;

#include "Mom.h"
#include "Kids.h"

int main()
{
	Mom* varMom1 = new Mom ("Anya");
	Mom* varMom2 = new Mom ("Anya");

	Kids* varKids1 = new Kids ("Bono");
	Kids* varKids2 = new Kids ("Mick Jagger");
	Kids* varKids3 = new Kids ("Christ Martin");

	varMom1->addKids(varKids1);
	varMom1->addKids(varKids2);
	varMom2->addKids(varKids3);
	varMom2->addKids(varKids1);

	varMom1 -> printKids();
	varMom2->printKids();

	delete varMom1;
	delete varMom2;

	delete varKids1;
	delete varKids2;
	delete varKids3;

	return 0;
}