#include<stdio.h>
#include<string.h>
#include<math.h>
char number[2][40]={'\0'};
int output[2][40]={0};
int main(){
    scanf("%s",number[0]);
    scanf("%s",number[1]);
    int len_0=strlen(number[0]);
    int len_1=strlen(number[1]);
    long long ten_0=0,ten_1=0;
    for(int i=len_0-1;i>=0;i--){
        ten_0+=(int)(number[0][len_0-i-1]-'0')*(int)pow(2,i);
    }
    for(int i=len_1-1;i>=0;i--){
        ten_1+=(int)(number[1][len_1-i-1]-'0')*(int)pow(2,i);
    }
    long long shang=0,yushu=0;
    yushu=ten_0%ten_1;
    shang=(ten_0-yushu)/ten_1;
    int count_yushu=1,count_shang=1;
    output[0][count_yushu-1]=yushu%2;
    yushu=yushu/2;
    output[1][count_shang-1]=shang%2;
    shang=shang/2;
    while(yushu>0){
        output[0][count_yushu]=yushu%2;
        yushu=yushu/2;
        count_yushu+=1;
    }
    while(shang>0){
        output[1][count_shang]=shang%2;
        shang=shang/2;
        count_shang+=1;
    }
    for(int i=count_shang-1;i>=0;i--){
        printf("%d",output[1][i]);
    }
    printf("\n");
    printf("%s",number[0]);
    for(int i=len_1-1;i>=0;i--){
        printf("%d",output[0][i]);
    }
    return 0;
}