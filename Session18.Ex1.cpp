#include <stdio.h>

struct Student{
	char fullName[100];
	int age;
	char phoneNumber[20];
};

int main(){
	struct Student student01={"Tran Quang Hiep",18,"0925648jqk"};
	printf("Ho va ten: %s\n",student01.fullName);
	printf("Tuoi: %d\n",student01.age);
	printf("So dien thoai: %s",student01.phoneNumber);
	return 0;
}
