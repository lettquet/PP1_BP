#include<iostream>
//Bakdaulet_Turdymuratov
using namespace std;
int main()
{
	int a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	if(a1==a2 && b1==b2)
	{
		cout<<"YES";
	}
	else if(a1+a2==b1+b2)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
