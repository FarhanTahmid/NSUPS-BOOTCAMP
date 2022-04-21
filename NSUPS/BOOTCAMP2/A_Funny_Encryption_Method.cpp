#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int findB1(int n){
    int b1=0;
    while(n!=0){
        if(n%2==1 || n==1){
            b1++;
        }
        n = n/2;
    }
    return b1;
}

int findB2(int n){

    int b2=0;
    while(n!=0){
        int x = n%10;
        while(x!=0){
            if(x%2==1 || x==1){
                b2++;
            }
            x = x/2;
        }
        n=n/10;
    }
    return b2;
}

int main(){

    int t;
    cin>>t;
    int n;
    while(t--){
        scanf("%d",&n);
        cout<<findB1(n)<<" "<<findB2(n)<<"\n";
    }

    return 0;
}