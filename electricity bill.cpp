#include<iostream>
using namespace std;
int main()
{
	
	double a, s, m, h, o, ts, tm, th, to;
	cout << " Please enter units : ";
	cin >> a;
	ts = (a * 0.50) *0.2;
	tm = ((a - 50) *0.75 + s) *0.2;
	th = ((a - 150) *1.20 + m) *0.2;
	to = ((a - 250) *1.50 + h) *0.2;
	s = a * 0.50;
	m = (a - 50) *0.75 + s;
	h = (a - 150) *1.20 + m;
	o = (a - 250) *1.50 + h;
	
	
	if ( a <= 50 )
	{
		cout << " Total bill is : " << ts + s;
	}
	
	else if ( a <= 150 )
	{
		cout << " Total bill is : " << tm + m;
	}
	
	else if ( a <= 250 )
	{
		cout << " Total bill is : " << th + h;
	}
	
	else 	
	{
		cout << " Total bill is : " << to + o;
	}
	
	
	
	
	
	return 0;
}
