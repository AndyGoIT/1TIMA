#include <stdio.h>
#include <string.h>

int main(){
 
  char username[20];
  char password[20];

  printf("=== Program Login ===\n");
  printf("Masukkan Username: ");
  scanf("%s", username);
  printf("Masukkan Password: ");
  scanf("%s", password);

  if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) {
    printf("Login Berhasil! \n");
  } else {
    printf("Login Gagal! \n");
  }

  return 0;
}
    