#include<stdio.h>
int getGCD(int a,int b){
    if(a==0){
        return b;
    }
    return getGCD(b%a,a);
}
int getLCM(int a,int b){
    return(a/getGCD(a,b))*b;
}
int main(){
    int numberofInputs;
    scanf("%d",&numberofInputs);
    int numberstofind [numberofInputs][2];
    for(int i=0;i<numberofInputs;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&numberstofind[i][j]);
        }
    }
    for(int i=0;i<numberofInputs;i++){
        for(int k=0;k<1;k++){
            printf("\n%d %d",getGCD(numberstofind[i][k],numberstofind[i][k+1]),getLCM(numberstofind[i][k],numberstofind[i][k+1]));
        }
    }
    return 0;

}

