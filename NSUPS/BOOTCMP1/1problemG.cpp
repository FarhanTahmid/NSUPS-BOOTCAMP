#include<iostream>
#include<math.h>
#include <iomanip>
#define PI acos(-1)
using namespace std;
int main(){
    int t,l;
    double r,arear,areag,arearec,w;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>l;
        r=(l/5.0);
        arear=PI*pow(r,2);
        w=((l*6)/10.0);
        arearec=l*w;
        areag=arearec-arear;
        cout<<fixed<<setprecision(2)<<arear<<" "<<fixed<<setprecision(2)<<areag<<endl;

    }

}

