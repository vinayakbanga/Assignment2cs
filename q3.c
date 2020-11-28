//Write a C program to find sum of all odd numbers between 1 to n.
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the No till you want the sum: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("The sum of all the odd numbers from 1 to %d is =%d",n,sum);
    return 0;
    
    
}