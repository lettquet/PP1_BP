#include <iostream>
using namespace std;

int main()
{
	int n,sum=0;
	
	cin>>n;
	
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
			sum+=2;
			
		if(i*i==n)
			sum--;
			
	}
	cout<<sum;	

}
//Bakdaulet_Turdymuratov