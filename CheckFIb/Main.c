#include<stdio.h>
int find_fib(int);
int main() {
	int n, flag, i;
    	scanf("%d",&n);
  	if(n == 0 || n == 1) {   
         	printf("%d is a fibonacci number",n);
		return 0;
 
   	}    
	else {
        
		flag = find_fib(n);
   		if(flag == 0)
 			printf("%d is a fibonacci number\n",n);
       
		else    
			printf("%d is not a fibonacci number\n",n);
   
     
    	return 0;
    
	}

}

int find_fib(int n) {
    
	int f = 0, s = 1, t, flag = 0, i;
	for(i=0; i<=n; i++) {
		if(n == f)
			return flag;            
		else {
        
			t = f+s;
        		f = s;
        		s = t; 
        
		}
	}
}
        
    

    
