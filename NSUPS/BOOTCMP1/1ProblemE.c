#include<stdio.h>
int operation(int a ,int b){

    if(a>b){
        printf(">\n");
    }
    else if(a<b){
        printf("<\n");
    }
    else if(a==b){
        printf("=\n");
    }

}
int main(){

    int numberfInputs;
    scanf("%d",&numberfInputs);
    int numbersToCompare[numberfInputs][2];
    for(int i=0;i<numberfInputs;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&numbersToCompare[i][j]);
        }
    }
    for(int i=0;i<numberfInputs;i++){
        for(int j=0;j<1;j++){
            operation(numbersToCompare[i][j],numbersToCompare[i][j+1]);
        }
    }

    return 0;
}
