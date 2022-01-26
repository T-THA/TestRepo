#include<stdio.h>
#include<string.h>
#include<math.h>
char number[2][40]={'\0'};
int output[2][40]={0};
int main(){
    scanf("%s",number[0]);
    scanf("%s",number[1]);
    int len_0=strlen(number[0]),len_1=strlen(number[1]);
    long long ten_0=0,ten_1=0,sh=0,yu=0;
    for(int i=len_0-1;i>=0;i--){
        ten_0+=(int)(number[0][len_0-i-1]-'0')*(long long)pow(2,i);
    }
    for(int i=len_1-1;i>=0;i--){
        ten_1+=(int)(number[1][len_1-i-1]-'0')*(long long)pow(2,i);
    }
    yu=ten_0%ten_1;
    sh=(ten_0-yu)/ten_1;
    int count_yu=1,count_sh=1;
    output[0][count_yu-1]=yu%2;
    yu=yu/2;
    output[1][count_sh-1]=sh%2;
    sh=sh/2;
    while(yu>0){
        output[0][count_yu]=yu%2;
        yu=yu/2;
        count_yu+=1;
    }
    while(sh>0){
        output[1][count_sh]=sh%2;
        sh=sh/2;
        count_sh+=1;
    }
    for(int i=count_sh-1;i>=0;i--){
        printf("%d",output[1][i]);
    }
    printf("\n");
    printf("%s",number[0]);
    for(int i=len_1-1;i>=0;i--){
        printf("%d",output[0][i]);
    }
    return 0;
}