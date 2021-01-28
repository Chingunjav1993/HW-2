#include<iostream>
using namespace std;
int main(){
	
	char a;
	
	cout << "Please enter any alphabet or number or special character : ";
	
	cin >> a;
	
	if ( ( a >= 'a' && a <= 'z' ) || ( a >= 'A' &&  a <= 'Z' ) )
	
	{
		
		cout << a << " is an Alphabet";

	}
	
	else if ( ( a >= '0' && a <= '9' ) )
	
	{
		
		cout << a << " is Number";
		
	}
	
	else
	
	{
		
		cout << a << " is Special character";
		
	}
	
	
	
	
	
	return 0;
}
