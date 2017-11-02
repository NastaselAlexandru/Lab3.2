#include <iostream>

using namespace std;

int main()
{
	int unghi, i=0;
	do
	{
		cin >> unghi;
		i++;
		if (i != 0)
			cout << "ERROR";
	}while (unghi < 0 || unghi>90);
	return 0;
}