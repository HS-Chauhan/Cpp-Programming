#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

int factorial(int n){
    //base case
    if(n == 0){
        return 1;
    }
    

    return n * factorial(n - 1); 

}

int power(int n){

    //base case
    if(n == 0){
        return 1;
    }

    //recursive relation
    return 2 * power(n - 1);
}

int main(){

    int n;
    cout << "Enter your number : " << endl;
    cin >> n;

    // int ans = factorial(n);
    int ans = power(n);
    
    cout << ans << endl;


    return 0;
}
