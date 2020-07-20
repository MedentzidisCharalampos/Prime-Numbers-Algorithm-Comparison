
#include <stdio.h>

int main() {
   int low = 0, high = 13, i, flag, count=0;
   

   // iteration until low is not equal to high
   while (low < high) {
      flag = 0;

      // ignore numbers less than 2
      if (low <= 1) {
         ++low;
         continue;
      }

      // if low is a non-prime number, flag will be 1
      for (i = 2; i <= low / 2; ++i) {

         if (low % i == 0) {
            flag = 1;
            break;
         }
      }

      if (flag == 0) {
         printf("%d ", low);
         count++;

      }
         

      // to check prime for the next number
      // increase low by 1
      ++low;
   }
   printf(" count is: %d", count);
   return 0;
}
