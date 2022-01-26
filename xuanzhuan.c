#include<stdio.h>
int main(){
    int n,i;
    long k;
    scanf("%d %ld\n",&n,&k);
    long long number[n];
    for(i=0;i<n;i++){
        scanf("%lld",&number[i]);
    }
    for(i=n-k;i<n;i++){
        printf("%lld ",number[i]);
    }
    for(i=0;i<n-k;i++){
        printf("%lld ",number[i]);
    }
    return 0;
}