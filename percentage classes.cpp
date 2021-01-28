#include<iostream>
using namespace std;
int main()
{
	
	int math, phy, chem, bio, com, ttl, grd;
	cout << " Please enter math grade : ";
	cin >> math;
	cout << " Please enter physics grade : ";
	cin >> phy;
	cout << " Please enter chemistry grade : ";
	cin >> chem;
	cout << " Please enter biology grade : ";
	cin >> bio;
	cout << " Please enter computer grade : ";
	cin >> com;
	ttl = math + phy + chem + bio + com;
	grd = ttl / 5;
	
	
	
	if ( grd >= 90 )
	{
		cout << " Grade A ";
	}
	else if ( grd >= 80 )
	{
		cout << " Grade B ";
	}
	else if ( grd >= 70 )
	{
		cout << " Grade C ";
	}
	else if ( grd >= 60 )
	{
		cout << " Grade D ";
	}
	else
	{
		cout << " Grade F ";
	}
	
	
	
	
	
	
	return 0;
}
