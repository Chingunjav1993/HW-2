#include<iostream>
using namespace std;
int main()
{
	
	
	int amt , $100 , $50 , $20 , $10 , $5 , $1;
	
	cout << " Please enter amount : ";
	
	cin >> amt;
	
	$100 = amt / 100;
	
	amt = amt % 100;
	
	$50 = amt / 50;
	
	amt = amt % 50;
	
	$20 = amt / 20;
	
	amt = amt % 20;
	
	$10 = amt / 10;
	
	amt = amt % 10;
	
	$5 = amt / 5;
	
	amt = amt % 5;
	
	$1 = amt;
	
	cout << " $100 : " << $100 << endl;
	cout << " $50 : " << $50 << endl;
	cout << " $20 : "  << $20 << endl; 
	cout << " $10 : " << $10 << endl; 
	cout << " $5 : " << $5 << endl; 
	cout << " $1 : "<<$1;

	



	return 0;
}

