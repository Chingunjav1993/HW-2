#include<iostream>
using namespace std;
int main(){
	
	
	int c, d, e;
	
	cout<<"Please enter 3 numbers : "<<endl;
	
	cin>>c>>d>>e;
	
	if ( c > d )
	{
		if ( c > e )
		{
			cout<<c<<" is the maximum"<<endl;
		}
		else
		{
			cout<<e<<" is the maximum"<<endl;
		}
		
	}
	else if ( d > c )
	{
		if ( d > e )
		{
			cout<<d<<" is the maximum"<<endl;
		}
		else
		{
			cout<<e<<" is the maximum"<<endl;
		}
	}
	
	
	
	
	
	
	
	
	return 0;
}

