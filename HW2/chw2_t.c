#include <stdio.h>
void cipher(char *,char *);

void main()  	
{
    char a, b;

    printf("Enter two chars: ");
    scanf("%c %c", &a, &b); //char 
    
    printf("Initial...\n");
    printf("a = %c b = %c\n ", a, b);
	cipher(&a,&b);
	
	printf("\nAfter ciphering,,,\n");
	printf("a = %c,b = %c",a,b);
	return 0;
}

void cipher(char *a,char *b) {
	printf("in cipher()\n");
	printf("a = %c \n",*a);
	printf("b = %c \n",*b);
	*a = ((*a - 'a' + 2) % 26) + 'a';
	*b = ((*b - 'a' + 2) % 26) + 'a';
	printf("End cipher()\n");
	printf("a change to :%c\n ",*a);
	printf("b change to :%c\n ",*b);
}

//((letter1 - 'a' + 2) % 26) + 'a'
//'a' = 99 - 97 + 2   
// c = 99 ,4%26 = 4 + 97 = 
//101# e 


