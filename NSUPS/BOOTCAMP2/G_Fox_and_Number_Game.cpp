#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int showGCD(int a,int b){
    if(a==0) return b;
    else return showGCD(b%a, a);
}

int main(){

    int n;
    cin>>n;
    int length = n;
    int flag = 0;
    int x;
    while(length--){
        scanf("%d",&x);
        flag = showGCD(flag,x);
    }

    cout<<flag*n;
    return 0;
}