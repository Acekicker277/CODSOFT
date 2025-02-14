#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
   float number1,number2;
   char operation;
   cout << "***************************************\n";
  cout << "Simple Arithmetic  Calculator \n";
  cin >> number1 >> operation >> number2;
  
  switch(operation)
  {
      case '*': cout << number1 << operation << number2 << '=' << number1 * number2 << "\n";
      break;
      
      case '+': cout << number1 << operation << number2 << '=' << number1  +  number2 << "\n";
      break;
      
      case '-': cout << number1 << operation << number2 << '=' << number1 - number2 << "\n";
      break;
     
      case '/': if (number2 != 0)
      {
      cout << number1 << operation << number2 << '=' << number1 / number2 << "\n";
      }
      else
      {
      cout << "Undefined \n";
      }
      break;
     
      case '%': if (number2 != 0)
      {
      cout << (int) number1 << operation << (int) number2 << '=' << (int) number1 % (int) number2 << "\n";
      }
      else
      {
      cout << "Undefined \n";
      }
      break;
     

     default:
     cout << "Not valid";
     break;
      
  }
  cout << "*****************************************";
    return 0;
}
