#include<iostream>
using namespace std;
int main(){
	
	char a;	
	
	cout << " Please enter any letter : ";
	
	cin >> a;
	
	
	if (( a >= 'a' ) && ( a <= 'z'))
	
	{
	
		cout << a << " is lowercase letter";
	
	}
	
	else
	
	{
	
		cout << a << " is uppercase letter";
	
	}
	
	
	
	
	
	return 0;
}
