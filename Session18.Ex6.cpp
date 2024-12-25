#include <stdio.h>
#include <string.h>

struct Student{
	int id;
	char name[100];
	int age;
	char phoneNumber[20];
};

int main(){
	char lengthName[100];
	struct Student students[100]={
		{0,"Hiep",18,"0"},
		{0,"Quang Hiep",18,"09"},
		{0,"Tran Quang Hiep",18,"092"},
		{0,"Tran Quang",18,"0925"},
		{0,"Tran Hiep",18,"925"}
	};
	for(int i=0;i<5;i++){
		students[i].id=i+1;
		printf("ID: %d\n",students[i].id);
		printf("Ho va ten: %s\n",students[i].name);
		printf("Tuoi: %d\n",students[i].age);
		printf("So dien thoai: %s\n",students[i].phoneNumber);
		printf("\n");
	}
	printf("Ho va ten cua sinh vien them: ");
	fgets(students[5].name,100,stdin);
	students[5].name[strlen(students[5].name)-1]='\0';
	printf("Tuoi cua sinh vien them: ");
	scanf("%d",&students[5].age);
	getchar();
	printf("So dien thoai cua sinh vien them: ");
	fgets(students[5].phoneNumber,20,stdin);
	for(int i=0;i<6;i++){
		students[i].id=i+1;
		printf("ID: %d\n",students[i].id);
		printf("Ho va ten: %s\n",students[i].name);
		printf("Tuoi: %d\n",students[i].age);
		printf("So dien thoai: %s\n",students[i].phoneNumber);
		printf("\n");
	}
	return 0;
}
