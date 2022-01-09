/*WAP using structure to input records of 5 students and display the record of student
 with the highest marks. The structure members include: student's name, roll, and 
 percentage marks. */
 #include<stdio.h>
 #include<conio.h>
 struct record
 {
 	char name[20];
 	int roll;
 	int per;
 };
 int main()
 {
 	struct record stu[5],temp;
 	int i=0,j=0;
 	printf("\nEnter the details of the students::\n");
 	for(i=0;i<5;i++)
 	{
 		printf("\nEnter the name of %d person::",i+1);
		fgets(stu[i].name,20,stdin);
		fflush(stdin);
		printf("\nEnter the roll of %d person::",i+1);
		scanf("%d",&stu[i].roll);
		fflush(stdin);
		printf("\nEnter the percentage of %d person::",i+1);
		scanf("%d",&stu[i].per);
		fflush(stdin);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(stu[i].per<stu[j].per)
			{
				temp=stu[i];
				stu[i]=stu[j];
				stu[j]=temp;
			}
		}
	}
	printf("\nThe details of the student who got the highest marks is::");
	printf("\nNAME::");
	puts(stu[0].name);
	printf("\nID::%d",stu[0].roll);
	printf("\nHighest marks::%d",stu[0].per);
	getch();
 }
 
