#include <stdio.h>
#include <iostream>
using namespace ::std;
int add(int, int);
int com(int);
void receiver(int data1[], int data2[], int checksum[], int newdata[], int dl);
void sender()
{
    int i, dl, dil;
    int data1[35], data2[35], newdata[35], checksum[35];
    cout << "\nEnter the data length= ";
    cin >> dl;
    cout << "\nEnter the data1: ";
    for (i = 0; i < dl; i++)
        cin >> data1[i];
    cout << "\nEnter the data2: ";
    for (i = 0; i < dl; i++)
        cin >> data2[i];
    for (i = dl - 1; i >= 0; i--)
    {
        newdata[i] = add(data1[i], data2[i]);
    }

    cout << "\n\n Data 1        : ";
    for (i = 0; i < dl; i++)
        cout << data1[i];
    cout << "Data 2        : ";
    for (i = 0; i < dl; i++)
        cout << data2[i];

    cout << "\n\n The new data is : ";
    for (i = 0; i < dl; i++)
    {
        cout << newdata[i];
    }
    cout << "\n Checksum : ";
    for (i = 0; i < dl; i++)
    {
        checksum[i] = com(newdata[i]);
        cout << checksum[i];
    }
    receiver(data1, data2, checksum, newdata, dl);
}
void receiver(int data1[], int data2[], int checksum[], int newdata[], int dl)
{
    int i, comp[35], sum = 0;
    cout << "\n\n Receiver Side : \n";
    cout << "\n Data : ";
    for (i = 0; i < dl; i++)
        cout << data1[i];
    cout << " ";
    for (i = 0; i < dl; i++)
        cout << data2[i];
    cout << " ";
    for (i = 0; i < dl; i++)
        cout << checksum[i];

    cout << "\n Addition : ";
    for (i = dl - 1; i >= 0; i--)
    {
        newdata[i] = add(newdata[i], checksum[i]);
    }
    for (i = 0; i < dl; i++)
    {
        cout << newdata[i];
    }
    cout << "\n  Compliment : ";
    for (i = 0; i < dl; i++)
    {
        comp[i] = com(newdata[i]);
        cout << comp[i];
    }
    for (i = 0; i < dl; i++)
    {
        sum = sum + comp[i];
    }
    if (sum == 0)
        cout << "\nNo error";
    else
        cout << "\nError";
}
int main()
{

    sender();

    return 0;
}

int add(int x, int y)
{
    static int carry = 0;
    if (x == 1 && y == 1 && carry == 0)
    {
        carry = 1;
        return 0;
    }
    else if (x == 1 && y == 1 && carry == 1)
    {
        carry = 1;
        return 1;
    }
    else if (x == 1 && y == 0 && carry == 0)
    {
        carry = 0;
        return 1;
    }
    else if (x == 1 && y == 0 && carry == 1)
    {
        carry = 1;
        return 0;
    }
    else if (x == 0 && y == 1 && carry == 0)
    {
        carry = 0;
        return 1;
    }
    else if (x == 0 && y == 1 && carry == 1)
    {
        carry = 1;
        return 0;
    }
    else if (x == 0 && y == 0 && carry == 0)
    {
        carry = 0;
        return 0;
    }
    else
    {
        carry = 0;
        return 1;
    }
}
int com(int a)
{
    if (a == 0)
        return 1;
    else
        return 0;
}
