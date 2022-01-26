#include <cs50.h>
#include <stdio.h>

int main(void)
{
       float SumMat[3][3],Mat1[3][3],Mat2[3][3];

// enter the elements of the first matrix
   printf("\n Enter the elements of the first matrix \n");
   printf("\n");
   for (int i = 0; i < 3; ++i){
    for (int j = 0; j < 3; ++j)
    {
      printf("a%i%i: ", i + 1, j + 1);
      scanf("%f", &Mat1[i][j]);
    }
   }
// The first matrix
   printf("\t \n The first matrix entered is as follows : \n");
   printf("\n");
    for (int i = 0; i < 3; ++i){
     for (int j = 0; j < 3; ++j){

      printf("     %.2f\t", Mat1[i][j]);
     }
          printf("\n");

    }
// enter the elements of the second matrix
   printf("\n Enter the elements of the second matrix \n");
   printf("\n");
   for (int i = 0; i < 3; ++i){
    for (int j = 0; j < 3; ++j)
    {
      printf("a%i%i: ", i + 1, j + 1);
      scanf("%f", &Mat2[i][j]);
    }
   }
// The second matrix
   printf("\t  \nThe second matrix entered is as follows : \n");
   printf("\n");
    for (int i = 0; i < 3; ++i){
     for (int j = 0; j < 3; ++j){

      printf("     %.2f\t", Mat2[i][j]);
     }
          printf("\n");

    }

// let's calculate the sum of the two matrices
    printf("\t  \nThe sum of the matrices is as follows : \n");
    printf("\n");
    for (int i = 0; i < 3; ++i){
     for (int j = 0; j < 3; ++j){

      SumMat [i][j] = Mat1 [i][j] + Mat2 [i][j];
      printf("     %.2f\t", SumMat[i][j]);
     }
          printf("\n");

    }
   }
