#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ROWS 5
#define COLS 10

int main() {
   int x = 0, dx = 1;

   while (1) {
      system("clear");

      for (int i = 0; i < ROWS; i++) {
         for (int j = 0; j < COLS; j++) {
            if (i == 2 && j == x)
               printf("0");
	    else
	       printf(".");
         }
         printf("\n");
      }

      x += dx;

      if (x == 0 || x == COLS - 1)
         dx = -dx;

      usleep(100000);

   }
   return 0;
}
