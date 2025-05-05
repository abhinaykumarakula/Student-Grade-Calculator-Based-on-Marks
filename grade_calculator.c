// OM NAMO VENKATESHAYA
// AUTHOR  : ABHINAY
/* PROGRAM : Write a program to find grade 
of a student given his marks based on below
   MARKS          GRADE 
  90–100    =>      A
  80–90     =>      B 
  70–80     =>      C 
*/
  
 #include <stdio.h>

   int main() {
     int marks;

    //  taking marks as input from the user
    printf("ENTER THE MARKS :\n");
    scanf("%d",&marks);

    // checking if user has given invalid marks
    if(marks<0 || marks>100)
    {
        printf("invalid marks! please enter marks from (0 to 100)");
    }
    // checking if marks are from 90 to 100
    else if(marks>=90 && marks<=100)
    {
      printf("GRADE A\n");
    }
    // checking if marks are from 80 to 90
    else if(marks>=80 && marks<90)
    {
      printf("GRADE B\n");
    }
    // checking if marks are from 70 to 80
    else if(marks>=70 && marks<80)
    {
      printf("GRADE C\n");
    }
    // checking if marks are from 60 to 70
    else if(marks>=60 && marks<70)
    {
    printf("GRADE D\n");
    }
    // checking if marks are from 50 to 60
    else if(marks>=50 && marks<60)
    {
      printf("GRADE E\n");
    }
    /*if above condition's don't satisfies
     then this condition apllies */
    else 
    {
      printf("GRADE F\n");
    }
    return 0;

   }
     
