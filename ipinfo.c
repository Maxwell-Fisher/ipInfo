/*Made by Maxwell Fisher*/
/*@Maxwellcrafter*/
/*https://maxwellcrafter.com*/

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

#ifdef _WIN64
#include <windows.h>
#endif

int main(void) {
  #ifdef _WIN32
  system("setLocal enableDelayedExpansion >nul");
  #endif

  #ifdef _WIN64
  system("setLocal enableDelayedExpansion >nul");
  #endif

while (1 == 1) {
  char userInput[17];
  char beginning[3];
  printf("Please enter an IP address:\n> ");
  fgets(userInput,17,stdin);
/* Gets the user input */


int parts[4];
int i = 0;
for (int j = 0; j < 4; ++j) {
  parts[j] = 0;
  while (userInput[i] != '.' && userInput[i] != '\n') {
    parts[j] *= 10;
    parts[j] += userInput[i] - '0';
    ++i;
  }
  ++i;
}
/* Separates the 4 parts of the address into sections */

if (parts[0] >= 0 && parts[0] <= 255 && parts[1] >= 0 && parts[1] <= 255 && parts[2] >= 0 && parts[2] <= 255 && parts[3] >= 0 && parts[3] <= 255) {
  printf("\033[A\033[16D                                \033[32DIP: %d.%d.%d.%d                     \n", parts[0], parts[1], parts[2], parts[3]);
/* Yes, the spaces are needed here for text formatting ^ */
  
  if (parts[0] >= 1 && parts[0] <= 126 &&
      parts[1] >= 0 && parts[1] <= 255 &&
      parts[2] >= 0 && parts[2] <= 255 &&
      parts[3] >= 1 && parts[3] <= 254) {
        printf("Class: A          \n");
        printf("Default subnet mask: 255.0.0.0");
      }

  if (parts[0] >= 128 && parts[0] <= 191 &&
      parts[1] >= 1 && parts[1] <= 255 &&
      parts[2] >= 0 && parts[2] <= 255 &&
      parts[3] >= 1 && parts[3] <= 254) {
        printf("Class: B          \n");
        printf("Default subnet mask: 255.255.0.0");
      }

  if (parts[0] >= 192 && parts[0] <= 223 &&
      parts[1] >= 0 && parts[1] <= 255 &&
      parts[2] >= 1 && parts[2] <= 254 &&
      parts[3] >= 1 && parts[3] <= 254) {
        printf("Class: C          \n");
        printf("Default subnet mask: 255.255.255.0");
      }

  if (parts[0] >= 224 && parts[0] <= 239 &&
      parts[1] >= 0 && parts[1] <= 255 &&
      parts[2] >= 0 && parts[2] <= 255 &&
      parts[3] >= 0 && parts[3] <= 255) {
        printf("Class: D          ");
      }

  if (parts[0] >= 240 && parts[0] <= 254 &&
      parts[1] >= 0 && parts[1] <= 255 &&
      parts[2] >= 0 && parts[2] <= 255 &&
      parts[3] >= 0 && parts[3] <= 254) {
        printf("Class: E          ");
      }

  if (parts[0] >= 127 && parts[0] <= 127 &&
      parts[1] >= 0 && parts[1] <= 255 &&
      parts[2] >= 0 && parts[2] <= 255 &&
      parts[3] >= 0 && parts[3] <= 255) {
        printf("Localhost/loopback");
      }

  if (parts[0] >= 255 && parts[0] <= 255 &&
      parts[1] >= 255 && parts[1] <= 255 &&
      parts[2] >= 255 && parts[2] <= 255 &&
      parts[3] >= 255 && parts[3] <= 255) {
        printf("Broadcast         ");
      }

}
else {
if (strstr(userInput, "info") != NULL || strstr(userInput, "credit") != NULL) {
    printf("\033[F\033[A\033[AVersion: 2.0.6                \nMade by Maxwell Fisher, with help from Sam Haskins");
  }
/* A credits thing */
  
  else {
  printf("\033[F\033[AInvalid IP address          ");
}
/* Error case stuff */

}

printf("\n---------------------------\n\n");
}
  return 0;
}

/*------------------------------------------------------------------*/
/*       |\/| ---- _                                                */
/*      =(--)=_____ \                                               */
/*      c___ (______/                                               */
/* 19ddefabe5c2652a30e671914cf84c49b0a6f45318adacc0aeb3563ae72d134e */
/*------------------------------------------------------------------*/
