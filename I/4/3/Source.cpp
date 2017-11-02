#include <iostream>

using namespace std;

int main()
{
	int n, i, j, aux;
	cin >> n;
	int v[100];
	for (i = 1; i <= n; i++)
		cin >> v[i];
	for(i=1;i<n;i++)
		for(j=2;j<=n;j++)
			if (v[i] < v[j])
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
	for (i = 1; i <= n; i++)
		cout << v[i] << ' ';
	return 0;
}