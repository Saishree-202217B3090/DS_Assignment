#include<stdio.h>
#define size 7
int a[size]={64, 34, 25, 12, 22, 11, 90};
void selectionsort(int [], int);
void display(int [],int);

void selectionsort(int a[], int n)
{
    int i, j, min,temp;
    for (i = 0; i<n; i++)
    {
        min= i;
        for (j = i+1; j < n; j++)
          if (a[j] < a[min])
            min = j;
           if(min!= i)
           {
           	temp=a[i];
           	a[i]=a[min];
           	a[min]=temp;
		   }
    }
}

void display(int a[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}


int main()
{
    selectionsort(a,size);
    printf("Sorted array:");
    display(a,size);
    return 0;
}
