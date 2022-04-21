#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n>0){

        int sum, difference;
        cin>>sum>>difference;
        
            int number1=(sum+difference)/2;
            int number2=(sum-difference)/2;
            if(sum<difference){
                cout<<"impossible"<<endl;
            }
            else if((sum-difference)%2){
                cout<<"impossible"<<endl;
            }
            else{
                cout<<number1<<" "<<number2<<endl;
            }
        

        n--;
    }

    return 0;
}