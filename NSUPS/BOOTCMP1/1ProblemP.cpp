#include<iostream>
using namespace std;
int main(){

    int size;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    cout<<endl;
    cout<<sum;

    return 0;
}