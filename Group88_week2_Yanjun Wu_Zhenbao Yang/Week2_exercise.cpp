#include <iostream>
#include <fstream>
using namespace std;
extern int inAndOut();
int inAndOut()
{
	int x;
	do
	{
		cin.sync();
		cin.clear();
		cout << "enter a number:" << endl;
		cin >> x;
	} while (cin.bad() || cin.fail());
	return 0;
}