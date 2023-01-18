#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

void printArray(int *arr, int n){
    for(int i = 0;i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void arrayMerge(int *arr1, int n, int *arr2, int m, int *arr3){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
            // k++;
            // i++;
        }
        else{
            arr3[k++] = arr2[j++];
            // k++;
            // j++;
        }
    }

    //copy element from first array to new array
    while(i < n){
        arr3[k++] = arr1[i++];
        // k++;
        // i++;
    }

    //copy element from second array to new array
    while(j < m){
        arr3[k++] = arr2[j++];
        // k++;
        // j++;
    }
}



int main(){

    int i, j, n1, n2;

    cout << "Enter the number of elements in 1st Array: " << endl;
    cin >> n1;

    int array_one[n1];

    cout << "Enter the elements of 1st Array: " << endl;
    for (i = 0; i < n1; i++)
    {
        cin >> array_one[i];
    }

    cout << "Enter the number of elements in 2nd Array: " << endl;
    cin >> n2;

    int array_two[n2];

    cout << "Enter the elements of 2nd Array: " << endl;
    for (i = 0; i < n2; i++)
    {
        cin >> array_two[i];
    }
    
    int n3 = n1 + n2;
    int array_three[n3];

    cout << "Merged Array is: " << endl;
    arrayMerge(array_one,n1,array_two,n2,array_three);
    printArray(array_three, n3);

    return 0;
}
