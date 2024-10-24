// c structure 
#include <stdio.h>
# include<string.h>

struct student {
    char name[25];
    char email[25];
    int phone;
    char reg_no[15];
    float marks;
} student1;
int main() {
   //struct student1;
strcpy(student1.name,"Evans");
strcpy(student1.email,"Evans@gmail.com");
student1.phone=12719807;
strcpy(student1.reg_no,"CT102/G/23443/24");
student1.marks=80.5;

printf("name:%s\n",student1.name);
printf("email:%s\n",student1.email);
printf("phone number:%d\n",student1.phone);
printf("reg no:%s\n",student1.reg_no);
printf("marks:%f\n",student1.marks);

    return 0;
}