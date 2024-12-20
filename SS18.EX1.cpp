#include<stdio.h>
#include<string.h>
int main(){
	struct student{
		char name[50];
		int age;
		char phoneNumber[20];
	};
	struct student user01{"Nguyen Van A",18,"0987654321"};
	printf("Thong tin sinh vien: \n");
	printf("Ho ten: %s\n", user01.name);
	printf("Tuoi: %d\n", user01.age);
	printf("So dien thoai: %s\n", user01.phoneNumber);
	return 0;
}
