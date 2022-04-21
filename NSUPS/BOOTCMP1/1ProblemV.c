#include<stdio.h>
long int findFactorial(int n){
    if(n>=1){
        return n*findFactorial(n-1);
    }
    else
        return 1;
}
int main(){
    int inputNumber;
    scanf("%d",&inputNumber);
    int numbers[inputNumber];
    for(int i=0;i<inputNumber;i++){
        scanf("%d",&numbers[i]);
    }

    for(int i=0;i<inputNumber;i++){
       printf("\n%d",findFactorial(numbers[i]));
    }

}
