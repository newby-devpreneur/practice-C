#include <stdio.h>

int main() {

  //Intro   
    char introStmnt[40]  = "Your 'C' Program Says: \n\n"; 

    printf("%s", introStmnt);

  //Practice Program
    double pi = 3.23423513534252;
    double product = 3.33333333333333333;
    double weight = 340.2342353531456;

    printf("The value of PI is NOT '%.15lf'\n", pi);
    printf("The answer to 3/10 is '%lf'\n", product);
    printf("You are quite articulatley large at %lf pounds.. \n", weight);


    return 0;
}