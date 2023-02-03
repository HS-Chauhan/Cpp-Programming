#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
using namespace std;

void printUnique(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }

            if (i == j)
            {
                cout << arr[i] << " ";
            }
        }
    }
}

int main()
{

    int arr[10], i, n;

    cout << "Enter size of the array: " << endl;
    cin >> n;

    cout << "Enter elements of the array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printUnique(arr, n);
    

    return 0;
}
