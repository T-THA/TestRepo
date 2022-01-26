#include<stdio.h>
int call_one(int n);
int call_two(int n);
int call_three(int n);
int call_base(int n);
int number[15]={0};
int main(){
    long long n=0,n_help=0;
    scanf("%lld",&n);
    n_help=n;
    int count=0;
    for(int i=0;i<11;i++){
        if(n_help>0){
            number[i]=n_help%10;
            n_help=n_help/10;
        }else{
            count=i;
            break;
        }
    }
    if(count<=3){
        call_base(3);
    }else if(count<=6){
        call_base(6);
        printf(" Thousand ");
        call_base(3);
    }else if(count<=9){
        call_base(9);
        printf(" Million ");
        call_base(6);
        printf(" Thousand ");
        call_base(3);
    }else{
        call_base(10);
        printf(" Billion ");
        call_base(9);
        printf(" Million ");
        call_base(6);
        printf(" Thousand ");
        call_base(3);
    }
    return 0;
}
int call_base(int n){
    if(n==10){
        call_one(number[9]);
    }else{
        if(number[n-1]!=0){
            call_one(number[n-1]);
            printf(" Hundred ");
        }
        if(number[n-2]==1){
            call_two(number[n-3]);
        }else if(number[n-2]==0){
            call_one(number[n-3]);
        }else{
            call_three(number[n-2]);
            printf(" ");
            call_one(number[n-3]);
        }
    }
}
int call_one(int n){
    switch (n)
    {
    case 0:
        break;
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;
    }
}
int call_two(int n){
    switch (n)
    {
    case 0:
        printf("Ten");
        break;
    case 1:
        printf("Eleven");
        break;
    case 2:
        printf("Twelve");
        break;
    case 3:
        printf("Thirteen");
        break;
    case 4:
        printf("Fourteen");
        break;
    case 5:
        printf("Fifteen");
        break;
    case 6:
        printf("Sixteen");
        break;
    case 7:
        printf("Seventeen");
        break;
    case 8:
        printf("Eighteen");
        break;
    case 9:
        printf("Nineteen");
        break;
    }
}
int call_three(int n){
    switch (n)
    {
    case 0:
        break;
    case 1:
        break;
    case 2:
        printf("Twenty");
        break;
    case 3:
        printf("Thirty");
        break;
    case 4:
        printf("Forty");
        break;
    case 5:
        printf("Fifty");
        break;
    case 6:
        printf("Sixty");
        break;
    case 7:
        printf("Seventy");
        break;
    case 8:
        printf("Eighty");
        break;
    case 9:
        printf("Ninety");
        break;
    }
}
