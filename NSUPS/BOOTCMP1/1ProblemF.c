#include<stdio.h>
int getSum(int number){
    int remainder;
    int sum=0;
    while(number>0){
        remainder=number%10;
        sum+=remainder;
        number/=10;
    }
    return sum;

}
int main(){
    int numberOfInputs;
    scanf("%d",&numberOfInputs);
    int numbers[numberOfInputs];
    for(int i=0;i<numberOfInputs;i++){
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<numberOfInputs;i++){
        printf("%d\n",getSum(numbers[i]));
    }
    return 0;
}
