#include <iostream>
using namespace std;

int main() {

  int first_number,   second_number, sum;
    
  cout << "Enter two numbers: ";
  cin >> first_number >> second_number;

  // sum of two numbers in stored in variable sumOf TwoNumbers
  sum = first_number +  second_number;

  // prints sum 
  cout << first_number << " + " <<  second_number << " = " << sum;     

  return 0;
}
