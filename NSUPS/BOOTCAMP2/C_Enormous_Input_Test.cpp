#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int totalNumberOfInput;
    int divisible;
    int numbers[totalNumberOfInput];
    int counting=0;
    cin>>totalNumberOfInput>>divisible;
    if(totalNumberOfInput<=pow(10,7)&& divisible<=pow(10,7)){
        for(int i=0;i<totalNumberOfInput;i++){
            cin>>numbers[i];
        }
        for(int i=0;i<totalNumberOfInput;i++){
            if(numbers[i]<pow(10,9)){
                if(numbers[i]%divisible==0){
                counting++;
            }
        }

        }
        cout<<counting;

    }

    return 0;
}
