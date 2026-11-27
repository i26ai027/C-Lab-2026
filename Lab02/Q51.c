//Reversing of array
#include <stdio.h>
void reversearray(int arr[],int size)

{
	int start=0;
	int end=size-1;
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		
		start++;
		end--;
	}
}
int main(){
	int arr[]={10,20,30,40,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Original array");
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	reverseArray(arr,size);
	printf("Reversed array:");
	for (i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	
	return 0;
}
