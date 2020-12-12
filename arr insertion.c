#include <stdio.h>

int main()
{
  int arr[100];
  int i, value, pos, n;

	printf("Enter number of element in array:");
	scanf("%d",&n);

	printf("Enter %d  elements:", n);
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);

	printf("\n");

  printf("Array entered: ");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);

	printf("\n");

	printf("\nEnter position to insert new value(0<position<%d): ", n+1);
	scanf("%d", &pos);
	if(pos>n || pos<=0)
	{
		printf("The position you have entered is wrong!!");
		
	}
	else
	{
		printf("Enter value you need to insert:");
		scanf("%d", &value);
		for(i=n; i>=pos; i--)
			arr[i]=arr[i-1];
	}

	arr[i]=value;

	printf("\n\n");

	printf("New array: ");
	for(i=0; i<n+1; i++)
		printf("%d ", arr[i]);

	return(0);
}
