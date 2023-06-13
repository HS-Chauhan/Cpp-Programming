#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

int power(int a, int b){

    //base case
    if(b == 0){
        return 1;
    }

    if(b == 1){
        return a;
    }

    //Recursive call
    int ans = power(a, b/2);

    //if number is even
    if(b % 2 == 0){
        return ans * ans;
    }
    //if number is odd
    else{
        return a * ans * ans;
    }
}

int main(){

    int a, b;

    cout << "Enter your number : " << endl;
    cin >> a;

    cout << "Enter the power of the number : " << endl;
    cin >> b;

    int ans = power(a, b);

    cout << "THE VALUE IS : " << ans << endl;


    return 0;
}
