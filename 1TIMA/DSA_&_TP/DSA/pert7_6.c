#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float score;
} Student;


void updateScore(Student *s, float newScore) {
    s->score = newScore;
}

void updateName(Student *s, char newName[50]) {
    strcpy(s->name, newName);
}


int main(){
    Student s1 = {101, "Andi", 70};
    printf("Sebelum: %.2f", s1.score);
    updateScore(&s1, 90);
    printf("\n");
    printf("Sesudah: %.2f", s1.score); // 90.00
    printf("\n");
    printf("Sebelum: %s", s1.name);
    updateName(&s1, "Jhon");
    printf("\n");
    printf("Sesudah: %s", s1.name);

    return 0;
}
