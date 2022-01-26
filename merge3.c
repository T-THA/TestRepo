#include<stdio.h>
int main(){
    int n,m,i,j,k;
    scanf("%d%d",&n,&m);
    long long chn[n],chm[m];
    for(i = 0;i<n;i++){
        scanf("%lld",&chn[i]);
    }
    for(j = 0;j<n;j++){
        scanf("%lld",&chm[j]);
    }
    i =0;
    j =0;
    for(k=0;k<n+m;k++){
        if(chn[i]>chm[j]){
            printf("%lld ",chm[j]);
            j = j+1;
        }else if(chn[i]<chm[j]){
            printf("%lld ",chn[i]);
            i = i+1;
        }else{
            printf("%lld ",chn[i]);
            i = i +1;
            j = j +1;
        }
        if(i==n && j==m){
            break;
        }
    }
    return 0;