#include <iostream>
using namespace std;
// Call by Reference:
//  1.Using pointers ----> Swap using the memory Location
//  2.Using Reference Variable ----> Swap using Reference variable (Specifically for C++)

// Function Prototype
void swap(int a, int b);
void swapUsingPointer(int *a, int *b);
void swapUsingReferenceVariable(int &a, int &b);

int main()
{
    while (true)
    {
        int method;
        cout << "Select" << endl;

        cout << "0.Exit" << endl;
        cout << "1.Wrong Method" << endl;
        cout << "2.Correct Method" << endl;
        cin >> method;
        if (method == 1)
        {
            cout << "This method of swaping does not work as it permanently stores the value of x & y..." << endl;
            int x = 1;
            int y = 2;
            cout << "Before swaping--->" << endl;
            cout << "x is: " << x << endl;
            cout << "y is: " << y << endl;
            swap(x, y);
            cout << "After swaping--->" << endl;
            cout << "x is: " << x << endl;
            cout << "y is: " << y << endl;
        }
        else if (method == 2)
        {
            cout << "Select Method" << endl;
            cout << "1.Swap Using Pointer Reference" << endl;
            cout << "2.Swap Using Reference Variable" << endl;
            cin >> method;
            if (method == 1)
            {
                cout << "1.Swap Using Pointer Reference" << endl;
                int x = 1;
                int y = 2;
                cout << "Before swaping--->" << endl;
                cout << "x is: " << x << endl;
                cout << "y is: " << y << endl;
                swapUsingPointer(&x, &y);
                cout << "After swaping--->" << endl;
                cout << "x is: " << x << endl;
                cout << "y is: " << y << endl;
            }
            else if (method == 2)
            {
                cout << "2.Swap Using C++ Reference Variable" << endl;
                int x = 1;
                int y = 2;
                cout << "Before swaping--->" << endl;
                cout << "x is: " << x << endl;
                cout << "y is: " << y << endl;
                swapUsingReferenceVariable(x, y);
                cout << "After swaping--->" << endl;
                cout << "x is: " << x << endl;
                cout << "y is: " << y << endl;
            }
            else
            {
                cout << "Error!" << endl;
            }
        }
        else
        {
            cout << "Error!" << endl;
        }

        if (method == 0)
        {
            break;
        }
    }
    return 0;
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swapUsingPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapUsingReferenceVariable(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Summary of this code:

// This C++ program demonstrates the concept of call by reference using pointers
// and reference variables to swap the values of two variables. Here's a summary
// of the code: The program defines three functions:

// swap(int a, int b): This function attempts to swap the values of a and b, but
// it does not work as expected because it swaps local copies of a and b.
// swapUsingPointer(int *a, int *b): This function swaps the values of a and b
// using pointers. It correctly modifies the values at the memory addresses
// pointed to by a and b. swapUsingReferenceVariable(int &a, int &b): This
// function swaps the values of a and b using reference variables. It provides a
// more elegant syntax for achieving the same result as swapUsingPointer. In the
// main function:

// The program enters a loop where the user can choose between two methods of
// swapping. Method 1 (Wrong Method) demonstrates the incorrect method of
// swapping using swap(int a, int b). Method 2 (Correct Method) allows the user
// to choose between swapping using pointers or reference variables. The program
// prompts the user for input and displays the values before and after swapping.

// The program continues looping until the user chooses to exit (0.Exit).

// Overall, the program illustrates the difference between passing arguments by
// value (which creates copies) and passing by reference (which allows direct
// manipulation of the original variables).
