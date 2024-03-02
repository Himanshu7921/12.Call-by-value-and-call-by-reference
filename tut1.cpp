#include <iostream>
using namespace std;
// Call by Reference:
//  1.Using pointers
//  2.Using Reference Variable
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
