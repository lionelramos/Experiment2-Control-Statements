#include <iostream>
using namespace std;

int main()
{
	int Nnum, sum;
	bool done = true;
	
	do
	{
		cout << "Input number: ";
		cin >> Nnum;
		if (Nnum <= 0)
			{
			done = false;
			cout << "Thank you!" << endl; 
			}
		
		else if (Nnum >= 0)
		{
			done = true;

			sum = 0;
			for (int i = 1; i <= Nnum; ++i)
				sum += i;
			cout << "Sum = " << sum << endl;
			
		}
	}
		while (done);
		
		system("pause");
		return 0;
	}