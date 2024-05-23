#include <stdio.h>
#include <math.h>
#include <stdlib.h>

gggg
void filecreate() {
    FILE *fptr;
    fptr = fopen("wheel.txt", "w");
    fclose(fptr);
}


void fileread(){
    char myString[100];
    FILE *fptr;
    fptr = fopen("wheel.txt", "r");
    if (fptr == NULL)
    {
        printf("Wir können die Datei \"wheel.txt\" nicht öffnen.\n Es wird eine neue Datei erstellt.\n Bitte das Programm neustarten." );
        filecreate();
        exit(0);
    }else{
        while(fgets(myString, 100, fptr)) {
            printf("%s\n", myString);
  }
    }
    
}



int main() {
    fileread();
    return 0;
}

