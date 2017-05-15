/* Binary Search (non-recursive) */
/* As a pre requisite of binary search we have assumed that the input is already sorted*/
#include<stdio.h>

#define MAX 10
int binarySearch(int [],int,int);	/* 	arguments are array to hold the elements, no. of elements in the array, key element to search for
                                        returns -1 if the element is not found
										returns the position of the element, if it is found */
int main(void)
{
	int a[MAX];
	int i,n,key,pos;	/* pos will hold the return value from binarySearch */
	printf("Enter the number of elements:\n");
	scanf("%d",&n);

	printf("Enter the elements:\n");
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);

	printf("\nEnter the key value to search for:\n");
	scanf("%d",&key);

	/*function call to binarySearch*/
	pos=binarySearch(a,n,key);

	if (pos == -1)
		printf("Search for the key %d failed.\n",key);
	else
		printf("Key %d was found in position %d.\n", key, pos);

	return 0;
}/*end of main*/

/*function definition of binarySearch*/
int binarySearch(int arr[],int n,int key)
{
    int low=0;
    int high=n-1;
    int mid=((low+high-low)/2);
    while(low<=high && arr[mid]!=key)
    {
        if(key>arr[mid])
            low=mid+1;
        else
            high=mid-1;
        mid=low+((high-low)/2);
    }
    if (arr[mid]=key)
        return mid+1;
    else
        return -1;
}




