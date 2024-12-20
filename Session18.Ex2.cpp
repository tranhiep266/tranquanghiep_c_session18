#include <stdio.h>

struct Student{
	char fullName[100];
	int age;
	char phoneNumber[20];
};

int main(){
	struct Student student;
	printf("Moi ban nhap ho va ten: ");
	fgets(student.fullName,100,stdin);
	printf("Moi ban nhap tuoi: ");
	scanf("%d",&student.age);
	fflush(stdin);
	printf("Moi ban nhap so dien thoai: ");
	fgets(student.phoneNumber,20,stdin);
	return 0;
}
