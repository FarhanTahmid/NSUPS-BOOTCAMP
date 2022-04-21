#include<bits/stdc++.h>
using namespace std;

int bitwiseAddition(int a,int b){
    while(b!=0){
        unsigned carryBit=a & b;
        a=a^b;
        b=carryBit <<1;
    }
    return a;
}

int main(){
    int numberOflines;
    cin>>numberOflines;
    
    int sum[numberOflines];
    
    int numberToTest[numberOflines][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>numberToTest[i][j];
        }
    }
    for(int i=0;i<numberOflines;i++){
        for(int j=0;j<1;j++){
            sum[i]=bitwiseAddition(numberToTest[i][j],numberToTest[i][j+1]);
        }
    }
    for(int i=0;i<numberOflines;i++){
        cout<<sum[i];
    }

    return 0;    
}