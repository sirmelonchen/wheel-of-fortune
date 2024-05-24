#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void filecreate() {
    FILE *fptr;
    fptr = fopen("wheel.txt", "w");
    fclose(fptr);
}


void fileread(){
  // count the number of lines in the file called filename                                    
  FILE *fp = fopen("wheel.txt","r");
  int ch=0;
  int lines=0;


  lines++;
  while ((ch = fgetc(fp)) != EOF)
    {
      if (ch == '\n')
    lines++;
    }
  fclose(fp);
  printf("%d", lines);
    
}



int main() {
    fileread();
    return 0;
}

