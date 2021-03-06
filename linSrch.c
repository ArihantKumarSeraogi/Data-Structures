/* Linear Search */
#include<stdio.h>

#define MAX 10
int linearSearch(int [],int,int);	/* 	arguments are array to hold the elements, no. of elements in the array, key element to search for
                                        returns -1 if the element is not found
										returns the position of the element, if it is found */
int main(void)
{
	int a[MAX];
	int i,n,key,pos;	/* pos will hold the return value from linearSearch */
	printf("Enter the number of elements:\n");
	scanf("%d",&n);

	printf("Enter the elements:\n");
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);

	printf("Enter the key value to search for:\n");
	scanf("%d",&key);

	/*function call to linearSearch*/
	pos=linearSearch(a,n,key);

	if (pos == -1)
		printf("Search for the key %d failed.\n",key);
	else
		printf("Key %d was found in position %d.\n", key, pos);

	return 0;
}/*end of main*/

/*function definition of linearSearch */
int linearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if (arr[i]==key)
            return i+1;
    }
    return -1;
}




