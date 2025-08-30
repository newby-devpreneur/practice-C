#include <stdio.h>

int main() {

  //Intro   
    char introStmnt[40]  = "\nYour 'C' Program Says: \n\n"; 

    printf("%s", introStmnt);

  //Practice Program
    
  char name[] = "Collisopher";
  char food[] = "Burgers & Fries";

  printf("Hello, %s!\n", name);

  printf("I heard your favorite food was %s? Suprising!\n", food);


    return 0;
}