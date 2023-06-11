#include <iostream>
using namespace std;

int main()
{
    string s1, s2, result;

    cout << "Enter the first string: ";
    getline (cin, s1);

    cout << "Enter the second string: ";
    getline (cin, s2);

    result = s1 + s2;

    cout << "Resultant String = "<< result;

    return 0;
}
