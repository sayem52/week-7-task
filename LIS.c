
#include <stdio.h>
#define INT_INF 1000
int increasing_sub(int *lis, int left, int right, int key)
{
    int mid;
    for (mid = (left+right)/2; left <= right; mid = (left+right)/2){
    if (lis[mid] > key){
    right = mid - 1;
 }
    else if (lis[mid] == key){
    return mid;
 }
    else if (mid+1 <= right && lis[mid+1] >= key){
    lis[mid+1] = key;
    return mid+1;
 }
    else{
    left = mid + 1;
   }
 }
   if (mid == left){
   lis[mid] = key;
   return mid;
 }
  lis[mid+1] = key;
 return mid+1;
}
int main(void)
{
   int i, temp,lis_length = -1;
   int *ans;
   int A[100];
   int size;
   printf("Enter Total Number of Element : ");
   scanf("%d",&size);
   printf("Enter Elements Sequence :\n");

   int LIS[size],index[100];
   for(int i=0; i<size; i++){
   scanf("%d",&A[i]);
 }
    LIS[0] = A[0];
    for (i = 1; i < size; ++i){
    LIS[i] = INT_INF;
   }
    for (i = 1; i < size; ++i){
    index[i] = increasing_sub(LIS, 0, i, A[i]);
    if (lis_length < index[i]){
    lis_length = index[i];
    }
   }
    ans = (int*) malloc((lis_length+1) * sizeof(int));
    for (i = size-1, temp = lis_length; i >= 0; --i){
    if (index[i] == temp){
    ans[temp] = A[i];
    --temp;
   }
 }
   printf("LIS: ");
   for (i = 0; i < lis_length+1; ++i){
   printf("%d ", ans[i]);
 }
 return 0;
}
