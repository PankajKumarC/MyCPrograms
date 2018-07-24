int main() {
  char a[10]="p1an55kaj", b[10]="\0";
  int i, j=0, c=0, k;
  
  while(a[c] != '\0')
    c++;
    
  for(i=c; i>=0; i--) {
    if(a[i]>='a'&&a[i]<='z') {
      b[j] = a[i];
      j++;
    }
  }
  
  for(i=0; i<c; i++) {
    if(a[i]>='0'&&a[i]<='9') {
      for(k=c-1; k>=i-1; k--) {
        b[k+1] = b[k];
      }
      b[i] = a[i];
    }
  }
  
  return 0;
}
