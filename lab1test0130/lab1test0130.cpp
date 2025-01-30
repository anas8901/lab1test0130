#include <iostream>
using namespace std;
int A, B, C, D, E;                              
                                   //Write an application that reads five integers from the user and determines and prints the largest and the smallest integers number. Use only the programming techniques your learned in this chapter. (use only if statements) 30 Pts
int main()
{
 

    cout << "Enter five integers:" << endl;
    cin >> A >> B >> C >> D >> E;


    int largest = 0;
    int smallest = A;


    if (B > largest)
    {
        largest = B;
    }
    if (C > largest)
    {
        largest = C;
    }
    if (D > largest) {
        largest = D;
    }
    if (E > largest) {
        largest = E;
    }

    cout << "The Largest Number is ==>: " << largest << endl;

    if (B < smallest) {
        smallest = B;
    }
    if (C < smallest) {
        smallest = C;
    }
    if (D < smallest) {
        smallest = D;
    }
    if (E < smallest) {
        smallest = E;
    }
    cout << "The Smallest Number is ==>: " << smallest << endl;

}
