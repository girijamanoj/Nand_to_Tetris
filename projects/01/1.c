#inlcude<stdio.h>
typedef struct
{
	char name[20];
	int roll;
	int c_marks;
	int b_marks;
	int m_marks;
	float attendence;
	char grade;
}student;
char grade(int a,int b,int c);
void scan(student *x);
void write(student *x,FILE *f);
int main()
{
	FILE *f;
	f=fopen("DB.txt","w");
	student *x;
	x=(student *)malloc(sizeof(10*student));

}
void scan(student *x)
{
	for (int i = 0; i < 10; ++i)
	{
		printf("Please enter the Name of %d student",i);
		scanf("%s",x[i].name);
		printf("Roll: ");
		scanf("%d",x[i].roll);
		printf("c_marks: ");
		scanf("%d",x[i].c_marks);
		printf("b_marks: ");
		scanf("%d",x[i].b_marks);
		printf("m_marks: ");
		scanf("%d",x[i].m_marks)
		x[i].grade=grade(x[i].c_marks,x[i].b_marks,x[i].m_marks);

	}
}
void write(student *x,FILE *f)
{
	for(int i=0;i<10;i++)
	{
		fprintf(f,"Name:%s\n",x[i].name);
		fprintf(f, "Roll:%d\n",x[i].roll);
		fprintf(f, "c_marks:%d\n",x[i].c_marks);
		fprintf(f, "b_marks:%d\n",x[i].b_marks);
		fprintf(f,"m_marks:%d\n",x[i].m_marks);
		fprintf(f, "attendence:%f\n",x[i].attendence);
		fprintf(f, "grade:%s\n",x[i].grade);
	}
}
char grade(int a,int b,int c)
{
	float k=(a+b+c)/3;
	if (k>90)
	{
		return 'O';
	}
	else if(k>70)
		return 'A';
	else if(k>60)
		return 'B';
	else if(k>=45)
		return 'C';
	else
		return 'F';
}