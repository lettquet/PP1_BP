#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;
                                              //Bakdaulet_Turdymuratov
     int hours = (n / 60) % 24; 
    int minutes = n % 60;      
    cout << hours << " " << minutes << endl;

    return 0;
}
