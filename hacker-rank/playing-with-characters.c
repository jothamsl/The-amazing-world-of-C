#include <stdio.h>

int main(void)
{
   char data;
   scanf("%[^\n]%*c", &data);
   puts(data);
}
