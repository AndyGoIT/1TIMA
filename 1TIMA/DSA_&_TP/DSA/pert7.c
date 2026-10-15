#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float score;
}Student;

void displayStudents(Student data[], int size) {
    //printf("ID	Name	Score");

    for (int i = 0; i < size; i++) {
        //printf("\n");
        printf("%d	%s	%.2f",data[i].id, data[i].name, data[i].score);
        printf("\n");
    }
}

int main() {
    Student students[100];
    int size = 0;

    students[0].id = 101;
    strcpy(students[0].name, "Andi");
    students[0].score = 88.5;

    students[1].id = 102;
    strcpy(students[1].name, "Budi");
    students[1].score = 76.0;

    displayStudents(students, 2);
    //printf("%d %s %.2f", s1.id, s1.name, s1.score);
    return 0;
}
