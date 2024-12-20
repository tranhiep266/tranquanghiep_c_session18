#include <stdio.h>

struct Student{
	char fullName[100];
	int age;
	char phoneNumber[20];
};

int main(){
	struct Student students[5];
	for(int i=0;i<5;i++){
		printf("Nhap ho va ten cua sinh vien %d: ",i+1);
		fgets(students[i].fullName,100,stdin);
		printf("Nhap tuoi cua sinh vien %d: ",i+1);
		scanf("%d",&students[i].age);
		fflush(stdin);
		printf("Nhap so dien thoai cua sinh vien %d: ",i+1);
		fgets(students[i].phoneNumber,20,stdin);
	}
	for(int i=0;i<5;i++){
		printf("Thong tin sinh vien %d: \n",i+1);
		printf("%s\n",students[i].fullName);
		printf("%d\n",students[i].age);
		printf("%s\n",students[i].phoneNumber);
	}
	return 0;
}
