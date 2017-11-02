#include <iostream>

using namespace std;

int main()
{
	int i = 1, j;
	while (i < 40)
	{
		cout << '*';
		i++;
	}
	cout << '\n' << i;

	i = 1;
	do
	{
		cout << '*';
		i += 3;
	} while (i != 40);
	cout << '\n' << i;

	for (i = 1; i != 40; i += 2)
		cout << '*';
	cout << '\n' << i;

	for (i = 1; i <= 40; i += 15)
		for (j = 1; j <= i; j++)
			cout << '*';
	cout << '\n' << i;

	return 0;
}