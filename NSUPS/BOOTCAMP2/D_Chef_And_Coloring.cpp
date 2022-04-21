#include<iostream>
using namespace std;
int main(){
    int testCase;
    cin>>testCase;
    while(testCase){

        int numberOfRooms;
        cin>>numberOfRooms;
        char colorCombination[numberOfRooms];
        for (int i=0;i<numberOfRooms;i++){
            cin>>colorCombination[i];
        }
        int count=0;
        for(int i=0;i<numberOfRooms-1;i++){
            if (colorCombination[i]==colorCombination[i+1]){
                cout<<count;
                break;
            }
            
        }

        testCase--;
    }

}