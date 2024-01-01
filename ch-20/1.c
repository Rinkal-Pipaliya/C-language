#include<stdio.h>
#include<string.h>

struct student{
	int id;
	char name[20];
	int age;
	char course[30];
	char city[20];
	int std;
	char school[20];
	
};
void main()
{
	struct student s1;
	s1.id=101;
	strcpy(s1.name,"Aman");
	s1.age=15;
	strcpy(s1.course,"c++ lenguage");
	strcpy(s1.city,"Surat");
	s1.std =10;
	strcpy(s1.school,"svm school");
	
	printf("ID\t:%d\n",s1.id);	
	printf("Name\t:%s\n",s1.name);	
	printf("age\t:%d\n",s1.age);	
	printf("course\t:%s\n",s1.course);
	printf("city\t:%s\n",s1.city);	
	printf("std\t:%d\n",s1.std);	
	printf("school\t:%s\n",s1.school);	
	
	printf("\n======================\n");
	struct student s2;
	s2.id=102;
	strcpy(s2.name,"raj");
	s2.age=15;
	strcpy(s2.course,"c++ lenguage");
	strcpy(s2.city,"Surat");
	s2.std =10;
	strcpy(s2.school,"svm school");
	
	printf("ID\t:%d\n",s2.id);	
	printf("Name\t:%s\n",s2.name);	
	printf("age\t:%d\n",s2.age);	
	printf("course\t:%s\n",s2.course);
	printf("city\t:%s\n",s2.city);	
	printf("std\t:%d\n",s2.std);	
	printf("school\t:%s\n",s2.school);	
	
	printf("\n======================\n");
	
	struct student s3;
	s3.id=103;
	strcpy(s3.name,"krisha");
	s3.age=15;
	strcpy(s3.course,"c++ lenguage");
	strcpy(s3.city,"Surat");
	s3.std =10;
	strcpy(s3.school,"svm school");
	
	printf("ID\t:%d\n",s3.id);	
	printf("Name\t:%s\n",s3.name);	
	printf("age\t:%d\n",s3.age);	
	printf("course\t:%s\n",s3.course);
	printf("city\t:%s\n",s3.city);	
	printf("std\t:%d\n",s3.std);	
	printf("school\t:%s\n",s3.school);	
}
