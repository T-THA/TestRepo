#include<stdio.h>
int antnum[10005];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&antnum[i]);
    }
    for(int i=0;i<n;i++){
        if(antnum[i]<0){
            for(int j=i-1;j>-1;j--){
                if(antnum[j]>0){
                    if(antnum[j]>-antnum[i]){
                        antnum[i]=0;
                        break;
                    }else if(antnum[j]<-antnum[i]){
                        antnum[j]=0;
                    }else{
                        antnum[i]=0;
                        antnum[j]=0;
                        break;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        if(antnum[i]!=0){
            printf("%d ",antnum[i]);
        }
    }
    return 0;
}
