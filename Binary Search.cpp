#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

int binarySearch(int arr[], int x, int low, int high){
    while(low <= high){
        int mid = low + (high - low) / 2;

        if (arr[mid] == x){
            return mid;
        }

        else if(arr[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n, x;

    cout << "Enter the size of Array: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the Array: " << endl;
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter number to search: " << endl;
    cin >> x;

    int found = binarySearch(arr, x, 0, n - 1);

    if(found == -1){
        cout << "Element is not present" << endl;
    }
    else{
        cout << "Element is present at index: " << found << endl;
    }



    return 0;
}
