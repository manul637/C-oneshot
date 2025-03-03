#include<stdio.h>

//user defined

struct students {
    int roll ;
    float cgpa;
    char name[100];
};

int main () {
    struct students s1 ;{ 4093 , 9.0 , "manul" };
    printf("student roll no : %d \n" , s1.roll);
}


