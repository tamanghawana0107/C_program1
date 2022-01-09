/*WAP to ask user to enter a sentence and determine how many vowel,consonants,space,lowercase
and UPPERCASE alphabets are present.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,v=0,c=0,s=0,lw=0,uc=0,symbol=0;
	char text[51];
	printf("Enter a sentence:\n");
	gets(text);
	for(i-0;text[i]!='\0';i++)
	{
		if((text[i]>=65&&text[i]<=90)||(text[i]>=97&&text[i]<=122)||text[i]==32)
		{
			if(text[i]=='a'||text[i]=='A'||text[i]=='e'||text[i]=='E'||text[i]=='i'||text[i]=='I'||text[i]=='o'||text[i]=='O'||text[i]=='u'||text[i]=='U')
			{
				v++;
			}
			else if(text[i]==' ') 
			{
					s++;
			}
			else 
			{
				c++;
			}
		}
		else
		{
			symbol++;
		}
		if((text[i]>=65&&text[i]<=90)||(text[i]>=97&&text[i]<=122))
		{
			if(text[i]>='A'&&text[i]<='Z')	
			{
				uc++;
			}
			else
			{
				lw++;
			}	
		}
	}
	printf("\n No of vowel characters = %d",v);
	printf("\n No of consonants characters = %d",c);
	printf("\n No of space characters = %d",s);
	printf("\n No of uppercase characters = %d",uc);
	printf("\n No of lowercase characters = %d",lw);
	printf("\n No of symbol=%d",symbol);
	getch();
}
