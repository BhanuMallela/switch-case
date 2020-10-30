#include<studio.h>
int main()
{
 int choice;
 printf("Enter the choice:\n1.Pasta\n2.Burger\n3.Sandwich\n4.Pizza\n5.French Fries",choice);
 scanf("%d",&choice);
 Switch(choice)
 {
  Case 1:
         printf("Food item - Pasta\nPrize - Rs179");
         Break;
  Case 2:
         printf("Food item - Burger\nPrize - Rs129");
         Break;
  Case 3:
         printf("Food item - Sandwich\nPrize - Rs149");
         Break;
  Case 4:
         printf("Food item - Pizza\nPrize - Rs239");
         Break;
  Case 5:
         printf("Food item - French Fries\nPrize - Rs99");
         Break;
  Default case :
         printf("Invalid Choice");
  }
}
