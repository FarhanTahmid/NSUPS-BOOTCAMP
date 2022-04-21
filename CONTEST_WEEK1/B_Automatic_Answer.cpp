#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int testcase;
    int number;
    int result;
    
    cin>>testcase;
    if(testcase>=1 && testcase<=100){
        while (testcase!=0)
        {
            cin>>number;
            if(number>= -1000 && number <= 1000){
                result=((((((number*567)/9)+7492)*235)/47)-498);
                int digit=0;
                result/=10;
                int tensPlace=result%10;
                if(tensPlace<0){
                    tensPlace*=(-1);
                }
                cout<<tensPlace<<endl;
                
            }
            testcase--;
        }    
    }
    return 0;
}