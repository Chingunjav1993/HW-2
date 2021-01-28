#include<iostream>
using namespace std;
int main(){
	
	char a;
	
	cout << " Please enter any alphabet : ";
	
	cin >> a;
	
	if (( a == 'a' ) || ( a == 'e' ) || ( a == 'i' ) || ( a == 'u' ) || ( a == 'o' ) || ( a == 'A' ) || ( a == 'E' ) || ( a == 'I' ) || ( a == 'U' ) || ( a == 'O' ))
	
	{
		
		cout << a << " is Vowel";
		
	}
	
	else
	
	{
		
		cout << a << " is Consonant";
		
	}
	
	
	
	
	
	
	
	
	return 0;
}
