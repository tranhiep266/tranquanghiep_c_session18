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
	int found=0;
	char nameDel[50];
	struct Student students[50]{
		{1,"Tran Quang Hiep",18,"0925"},
		{2,"Tran Hiep",18,"0925"},
		{3,"Tran Quang ",18,"0925"},
		{4,"Quang Hiep",18,"0925"},
		{5,"Hiep",18,"0925"},
	};
	for(int i=0;i<length;i++){
		printf("ID: %d\n",students[i].id);
		printf("Ho va ten: %s\n",students[i].name);
		printf("Tuoi: %d\n",students[i].age);
		printf("So dien thoai: %s\n",students[i].phone);
		printf("\n");
	}
	printf("Nhap ten muon xoa: ");
	fgets(nameDel,50,stdin);
	nameDel[strlen(nameDel)-1]='\0';
	for(int i=0;i<5;i++){
		if(strcmp(students[i].name,nameDel)==0){
			found=1;
			for(int j=i;j<length;j++){
				students[j]=students[j+1];
			}
			length--;
			break;
		}
	}
	if(found=0){
		printf("Sinh vien khong ton tai");
	}
	for(int i=0;i<length;i++){
		printf("ID: %d\n",students[i].id);
		printf("Ho va ten: %s\n",students[i].name);
		printf("Tuoi: %d\n",students[i].age);
		printf("So dien thoai: %s\n",students[i].phone);
		printf("\n");
	}
	return 0;
}
