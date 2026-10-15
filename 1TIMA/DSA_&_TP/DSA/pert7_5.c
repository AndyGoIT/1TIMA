#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    float score;

}Student;

Student inputStudent() {
    Student s;

    printf("ID    : ");
    scanf("%d", &s.id);

    printf("Name  : ");
    scanf("%49s", s.name);

    printf("Score : ");
    scanf("%f", &s.score);

    return s;
}


int main(){
    Student student;
    student = inputStudent();
    printf("\n");
    printf("ID: %d\n", student.id );
    printf("Name: %s\n", student.name);
    printf("Score: %.2f\n", student.score);

    return 0;
}
