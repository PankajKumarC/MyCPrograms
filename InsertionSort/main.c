#include<stdio.h>
int main() {
	
	int a[10], n, i, j, temp;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++) 
		scanf("%d",&a[i]);
	
	for(i=1; i<n; i++) {
		temp = a[i];
		for(j=i; j>0&&temp<a[j-1]; j--) {
			a[j] = a[j-1];
		}
		a[j] = temp;
	}
	
	printf("The sorted array is:\n");
	
	for(i=0; i<n; i++) 
		printf("%d",a[i]);
		
		
	return 0;
}
