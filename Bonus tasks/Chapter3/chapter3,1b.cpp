#include <iostream>  
using namespace std;  

int main() {  
    const int n = 100;   
    long long sum = 0;   
    int a[n];            

    cout << "ЕНтер " << n << " нумберс" << endl;  

    for (int i = 0; i < n; i++) {  
        cin >> a[i];                 
        sum += a[i];                 
    }  

    cout << "Сумма: " << sum << endl;    
    return 0;  
}
//Bakdaulet_Turdymuratov