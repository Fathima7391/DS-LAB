#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50], b[50], c[100],n1,n2, i, j,n3, temp;
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements in the first array:\n", n1);
    for(i=0; i<n1; i++)
        scanf("%d", &a[i]);
    printf("Enter %d elements in the second array:\n", n2);
    for(i=0; i<n2; i++)
        scanf("%d", &b[i]);
    printf("\nElements of Array 1 are:\n");
    for(i=0; i<n1; i++)
    {
        if(i==(n1-1))
            printf("%d", a[i]);
        else
            printf("%d, ", a[i]);
    }
    printf("\n\nElements of Array 2 are:\n");
    for(i=0; i<n2; i++)
    {
        if(i==(n2-1))
            printf("%d", b[i]);
        else
            printf("%d, ", b[i]);
    }
    //merging
    for(i=0; i<n1; i++)
    {
        c[i] = a[i];
    }
    for(j=0; j<n2; j++)
    {
        c[i] = b[j];
        i++;
    }
    n3 = i;
    // sorting merged array
    for(j=0; j<(n3-1); j++)
    {
        for(i=0; i<(n3-1); i++)
        {
            if(c[i]>c[i+1])
            {
                temp = c[i];
                c[i] = c[i+1];
                c[i+1] = temp;
            }
        }
    }
    printf("\n\nElements of merged array are:\n");
    for(i=0; i<n3; i++)
    {
        if(i==(n3-1))
            printf("%d", c[i]);
        else
            printf("%d, ",c[i]);
    }
    getch();
    return 0;
}
