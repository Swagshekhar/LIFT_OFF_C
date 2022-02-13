#include<stdio.h>
int main()
{ 
	char a[40],b[40],c[100],d[30];
	printf("\nName:");
	scanf("%s",a);
	printf("\nRegd.no.:");
	scanf("%s",b);
	printf("\nBranch:");
	scanf("%s",c);
	printf("\nHobbies:");
	scanf("%s",d);
	printf("\n");
	printf("Name: %s\n",a);
	printf("Branch: %s\n",c);
	printf("Hobbies: %s\n",d);
	printf("Regd.no.: %s\n",b);
	return 0;
}