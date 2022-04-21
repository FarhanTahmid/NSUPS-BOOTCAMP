#include<stdio.h>
int main(){

    int numberOfInputs;
    scanf("%d",&numberOfInputs);
    int numbers[numberOfInputs];
    for(int i=0;i<numberOfInputs;i++){
        scanf("%d",&numbers[i]);
    }
    int index1=0;
    int index2=0;
    int flagOdd=0;
    int flagEven=0;

    for(int i=0;i<numberOfInputs;i++){
        if(numbers[i]%2!=0){
            flagOdd++;
            index1=i;
        }
        else{
            flagEven++;
            index2=i;
        }
    }
    if(flagEven<flagOdd){
        printf("%d",index2+1);
    }
    else if(flagOdd<flagEven){
        printf("%d",index1+1);
    }

    return 0;
}