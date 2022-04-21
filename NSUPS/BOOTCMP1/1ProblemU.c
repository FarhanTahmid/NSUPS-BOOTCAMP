#include<stdio.h>
int reversNumber(int n){
    int reversedNum=0;
    while(n!=0){
        int remainder=n%10;
        reversedNum=reversedNum*10+remainder;
        n/=10;
    }
    return reversedNum;
}
int main(){
    int numberOfInputs;
    scanf("%d",&numberOfInputs);
    int numbers[numberOfInputs];
    for(int i=0;i<numberOfInputs;i++){
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<numberOfInputs;i++){
        printf("%d\n",reversNumber(numbers[i]));
    }

    return 0;
}
