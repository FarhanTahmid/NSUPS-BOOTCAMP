#include<stdio.h>

int findtheNumber(int a,int b){
    if((a+b)%2==0){
        return((a+b)/2);
    }
    else{
        return -1;
    }
}

int main(){
    int a;
    int b;
    int k;
    scanf("%d %d",&a,&b);
    k=findtheNumber(a,b);
    if(k==-1){
        printf("IMPOSSIBLE\n");
        //printf("No integer satisfies the condition.");
    }
    else{
        printf("%d\n",k);
        /*
        if(a<b){
            printf("|""%d""-""%d""|"" = ""%d"" and ""|""%d""-""%d""|"" = ""%d"", so %d satisfies the condition." ,a,k,(a-k)*-1,b,k,(b-k),k);
        }
        */
    }
}
