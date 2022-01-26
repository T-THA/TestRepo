#include<stdio.h>
int main(){
    int n,m,i,j,k;
    scanf("%d%d",&n,&m);
    long long chn[n],chm[m],tmp;
    for(i = 0;i<n;i++){
        scanf("%lld",&chn[i]);
    }
    for(j = 0;j<m;j++){
        scanf("%lld",&chm[j]);
    }
    i =0;
    j =0;
    tmp=0;
    for(k=0;k<n+m;k++){
        if(i == n){
            if(chm[j]==tmp || chm[j]<chn[i-1]){
                j = j+1;
            }else{
                printf("%lld ",chm[j]);
                tmp =chm[j];
                j = j+1;
            }
        }else if(j ==m){
            if(chn[i]==tmp || chn[i]<chm[j-1]){
                i = i+1;
            }else{
                printf("%lld ",chn[i]);
                tmp =chn[i];
                i = i+1;
            }

        }else{
            if(chn[i]==tmp){
                i = i+1;
        }else if(chm[j]==tmp){
                j = j+1;
        }else{
            if(chn[i]>chm[j]){
                printf("%lld ",chm[j]);
                tmp =chm[j];
                j = j+1;
        }else if(chn[i]<chm[j]){
                printf("%lld ",chn[i]);
                tmp =chn[i];
                i = i+1;
        }else{
            printf("%lld ",chn[i]);
            tmp =chn[i];
            i = i +1;
            j = j +1;
        }
        }
        }
        if(i==n && j==m){
            break;
        }
    }
    return 0;
}