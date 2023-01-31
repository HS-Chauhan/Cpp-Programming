#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

bool LinearSearch(int *arr, int n, int key){

    //base case
    if(n == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }
    else{
        bool remainingArray = LinearSearch(arr + 1, n - 1, key);
        return remainingArray;
    }


}

int main(){

    int arr[100000], n, key;

    cout << "Enter the size of Array : " << endl;
    cin >> n;

    cout << "Enter the elements of array" << endl;
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the element you want to search for : " << endl;
    cin >> key;

    cout << "Array entered : " << endl;
    for(int i = 0;i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    bool ans = LinearSearch(arr, n, key);

    if(ans){
        cout << "Present" << endl;
    }
    else{
        cout << "Not found" << endl;
    }



    return 0;
}
