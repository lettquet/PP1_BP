#include <iostream>
using namespace std;

int main()
{
    const int n = 100;  
    long long sum = 0;

    int a[n];  
    for (int i = 0; i < n; i++)  
    {
        cin >> a[i];  
        sum += a[i];  
    }
    cout << sum;  
    return 0;
}
//Bakdaulet_Turdymuratov
