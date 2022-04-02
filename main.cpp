#include <iostream>
using namespace std;

int main()
{
	int a[15], i, k = 0, s = 0;
	cout << "Input 15 numbers:\n";
	for (i = 0; i < 15; i++)
	{
		cin >> a[i];
		if (a[i] % 2 == 0)
		{
			k++;
			s += a[i];
		}
	}
	cout << "Sum of even numbers: " << s << endl;
	cout << "Quantity of even numbers: " << k << endl;
	return 0;
}