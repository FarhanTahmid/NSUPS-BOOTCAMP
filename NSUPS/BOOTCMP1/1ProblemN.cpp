#include<iostream>
using namespace std;
int main(){
    int p1,p2,q1,q2;
    int moves;
    cin>>p1>>p2>>q1>>q2;
    q1=abs(q1-p1);
    q2=abs(q2-p2);
    moves=min(q1,q2);
    moves+=abs(q1-q2);
    cout<<moves<<endl;

    return 0;
}
