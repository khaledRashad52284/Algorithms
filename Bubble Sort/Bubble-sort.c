#include <stdio.h>
#define SIZE 10
void scan_arr(int *arr);
void print_arr(int * arr);
int main()
{
	int i=0,j,arr[SIZE],temp,swapped=0;
	scan_arr(arr);
	while(swapped!=1)
	{
		swapped=1;
		for(j=0;j<SIZE-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{ //swap
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

				swapped=0;
			}
		}
		i++;
	}
	print_arr(arr);
return 0;
}
