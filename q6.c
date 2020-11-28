//Write a C program to find first and last digit of a number.
#include<stdio.h>
int main(){
    int n,last,first;
    printf("Enter the Number: ");
    scanf("%d",&n);
    //for last digit
    last=n%10;
    //For first digit
    first=n;
    while(first>=10)
    {
        first=first/10;
    }
    printf("The last digit is %d\n",last);
    printf("The First digit is %d",first);
    return 0;
}