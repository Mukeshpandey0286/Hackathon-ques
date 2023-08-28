#include<iostream>
int rev = 0;
int reverse();
int main() {
    int a;
    printf("Enter the no. : ");
    scanf("%d",a);
    if (a<0) {
        a = -a;
        printf("%d",-reverse(a,rev));
    }

    printf("%d",reverse(a,rev));
}

int reverse(int a,int rev) {
    int r =0;
    r = a%10;
    rev = rev*10 + r;
    a = a/10;
    if (a!=0){
        reverse(a,rev);
    }
    return rev;
}