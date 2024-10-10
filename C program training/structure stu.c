#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int age;
    float height;
    float weight;
};
int main()
{
    struct student s1;
    strcpy(s1.name,"karthik");
    s1.age= 19;
    s1. height = 172.7;
    s1. weight = 67;
    printf("%s\n",s1.name);
    printf("%d\n",s1.age);
    printf("%f\n",s1.height);
    printf("%f\n",s1.weight);
    return 0;
}