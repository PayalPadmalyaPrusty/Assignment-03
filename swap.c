#include<stdio.h>

void swap(int *,int *);
int main()
{

    int n1,n2;	   
    printf("Input 1st number : ");
    scanf("%d",&n1);
    printf("Input 2nd number : ");
    scanf("%d",&n2);	

    printf("Before swapping: n1 = %d, n2 = %d ",n1,n2);
    swap(&n1,&n2);

    printf("\nAfter swapping: n1 = %d, n2 = %d \n\n",n1,n2);
    return 0;
}

void swap(int *p,int *q)
{
    int y;
    y = *p; 
    *p=*q;    
    *q=y;   
}