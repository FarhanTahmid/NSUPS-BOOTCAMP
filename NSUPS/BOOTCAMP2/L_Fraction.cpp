#include<iostream>

#include <bits/stdc++.h>
using namespace std;

int showGCD(int x,int y){
    if(x==0) return y;
    else return showGCD(y%x, x);
}

int main(){

    int n;
    int a,b;
    scanf("%d",&n);

    if(n%2==0){
        a=n/2;
        b=n/2;
    } else{
        a=n/2;
        b=(n/2)+1;
    }
    while(showGCD(a,b)!=1){
        a--;
        b++;
    }
    printf("%d %d",a,b);


    return 0;
}