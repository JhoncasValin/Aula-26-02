#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//system("cls");
	
	int A=0;
	int B=0;
	
	printf ("informe um valor A para comparacao:\n");
	scanf ("%i",& A);
	
	printf ("informe um valor B para comparacao:\n");
	scanf ("%i",& B);
	printf("\n\n");
	 
	 
	if (A>B)
	{
	printf("A eh maior que B!\n");	
	}
	else
	   
		  if(A<B)
	{
		printf("B eh maior que A!\n");
	}
	else
	{
		printf("A eh igual B\n");
	}
	
		

	

	

	
	
	
	return 0;
}
