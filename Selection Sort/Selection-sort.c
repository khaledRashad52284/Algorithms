#include <stdio.h>
	#define SIZE 10
	void scan_arr(int *arr);
	void print_arr(int * arr);

int main()
{
int i,j,min_index,temp;
int arr[SIZE];
scan_arr(arr);

for(i=0;i<SIZE-1;i++)
{
	min_index=i;
	for(j=i+1;j<SIZE;j++)
	{
		if(arr[j]<arr[min_index])
		{
			min_index=j;
		}
	}

	temp=arr[i];
	arr[i]=arr[min_index];
	arr[min_index]=temp;
}
print_arr(arr);



return 0;
}
void scan_arr(int *arr)
{
	printf("Please inter the elements of arr\n");
	int i;
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
		
	}
}
void print_arr(int *arr)
{
	printf("The array = \n");
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%d \n",arr[i]);
	}
}
