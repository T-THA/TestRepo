//组合IP地址
#include<stdio.h>
#include<string.h>
char input[8];
int number[8]={0};
int count=0;
int judge(location,dot_num);
int main(){
    scanf("%s",input);
    int len=strlen(input);
    for(int i=0;i<len;i++){
        number[i]=(int)(input[i]-'0');
    }
    judge(0,3);
    return 0;
}
int judge(location,dot_num){
    if(dot_num==0){
        
    }else{
        
        if(number[location]==0){
            printf("%d.",number[location]);
            judge(location+1,dot_num);
        }
    }
}