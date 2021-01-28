#include<iostream>
using namespace std;
int main()
{
	
	int inc, exp, prof, loss;
	cout << " Please enter your income : ";
	cin >> inc;
	cout << " Please enter your expenses : ";
	cin >> exp;
	prof = inc - exp;
	loss = inc - exp;
	
	
	if ( inc - exp > 0)
	
	{
		cout << " Profit " << prof;
	}
	
	else
	
	{
		cout << " Loss " << loss;
	}
	
	
	
	
	
	
	return 0;
}
