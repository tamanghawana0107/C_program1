//WAP to show the grade of one subject interms of marks and grade.
#include<stdio.h>
#include<conio.h>
int main()
{
	int marks;
	printf("Afno dukha laagdo bisaaya ko marks haalnuss:");
	scanf("%d",&marks);
	if(marks>=0&&marks<32)
	{
		printf("Xi xi xi beijaati FAIL bhaayexa aarko chooti ramrari paadnu.");
	}
	else if(marks>=32&&marks<40)
	{
		printf("Balla Balla pass bhayera D grade liyera aako xa .");
	}
	else if(marks>=40&&marks<50)
	{
		printf("Raam Raam jaama C aako xa.");
	}
	else if(marks>=50&&marks<60)
	{
		printf("Aaali thoraai mehnaat gareko bhaye B ta aauthiyo beijaati.");
	}
	else if(marks>=60&&marks<70)
	{
		printf("Jamma B aali ramrari paadne .");
	}
	else if(marks>=70&&marks<80)
	{
		printf("La aahile laai B+ maatra aako xa aali dheraai padnu paadne bidhyarthi bigriyexa.");
	}
	else if(marks>=80&&marks<90)
	{
		printf("Laa haai ta ramraai paad do rahexa A liyera aayexa.");
	}
	else if(marks>=90&&marks<=100)
	{
		printf("Amma ho  A+ liyera aaunu bhaako xa la badhaai xa.");
	}
	else
	{
		printf("Pagaal manxe 100 bhanda thoraai marks haalnuss computer laai ullu banaauxa :(");
	}
	return 0;
}
