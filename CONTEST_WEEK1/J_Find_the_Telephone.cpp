#include<iostream>
using namespace std;

int main(){

    char line[31];
    int arr[27];
   
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(i<18){
            arr[i]=i/3+2;
        }
        if(i==18){
            arr[i]=7;
        }
        if(i==19 || i==20 || i==21){
            arr[i]=8;
        }
        if(i==22 || i==23 || i==24 || i==25){
            arr[i]=9;
        }
    }
    while(gets(line)){
        for(int i=0;line[i];i++){
            if(line[i]>='A' && line[i]<='Z'){
                printf("%d",arr[line[i]-'A']);
            }else{
                printf("%c",line[i]);
            }
        }
        printf("\n");
    }

    return 0;
}