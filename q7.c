//Write a C program to swap first and last digits of a number.
#include<stdio.h>
#include<math.h>
int main(){
    int n,last,first,digits,swapnum;
    printf("Enter the Number: ");
    scanf("%d",&n);
    //for last digit
    last=n%10;
    //For first digit
    digits=(int)log10(n);
    first=(int)(n/pow(10,digits));
    swapnum=last;
    swapnum=swapnum*((int) pow(10,digits));
    swapnum+=n%((int) pow(10,digits));
    swapnum-=last;
    swapnum+=first;
    printf("Orignal no : %d\n",n);
    printf("Swapped no : %d",swapnum);

    return 0;
}