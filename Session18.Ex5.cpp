#include <stdio.h>
#include <string.h>

struct Student{
	int id;
	char fullName[100];
	int age;
	char phoneNumber[20];
};

int main(){
	int idEdit;
	char nameEdit[100];
	struct Student students[50]={
		{1,"Nguyen Bao Anh",18,"0925666123"},
		{2,"Nguyen Hoang Duc",18,"0925666456"},
		{3,"Vu Duc Duy",18,"0925666789"},
		{4,"Nguyen Quang Huy",18,"092566610j"},
		{5,"Nguyen Tuan Hai",18,"0925666qka"},
	};
	for(int i=0;i<5;i++){
		printf("\nThong tin sinh vien %d: \n",i+1);
		printf("ID: %d\n",students[i].id);
		printf("Ho va ten: %s\n",students[i].fullName);
		printf("Tuoi: %d\n",students[i].age);
		printf("So dien thoai: %s\n",students[i].phoneNumber);
	}
	printf("\nNhap id nguoi muon sua: ");
	scanf("%d",&idEdit);
	fflush(stdin);
	if(0<idEdit<6){
		printf("Sua ten thanh: ");
		fgets(nameEdit,100,stdin);
		strcpy(students[idEdit-1].fullName,nameEdit);
		printf("Sua tuoi thanh: ");
		scanf("%d",&students[idEdit-1].age);
		fflush(stdin);
		printf("\nThong tin sau khi sua: \n");
	    printf("ID: %d\n",students[idEdit-1].id);
	    printf("Ho va ten: %s",students[idEdit-1].fullName);
	   	printf("Tuoi: %d\n",students[idEdit-1].age);
    	printf("So dien thoai: %s\n",students[idEdit-1].phoneNumber);
	}else{
		printf("\nKhong tim thay\n");
	}
	return 0;
}
