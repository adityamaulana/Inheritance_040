#include <iostream>
#include <string>

using namespace std;

#include "jantung/jantung.h"
#include "Manusia/Manusia.h"

int main()
{
	Man* varMan = new Man("Panji manusia milenium");

	delete varMan;

	return 0;
}