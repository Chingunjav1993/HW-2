#include<iostream>
using namespace std;
int main()
{
	
	double a, h, m, s;
	cout << " Enter basic salary : ";
	cin >> a;
	h = a*0.2 + a*0.8 + a;
	m = a*0.25 + a*0.9+ + a;
	s = a*0.3 + a*0.95 + a;
	
	
	if ( a <= 10000 )
	{
		cout << " Total is " << h;
	}
	else if ( a <= 20000 )
	{
		cout << " Total is " << m;
	}
	else if ( a > 20000 )
	{
		cout << " Total is " << s;	 
	}
	
	
	
	
	return 0;
}
