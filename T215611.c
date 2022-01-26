//组合IP地址
#include<stdio.h>
#include<string.h>
char input[8];
int number[8];
int main(){
    scanf("%s",input);
    int len=strlen(input);
    for(int i=0;i<len;i++){
        number[i]=(int)(input[i]-'0');
    }
    if(len==4){
        printf("%d.%d.%d.%d",number[0],number[1],number[2],number[3]);
    }
    if(len==5){
        int count=0;
        if(number[3]!=0) {
            if(count) printf(",");
            printf("%d.%d.%d.%d%d",number[0],number[1],number[2],number[3],number[4]);
            count+=1;
        }
        if(number[2]!=0) {
            if(count) printf(",");
            printf("%d.%d.%d%d.%d",number[0],number[1],number[2],number[3],number[4]);
            count+=1;
        }
        if(number[1]!=0) {
            if(count) printf(",");
            printf("%d.%d%d.%d.%d",number[0],number[1],number[2],number[3],number[4]);
            count+=1;
        }
        if(number[0]!=0) {
            if(count) printf(",");
            printf("%d%d.%d.%d.%d",number[0],number[1],number[2],number[3],number[4]);
            count+=1;
        }
    }
    if(len==6){
        int count=0;
        if((number[3]*100+number[4]*10+number[5])>=100&&(number[3]*100+number[4]*10+number[5])<256){
            if(count) printf(",");
            printf("%d.%d.%d.%d%d%d",number[0],number[1],number[2],number[3],number[4],number[5]);
            count+=1;
        }
        if(number[2]!=0&&number[4]!=0){
            if(count) printf(",");
            printf("%d.%d.%d%d.%d%d",number[0],number[1],number[2],number[3],number[4],number[5]);
            count+=1;
        }
        if((number[2]*100+number[3]*10+number[4])>=100&&(number[2]*100+number[3]*10+number[4])<256){
            if(count) printf(",");
            printf("%d.%d.%d%d%d.%d",number[0],number[1],number[2],number[3],number[4],number[5]);
            count+=1;
        }
        if(number[1]!=0&&number[4]!=0){
            if(count) printf(",");
            printf("%d.%d%d.%d.%d%d",number[0],number[1],number[2],number[3],number[4],number[5]);
            count+=1;
        }
        if(number[1]!=0&&number[3]!=0){
            if(count) printf(",");
            printf("%d.%d%d.%d%d.%d",number[0],number[1],number[2],number[3],number[4],number[5]);
            count+=1;
        }
        if((number[1]*100+number[2]*10+number[3])>=100&&(number[1]*100+number[2]*10+number[3])<256){
            if(count) printf(",");
            printf("%d.%d%d%d.%d.%d",number[0],number[1],number[2],number[3],number[4],number[5]);
            count+=1;
        }
        if(number[0]!=0&&number[4]!=0){
            if(count) printf(",");
            printf("%d%d.%d.%d.%d%d",number[0],number[1],number[2],number[3],number[4],number[5]);
            count+=1;
        }
        if(number[0]!=0&&number[3]!=0){
            if(count) printf(",");
            printf("%d%d.%d.%d%d.%d",number[0],number[1],number[2],number[3],number[4],number[5]);
            count+=1;
        }
        if(number[0]!=0&&number[2]!=0){
            if(count) printf(",");
            printf("%d%d.%d%d.%d.%d",number[0],number[1],number[2],number[3],number[4],number[5]);
            count+=1;
        }
        if((number[0]*100+number[1]*10+number[2])>=100&&(number[0]*100+number[1]*10+number[2])<256){
            if(count) printf(",");
            printf("%d%d%d.%d.%d.%d",number[0],number[1],number[2],number[3],number[4],number[5]);
            count+=1;
        }
    }
    if(len==7){
        int count=0;
        if((number[4]*100+number[5]*10+number[6])>=100&&(number[4]*100+number[5]*10+number[6])<256&&number[2]!=0){
            if(count) printf(",");
            printf("%d.%d.%d%d.%d%d%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
        if((number[2]*100+number[3]*10+number[4])>=100&&(number[2]*100+number[3]*10+number[4])<256&&number[5]!=0){
            if(count) printf(",");
            printf("%d.%d.%d%d%d.%d%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
        if((number[4]*100+number[5]*10+number[6])>=100&&(number[4]*100+number[5]*10+number[6])<256&&number[1]!=0){
            if(count) printf(",");
            printf("%d.%d%d.%d.%d%d%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
        if(number[1]*number[3]*number[5]!=0){
            if(count) printf(",");
            printf("%d.%d%d.%d%d.%d%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
        if((number[3]*100+number[4]*10+number[5])>=100&&(number[3]*100+number[4]*10+number[5])<256&&number[1]!=0){
            if(count) printf(",");
            printf("%d.%d%d.%d%d%d.%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
        if((number[1]*100+number[2]*10+number[3])>=100&&(number[1]*100+number[2]*10+number[3])<256&&number[5]!=0){
            if(count) printf(",");
            printf("%d.%d%d%d.%d.%d%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
        if((number[1]*100+number[2]*10+number[3])>=100&&(number[1]*100+number[2]*10+number[3])<256&&number[4]!=0){
            if(count) printf(",");
            printf("%d.%d%d%d.%d%d.%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
        if((number[4]*100+number[5]*10+number[6])>=100&&(number[4]*100+number[5]*10+number[6])<256&&number[0]!=0){
            if(count) printf(",");
            printf("%d%d.%d.%d.%d%d%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
        if(number[0]*number[3]*number[5]!=0){
            if(count) printf(",");
            printf("%d%d.%d.%d%d.%d%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
        if((number[3]*100+number[4]*10+number[5])>=100&&(number[3]*100+number[4]*10+number[5])<256&&number[0]!=0){
            if(count) printf(",");
            printf("%d%d.%d.%d%d%d.%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
        if(number[0]*number[2]*number[5]!=0){
            if(count) printf(",");
            printf("%d%d.%d%d.%d.%d%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
        if(number[0]*number[2]*number[4]!=0){
            if(count) printf(",");
            printf("%d%d.%d%d.%d%d.%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
        if((number[2]*100+number[3]*10+number[4])>=100&&(number[2]*100+number[3]*10+number[4])<256&&number[0]!=0){
            if(count) printf(",");
            printf("%d%d.%d%d%d.%d.%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
        if((number[0]*100+number[1]*10+number[2])>=100&&(number[0]*100+number[1]*10+number[2])<256&&number[5]!=0){
            if(count) printf(",");
            printf("%d%d%d.%d.%d.%d%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
        if((number[0]*100+number[1]*10+number[2])>=100&&(number[0]*100+number[1]*10+number[2])<256&&number[4]!=0){
            if(count) printf(",");
            printf("%d%d%d.%d.%d%d.%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
        if((number[0]*100+number[1]*10+number[2])>=100&&(number[0]*100+number[1]*10+number[2])<256&&number[3]!=0){
            if(count) printf(",");
            printf("%d%d%d.%d%d.%d.%d",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
            count+=1;
        }
    }
    return 0;
}