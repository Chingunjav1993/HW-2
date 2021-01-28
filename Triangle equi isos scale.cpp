#include<iostream>
using namespace std;
int main()
{
	
	int a, b, c;
	cout << " Please enter three sides of triangle : ";
	cin >> a >> b >> c;
	
	
	if ( a == b && b == c )
	
	{
		cout << " Triangle is equilateral";
	}
	
	else if ( a == b || a == c || b == c )
	
	{
		cout << " Triangle is isosceles";
	}
	
	else
	
	{
		cout << " Triangle is scalene";
	}
	
	
	
	
	return 0;
}
