#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 20
#define MAX_NAME 50

//Function Decralation
void addStudent(char names[][MAX_NAME], int scores[], int*count);
void displayStudent(char names[][MAX_NAME], int scores[], int count);
float calculateAverage(int scores[], int count);
void findHighestScore(char names[][MAX_NAME], int scores[], int count);
void searchStudent(char names[][MAX_NAME], int scores[], int count);
void deleteStudents(char names[][MAX_NAME], int scores[], int *count);

int main(){
  char names[MAX_STUDENTS][MAX_NAME];
  int scores[MAX_STUDENTS];
  int count=0;
  int choice;
  do{
    printf("\n=== STUDENT MANAGEMENT SYSTEM ===\n");
        printf("1. Add Students\n");
        printf("2. Display Students\n");
        printf("3. Calculate Average\n");
        printf("4. Find Highest Score\n");
        printf("5. Search Student By Name\n");
        printf("6. Delete Students\n");
        printf("7. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        switch(choice){
          case 1:
            addStudent(names, scores, &count);
            break;
          case 2:
            displayStudent(names, scores, count);
            break;
          case 3:
            float average = calculateAverage(scores,count);
            if (count==0){
              printf("\nNo Students Available.\n");
            }else{
              printf("\nAverage Score: %.2f\n", average);
            }
            break;
          case 4:
            findHighestScore(names, scores, count);
            break;
          case 5:
            searchStudent(names, scores, count);
            break;
          case 6:
            deleteStudents(names, scores, &count);
            break;
          case 7:
            printf("\nProgram Exited. Ciao!\n");
            break;
          default:
            printf("\nInvalid Choice! Pleaser Choose Between 1-7\n");
          }
        }while(choice !=7);
      return 0;
}

//Add Students
void addStudent(char names[][MAX_NAME], int scores[], int *count){
  if (*count >= MAX_STUDENTS){
    printf("\nStudent List Is Full!\n");
    return;
  }
  getchar();
  printf("\nEnter Student Name: ");
  fgets(names[*count], MAX_NAME, stdin);
  names[*count][strcspn(names[*count], "\n")] = '\0';
  printf("Enter Score: ");
  scanf("%d", &scores[*count]);
  if (scores[*count]<0||scores[*count]>100){
    printf("Invalid Score! Score must be 0-100.\n");
    return;
  }
  (*count)++;
  printf("Student Added Successfully!\n");
}

//Display Students Name
void displayStudent(char names[][MAX_NAME], int scores[], int count){
  if (count==0){
    printf("No Student Available.\n");
    return;
  }
  printf("\nStudent List\n");
  for (int i=0;i<count;i++){
    printf("%d, %-25s Score: %d\n",
    i+1,
    names[i],
    scores[i]);
  }
}

//Calculate Average
float calculateAverage(int scores[], int n){
  int total = 0;
  for(int i=0;i<n;i++){
    total += scores[i];
  }
  return (float) total/ n;
}

//Find Highest Score
void findHighestScore(char names[][MAX_NAME], int scores[], int count){
  if (count==0){
    printf("\nNo Students Available.\n");
    return;
  }
  int highest =scores[0];
  int highestIndex=0;
  for (int i=1;i<(count);i++){
    if (scores[i]>highest){
      highest=scores[i];
      highestIndex=i;
    }
  }
  printf("\nHighest Score\n");
  printf("Student  : %s\n",names[highestIndex]);
  printf("Score    : %d\n", highest);
}

//Search Students by Name
void searchStudent(char names[][MAX_NAME], int scores[], int count){
  if(count==0){
    printf("\nNo Student Available.\n");
    return;
  }
  char target[MAX_NAME];
  int found=0;
  getchar();
  printf("\nEnter Student Name to Search: ");
  fgets(target, MAX_NAME,stdin);
  target[strcspn(target, "\n")] ='\0';
  for (int i=0; i<count; i++){
    if(strcmp(names[i],target)==0){
      printf("\nStudent Found!\n");
      printf("Name  : %s\n",names[i]);
      printf("Score : %d\n",scores[i]);
      found=1;
      break;
    }
  }
  if(found==0){
    printf("\nStudent Not Found!\n");
  }
}

//Delete Student
void deleteStudents(char names[][MAX_NAME], int scores[], int *count){
  if (*count==0){
    printf("\nNo Student Available.\n");
    return;
  }
  char target[MAX_NAME];
  int found=-1;
  getchar();
  printf("\nEnter Student Name to Delete: ");
  fgets(target, MAX_NAME, stdin);
  target[strcspn(target, "\n")]='\0';
  for (int i=0; i<*count; i++){
    if(strcmp(names[i], target)==0){
      found=i;
      break;
    }
  }
  if(found==-1){
    printf("\nStudent Not Found!\n");
    return;
  }
  for(int i=found;i< *count -1; i++){
    strcpy(names[i], names[i+1]);
    scores[i]=scores[i+1];
  }
  (*count)--;
  printf("\nStudent Deleted Successfully!\n");
}