#include <iostream.h>
using namespace std;
int main()
{
/* Exercise 1 from Chapter 2 Write a statement (or comment) to accomplish each of the following: */
/* a) State that a program calculates the product of three integers.*/
// Calculate the product of three integers
/* b) Define the variables x, y, z, and result to be of type int.*/
 int x, y, z, result;
/* c) Prompt the user to enter three integers.*/
cout << "Please enter three integers: ";
/* d) Read three integers from the keyboard and store them in the variables x, y, and z.*/
 cin >> x >> y >> z;
/* e) Compute the product of the three integers contained in variables x, y, and z, and assign the result to the variable result.*/
 result = x * y * z;
/* f) Print "The product is" followed by the value of the integer variable result. */
cout << "The product is " << result;

int num1, num2;
   cout << "Enter two integers: ";
   cin >> num1 >> num2;
   cout << "Sum: " << num1 + num2 << endl;
   cout << "Difference: " << num1 - num2 << endl;
   cout << "Product: " << num1 * num2 << endl;
   if (num2 != 0) {
       cout << "Division: " << (double) num1 / num2 << endl;
   } else {
       cout << "Division: Undefined" << endl;
   }
   if (num1 > num2) {
       cout << num1 << " is greater than " << num2 << endl;
   } else if (num1 < num2) {
       cout << num1 << " is smaller than " << num2 << endl;
   } else {
       cout << num1 << " and " << num2 << " are equal" << endl;
   }

double radius, circumference;

 const double PI = 3.14159;

// define constant value of pi cout << "Enter the radius of the circle: ";
cin >> radius;
circumference = 2 * PI * radius;

// calculate circumference
cout << "The circumference of the circle is: " << circumference << endl;

double a, b, c, root1, root2, discriminant;

   cout << "Enter coefficients a, b, and c: ";
   cin >> a >> b >> c;

   discriminant = b * b - 4 * a * c;  // calculate discriminant

   if (discriminant > 0) {  // if roots are real and different
       root1 = (-b + sqrt(discriminant)) / (2 * a);
       root2 = (-b - sqrt(discriminant)) / (2 * a);
       cout << "The roots are real and different." << endl;
       cout << "Root 1 = " << root1 << endl;
       cout << "Root 2 = " << root2 << endl;
   } else if (discriminant == 0) {  // if roots are real and equal
       root1 = -b / (2 * a);
       cout << "The roots are real and equal." << endl;
       cout << "Root 1 = Root 2 = " << root1 << endl;
   } else {  // if roots are complex
       double realPart = -b / (2 * a);
       double imagPart = sqrt(-discriminant) / (2 * a);
       cout << "The roots are complex and different." << endl;
       cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
       cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
   }

/* g) Return a value from main indicating that the program terminated successfully.*/ return 0;
}

