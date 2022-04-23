#include <stdio.h>
void Credit_hour();
void Gpa_Calculator();

int main()
{
    Credit_hour();
    Gpa_Calculator();
    return 0;
}
void Credit_hour()
{

    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0;
    // credit hour  for first semester//
    printf("Plaese Enter Your credit hour for first Semester\n ");
    scanf("%d", &a);
    // credit hour  for second semester//
    printf("Plaese Enter Your credit hour for second Semester\n ");
    scanf("%d", &b);
    // credit hour  for third semester//
    printf("Plaese Enter Your credit hour for Third Semester\n ");
    scanf("%d", &c);
    // credit hour  for four semester//
    printf("Plaese Enter Your credit hour for fourth Semester\n ");
    scanf("%d", &d);
    // credit hour  for fifth semester//
    printf("Plaese Enter Your credit hour for fifth Semester\n ");
    scanf("%d", &e);
    // credit hour  for Six semester//
    printf("Plaese Enter Your credit hour for Sixth Semester\n ");
    scanf("%d", &f);
    // credit hour  for Seven semester//
    printf("Plaese Enter Your credit hour for Seven Semester\n ");
    scanf("%d", &g);
    // credit hour  for Eight semester//
    printf("Plaese Enter Your credit hour for Eight Semester\n ");
    scanf("%d", &g);
    int sum = (a + b + c + d + e + f + g);
    printf("Total Credit Hour is %d\n", sum);
}
void Gpa_Calculator()
{
    float a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, Total = 0;
    printf("What is Your Current Semester\n");
    int sem;
    scanf("%d", &sem);

    printf("Please Enter Your Gpa for The First Semester\nPress 0 If you have not done this semester\n");
    scanf("%f", &a);
    printf("Please Enter Your Gpa for The Second Semester\nPress 0 If you have not done this semester\n ");
    scanf("%f", &b);
    printf("Please Enter Your Gpa for The Third Semester\nPress 0 If you have not done this semester\n ");
    scanf("%f", &c);
    printf("Please Enter Your Gpa for The fourth Semester\nPress 0 If you have not done this semester\n ");
    scanf("%f", &d);
    printf("Please Enter Your Gpa for The Fifth Semester\nPress 0 If you have not done this semester\n ");
    scanf("%f", &e);
    printf("Please Enter Your Gpa for The Sixth Semester\nPress 0 If you have not done this semester\n ");
    scanf("%f", &f);
    printf("Please Enter Your Gpa for The Seven Semester\nPress 0 If you have not done this semester\n ");
    scanf("%f", &g);
    printf("Please Enter Your Gpa for The Eight Semester\nPress 0 If you have not done this semester\n ");
    scanf("%f", &h);

    Total = (a + b + c + d + e + f + g + h) / sem;
   
    if (Total >= 3.701 && Total <= 4.0)
    {

        printf("Your grade is 'A++'\n");
    }
    else if (Total >= 3.501 && Total <= 3.7)
    {
         printf("Your grade is 'A+'\n");

    }
    else if (Total >= 3.01 && Total <= 3.49)
    {
         printf("Your grade is 'A'\n");
         
    }
    else if (Total >= 2.76 && Total <= 3.0)
    {
         printf("Your grade is 'B++'\n");
         
    }
else if (Total >= 2.76 && Total <= 3.0)
    {
         printf("Your grade is 'B++'\n");
         
    }
else if (Total >= 2.5 && Total <= 2.75)
    {
         printf("Your grade is 'B+'\n");
         
    }
else if (Total >= 2.3 && Total <= 2.49)
    {
         printf("Your grade is 'B'\n");
         
    }
    else if (Total >= 2 && Total <= 2.29)
    {
         printf("Your grade is 'C++'\n");

         
    }
    else if (Total >= 1.8 && Total <= 1.99)
    {
         printf("Your grade is 'C+'\n");
         
    }
    else if (Total >= 1.67 && Total <= 1.79)
    {
         printf("Your grade is 'c'\n");
         
    }
  else{

      printf("You Have Failed \n");
  }

 printf("Your Cgpa for This Semester is %f \n", Total);

}
