#include<stdio.h>
#include<time.h>
int sort(int a[],int k,int n)
{
for(int i=0;i<k;i++)
{
int min=i;
for(int j=i+1;j<n;j++){
if (a[j]<a[min]){
min=j;}}
int temp=a[i];
a[i]=a[min];
a[min]=temp;}
return a[k-1];
}
int main()
{

int n,arr[19];
double time;
clock_t start,end;
start=clock();
printf("Enter number of elements: ");
scanf("%d",&n);
printf("Enter the elements into array: ");
for (int i=0;i<n;i++){

scanf("%d",&arr[i]);

}

int k;
printf("Enter the Kth smallest number to be found:\n ");
scanf("%d",&k);
printf("Kth smallest number:%d\n",sort(arr,k,n));
end=clock();
time=(double)(end-start)/CLOCKS_PER_SEC;
printf("\nTime Complexity %f",time);
	return 0;
}
