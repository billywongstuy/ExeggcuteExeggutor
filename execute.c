#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {

  char input[100];
  printf("What would you like to do?   ");
  fgets(input,sizeof(input),stdin);
  
  if (!strcmp(input,"\n")) {
    printf("Please enter a valid argument!\n");
    return 0;
  }
  
  strtok(input,"\n");


  char *s = input;
  char *commands[10];

  int i = 0;
  while (s) {
    commands[i] = strsep(&s," ");
    i++;
  }


  execvp(commands[0],commands);
  
  return 0;

  
}
