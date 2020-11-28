//Write a C program to print multiplication table of any number.
#include<stdio.h>
int main(){
    int n,prod,i,t;
    printf("Enter the No. for which you want to print the table: ");
    scanf("%d",&n);
    printf("Enter the No. till which you want to print the table: ");
    scanf("%d",&t);
    printf("The table of %d till %d is :-\n",n,t);
    //Printing of table 
    for(i=0;i<=t;i++)
    {
      prod=n*i;
      printf("%d x %d = %d\n",n,i,prod);
    }
    return 0;
}