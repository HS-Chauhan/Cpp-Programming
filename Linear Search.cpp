#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

bool search(int arr[], int size, int key){

    //traversing the array
    for(int i = 0;i < size; i++){

        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){

    int arr[10] = {5,7,-2,10,69,22,-34,100,99,-1};

    for(int i = 0;i < 10;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "enter the element to search for" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if(found){
        cout << "Element " << key << " is present" << endl;
    }
    else{
        cout << "Element is absent" << endl;
    }


    return 0;
}
