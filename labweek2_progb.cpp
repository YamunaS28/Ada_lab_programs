#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sort(int a[],int k,int n)
{
	for(int i=0;i<=k-1;i++)
	{
		for(int j=0;j<=n-2-i;j++)
		{
			if(a[j+1]<a[j])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		printf("%d\n",a[n-i-1]);
	}
}
int main()
{

int n,arr[19],k;
double time;
clock_t start,end;
start=clock();
printf("Enter size of array: ");
scanf("%d",&n);
printf("Enter the elements into array: ");
for (int i=0;i<n;i++)
	{

	scanf("%d",&arr[i]);

	}

printf("Enter the Kth largesest number to be found:\n ");
scanf("%d",&k);
sort(arr,k,n);
end=clock();
time=(double)(end-start)/CLOCKS_PER_SEC;
printf("\nTime Complexity %f",time);
printf("\n");
	return 0;
}
