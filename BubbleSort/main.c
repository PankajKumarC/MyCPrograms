#include<stdio.h>
int main() {
	
	int a[10], n, i, j, temp;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++) 
		scanf("%d",&a[i]);
	
	for(i=0; i<n; i++) {
		for(j=0; j<n-1; j++) {
			if(a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	printf("\n The sorted array is: \n");
	
	for(i=0; i<n; i++) 
		printf("%d",a[i]);
		
	return 0;
}
