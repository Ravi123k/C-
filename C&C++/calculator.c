#include<stdio.h>
int main(){
    int num1,num2,fun;
    printf("Enter the first number :\n ");
    scanf("%d",&num1);
    printf("Enter the second number : \n");
    scanf("%d",&num2);
    printf("Now Choose the type of calculation you want to perform: \n1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division\n");
    scanf("%d",&fun);
    printf("The Result is: \n");
    if (fun==1)
    {
       printf("%d",num1+num2);
    }
    else if (fun==2)
    {
       printf("%d",num1-num2);
    }
    else if (fun==3)
    {
       printf("%d",num1*num2);
    }
    else if (fun==4)
    {
       printf("%d",num1/num2);
    }
       else
      {
         printf("Wrong Selection");
      }
 return 0;

}






