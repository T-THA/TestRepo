//压缩字符展开
#include<stdio.h>
char note[114514]={' '};
int main(){
    int len=0;
    while((note[len]=getchar())!=EOF){
        len+=1;
    }
    for(int i=0;i<len;i++){
        if(note[i]=='{'&&note[i+1]=='}'){
            for(int j=i+2;j<len;j++){
                note[j-2]=note[j];
            }
            note[len-1]=' ';
            note[len-2]=' ';
            len-=2;
        }
    }
    for(int i=1;i<=len;i++){
        if(note[i-1]!=' '){
            if(note[i]=='{'&&note[i+2]=='}'){
                for(int j=0;j<(int)(note[i+1]-'0');j++){
                    printf("%c",note[i-1]);
                }
                note[i]=' ';
                note[i+1]=' ';
                note[i+2]=' ';
            }else if((note[i]=='{'&&note[i+3]=='}')&&(note[i+1]!='{')){
                for(int j=0;j<(int)(note[i+1]-'0')*10+(int)(note[i+2]-'0');j++){
                    printf("%c",note[i-1]);
                }
                note[i]=' ';
                note[i+1]=' ';
                note[i+2]=' ';
                note[i+3]=' ';
            }else{
                printf("%c",note[i-1]);
            }
        }
    }
    
    return 0;
}