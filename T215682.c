//正则表达式
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
char input_origin[31];
char input_expression[31];
int flag=0;
int len_origin,len_expression;
int judge(int location_origin,int location_expression);
int main(){
    scanf("%s%s",input_origin,input_expression);
    len_origin=strlen(input_origin);
    len_expression=strlen(input_expression);
    judge(0,0);
    if(flag){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}
int judge(int location_origin,int location_expression){
    if((location_origin==len_origin-1&&location_expression==len_expression-1&&
    input_origin[location_origin]==input_expression[location_expression])||
       (location_origin==len_origin-1&&location_expression==len_expression-2&&
       input_origin[location_origin]==input_expression[location_expression]&&
       (input_expression[location_expression+1]=='*'||input_expression[location_expression+1]=='?'))||
       (location_origin==len_origin-1&&location_expression==len_expression-2&&input_expression[location_expression]=='\\'&&input_expression[location_expression+1]==input_origin[location_origin])
       || (location_origin==len_origin-1&&input_origin[location_origin]==input_expression[location_expression]&&(input_expression[location_expression+2]=='*'||input_expression[location_expression+2]=='?')&&(location_expression+2==len_expression))
       ||(location_origin>=len_origin-1&&len_expression-len_origin<=0&&input_expression[len_expression-1]==input_origin[location_origin])
       ){
        flag+=1;
        return 1;
    }
    if(location_origin>=len_origin-1||location_expression>=len_expression-1){
        flag+=0;
        return 0;
    }
    if(input_expression[location_expression+1]=='*'||
        input_expression[location_expression+1]=='?'){
        if(input_expression[location_expression]!='\\'){
            if(input_expression[location_expression]!=input_origin[location_origin]
                &&input_expression[location_expression]!='.'){
                judge(location_origin,location_expression+2);
            }else{
                if(input_expression[location_expression+1]=='?'){
                    judge(location_origin,location_expression+2);
                    judge(location_origin+1,location_expression+2);
                }else{
                    judge(location_origin+1,location_expression);
                    judge(location_origin+1,location_expression+2);
                    judge(location_origin,location_expression+2);
                }
            }
        }else{
            if(input_expression[location_expression-1]=='\\'){
                if(input_origin[location_origin]=='\\'){
                    if(input_expression[location_expression+1]=='?'){
                        judge(location_origin,location_expression+2);
                        judge(location_origin+1,location_expression+2);
                    }else{
                        judge(location_origin+1,location_expression);
                        judge(location_origin+1,location_expression+2);
                        judge(location_origin,location_expression+2);
                    }
                }
            }else{
                if(input_expression[location_expression+1]!=input_origin[location_origin]){
                    flag+=0;
                    return 0;
                }else{
                    judge(location_origin+1,location_expression+2);
                }
            }
        }
    }else if(input_expression[location_expression+1]=='\\'){
        if(input_expression[location_expression]!='\\'){
            if(input_expression[location_expression]==input_origin[location_origin]){
                judge(location_origin,location_expression+1);
            }else{
                flag+=0;
                return 0;
            }
        }else{
            judge(location_origin,location_expression+1);
        }
    }else{
        if(input_expression[location_expression]==input_origin[location_origin]){
            judge(location_origin+1,location_expression+1);
        }else{
            flag+=0;
            return 0;
        }
    }
}

