#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>


// Driver code
int main()
{
  int a = 0; 
  int fact = 1 ;
  printf("Enter the number \n");
  scanf("%d",&a);
  int n;
  n = fork();

  // Checking if n is not 0
  if (n > 0){
  printf("Parent Process: \n");
      if (a%2 == 0){
        printf("Even Number \n");
      }else{
        printf("Odd Number \n");
   }
 }

 // If n is 0 i.e. we are in child process
   else {
        if(a<0)
           printf("Negative number \n");
    else {
     for(int i = 1; i <=a; i++){
           fact = fact * i;
      }
 }
      printf("Child process: \n");
     printf("Factorial of Number is : %d \n", fact);
  }
 return 0;
}

