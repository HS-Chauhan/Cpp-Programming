#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

void sortArray(int *arr, int n){
    
    //base case(Already sorted array)
    if(n == 0 || n == 1){
        return;
    }

    //Largest element sorted
    for(int i = 0;i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i], arr[i + 1]);
        }
    }

    //recursive call
    sortArray(arr, n - 1);

}

int main(){

    int arr[100000];
    int n;

    cout << "ENTER THE SIZE OF THE ARRAY : " << endl;
    cin >> n;

    cout << "ENTER THE ELEMENTS OF THE ARRAY : " << endl;
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }

    sortArray(arr, n);

    cout << "ARRAY AFTER SORTING : " << endl;
    for(int i = 0;i < n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}
