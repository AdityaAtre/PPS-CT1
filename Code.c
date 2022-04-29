/*This is the Mini Project of RegNo RA2111030010032, Aditya Atre, for CT1 in subject PPS
I have made a simple and basic calculator, that can perform 1 of 4 operations on any given 2 numbers, either Addition, Subtraction, Multiplication, and Division*/
#include <stdio.h>
void main()
{
  int num1,num2,opt;
  printf("Enter the two numbers to perform operation on :")
  printf("First number:");
  scanf("%d",&num1);
  printf("Second number:");
  scanf("%d",&num2);
  //Now I have taken input for two numbers//
  
  printf("\nSelect the operation that you want to perform :\n");
  printf("1-Addition.\n2-Subtraction.\n3-Multiplication.\n4-Division.\n5-Exit.\n");
  scanf("%d",&opt);
  //Now I have made user select the operation that is to be performed//
  switch(opt) {
    case 1:
      printf("The Addition of  %d and %d is: %d\n",num1,num2,num1+num2);
      break;
      
//Incase the user selected Addition, the sum of both numbers will be displayed//  
      
    case 2:
      printf("The Subtraction of %d  and %d is: %d\n",num1,num2,num1-num2);
      break;
        
//Incase the user selected Subtraction, the difference of both numbers will be displayed// 
      
    case 3:
      printf("The Multiplication of %d  and %d is: %d\n",num1,num2,num1*num2);
      break; 
      
//Incase the user selected Multiplication, the product of both numbers will be displayed// 
      
    case 4:
      if(num2==0) {
        printf("Division by zero is not possible\n"); }
     
//This will break the program incase the user tries to divide any number by zero//
      
      else {
        printf("The Division of %d  and %d is : %d\n",num1,num2,num1/num2);}
      
 //Incase the user selected Division, the quotient of both numbers will be displayed// 
      
      break;
        
      case 5: 
        break; 
//This is to make sure that incase of any other input, the program will simply break, instead of giving error//
        
      default:
        printf("Invalid option selected from Menu\n");
        break; 
//This is setting the default output as Invalid option, ie, incase the user doesnt pick the option from the menu above, it will simply show this same message//
    }
}
//And with that, my calculator is completed, I hope you give me good marks ma'am :)//
