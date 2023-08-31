#include<stdio.h>
#include<conio.h>
#include"Header file.h"
main()
{
	float dec;
	int ch,i;
	printf("In which number system do you wanna convert your decimal number to ::\n");
	printf("ENTER 1 FOR CONVERTING TO BINARY NUMBER SYSTEM:\n");
	printf("ENTER 2 FOR CONVERTING TO TERNARY NUMBER SYSTEM:\n");
	printf("ENTER 3 FOR CONVERTING TO QUATENARY NUMBER SYSTEM:\n");
	printf("ENTER 4 FOR CONVERTING TO QUINARY NUMBER SYSTEM:\n");
	printf("ENTER 5 FOR CONVERTING TO OCTAL NUMBER SYSTEM:\n");
	printf("ENTER 6 FOR CONVERTING TO DUO DECIMAL NUMBER SYSTEM:\n");
	printf("ENTER 7 FOR CONVERTING TO HEXA DECIMAL NUMBER SYSTEM:\n");
	for(i=0;i<=1;i++)
	{
	printf("Enter choice::");
	scanf("%d",&ch);
	printf("ENTER A NUMBER FROM DECIMAL NUMBER SYSTEM :: ");
	scanf("%f",&dec);
	switch (ch)
	{
	case 1:
	d2b(dec);
	break;
	case 2:
	d2te(dec);
	break;
	case 3:
	d2qua(dec);
	break;
	case 4:
	d2qui(dec);
	break;
	case 5:
	d2oct(dec);
	break;
	case 6:
	d2duo(dec);
	break;
	case 7:
	d2hex(dec);
	break;
	default:
	printf("enter valid choice.\n");
	break;
	}
	printf("PRESS 0 TO CONTINUE::");
	scanf("%d",&i);
	}
	printf("THANKYOU :)");
getch();
}
