#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int usn;
	char subject[20];
	int sem;
	int marks[20];
	int credit[20];
	int grade[20];
}s1;
void main()
{
	int i,n,sum[20],totcredit=0,total=0;
	float cgpa;
	clrscr();
	printf("Enter name of the student ");
	scanf("%s", s1.name);
	printf("Enter usn ");
	scanf("%d", &s1.usn);
	printf("Enter semester ");
	scanf("%d", &s1.sem);
	printf("Number of subjects ");
	scanf("%d" ,&n);
	for(i=0;i<n;i++)
	{
		printf("Enter credits ");
		scanf("%d", &s1.credit[i]);
		printf("Enter marks ");
		scanf("%d", &s1.marks[i]);
	}
	for(i=0;i<n;i++)
	{
		if(s1.marks[i]>=90 && s1.marks[i]<=100)
		s1.grade[i]=10;
		if(s1.marks[i]>=80 && s1.marks[i]<90)
		s1.grade[i]=9;
		if(s1.marks[i]>=70 && s1.marks[i]<80)
		s1.grade[i]=8;
		if(s1.marks[i]>=60 && s1.marks[i]<70)
		s1.grade[i]=7;
		if(s1.marks[i]>=50 && s1.marks[i]<60)
		s1.grade[i]=6;
		if(s1.marks[i]>=40 && s1.marks[i]<50)
		s1.grade[i]=5;
		if(s1.marks[i]<40)
		s1.grade[i]=0;
		totcredit=totcredit+s1.credit[i];
	switch(s1.grade[i])
	{
		case 10: sum[i]=10*s1.credit[i];
			break;
		case 9: sum[i]=9*s1.credit[i];
			break;
		case 8: sum[i]=8*s1.credit[i];
			break;
		case 7: sum[i]=7*s1.credit[i];
			break;
		case 6: sum[i]=6*s1.credit[i];
			break;
		case 5: sum[i]=5*s1.credit[i];
			break;
		case 0: sum[i]=0;
			break;
	}
	}
	for(i=0;i<n;i++)
	{
		total=total+sum[i];
	}
	cgpa=(float)total/totcredit;
	printf("%f",cgpa);
	getch();
}