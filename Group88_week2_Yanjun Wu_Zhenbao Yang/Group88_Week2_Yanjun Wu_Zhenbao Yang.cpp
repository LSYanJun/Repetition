//Group_88,Members:Yanjun Wu, Zhenbao Yang
#include <iostream>
using namespace std;
int main()
{
	for (int x = 29; x <= 211; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
			cout << "Buzz" << endl;
		else if (x % 5 == 0 && x % 3 != 0)
		{
			cout << "Fizz" << endl;
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		else
			cout << x << endl;
	}
	return 0;
}