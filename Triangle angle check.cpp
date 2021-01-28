#include<iostream>
using namespace std;
int main()
{
	
	int a, b, c, n;
	
	cout << " Enter angles of triangle : ";
	
	cin >> a >> b >> c;
	
	n = a + b + c;
	
	if ( n == 180 )
	
	{
		
		cout << " Triangle is valid ";
		
	}
		
	else	
	
	{
			
		cout << " Triangle is not valid ";
	
	}

	
	return 0;
}
