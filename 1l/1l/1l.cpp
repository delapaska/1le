#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	cout << "$>./megaphone \"shhhh... I think the students are asleep...\"" << endl;
	cout << "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..." << endl;
	cout << "$>./megaphone Damnit \" ! \" \" Sorry students, I thought this thing was off.\"" << endl;
	cout << "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF." << endl;
	cout << "$>./megaphone" << endl;
	cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	cout << "$>" << endl;
	system("pause");
}