#include <stdio.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    printf("Hello, World! \n%s\n", s);
    return 0;
}
