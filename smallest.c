#include<stdio.h>
int main(){
    int n,i,sum,j;
    scanf("%d",&n);
    long long number[n];
    for(i=0;i<n;i++){
        scanf("%lld",&number[i]);
    }
    for(i=1;i<1000000;i++){
        sum =1;
        for(j=0;j<n;j++){
            if (number[j]==i){
                sum = 0;
                break;
            }
        }
        if(sum ==1){
            printf("%d",i);
            break;
        }   
        }
    return 0;
}