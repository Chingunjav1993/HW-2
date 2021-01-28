#include<iostream>
using namespace std;
int main(){
	
	char a;	
	cout << " Please enter any number or alphabet : ";
	cin >> a;
	
	
	if (( a >= 'a' ) && ( a <= 'z'))
	{
		cout << a << " is an alphabet";
	}
	else
	{
		cout << a << " is a number";
	}
	
	
	
	
	return 0;
}

