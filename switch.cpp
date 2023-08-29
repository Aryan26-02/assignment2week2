#include <iostream>
using namespace std;
int main()
{
    int amount;
    int x1, x2, x5, x10, x20, x50, x100, x500;
    cout << "Enter the amount ";
    cin >> amount;
    switch (amount >= 500)
    {
    case 1:
        x500 = amount / 500;
        amount = amount - (x500 * 500);
        cout << "Number of notes of 500 :" << x500 << endl;
        break;
    }
    switch (amount >= 100)
    {
    case 1:
        x100 = amount / 100;
        amount -= x100 * 100;
        cout << "Number of notes of 100 :" << x100 << endl;
        break;
    }
    switch (amount >= 50)
    {
    case 1:
        x50 = amount / 50;
        amount -= x50 * 50;
        cout << "Number of notes of 50 :" << x50 << endl;
        break;
    }
    switch (amount >= 20)
    {
    case 1:
        x20 = amount / 20;
        amount -= x20 * 20;
        cout << "Number of notes of 20 :" << x20 << endl;
        break;
    }
    switch (amount >= 5)
    {
    case 1:
        x5 = amount / 5;
        amount -= x5 * 5;
        cout << "Number of notes of 5 :" << x5 << endl;
        break;
    }
    switch (amount >= 2)
    {
    case 1:
        x2 = amount / 2;
        amount -= x2 * 2;
        cout << "Number of notes of 2 :" << x2 << endl;
        break;
    }
    switch (amount >= 1)
    {
        case 1:
        x1 = amount / 1;
        amount -= x1 * 1;
        cout << "Number of notes of 1 :" << x1 << endl;
        break;
    }
}
