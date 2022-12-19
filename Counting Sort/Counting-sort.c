#include <stdio.h>
#define SIZE 10
#define F_SIZE 100

void scan_arr(int *arr);
void print_arr(int * arr);

int main()
{  // for range values from 0 to F_SIZE
	int arr[SIZE];
	int freq_arr[F_SIZE]={0};
	scan_arr(arr);
	int i,j,count=0;
	for(i=0;i<SIZE;i++)
	{
		freq_arr[arr[i]]++;
	}
	for(i=0;i<F_SIZE;i++)
	{
		if(freq_arr[i]==0)
		continue;
		for(j=freq_arr[i];j>0;j--)
		{
			arr[count]=i;
			count++;
		}

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
