#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a = n/100;
	int b = (n/10)%10;          //Bakdaulet_Turdymuratov
	int c = n%10;
	cout << a + b + c;
}
