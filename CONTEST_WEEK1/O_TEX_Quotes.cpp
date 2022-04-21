#include<iostream>
#include<string.h>
using namespace std;
int main(){

    char line[1000];
    int counter=0;
    while(gets(line)){
        for(int i=0;i<strlen(line);i++){
            if(line[i]=='"'){
                counter++;
                if(counter %2 != 0){
                    cout<<"``";
                }
                else{
                    cout<<"''";
                }
            }
            else{
                cout<<line[i];
            }
        }
        cout<<endl;
    }


    return 0;
}