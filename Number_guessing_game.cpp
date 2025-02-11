#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
int guess;
int tries;
int number;
srand(time(NULL));
number = rand() % 100;

do{
cout << "******Guesssing Game********" << endl;

cout << "Guess a number \n";
cin >> guess;
tries++;

if (guess < number) 
{
    cout <<"too low! try again. \n";
}

else if (guess > number)
{
    cout << "too high! try again. \n";
}

else
{
cout << "CORRECT You are super duper! you made " <<  tries << " number(s) of tries \n";
}
}while (guess != number);

cout << "******************";
    return 0;
}
