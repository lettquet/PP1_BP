#include <iostream>
using namespace std;
int main (){
	int n;
	int m;
	int sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m;
		if(m==0){
			sum++;
		}
	}
	cout<<sum;
}
//Bakdaulet_Turdymuratov