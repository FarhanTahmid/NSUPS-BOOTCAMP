#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int numbers[n];
        for(int i=0;i<n;i++){
            cin>>numbers[i];
        }
        long smallestNum=numbers[0];
        long secondSmallest=numbers[0];
        for(int i=0;i<n;i++){
            if(smallestNum>numbers[i]){
                smallestNum=numbers[i];

            }
        }

        
        for(int i=0;i<n;i++){
            if(secondSmallest>numbers[i]){
                if(numbers[i]!=smallestNum){
                    secondSmallest=numbers[i];
                }

            }
        }
        cout<<secondSmallest+smallestNum;
    }



    return 0;
}
