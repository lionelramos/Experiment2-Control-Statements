#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float Wtotal, Wused, np;

	cout << "Water Bill Calculator" << endl;
	cout << "Input total gallons used (Monthly) : ";
	cin >> Wused;
	cout << "Input unpaid balance: ";
	cin >> np;

	if (np > 0)
	{
		cout << "	Unpaid balance = " << np <<" php"<< endl;
		cout << "	Penalty = 20 php" << endl;
		Wtotal = (Wused * 1.10)+ np + 35 + 20;
		cout << "	Water demand charge = 35 php " << endl;
		cout << "	Water consumption charge = " << (Wused * 1.10) << " php" << endl;
		cout << "		Total amount = " << Wtotal <<" php" <<endl;
	}
	else
	{
		cout << "Thank you for paying on time!" << endl;
		Wtotal = (Wused * 1.10) + 35;
		cout << "	Water demand charge = 35 php " << endl;
		cout << "	Water consumption charge = " << (Wused * 1.10) << " php" << endl;
		cout << "		Total amount = " << Wtotal <<" php"<< endl;
	}
	system("pause");
	return 0;
}
