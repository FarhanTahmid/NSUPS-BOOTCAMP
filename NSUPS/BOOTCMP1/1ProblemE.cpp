#include<iostream>
using namespace std;
void operation(int a ,int b){

    if(a>b){
        cout<<">"<<endl;
    }
    else if(a<b){
        cout<<"<"<<endl;
    }
    else if(a==b){
        cout<<"="<<endl;
    }

}
int main(){

    int numberfInputs;
    cin>>numberfInputs;
    int numbersToCompare[numberfInputs][2];
    for(int i=0;i<numberfInputs;i++){
        for(int j=0;j<2;j++){
            cin>>numbersToCompare[i][j];
        }
    }
    for(int i=0;i<numberfInputs;i++){
        for(int j=0;j<1;j++){
            operation(numbersToCompare[i][j],numbersToCompare[i][j+1]);
        }
        
    }

    return 0;
}
