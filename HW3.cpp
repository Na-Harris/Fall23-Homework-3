//TOOP F23 HW #3
//Name: 3/c Nathan Harris
//Instructor: LCDR Veara
/*

Q- Give an explanation of the difference passing arguments by reference and passing 
arguments by value as well as when you would use either:
A- Passing by value is done if only the value is to be manipulated in a function, leaving 
the inital variable as it was. Passing by reference is often used to change multiple variables
in one part of code, and changes the specific register for the variables.

Q- Give an explanation of what “overloaded” means in the context of function:
A- Function overloading is when 2 functions have the same name but different parameters. The 
inputs into the function call will coorelate to which function is used.

Q- Give an explanation of return types and how they might be used:
A- A function can return as any usual variable type, such as int or bool. Different function
uses may require different variable type outputs.

*/

#include <iostream>
#include <cmath>
using namespace std;

int sum(int a, int b, int c)
{
    int number = a + b + c;
    return number;
}

long power(int a, int b)
{
    long number = pow(a,b);
    return number;
}

int doubleNumber(int& a)
{
    a *= 2;
}

int main()
{
    cout << "3/c Nathan Harris" << endl;
    cout << "TOOP HW3" << endl;
    int t = 1;
    while (t == 1)
    {
        cout << "\n1. Sum two numbers" << endl;
        cout << "2. Sum three numbers" << endl;
        cout << "3. Raise a number to a certain power" << endl;
        cout << "4. Double a given number" << endl;
        cout << "5. Print info" << endl;
        cout << "6. Quit" << endl;
        cout << "Please enter your choice: ";
        int number;
        cin >> number;
        int a;
        int b;
        int c;
        switch (number)
        {
            case 1:
            {
                cout << "Make 2 inputs for numbers to add." << endl;
                cin >> a;
                cin >> b;
                c = 0;
                int sum2 = sum(a, b, c);
                cout << a << " + " << b << " = " << sum2 << endl;
            }
            break;
            case 2:
            {
                cout << "Make 3 inputs for numbers to add." << endl;
                cin >> a;
                cin >> b;
                cin >> c;
                int sum3 = sum(a,b,c);
                cout << a << " + " << b << " + " << c << " = " << sum3 << endl;
            }
            break;
            case 3:
            {
                cout << "Make 2 inputs, where the second is the power to the first." << endl;
                cin >> a;
                cin >> b;
                long aToTheb = power(a,b);
                cout << a << " ^ " << b << " = " << aToTheb << endl;
            }
            break;
            case 4:
            {
                cout << "Enter a number while will be doubled." << endl;
                cin >> a;
                doubleNumber(a);
                cout << "Doubling the number yields: " << a << endl;
            }
            break;
            case 5:
            {
                cout << "3/c Nathan Harris" << endl;
            }
            break;
            case 6:
            t = 0;
            break;
        }
    }
}
//TOOP F23 HW #3
//Name:
//Instructor:
