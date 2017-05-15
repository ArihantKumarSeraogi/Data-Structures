#include<conio.h>
#include<stdio.h>
int gcd(int m,int n);
void main()
{
    int m,n;
    printf("enter the two numbers for which to calculate the gcd");
    scanf("%d%d",&m,&n);
    int gcdNum=gcd(m,n);
    printf("the gcd is %d",gcdNum);
}
int gcd (int m, int n)
{
	if (m % n == 0)
		return n;
  	else
    		return gcd(n, m % n);
}
