//create by Nadya_23343088 

#include <stdio.h>
#define max 10

int a[max + 1] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44 };
int b[max + 1];

void merging(int low, int mid, int high) {
   int l1, l2, index;
   for(l1 = low, l2 = mid + 1, index = low; l1 <= mid && l2 <= high; index++) {
      if(a[l1] <= a[l2])
         b[index] = a[l1++];
      else
         b[index] = a[l2++];
   }
   while(l1 <= mid)
      b[index++] = a[l1++];
   while(l2 <= high)
      b[index++] = a[l2++];
   for(index = low; index <= high; index++)
      a[index] = b[index];
}

void sort(int low, int high) { 
   int mid;

   if(low < high) { 
       mid = (low + high) / 2;
       sort(low, mid); 
       sort(mid + 1, high);
       merging(low, mid, high);
   }
}

int main() {
    int i;
    printf("Data sebelum diurut\n");
    for(i = 0; i < max; i++)
       printf("%d ", a[i]);
    sort(0, max - 1);
    printf("\nData setelah diurut\n");
    for(i = 0; i < max; i++)
       printf("%d ", a[i]);
    return 0;
}
