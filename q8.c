#include <stdio.h>

int main()
{
long long num,n;
int count[10],i,last;

    printf("Enter any number :");
    scanf("%lld",&num);
    for(i=0;i<10;i++)
    count[i]=0;
    n=num;
    while(n!=0)
    {last=(int)n%10;
    n=(int)n/10;
    count[last]++;
    }
    for(i=0;i<10;i++)
    printf("\nfrequency of %d  is %d\n",i,count[i]);
    

    return 0;
}
