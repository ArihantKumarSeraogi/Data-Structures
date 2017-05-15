//index position represent exponents and array data at that index position is the corresponding coefficient
#include<conio.h>
#include<stdio.h>

void main()
{
    int n;
    printf("Enter the highest degree of the polynomial");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n+1;i++)
    {
        printf("Enter the coefficient value for the exponential term of %d",i);
        scanf("%d",&arr[i]);
    }
     for(int i=n;i>-1;i--)
    {
        if(i==0)
            printf("%dx^%d",arr[i],i);
        else
            printf("%dx^%d+",arr[i],i);
    }
}
