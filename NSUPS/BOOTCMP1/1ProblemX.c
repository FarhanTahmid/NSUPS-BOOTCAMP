#include<stdio.h>

int findLastNum(int number){
    return (number%10);
}
int firstNumFinder(int number){
    while (number>=10){
        number/= 10;
    }
    return number;
}
int main(){
    int inputNumber;
    scanf("%d",&inputNumber);
    int numbers[inputNumber];

    for(int i=0;i<inputNumber;i++){
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<inputNumber;i++){
        int lastNum=findLastNum(numbers[i]);
        int firstNum=firstNumFinder(numbers[i]);
        printf("%d\n",lastNum+firstNum);
    }
}
