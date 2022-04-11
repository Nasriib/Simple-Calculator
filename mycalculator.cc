//Include file
//
#include "lab10.h"
int main(int argc, char *argv[])
{
  //Variable and file pointer declaration
  //
    char * operation;
    FILE *fp;
    //X and y as argv[1] and argv[3] and string as argv[5]
    //
    char  s;
    char * x=argv[1];
    char * y=argv[3];
    char * str= argv[5];
     //Numbers to be computed
    //
    float num1, num2;

    //The operation being done is the last argument
    //
    operation = argv[6];

    //Conversion of numbers from ascii characters to floats
    //
    num1 = atof(argv[2]);
    num2 = atof(argv[4]);

    //Error message if incorrect number of arguments is entered
    //
    if(argc < 7 || argc > 7){
      printf("Number of arguments is invalid\n");
      //Second part of error message that shows the proper setup of the command
      //
 printf("Correct format is: mycalculator.exe -x num1 -y num2 -operation(addition,subtraction,multiplication,division)\n");
      return 0;
}
  //If -help is typed the following file opens up to assist the user
    //
    if(strcmp(operation,"-help")==0){
      fp = fopen("help.txt", "r");
      while(!feof(fp)){
        s = fgetc(fp);
      printf("%c",s);
   }
    }
    //if you put addition as argv[6] then the sum is computed
    //
    if(strcmp(operation, "addition")==0){
      //Printing sum
      //
      printf("**>%f + %f = %f\n", num1, num2, num1 + num2);
    }

    //If argv[6] is not addition then it could be subtraction
    //
    else if(strcmp(operation, "subtraction")==0){
      //Printing difference
      //
      printf("**>%f - %f = %f\n", num1, num2, num1 - num2);
    }

    //If argv[6] is not addition or subtraction then it can be multiplication
    //
    else if(strcmp(operation, "multiplication")==0){
      //Printing product
      //
      printf("**>%f * %f = %f\n", num1, num2, num1 * num2);
    }

    //If argv[6] is none of the above operations then it is either division or invalid
    //
 else if(strcmp(operation, "division")==0){
      //Printing quotient
      //
      printf("**>%f / %f = %f\n", num1, num2, num1 / num2);
    }
    //Exit gracefully
    //
    return 0;
}
