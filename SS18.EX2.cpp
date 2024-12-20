#include<stdio.h>
#include<string.h>
int main(){
	struct student{
		char name[50];
		int age;
		char phoneNumber[20];
	};
	struct student user02;
	printf("Moi ban nhap thong tin cho sinh vien:\n ");
	printf("Moi ban nhap Ho ten: ");
	fgets(user02.name,sizeof(user02.name),stdin);
	printf("Moi ban nhap tuoi: ");
	scanf("%d", &user02.age);
	fflush(stdin);
	printf("Moi ban nhap SDT: ");
	fgets(user02.phoneNumber,sizeof(user02.phoneNumber),stdin);
	printf("Thong tin sinh vien: \n");
	printf("Ho ten: %s\n", user02.name);
	printf("Tuoi: %d\n", user02.age);
	printf("SDT: %s\n", user02.phoneNumber);
	return 0;
}
