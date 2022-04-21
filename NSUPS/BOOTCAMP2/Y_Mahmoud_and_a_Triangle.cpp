#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int numbers[n];
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    int max=numbers[0];
    for(int i=0;i<n;i++){
        if(max<numbers[i]){
            max=numbers[i];
        }
    }
    
    bool flag=false;
    if(n>=3 && n<=pow(10,5)){

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n-1;j++){
                if(numbers[i]==max){
                continue;
                }
                else if(numbers[i]+numbers[j]>max){
                    flag=true;
                    
                }
            }
            
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}