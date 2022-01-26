#include<stdio.h>
#include<string.h>
char number[105][105];
int judge(int count,int len);
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",number[i]);
    }
    for(int i=0;i<n;i++){
        int len =strlen(number[i]);
        judge(i,len);
        printf("\n");
    }
    return 0;
}
int judge(int count, int len){
    int flag=1;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(number[count][i]-number[count][j]>len-1||number[count][i]==number[count][j]||number[count][j]-number[count][i]>len-1){
                flag=0;
                break;
            }
        }
    }
    if(flag==0){
        printf("No");
    }else{
        printf("Yes");
    }
}