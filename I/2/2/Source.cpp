#include <iostream>

using namespace std;


int i, j, aux, ok;

int da(int v[100], int x)
{
	i = 1;
	while ( ok == 0)
		if (v[i] == x)
			ok = 1;
		else
			i++;
	if (ok == 0)
		return -1;
	else
		return x;
}

int main()
{	
	int n, x;
	cin >> n >> x;
	int v[100];
	for (i = 1; i <= n; i++)
		cin >> v[i];
	cout << da(v, x);
	return 0;
}