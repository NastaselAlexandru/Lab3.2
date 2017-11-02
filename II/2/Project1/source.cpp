#include <iostream>

using namespace std;
int n;
int f(int n)
{
	if (n == 0)
		return 0;
	else
		if (n == 1)
			return 1;
		else
			return f(n - 1) + f(n - 2);
}
int main()
{
	int i, a = 0, b = 1, c;
	cout << a << ' ' << b;
	i = 2;
	cin >> n;
	while (i < n)
	{
		c = a + b;
		cout << c << ' ';
		a = b;
		b = c;
		i++;
	}

	cout <<'\n'<< f(n);

	return 0;
}
