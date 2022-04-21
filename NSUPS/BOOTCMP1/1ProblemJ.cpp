#include<iostream>
using namespace std;
#define MAX 100;
int main(){

    int number;
    cin>>number;
    int numberOfDigits;
    int i=0;
    int digits=0;
    while(number>0){
        number/=10;
        i++;
        digits=i;
    }   
    cout<<digits;

    
    int numberArr[digits];
    int remainder=0;
    int j=0;
    while(number>0){
        remainder=number%10;
        numberArr[i]=remainder;
        number/=10;
        j++;
    }
    for(int k=0;k<digits;k++){
        cout<<numberArr[k];
    }
    return 0;
    
}