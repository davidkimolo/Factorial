// Calculating the Factorial
#include <iostream>

using namespace std;

// The factorial function
int long Factorial (int long Number)
{
    for (int i = 1; i < Number;i++)
    {
        return Number*Factorial(Number-1);
    }
}


int main() {

    int NumberChoice;
    string Gap (40,'-');
    // User input
    do {
        cout << "Only enter 0 to exit" <<endl;
        cout << Gap <<endl;
        cout << "Enter a Number to calculate factorial: ";
        cin >> NumberChoice;
        cout << "The Factorial of " << NumberChoice << " is " << Factorial(NumberChoice) <<endl;
    }
    while (NumberChoice!=0);

    return 0;

}
