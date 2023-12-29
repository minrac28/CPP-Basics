#include <iostream>
#include "math.hpp"
using namespace std;

void addition(int a, int b)
{
    int sum = a + b;
    cout << "sum=" << sum << endl;
}
void subtraction(int a, int b)
{
    int dif = a - b;
    cout << "differnece=" << dif << endl;
}
void multiplication(int a, int b)
{
    int prod = a * b;
    cout << "product=" << prod << endl;
}
void division(int a, int b)
{
    if (a > b)
    {
        int quo = a / b;
        int rem = a % b;
        cout << "quotient=" << quo << endl;
        cout << "reminder=" << rem << endl;
    }
    else
    {

        cout << "division not possible" << endl;
    }
}
void square(int a)
{
    int square = a * a;
    cout << "square=" << square << endl;
}
void fibonacci(int start, int end)
{
    int sum{0};
    for (int i = start; i <= end; i++)
    {
        int temp = sum + i;
        sum = temp;
        // cout<<"output="<<sum<<endl;
    }
    cout << "output=" << sum << endl;
}

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    return 1;
}

int sumofarray(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    // addition(10, 20);
    // subtraction(20, 10);
    // multiplication(2, 30);
    // division(10, 5);
    // square(7);

    // fibonacci(3, 10);
    // cout << "factorial=" << factorial(5) << endl;

    // int a[]{2,3,4,5};
    // int size = sizeof(a)/sizeof(a[0]);
    // int sum = sumofarray(a,size);
    // cout<< " sumofarray = "<<sum<<endl;
    return 0;
}