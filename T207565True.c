#include<stdio.h>
int main(){
    int n, i;
    scanf("%d\n",&n);
    char word[100];
    gets(word);
    for(i=0;i<n;i++){
        if(word[i] !=' '){
            printf("%c",word[i]-32);
   
        }

    }
    return 0;
}