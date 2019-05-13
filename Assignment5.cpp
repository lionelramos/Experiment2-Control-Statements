#include<iostream>
using namespace std;

int main()
{
	int result, fthird ,ffirst, fsecond;

	cout << "The Fibonacci Numbers" << endl;
	cout << "0" << "," << "1" << ",";

		ffirst = 0;
		fsecond = 1;

	for (result = 0; result <= 20;)
	{
		if (result == 19)
		{
			fthird = ffirst + fsecond;
			ffirst = fsecond;
			fsecond = fthird;
			cout << fthird << endl;
			result++;
		}

		else if (result <= 18)
		{
			fthird = ffirst + fsecond;
			ffirst = fsecond;
			fsecond = fthird;
			cout << fthird << ",";
			result++;
		}


	}

	system("pause");
	return 0;
}