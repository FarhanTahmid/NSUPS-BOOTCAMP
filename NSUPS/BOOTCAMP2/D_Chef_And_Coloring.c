#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int k;
    long num;
    scanf("%d %d",&n,&k);
    int counter = 0;
    while(n--){
        scanf("%ld",&num);
        if(num%k == 0){
            counter++;
        }
    }
    printf("%d",counter);
    return 0;
}