#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double s = 0, v;
	int n;
	cout << "Enter integer n=";
	cin >> n;
	cout << "Results" << endl;
	for (int i = 1; i <= n; i++)
	{
		v = 1. / i;
		cout << "application" << i << "=" << v << endl;
		s += v;
	}
	cout << "Sum=" << s << endl;
	return 0;
}

2
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x, y, z, A, B, h;
	cout << "Enter initial value x= ";
	cin >> A;
	cout << "Enter final value x=";
	cin >> B;
	cout << "Enter step for x=";
	cin >> h;
	cout << "\n x\t y(x)\t z(x)\n";
	for (double x = A; x <= B; x += h)
	{
		y = 1. / exp(x);
		z = log10(x / 2 + 0.1);
		cout << "x=" << x << "\t" << y << "\t" << z << endl;
	}
}

