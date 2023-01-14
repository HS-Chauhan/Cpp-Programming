#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

int getSum(int *arr, int size){

    //base case
    if(size == 0){
        return 0;
    }

    if(size == 1){
        return arr[0];
    }

    int restArray = getSum(arr + 1, size - 1);
    int sum = arr[0] + restArray;
    return sum;

}

int main(){

    int n;
    int arr[10000];

    cout << "Enter size of the Array :" << endl;
    cin >> n;

    cout << "Enter elements of the Array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array Entered : " << endl;
    for(int i = 0;i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    int sum = getSum(arr, n);
    cout << "Sum of the elements of the array is : " << sum << endl;

    return 0;
}
