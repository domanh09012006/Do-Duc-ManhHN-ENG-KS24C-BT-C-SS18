#include<stdio.h>
#include<string.h>
struct Student{
		int ID;
		char name[50];
		int age;
		char phoneNumber[20];
	};
int main(){
	struct Student students[50];
		for(int i=0; i<5; i++){
			printf("Moi ban nhap thong tin cho sinh vien %d:\n ", i+1);
			printf("Moi ban nhap Ho ten: ");
			fgets(students[i].name,sizeof(students[i].name),stdin);
			students[i].name[strcspn(students[i].name, "\n")] = '\0';
			printf("Moi ban nhap tuoi: ");
			scanf("%d", &students[i].age);
			fflush(stdin);
			printf("Moi ban nhap SDT: ");
			fgets(students[i].phoneNumber,sizeof(students[i].phoneNumber),stdin);
		}
		for(int i=0; i<5; i++){
			students[i].ID= 100+i;
			printf("\nThong tin sinh vien %d:", i+1);
			printf("ID: %d/n", students[i].ID);
			printf("Ho ten: %s\n", students[i].name);
			printf("Tuoi: %d\n", students[i].age);
			printf("SDT: %s\n", students[i].phoneNumber);
		}

	return 0;	
}
