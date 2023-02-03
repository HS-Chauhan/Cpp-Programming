#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

void firstAndLast(int arr[], int x, int n){
    int first = -1; 
    int last = -1;
    for(int i = 0;i < n; i++){
        if(x != arr[i]){
            continue;
        }
        if(first == -1){
            first = i;
            last = i;
        }
        if(first != -1){
            cout << "First Occurrence: " << first << endl;
            cout << "Last Occurrence: " << last << endl;
        }
        else{
            cout << "Not found";
        }
    }
}

int main(){
    
    int i, n, x;

    cout << "Enter size of Array: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter the elements of Array: " << endl;
    for(i = 0;i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the number: " << endl;
    cin >> x;

    firstAndLast(arr,x,n);



    return 0;
}
