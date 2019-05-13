#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int x, y;
	float v;
	const double z = 2.50;

	cout << "Input x and y" << endl;
	cout << setprecision(2) << fixed << endl;
	cout << "x : "; cin >> x;
	cout << "y : "; cin >> y;


	switch (x)
	{
	case 1:
	{

		if (y >= 5)
		{
			v = x + (y / z);
			cout << "result =" << setw(10) << v << endl;
			
		}
		else if (y < 5 && y >= 2)
		{
			v = x * y * z;
			cout << "result =" << setw(10) << v << endl;
		}
		else
		{
			v = x+y+z;
			cout << "result =" << setw(10) << v << endl;
		}
		break;
	}
	case 2:
		{

		if (y < 6)
		{	
			v = abs((x-y) / z);
			cout << "result =" << setw(10) << v << endl;
		}
		else if ( y > 5 )
		{
			v = x - (sqrt(y+z));
			cout << "result =" << setw(10) << v << endl;
		}
		else
		{
			v = x + y + z;
			cout << "result =" << setw(10) << v << endl;
		}
		break;
		}
	
	}

	system("pause");
	return 0;
}