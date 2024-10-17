#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int next_even = n + 2 - (n % 2);        //Bakdaulet_Turdymuratov

     cout << next_even << endl;

    return 0;
}
