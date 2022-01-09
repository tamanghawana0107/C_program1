
#include<stdio.h>
#include<ctype.h>
int main()
{
	char a;
	printf("Enter a chacter");
	scanf("%c",&a);
	if(a>='a'&&a<='z')
	{
		printf("\nThe upper case is %c", toupper(a));
	}
	else if(a>='A'&&a<='Z')
	{
		printf("\n The lower case is %c", tolower(a));
	}
	else
	{
		printf("\n Please enter a charcter");
	}
return 0;
}

