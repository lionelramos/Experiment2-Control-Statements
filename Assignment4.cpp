#include <iostream>
using namespace std;

int main()
{

	int Cnum;
	for (Cnum = 1; Cnum <= 9; Cnum++)
		cout << Cnum << ",";
	for (Cnum = 10; Cnum < 30; Cnum += 2)
		cout << Cnum << ",";
	cout << Cnum << endl;
	
system("pause");
return 0;
}