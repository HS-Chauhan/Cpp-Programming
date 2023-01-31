#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

int binarySearch(int *arr, int Left, int Right, int key){

    if(Right >= Left){
        int mid = Left + (Right - 1) / 2;
    

        //base case
        if(arr[mid] == key){
            return key;
        }

        if(arr[mid] > key){
            return binarySearch(arr, Left, mid - 1, key);
        }
        else{
            return binarySearch(arr, Right, mid + 1, key);
        }
    }
}

int main(){

    int arr[100000], n, key;

    cout << "Enter the size of Array : " << endl;
    cin >> n;

    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to search for : " << endl;
    cin >> key;

    cout << "Array entered : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bool ans = binarySearch(arr, 0, n, key);

    if (ans)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}
