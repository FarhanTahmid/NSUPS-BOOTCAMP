#include <iostream>

using namespace std;

int main()
{
    int a,b,c,asqure,bsqure,csqure;
    bool flag=true;

    while(1){
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0){
            break;
        }
        asqure = a*a;
        bsqure =b*b;
        csqure =c*c;
        if((asqure+bsqure==csqure)||(bsqure+csqure==asqure)||(csqure+asqure==bsqure)){
            cout<<"right"<<endl;
        }
        else{
            cout<<"wrong"<<endl;
        } 
    }
    return 0;
}