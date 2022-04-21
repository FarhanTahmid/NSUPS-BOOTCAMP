#include<iostream>
using namespace std;
int main(){

    int numberOfPages;
    cin>>numberOfPages;
    int pagesRead[7];
    for(int i=0;i<7;i++){
        cin>>pagesRead[i];
    }
    int dayCount;
    for(int i =0;i<7;i++){
        numberOfPages=numberOfPages-pagesRead[i];
        if(numberOfPages<=0){
            dayCount=i;
        }
    }
    cout<<dayCount;

    return 0;
}