#include<stdio.h>
void bp(int a[], int size)
{
    int binCount = 1, i,p,j,n=8,bin[n],b;
    for(i=0; i<n; i++){
    for(j=0; j<n-1-i; j++){
    if(a[j]<a[j+1]){
    p=a[j];
    a[j]=a[j+1];
    a[j+1]=p;
    }
  }
}
    for(i=0; i<n; i++)
    bin[i]=7;
    b=1,j=0;
    for (i = 0; i < n; i++){
    if(bin[b-1]==0)
    b=b+1;
    for(j=0; j<b; j++){
    if(bin[j]>=a[i]){
    bin[j]-=a[i];
    break;
  }
    else if(bin[j]<a[i]){
    a[i]-=bin[j];
    bin[j]=0;
   }
  }
}
     printf("Minimum bus need: %d\n",b);
}
int main()
{
     int n=8;
     int a[n], i,size;
     printf("Enter group with student:");
     for (i = 0; i < n; i++)
     scanf("%d", &a[i]);
     printf("Capacity of bus: ");
     scanf("%d", &size);
     bp(a, size);
    return 0;
}
