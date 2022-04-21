#include<iostream>
using namespace std;
int main(){
    int numberOfInputs;
    cin >> numberOfInputs;
    int numbers[numberOfInputs][2];
    for(int i=0;i<numberOfInputs;i++){
        for(int j=0;j<2;j++){
            cin >> numbers[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<numberOfInputs;i++){
        for(int j=0;j<1;j++){
            sum=numbers[i][j]+numbers[i][j+1];
        }

        cout <<sum<<endl;
    }

}