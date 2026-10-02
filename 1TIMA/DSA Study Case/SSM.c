#include <stdio.h>
// student score declaration
void displayScores(int scores[], int n);
  float calculateAverage(int scores[], int n);
  int findHighest(int scores[], int n);
  int insertScore(int scores[], int n);
  int deleteScore(int scores[], int n);

int main(){
  int scores[100];
    int n = 0;
    int choice;
  do {
        printf("\n=== MENU PROGRAM ===\n");
        printf("1. Add Score\n");
        printf("2. Display All Scores\n");
        printf("3. Calculate Average\n");
        printf("4. Show Highest Score\n");
        printf("5. Delete Score\n");
        printf("6. Exit\n");
        printf("Choice: ");

        scanf("%d", &choice);

        switch (choice) {

            case 1:
                n=insertScore(scores, n);
                break;

            case 2:
                displayScores(scores, n);
                break;

            case 3:
                if (n==0) {
                  printf("No Scores Available.\n");
                }else{
                  printf("Average Score: %.2f\n", calculateAverage(scores, n));
                }
                break;

            case 4:
                if (n==0) {
                  printf("No Scores Available.\n");
                }else{
                  printf("Highest Score: %d\n", findHighest(scores,n));
                }
                break;

            case 5:
                n=deleteScore(scores,n);
                break;

            case 6:
                printf("Program Exited\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 6);

    return 0;
}

//Add Score
int insertScore(int scores[], int n){
  if (n>=100){
    printf("Array is Full\n");
    return n;
  }
  printf("Enter New Score: ");
  scanf("%d", &scores[n]);
  n++;
  printf("Score Add Successfully!\n");
  return n;
}

//Display All Scores
void displayScores(int scores[], int n){
  if (n==0){
    printf("No Scores Available.\n");
    return;
  }
  printf("\nAll Scores:\n");
  for(int i=0;i<n;i++){
    printf("Score %d; %d\n",i+1,scores[i]);
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
int findHighest(int scores[], int n){
  int highest = scores[0];
  for (int i=1;i<n;i++){
    if (scores[i] > highest){
      highest=scores[i];
    }
  }
  return highest;
}

//Delete Score
int deleteScore(int scores[], int n){
  int index;
  if (n==0){
    printf("No Scores Available.\n");
    return n;
  }
  displayScores(scores, n);
  printf("Enter Score Number to Delete: ");
  scanf("%d", &index);

  //Convert From Users
  index--;
  if(index<0||index>=n){
    printf("Invalid Index!\n");
    return n;
  }
  //Shift Elements
  for(int i=index; i<n-1; i++){
    scores[i]=scores[i+1];
  }
  printf("Scores Deleted Successfully!\n");
  return n;
}