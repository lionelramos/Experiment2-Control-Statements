#include<iostream>
using namespace std;

int main ()
{
	char package; 
	int h, bill;
	
	cout << "Package A: P995 per month includes 10 hours access (additional P20/hour)" << endl;
	cout << "Package B: P1495 per month includes 20 hours access (additional P10/hour)" << endl;
	cout <<	"Package C: P1995 per month includes unlmited access" << endl;
	
	cout << "Package subscribed (Input A,B, or C): " << endl;
	cin >> package;
	cout << "Hours used (Monthly): " << endl;
	cin >> h;

	switch(package)
	{
		case 'A':
		case 'a': 
			if (h >10 && h<=744)
				{
				cout << "Hours excess: " << h-10 << endl;
				cout << "Additional : "<<( h-10 )*20<<" php"<<endl;
				bill = (h - 10) * 20 + 995;
				cout << "	Total bill = " << bill << " php"<< endl; }
				else if  (h <= 10)
				{
				
					cout << "Hours excess: 0" <<endl;
					cout << "	Total bill is" << "995 php" << endl;
				}
				else
				cout << "Try again"<< endl;
				break;
			

		case 'B':
		case 'b':
	
			if (h > 20 && h <= 744)
			{	
			cout << "Hours excess: " << h-20<< endl;
			cout << "Additional : "<<( h-20 )*10<<" php"<<endl;
			bill = (h - 20) * 10 + 1495;
			cout << "	Total bill is " << bill <<" php" << endl; 
			}
			else if (h <= 20)
			{
				cout << "Hours excess: 0" <<endl;
				cout << "	Total bill is " << "1495 php" << endl;
				 }
			else
			cout << "Try again" << endl;
			break;

		case 'C':
		case 'c':
			cout << "	Total Bill is " << "1995 php" << endl;
			break;
	}

	system ("pause");
	return 0;

}
