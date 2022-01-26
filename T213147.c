#include<stdio.h>
#include<string.h>
#include<math.h>
char input[3][20];
int IP0_two[33]={0},IP1_two[33]={0},IP2_two[33]={0};
int IP0_ten[5]={0},IP1_ten[5]={0},IP2_ten[5]={0};
int len0=0,len1=0,len2=0;
int dotlocation[3]={0},count=0;
int wangluo1[33]={0},wangluo2[33]={0};
int main(){
    scanf("%s",input[0]);
    scanf("%s",input[1]);
    scanf("%s",input[2]);
    // for(int i=0;i<3;i++){
    //     gets(input[i]);
    // }
    len0=strlen(input[0]);
    len1=strlen(input[1]);
    len2=strlen(input[2]);
//第一串地址的传入
    dotlocation[2]=0,dotlocation[1]=0,dotlocation[0]=0;
    count=0;
    for(int i=0;i<len0;i++){
        if(input[0][i]=='.'){
            dotlocation[count]=i;
            count+=1;
        }
    }
    for(int i=dotlocation[0]-1;i>=0;i--){
        IP0_ten[0]+=(int)(input[0][i]-'0')*(int)pow(10,dotlocation[0]-i-1);
    }
    for(int i=dotlocation[1]-1;i>dotlocation[0];i--){
        IP0_ten[1]+=(int)(input[0][i]-'0')*(int)pow(10,dotlocation[1]-1-i);
    }
    for(int i=dotlocation[2]-1;i>dotlocation[1];i--){
        IP0_ten[2]+=(int)(input[0][i]-'0')*(int)pow(10,dotlocation[2]-1-i);
    }
    for(int i=len0-1;i>dotlocation[2];i--){
        IP0_ten[3]+=(int)(input[0][i]-'0')*(int)pow(10,len0-1-i);
    }
//第一串地址转为32位二进制
    for(int i=7;i>=0;i--){
        IP0_two[i]=IP0_ten[0]%2;
        IP0_ten[0]=IP0_ten[0]/2;
    }
    for(int i=15;i>=8;i--){
        IP0_two[i]=IP0_ten[1]%2;
        IP0_ten[1]=IP0_ten[1]/2;
    }
    for(int i=23;i>=16;i--){
        IP0_two[i]=IP0_ten[2]%2;
        IP0_ten[2]=IP0_ten[2]/2;
    }
    for(int i=31;i>=24;i--){
        IP0_two[i]=IP0_ten[3]%2;
        IP0_ten[3]=IP0_ten[3]/2;
    }

//第二串地址的传入
    dotlocation[2]=0,dotlocation[1]=0,dotlocation[0]=0;
    count=0;

    for(int i=0;i<len1;i++){
        if(input[1][i]=='.'){
            dotlocation[count]=i;
            count+=1;
        }
    }
    for(int i=dotlocation[0]-1;i>=0;i--){
        IP1_ten[0]+=(int)(input[1][i]-'0')*(int)pow(10,dotlocation[0]-i-1);
    }
    for(int i=dotlocation[1]-1;i>dotlocation[0];i--){
        IP1_ten[1]+=(int)(input[1][i]-'0')*(int)pow(10,dotlocation[1]-1-i);
    }
    for(int i=dotlocation[2]-1;i>dotlocation[1];i--){
        IP1_ten[2]+=(int)(input[1][i]-'0')*(int)pow(10,dotlocation[2]-1-i);
    }
    for(int i=len1-1;i>dotlocation[2];i--){
        IP1_ten[3]+=(int)(input[1][i]-'0')*(int)pow(10,len1-1-i);
    }
//第二串地址转为32位二进制
    for(int i=7;i>=0;i--){
        IP1_two[i]=IP1_ten[0]%2;
        IP1_ten[0]=IP1_ten[0]/2;
    }
    for(int i=15;i>=8;i--){
        IP1_two[i]=IP1_ten[1]%2;
        IP1_ten[1]=IP1_ten[1]/2;
    }
    for(int i=23;i>=16;i--){
        IP1_two[i]=IP1_ten[2]%2;
        IP1_ten[2]=IP1_ten[2]/2;
    }
    for(int i=31;i>=24;i--){
        IP1_two[i]=IP1_ten[3]%2;
        IP1_ten[3]=IP1_ten[3]/2;
    }

//第三串地址的传入
    dotlocation[2]=0,dotlocation[1]=0,dotlocation[0]=0;
    count=0;
 
    for(int i=0;i<len2;i++){
        if(input[2][i]=='.'){
            dotlocation[count]=i;
            count+=1;
        }
    }
    for(int i=dotlocation[0]-1;i>=0;i--){
        IP2_ten[0]+=(int)(input[2][i]-'0')*(int)pow(10,dotlocation[0]-i-1);
    }
    for(int i=dotlocation[1]-1;i>dotlocation[0];i--){
        IP2_ten[1]+=(int)(input[2][i]-'0')*(int)pow(10,dotlocation[1]-1-i);
    }
    for(int i=dotlocation[2]-1;i>dotlocation[1];i--){
        IP2_ten[2]+=(int)(input[2][i]-'0')*(int)pow(10,dotlocation[2]-1-i);
    }
    for(int i=len2-1;i>dotlocation[2];i--){
        IP2_ten[3]+=(int)(input[2][i]-'0')*(int)pow(10,len2-1-i);
    }
//第二串地址转为32位二进制
    for(int i=7;i>=0;i--){
        IP2_two[i]=IP2_ten[0]%2;
        IP2_ten[0]=IP2_ten[0]/2;
    }
    for(int i=15;i>=8;i--){
        IP2_two[i]=IP2_ten[1]%2;
        IP2_ten[1]=IP2_ten[1]/2;
    }
    for(int i=23;i>=16;i--){
        IP2_two[i]=IP2_ten[2]%2;
        IP2_ten[2]=IP2_ten[2]/2;
    }
    for(int i=31;i>=24;i--){
        IP2_two[i]=IP2_ten[3]%2;
        IP2_ten[3]=IP2_ten[3]/2;
    }

    
    for(int i=0;i<32;i++){
        if(IP0_two[i]*IP1_two[i]==1){
            wangluo1[i]=1;
        }
    }
    for(int i=0;i<32;i++){
        if(IP2_two[i]*IP1_two[i]==1){
            wangluo2[i]=1;
        }
    }
    int flag=1;
    for(int i=0;i<32;i++){
        if(wangluo1[i]!=wangluo2[i]){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}