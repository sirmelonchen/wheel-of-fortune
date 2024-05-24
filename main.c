#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void filecreate() {
    FILE *fptr;
    fptr = fopen("wheel.txt", "w");
    fclose(fptr);
}

int random_line(int lines){
    lines++;
    int r = rand() % lines;
    printf("%d", r);
    return lines;
}


void count_lines(){
  // count the number of lines in the file called filename                                    
  FILE *fp = fopen("wheel.txt","r");
  int ch=0;
  int lines=0;

  if(fp == NULL){
    filecreate();
    printf("Du musst das Programm neu starten");
    exit(0);
  }
  


  lines++;
  while ((ch = fgetc(fp)) != EOF)
    {
      if (ch == '\n')
    lines++;
    }
  fclose(fp);
  printf("%d", lines);
  int printline = random_line(lines);


    
}






int main() {
    count_lines();
    return 0;
}

