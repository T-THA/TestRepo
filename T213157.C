//地址缩写
#include<stdio.h>
#include<math.h>
char c_Ipv6[128]={0}, sixteen[8][4]={'0'};
int tmp=0,len=0,len_max=0,location=0,judge[8]={0},IPv6[128]={0};
char change(int x);
int main(){
    scanf("%s",c_Ipv6);
    for(int i=0;i<128;i++){
        IPv6[i]=(int)(c_Ipv6[i]-'0');
    }
    for(int i=0;i<128;i+=4){
        for(int j=0;j<4;j++){
            tmp+=IPv6[i+j]*(int)pow(2,3-j);
        }
        sixteen[i/16][(i%16)/4]=change(tmp);
        tmp=0;
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<4;j++){
            if((int)sixteen[i][j]==48){
                judge[i]+=1;
            }else{
                break;
            }
        }
    }
    for(int i=0;i<8;i++){
        if(judge[i]==4){
            len+=1;
            if(len>len_max){
                len_max=len;
                location=i;
            }
        }else{
            len=0;
        }
    }
    for(int i=0;i<8;i++){
        if((location!=0)&&(len_max!=0)&&(i>=location+1-len_max)&&(i<=location)){
            if(i==0) printf(":");
            if(i==location) printf(":");
        }else{
            // if(judge[i]==4){
            //     printf("%c",sixteen[i][3]);
            // }
            // if(judge[i]==3){
            //     printf("%c",sixteen[i][3]);
            // }
            // if(judge[i]==2){
            //     printf("%c",sixteen[i][2]);
            //     printf("%c",sixteen[i][3]);
            // }
            // if(judge[i]==1){
            //     printf("%c",sixteen[i][1]);
            //     printf("%c",sixteen[i][2]);
            //     printf("%c",sixteen[i][3]);
            // }
            // if(judge[i]==0){
            //     for(int j=0;j<4;j++){
            //         printf("%c",sixteen[i][j]);
            //     }
            // }
            if(judge[i]<=0) printf("%c",sixteen[i][0]);
            if(judge[i]<=1) printf("%c",sixteen[i][1]);
            if(judge[i]<=2) printf("%c",sixteen[i][2]);
            if(judge[i]<=4) printf("%c",sixteen[i][3]);
            if(i!=7) printf(":");
        }
    }
    return 0;
}
char change(int x){
    if(tmp<10){
        return (char)tmp+'0';
    }else if(tmp==10){
        return 'a';
    }else if(tmp==11){
        return 'b';
    }else if(tmp==12){
        return 'c';
    }else if(tmp==13){
        return 'd';
    }else if(tmp==14){
        return 'e';
    }
    return 'f';
}
