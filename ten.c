#include<stdio.h>
#include<math.h>
int main(){
    long long n;
    int i;
    long long number[32]={0};
    scanf("%lld",&n);
    if(n>=0){
        for(i=31;i>=0;i--){
            number[i]= n%2;
            n = n/2;
        }
    for(i=0;i<32;i++){
        printf("%d",number[i]);
    }
    }else{
        n=-n-1;
        for(i=31;i>=0;i--){
            number[i]= abs(n%2-1);
            n = n/2;
        }
    for(i=0;i<32;i++){
        printf("%d",number[i]);
    }
    }
    return 0;
}