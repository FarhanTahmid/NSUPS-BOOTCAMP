#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int t;
    cin>>t;
    int x = t;
    int j=0;
    while(t--){
        long a,b,c;
        cin>>a>>b>>c;
        if(a<=0 || b<=0 || c<=0){
            cout<<"Case "<<j+1<<": Invalid\n";
        }else if(a+b<=c || a+c<=b || b+c<= a){
            cout<<"Case "<<j+1<<": Invalid\n";
        }else{
            if(a==b && a==c){
                cout<<"Case "<<j+1<<": Equilateral\n";
            }else if(a==b || a==c ||b==c){
                cout<<"Case "<<j+1<<": Isosceles\n";
            }else{
                cout<<"Case "<<j+1<<": Scalene\n";
            }
        }
        j++;
    }

    return 0;
}