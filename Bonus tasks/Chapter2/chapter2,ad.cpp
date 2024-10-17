#include <iostream>  
using namespace std;  

int main() {  
    int x;  
    cin >> x;  

      
    if (x < 1 || x > 100) {  
        cout << "Введите число от 1 до 100." << endl;  
        return 1;   
    }  

    string roman = "";  

      
    switch (x / 10) {  
        case 1: roman += "X"; break;  
        case 2: roman += "XX"; break;  
        case 3: roman += "XXX"; break;  
        case 4: roman += "XL"; break;  
        case 5: roman += "L"; break;  
        case 6: roman += "LX"; break;  
        case 7: roman += "LXX"; break;  
        case 8: roman += "LXXX"; break;  
        case 9: roman += "XC"; break;  
        case 10: roman += "C"; break;  
    }  

      
    switch (x % 10) {  
        case 1: roman += "I"; break;  
        case 2: roman += "II"; break;  
        case 3: roman += "III"; break;  
        case 4: roman += "IV"; break;  
        case 5: roman += "V"; break;  
        case 6: roman += "VI"; break;  
        case 7: roman += "VII"; break;  
        case 8: roman += "VIII"; break;  
        case 9: roman += "IX"; break;  
    }  

    cout << roman << endl; 
    return 0;  
}//Bakdaulet_Turdymuratov