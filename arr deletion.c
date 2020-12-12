#include <stdio.h>

int main()
{
    int arr[100];
    int i, pos, n;

	printf("Enter number of element in array:");
	scanf("%d",&n);

	printf("Enter %d the elements:", n);
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);

	printf("\n\n");

	printf("Array entered: ");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);

	printf("\n\n");

	printf("Enter position to delete : ", n);
	scanf("%d", &pos);

	if(pos>n || pos<=0)
	{
		printf("The position you have entered is wrong!!");
		
	}
	else
		for(i=pos; i<n; i++)
			arr[i-1]=arr[i];

	printf("\n\n");

	printf("New array: ");
	for(i=0; i<n-1; i++)
		printf("%d ", arr[i]);

  return(0);
}
