#include<stdio.h>
int main(){
    int n,i;
    long k;
    scanf("%d %ld\n",&n,&k);
    k = k % n;
    long long number[n],ch;
    for(i=0;i<n;i++){
        scanf("%lld",&number[i]);
    }
    for(i=n-k;i<n;i++){
        ch = number[i];
        printf("%lld ",ch);
    }
    for(i=0;i<n-k;i++){
        ch = number[i];
        printf("%lld ",ch);
    }
    return 0;
}