#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;



int main(){

    int i, j, n1, n2;

    cout << "Enter the number of elements in 1st array: " << endl;
    cin >> n1;

    int array_one[n1];

    cout << "Enter the elements of 1st array: " << endl;
    for(i = 0;i < n1; i++){
        cin >> array_one[i];
    }

    cout << "Enter the number of elements in 2nd array: " << endl;
    cin >> n2;

    int array_two[n2];

    cout << "Enter the elements of 2nd array: " << endl;
    for(i = 0;i < n2; i++){
        cin >> array_two[i];
    }

    cout << "The intersection of the two arrays is: " << endl;

    for(i = 0;i < n1; i++){
        for(j = 0;j < n2; j++){
            if(array_one[i] == array_two[j]){
                cout << array_one[i] << " ";
            }
        }
    }

    return 0;
}
