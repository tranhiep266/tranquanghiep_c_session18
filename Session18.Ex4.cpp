#include <stdio.h>

struct Student{
	char fullName[100];
	int age;
	char phoneNumber[20];
};

int main(){
	struct Student student[50];
	int length;
	printf("Nhap so thanh vien muon nhap: ");
	scanf("%d",&length);
	fflush(stdin);
	for(int i=0;i<length;i++){
		printf("ID: %d\n",i+1);
		printf("Nhap ho va ten cua sinh vien %d: ",i+1);
		fgets(student[i].fullName,100,stdin);
		printf("Nhap tuoi cua sinh vien %d: ",i+1);
		scanf("%d",&student[i].age);
		fflush(stdin);
		printf("Nhap so dien thoai cua sinh vien %d: ",i+1);
		fgets(student[i].phoneNumber,20,stdin);
	}
	for(int i=0;i<length;i++){
		printf("\nThong tin sinh vien %d: \n",i+1);
		printf("ID: %d\n",i+1);
		printf("Ho va ten: %s",student[i].fullName);
		printf("Tuoi: %d\n",student[i].age);
		printf("So dien thoai: %s\n",student[i].phoneNumber);
	}
	return 0;
}
