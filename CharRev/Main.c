#include<stdio.h>
int main() {

	char a[10], b[10], temp_1='A', temp_2='Z';
	int i, c=0, flag_1=0, flag_2=0, j=0;
	scanf("%s",a);

	while(a[c] != '\0')
	c++;

	for(i=0; i<c; i++) {
        	if(a[i]>='A' && a[i]<='M') {

        		while(!(a[i]==temp_1)) {
          		temp_1++;
       			flag_1++;
        		}

        		b[j] = 90-flag_1;
        		j++;
        		flag_1 = 0;
        		temp_1 = 'A';
		}

        	else if(a[i]>='N' && a[i]<='Z') {

          		while(!(a[i]==temp_2)) {
          		temp_2--;
	        	flag_2++;
          		}

          		b[j] = 65+flag_2;
          		j++;
   	  		flag_2 = 0;
          		temp_2 = 'Z';
    		}	
	}
 
	b[c] = '\0';
    	printf("%s",b);
    
	return 0;

}
