#include <stdio.h>
#include <stdlib.h>
int main() {
	//code
	int n,i,*arr;
	scanf("%d",&n);
	while(n!=0)
	{
	    int x;
	    scanf("%d",&x);
	    arr = (int *)calloc(sizeof(int),x);
	
	for(i=0;i<x;i++)
	{
	    scanf("%d",&arr[i]);
	}
	int j=0,max = arr[1]-arr[0],min = arr[0];
	for(j=1;j<x;j++)
	{
	    if(arr[j]-min>max)
	    {
	        max = arr[j]-min;
	    }
	    if(arr[j]<min)
	    {
	        min = arr[j];
	    }
	}
	printf("%d\n",max);
	n--;
	}
	return 0;
}