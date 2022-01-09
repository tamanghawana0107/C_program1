#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct emp
{
	int id;
	int salary;
	char name[20];
};
int main()
{
	int i=0,n;
	struct emp *p;
	printf("\nEnter no of records::");
	scanf("%d",&n);
	fflush(stdin);
	p=(struct emp*)malloc(n*sizeof(struct emp));
	if(p==NULL)
	{
		printf("\nMemory not found");
		exit(1);
	}
	printf("\nEnter inputs::\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&(p+i)->id);
		fflush(stdin);
		scanf("%d",&(p+i)->salary);
		fflush(stdin);
		gets((p+i)->name);
		fflush(stdin);
	}
	printf("\nDisplay outputs::\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",(p+i)->id);
		printf("\t%d",(p+i)->salary);
		printf("\t");
		puts((p+i)->name);
		printf("\n");
	}
	free(p);
	getch();
}
