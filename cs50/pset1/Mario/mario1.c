#include <stdio.h>

int main(void)
{
   int input;

   do
   {
      printf("Height: ");
      scanf("%d", &input);
   }
   while (input > 8 || input <= 0);
   {
      /* We need three Loops:
       * [] The global loop which runs 'input' times
       * [] One which prints whitespace
       * [] Another which prints the actual hashtags
       */
      for (int i = 1; i <= input; i++)
      {
         for (int j = input; j > i; j--)
         {
            printf(" ");
         }
         for (int k = 0; k < i; k++)
         {
            printf("#");
         }
         printf("\n");
      }
   }
}
