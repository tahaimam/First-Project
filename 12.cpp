#include <iostream>
using namespace std;
int main ()
{
	int c,d,x;
	cout<<"enter two numbers"<<endl;
	cin>>c>>d;
	x=c;
	c=d;
	d=x;
	cout<<"the value of c is "<<c<<endl;
	cout<<"the value of d is "<<d<<endl;
	
	return 0;
	
}
