//回文串
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char *origin=malloc(1010*sizeof(char));
    char *reserved=malloc(1010*sizeof(char));
    int len=0,flag=1;
    while(scanf("%c",origin+len)!=EOF){
        len+=1;
    }
    for(int i=len-1;i>=0;i--){
        *(reserved+len-1-i)=*(origin+i);
    }
    for(int i=0;i<len;i++){
        if(*(reserved+i)!=*(origin+i)) flag=0; 
    }
    if(flag){
        for(int i=0;i<(len+1)/2;i++){
            printf("%c",*(origin+i));
        }
    }else{
        for(int i=0;i<len;i++){
            printf("%c",*(origin+i));
        }
    }
    return 0;
}