//printing DOB

#include<stdio.h>

struct student
{
	char name[30];
	int rollNo;
	
	struct dob{
		int dd;
		int mm;
		int yy;
	}DOB;
};

int main()
{
    struct student s;
    

	printf("Enter name: ");
    gets(s.name);
	printf("Enter roll number: ");
    scanf("%d",&s.rollNo);
	printf("Enter Date of Birth [DD MM YY] format: ");
	scanf("%d%d%d",&s.DOB.dd,&s.DOB.mm,&s.DOB.yy);
	printf("\nName : %s \nRollNo : %d \nDate of birth : %02d/%02d/%02d\n",s.name,s.rollNo,s.DOB.dd,s.DOB.mm,s.DOB.yy);
    return 0;
}