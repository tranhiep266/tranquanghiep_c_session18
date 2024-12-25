#include <stdio.h>
#include <string.h>

struct Student{
	int id;
	char name[50];
	int age;
	char phone[20];
};

int main(){
	int length=5;
	int posiInsert;
	struct Student students[50]={
		{1,"Tran",18,"0"},
		{2,"Quang",18,"9"},
		{3,"Hiep",18,"2"},
		{4,"Tran Quang",18,"5"},
		{5,"Tran Hiep",18,"6"}
	};
	for(int i=0;i<length;i++){
		printf("ID: %d\n",students[i].id);
		printf("Ho va ten: %s\n",students[i].name);
		printf("Tuoi: %d\n",students[i].age);
		printf("So dien thoai: %s\n",students[i].phone);
	}
	printf("\nNhap vi tri can chen: ");
	scanf("%d",&posiInsert);
	getchar();
	if(posiInsert>0&&posiInsert<6){
		for(int i=length;i>=posiInsert;i--){
	    	students[i]=students[i-1];
    	}
		printf("Nhap Id :");
		scanf("%d",&students[posiInsert-1].id);
		getchar();
		printf("Nhap Ho va ten: ");
		fgets(students[posiInsert-1].name,50,stdin);
		students[posiInsert-1].name[strlen(students[posiInsert-1].name)-1]='\0';
		printf("Nhap tuoi: ");
		scanf("%d",&students[posiInsert-1].age);
		getchar();
		printf("Nhap so dien thoai: ");
		fgets(students[posiInsert-1].phone,20,stdin);
		students[posiInsert-1].phone[strlen(students[posiInsert-1].phone)-1]='\0';
		length++;
		for(int i=0;i<length;i++){
			printf("ID: %d\n",students[i].id);
			printf("Ho va ten: %s\n",students[i].name);
			printf("Tuoi: %d\n",students[i].age);
			printf("So dien thoai: %s\n",students[i].phone);
		}
	}else{
		printf("\nNhap sai vi tri\n");
	}
	return 0;
}
