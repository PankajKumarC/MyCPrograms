#include<stdio.h>
int main() {

	int n, i, c = 0;
	scanf("%d",&n);

	while(n != 0) {

		if(n&1 == 1)
			break;

		else {
			n = n>>1;
			c++;
		}
	}


	printf("There are %d trailing zeroes",c);

	return 0;

}
