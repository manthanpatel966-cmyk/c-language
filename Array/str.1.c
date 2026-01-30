#include<stdio.h>
int main() {
	
	int studentid;
	char studentname[50];
	char coursename[50];
	char city[50];
	
	printf("enter your id:");
	scanf("%d",&studentid);
	
	printf("enter your studentname:");
	scanf("%s",studentname);
	
	printf("enter your coursename:");
	scanf("%s",coursename);
	
	printf("enter your city:");
	scanf("%s",city);
	
	
	printf("---student info---");
	printf("\nstudentid:%d",studentid);
	printf("\nstudentname:%s",studentname);
	printf("\ncoursename:%s",coursename);
	printf("\ncity:%s",city);
	
	
	return 0;
}
