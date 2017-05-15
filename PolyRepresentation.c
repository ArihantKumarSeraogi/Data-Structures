//index position represent exponents and array data at that index position is the corresponding coefficient
#include<conio.h>
#include<stdio.h>
int polyEval(int arr[],int n);
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
    int result=polyEval(arr,n);
    printf("the result of the above polynomial is %d",result);
}
int polyEval(int arr[],int n)   // horners rule
{
    int x;
    printf("Enter the value of the variable x");
    scanf("%d",&x);
    int result=0;
    for (int i =n; i >=0; i--)
			result = arr[i] + (x * result);
		return result;
}
