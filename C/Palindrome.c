#include<stdio.h>

int main() {

    int n, temp, rem, sum = 0;
    printf("Enter a number: \n");
    scanf("%d", &n);
    temp =  n;
    while (n > 0) {
        rem = n%10;
        sum = sum*10 + rem;
        n/=10;
       
    }

    if ( sum == temp) {
        printf("%d is a pallindrome number.", temp);
    }
    else {
        printf("%d is not a pallindrome number.", temp);
    }

    return 0;

}
