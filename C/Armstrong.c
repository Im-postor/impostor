#include<stdio.h>

int main(){
    int n,temp,sum=0,rem;
    printf("Enter a number: \n");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem=n%10;
        sum+=rem*rem*rem;
        n/=10;
    }
    if(sum==temp){
        printf("%d is a Armstrong number", temp);
    }
    else{
        printf("%d is not a Armstrong number", temp);
    }
    return 0;
}
