#include <stdio.h>

int main() {
   int Arr[5] = {12, 56, 34, 78, 100};
   int i, max;

   max = Arr[0]; // initialize max with the first element of the array
   
   for (i = 1; i < 5; i++) {
      if (Arr[i] > max) {
         max = Arr[i]; // update max with the larger value found
      }
   }
   
   printf("The largest element of the array is %d", max);
   
   return 0;
}
