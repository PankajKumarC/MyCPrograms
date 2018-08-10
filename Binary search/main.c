#include<stdio.h>
int main() {
	
	int a[10], i, n, low, high, m, key, flag = 0;
	printf("Enter the number of elements :\n");
	scanf("%d",&n);
	
	for(i=0; i<n; i++) //array should be in descending order
		scanf("%d",&a[i]);
		
	printf("Enter the key to search : \n");
		scanf("%d",&key);
	
	low = 0;
	high = n;
	
	while(low<high) {
		m = (low+high)/2;
		if(key == a[m]) {
			flag = 1;
			break;
		}
		else if(key > a[m]) 
			low = m+1;
		else
			high = m-1;
	}

	if(flag == 1) 
		printf("Key found");
	else
		printf("Key not found");
		
	return 0;
}
