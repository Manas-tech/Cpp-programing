#include <iostream>  
using namespace std;  

int main()  
{  
    string a = "Scaler", b = "Academy";      
    
    cout << "Before swapping:" << endl;
    cout << "a = " << a << " b = " << b << endl;     

    swap(a, b);      

    cout << "After swapping:" << endl;
    cout << "a = " << a << " b = " << b << endl;      
    
    return 0;  
} 