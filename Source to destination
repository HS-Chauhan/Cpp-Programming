#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

void reachHome(int src, int dest){

    cout << "source" << src << "destination" << dest << endl;

    //base case
    if(src == dest){
        cout << "Reached" << endl;
        return;
    }

    //processing
    src++;

    //recursive call
    reachHome(src,dest);
}

int main(){

    int dest, src;
    cout << "Enter the value of destination : " << endl;
    cin >> dest;
    cout << "Enter the value of starting point : " << endl;
    cin >> src;
    if(dest > 1 && src >= 1 && dest > src){
        cout << endl;
        reachHome(src, dest);
    }
    else{
        cout << "Enter a valid number" << endl;
    }




    return 0;
}
