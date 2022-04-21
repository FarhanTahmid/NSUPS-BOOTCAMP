#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    int farmers;
    
        while(t--){
            int sum=0;
            cin>>farmers;
            
                while(farmers--){
                    int farmSize,ownedAnimal,envFrnd;
                    cin>>farmSize>>ownedAnimal>>envFrnd;
                    
                        sum+=(farmSize*envFrnd);
                    
                       
                }
                cout<<sum<<endl;
            
         
        }
        
    

    return 0;
}