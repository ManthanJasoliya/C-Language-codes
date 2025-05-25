#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[50];
    float cgpa;
};
void print(struct student s){
    printf("roll = %d\n",s.roll);
    printf("name = %s\n",s.name);
    printf("cgpa = %f\n",s.cgpa);
}

int main()
{
    struct student r1;
    r1.roll=1;
    strcpy(r1.name,"manthan");
    r1.cgpa=9.4;

    struct student r2;
    r2.roll=2;
    strcpy(r2.name,"prayag");
    r2.cgpa=9.8;

    struct student r3;
    r3.roll=3;
    strcpy(r3.name,"Devraj");
    r3.cgpa=1.9;
    
    print(r1);
    print(r2);
    print(r3);

    return 0;
}
