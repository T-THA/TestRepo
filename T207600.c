#include<stdio.h>
int main(){
    int n, i, target, j;
    scanf("%d %d\n",&n,&target);
    int number[n];
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(target == number[i] +number[j]){
                printf("%d %d",number[i],number[j]);
                break;
            }
        }
        break;
    }
    return 0;
}