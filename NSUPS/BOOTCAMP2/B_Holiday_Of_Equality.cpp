#include<iostream>
using namespace std;

int main()
{
    int numberOfCitizen;
    cin>>numberOfCitizen;
    int welfare[numberOfCitizen];
    for(int i=0;i<numberOfCitizen;i++){
        cin>>welfare[i];
    }
    int largestAmount=welfare[0];
    for(int i=0;i<numberOfCitizen;i++){
        if(largestAmount<welfare[i]){
            largestAmount=welfare[i];
        }
    }
    int difference=0;
    int funds=0;
    for(int i=0;i<numberOfCitizen;i++){
        difference=largestAmount-welfare[i];
        funds=funds+difference;
    }
    cout<<funds;

    return 0;
}

