#include <stdio.h>
#include <string.h>

struct Dish{
	int id;
	char name[100];
	int price;
};

int main(){
	int choice;
	struct Dish menu[100]={
		{1,"Thit cho",200000},
		{1,"Thit meo",150000},
		{1,"Thit chuot",130000},
		{1,"Thit ga",100000},
		{1,"Thit vit",90000}
	};
	int currentLength=5;
	for(;;){
		printf("1. In ra gia ri cac phan tu co trong menu mon an theo dang\n");
		printf("2. Them mot phan tu vao vi tri chi dinh\n");
		printf("3. Sua mot phan tu o vi tri chi dinh\n");
		printf("4. Xoa mot phan tu o vi tri chi dinh\n");
		printf("5. Sap xep cac phan tu\n");
		printf("6. Tim kiem phan tu theo name nhap vao\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban: \n");
		scanf("%d",&choice);
		fflush(stdin);
		if(choice==1){
			printf("\nMenu mon an: \n");
			for(int i=0;i<currentLength;i++){
				menu[i].id=i+1;
				printf("%d.%s \n",menu[i].id,menu[i].name);
				printf("Gia: %d\n",menu[i].price);
				printf("\n");
			}
	    }
	    
		else if(choice==2){
			int addPosi;
			printf("Nhap id them mon an: ");
			scanf("%d",&addPosi);
			fflush(stdin);
			if(addPosi>0&&addPosi<101){
				currentLength++;
				menu[currentLength-1].id=addPosi;
				printf("\nMoi nhap ten mon an: ");
				fgets(menu[currentLength-1].name,100,stdin);
				printf("\nMoi nhap gia cua mon an: ");
				scanf("%d",&menu[currentLength-1].price);
				printf("\nMenu mon an: \n");
				for(int i=0;i<currentLength;i++){
			    	printf("%d.%s \n",menu[i].id,menu[i].name);
			    	printf("Gia: %d\n",menu[i].price);
			    	printf("\n");
		    	}
			}else{
				printf("Nhap vi tri khong phu hop\n");
				break;
			}
		}
		
		else if(choice==3){
			int posiEdit;
			char nameEdit[100];
			int priceEdit;
			printf("Nhap vi tri can sua: ");
			scanf("%d",&posiEdit);
			fflush(stdin);
			printf("Nhap ten sau khi sua: ");
			fgets(nameEdit,100,stdin);
			strcpy(menu[posiEdit-1].name,nameEdit);
			printf("Nhap gia sau khi sua: ");
			scanf("%d",&priceEdit);
			menu[posiEdit-1].price=priceEdit;
			for(int i=0;i<currentLength;i++){
				printf("%d.%s \n",menu[i].id,menu[i].name);
				printf("Gia: %d\n",menu[i].price);
				printf("\n");
			}
		}
		
		else if(choice==4){
			int posiDel;
			printf("Nhap vi tri muon xoa: ");
			scanf("%d",&posiDel);
			fflush(stdin);
			if(posiDel>0&&posiDel<=currentLength){
				for(int i=posiDel-1;i<currentLength-1;i++){
					menu[i]=menu[i+1];
				}
				currentLength--;
			}
			for(int i=0;i<currentLength;i++){
				printf("%d.%s \n",menu[i].id,menu[i].name);
				printf("Gia: %d\n",menu[i].price);
				printf("\n");
			}
		}		
		
		else if(choice==5){
			int minichoice;
			printf("1. Giam dan theo price\n");
			printf("2. Tang dan theo price\n");
			scanf("%d",&minichoice);
			fflush(stdin);
			if(minichoice==1){
				for(int i=0;i<currentLength;i++){
					struct Dish temp=menu[i].price;
					int j=i-1;
					while(j>=0&&menu[j]>temp){
						menu[j+1].price=menu[j];
						j=j-1;
					}
					menu[j+1]=temp;
				}
			}

		else if(choice==6){
			
		}
		
		else if(choice==7){
			printf("\nTHOAT\n");
			break;
		}							
	}
}


