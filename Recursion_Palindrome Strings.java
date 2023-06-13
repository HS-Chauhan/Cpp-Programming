#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;
 
bool isPalRec(char str[], int i, int j)
{
     
    
    if (i == j)
    return true;
 
    
    if (str[i] != str[j])
    return false;
 
    
    if (i < j + 1)
    return isPalRec(str, i + 1, j - 1);
 
    return true;
}
 
bool isPalindrome(char str[])
{
    int n = strlen(str);
    if (n == 0)
        return true;
     
    return isPalRec(str, 0, n - 1);
}
 

int main()
{
    char str[] = "malayalam";
 
    if (isPalindrome(str))
    cout << "Yes, it is a palindrome string";
    else
    cout << "No, it is not a palindrome string";
 
    return 0;
}
