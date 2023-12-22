#include <iostream>
#include <string>
#include "operation.hpp"
using namespace std;

void reverse()
{
    string s{"minaz"};
    string r {""};
    int size = s.size();
    for (int i = size - 1; i >= 0; --i) // indexing in c++ starts from 0
    {
            r += s[i];
             
    }
    cout<<r<<endl;
}
void printIntvaluefromCharptr()
{
    int a = 2;
    char *c{};
    c = reinterpret_cast<char *>(&a);
    cout << "int value in charptr = " << *reinterpret_cast<int *>(c) << endl;
}
int main()
{
    reverse();
    printIntvaluefromCharptr();
    return 0;
}