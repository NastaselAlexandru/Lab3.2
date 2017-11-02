#include <iostream>

using namespace std;

void swamp(int a, int b)
{
	int aux;
	aux = a;
	a = b;
	b = aux;
}
void f(int v[100], int n)
{
	int i = 1;
	int j = n;
	int k;
	if (n % 2 == 1)
		k = n / 2 + 1;
	else
		k = n / 2;
	while (i < j)
	{
		if (v[i] >= v[k] && v[k] >= v[j])
			swamp(v[i], v[j]);
	}
}

int main()
{
	int n, i, v[100], ok1 = 0, ok2 = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> v[i];
	while (ok1 == 0)
	{
		f(v, n);
		for (i = 1; i < n; i++)
			if (v[i] <= v[i + 1])
				ok2 = 1;
			else
				ok2 = 0;
		if (ok2 == 1)
			ok1 = 1;
	}
	return 0;
}