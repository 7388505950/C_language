#include<stdio.h>
#include<conio.h>
void printN(int n);
int main()
{
    int n;
    printf("enter any number\n");
    scanf("%d",&n);
   printN(n);
   return 0;
}
void printN(int n)
{
    if(n==0)
    return ;
    printN(n-1);
    printf(" %d  ",n);
}