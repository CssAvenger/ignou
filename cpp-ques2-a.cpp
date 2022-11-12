#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int opr, num1, num2, x;
    do
    {
        cout << "Select an operation to perform a simple calculation in C++ Calculator" << endl
             << "\n1 = Addition"
             << "\n2 = Subtraction"
             << "\n3 = Multiplication"
             << "\n4 = Division"
             << "\n5 = Square"
             << "\n6 = Exit"
             << "\n\nMake a choice: ";
        cin >> opr;
        switch (opr)
        {
        case 1:
            cout << "You have selected Addition Operation.\nPlease enter the two numbers:\n";
            cin >> num1 >> num2;
            cout << "The sum of two number = " << num1 + num2<<endl;
            /* code */
            break;
        case 2:
            cout << "You have selected Subtraction Operation.\nPlease enter the two numbers:\n";
            cin >> num1 >> num2;
            cout << "The sum of two number = " << num1 - num2<<endl;
            /* code */
            break;
        case 3:
            cout << "You have selected Multiplication Operation\nPlease enter the two numbers:\n";
            cin >> num1 >> num2;
            cout << "The sum of two number = " << num1 + num2<<endl;

            /* code */
            break;
        case 4:
            cout << "You have selected Division Operation\nPlease enter the two numbers:\n";
            cin >> num1 >> num2;
            cout << "The sum of two number = " << num1 / num2<<endl; /* code */
            break;
        case 5:
            cout << "You have selected Square Operation\nPlease enter the number:\n";
            cin >> num1;
            cout << "The sum of two number = " << num1 * num1<<endl; /* code */
            break;
        case 6:
            /* code */
            exit(0);
            break;

        default:
            cout << "\nSomething went wrong..!!";
            break;
        }

    } while (opr != 6);
    return 0;
}