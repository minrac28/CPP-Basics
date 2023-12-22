#include <bits/stdc++.h>

using namespace std;

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
    int b[]{2, 3, 4, 5};
    int size = sizeof(b) / sizeof(b[0]);
    cout << size << endl;
    int sum = sumofarray(b, size);
    cout << sum << endl;
    return 0;
}
