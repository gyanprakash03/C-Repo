#include <stdio.h>
#include <string.h>
// student's log
struct info {
    int id;
    char name[20];
    int class;
    char section;
    float marks;
}; 
struct info ram, shyam, ravi, karan;

int main()
{
    int student;
    struct info ram = {301,"Ram prasad",12,'A',78.9};
    struct info shyam = {307,"Shyam kumar",12,'C',71.4};
    struct info ravi = {323,"Ravi verma",12,'B',83.6};
    struct info karan = {330,"Karan garg",12,'A',94.8};
    printf(" Whose information do you want to acess ?\n 1. Ram  [press 1]\n 2. Shyam  [press 2]\n 3. Ravi  [press 3]\n 3. Karan  [press 4]\n");
    scanf("%d",&student);
    switch (student)
    {
    case 1:
        printf(" ID : %d\n Name : %s\n Class : %d-%c\n Marks : %f\n",ram.id,ram.name,ram.class,ram.section,ram.marks);
        break;
    case 2:
        printf(" ID : %d\n Name : %s\n Class : %d-%c\n Marks : %f\n",shyam.id,shyam.name,shyam.class,shyam.section,shyam.marks);
        break;
    case 3:
        printf(" ID : %d\n Name : %s\n Class : %d-%c\n Marks : %f\n",ravi.id,ravi.name,ravi.class,ravi.section,ravi.marks);
        break;
    case 4:
        printf(" ID : %d\n Name : %s\n Class : %d-%c\n Marks : %f\n",karan.id,karan.name,karan.class,karan.section,karan.marks);
        break;
    default:
        break;
    }
    return 0;
}