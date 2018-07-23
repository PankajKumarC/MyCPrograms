#include<stdio.h>
int main() {

    char a[10] = "abc1d", b[10]="\0";
    int c=0, i, j, k;
    //scanf("%d",a);
    
    c = 5;
        
    for(i=0; i<c; i++) {
        if(a[i]>=48&&a[i]<=57)
            b[i] = a[i];
    }
    
    j = c-1;
    i = 0;
    
    for(k=0; k<c; k++) {
      if((a[j]>='a'&&a[j]<='z') && !(b[i]>=48&&b[i]<=57)) {
        b[i] = a[j];
        j--;
        i++;
      }
      
      else {
        j--;
      }
    }
    
    for(i=0; i<c; i++)
        printf("%c",b[i]);

    return 0;
}
