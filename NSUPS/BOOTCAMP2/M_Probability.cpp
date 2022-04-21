#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int containsZero(int x){
        if(x==0){
            return 1;
        }
        while(x/10!=0){
            int y = x%10;
            if(y==0){
                return 1;
                break;
            }
            x = x/10;
        }
        return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        long a;
        long b;
        cin>>a>>b;
        int num = 0;
        int denom = (b-a) + 1;
        for(int i=a; i<b+1; i++){
            if(containsZero(i)){
                num++;
            }
        }
        cout<<num<<"/"<<denom<<"\n";
    }
    return 0;
}