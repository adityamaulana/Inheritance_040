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

	varMom1->addKid(varKids1);
	varMom1->addKid(varKids2);
	varMom2->addKid(varKids3);
	varMom2->addKid(varKids1);

	varMom1 -> printKid();
	varMom2->printKid();

	return 0;
}