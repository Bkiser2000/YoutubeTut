#include <stdio.h>
#include <stdbool.h>

int main() {
printf("Hello World!\n"); // Use "\n" to print strings, numbers, etc onto a new line.
printf("This is how you print a new line in C!\n");

// This is a comment. We will describe variables now!

int myNum = 420; // int
float myFloatNum = 5.99; // float
char myLetter = 'D'; // char

printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);

char myText[] = "Marijuana is great";
printf("%s\n", myText);

// Now we will describe numbers!

int myNumb = 69; // int
printf("%d\n", myNumb);
float myFloat = 86.69; // float
printf("%f\n", myFloat);
double myDoub = 19.86; // double
printf("%lf\n", myDoub);

// A float and double using scientific notation

float fl = 35e3; // 35 * 10^3 = 35000
double dl = 12E4; // 12 * 10^4 = 120000
printf("%f\n", fl);
printf("%lf\n", dl);

// Decimal precsion. If you wish to remove extra zeros, you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point.

float secondFloatNum = 4.2;
printf("%f\n", secondFloatNum); // Default will show 6 digits after the decimal point
printf("%.1f\n", secondFloatNum); // Only show 1 digit
printf("%.2f\n", secondFloatNum); // Only show 2 digits
printf("%.4f\n", secondFloatNum); // Only show 4 digits

// Obtain memory size using sizeof operator:

printf("%zu\n", sizeof(myNum));
printf("%zu\n", sizeof(myFloat));
printf("%zu\n", sizeof(myDoub));
printf("%zu\n", sizeof(myLetter));

// Type conversion:

float float3 = 7; // Automatic/implicit conversion from int to float.
printf("%f\n", float3); // 7.000000

float sum = 5 / 2;
printf("%f\n", sum); // Outputs 2.000000. To get the correct output of 2.5, we must do maunual/explicit conversion, which is demonstrated below.

float sum1 = (float) 5 / 2; // Manual/explicit conversion
printf("%f\n", sum1); // Output is 2.500000.

// Constants:

const int gramsperounce = 28; // Constants are existing variables that you dont want you or others to change. They are read-only in nature.
printf("%d\n", gramsperounce);

// Operators:

int sudo1 = 120 + 200;
int sudo2 = sudo1 + 50;
int sudo3 = sudo2 + 50;
printf("%d\n", sudo3);

int x = 5;  
int y = 3;
printf("%d\n", x + y);
printf("%d\n", x > y); // Returns 1 (true) because 5 is greater than 3
printf("%d\n", x > 3 || x < 4); // Logical OR Operator
printf("%d\n", !(x > 3 && x < 10)); // Logical NOT Operator. Will return false (0) because ! (NOT) is used to reverse the result.
printf("%d\n", x < 5 && x < 10); // Logical AND Operator.
printf("%d\n", x < 6 && x > 3);

// Booleans:

bool isBobSagetFunny = true;
bool didEpsteinKillHimself = false;

printf("%d\n", isBobSagetFunny); // Returns 1 (true)
printf("%d\n", didEpsteinKillHimself); // Returns 0 (false)

// If/else/else if:

if (20 > 18) { // If
  printf("20 is greater than 18\n");
}

int time = 20; // Else
if (time < 18) {
  printf("Good day.\n");
} else {
  printf("Good evening.\n");
}

int time1 = 22; // Else if
if (time1 < 10) {
  printf("Good morning.\n");
} else if (time < 20) {
  printf("Good day.\n");
} else {
  printf("Good evening.\n");
} 

int time2 = 20; // Ternary Operator
(time < 18) ? printf("Good day.\n") : printf("Good evening.\n");

// Switch Statements

int day = 4;

switch (day) {
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thursday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  case 6:
    printf("Saturday\n");
    break;
  case 7:
    printf("Sunday\n");
    break;
}

int day1 = 4;

switch (day1) {
  case 6:
    printf("Today is Saturday\n");
    break;
  case 7:
    printf("Today is Sunday\n");
    break;
  default:
    printf("Looking forward to the Weekend!\n");
}

// While Loops:

int i = 0; // Code in this loop will run, over and over again, so long as (i) is less than 5.
while (i < 5) {
  printf("%d\n", i);
  i++;
}

int countdown = 3; 
while (countdown > 0) {
  printf("%d\n", countdown);
  countdown--;
}
printf("Happy New Year!!!\n");

// Do/While Loops:

// Do/while loops will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

int o = 0;

do {
  printf("%d\n", o); // Use a do/while loop if you want to ensure something happens at least once.
  o++;
}
while (o < 5);

int number;

do {
  printf("Enter a positive number: ");
  scanf("%d", &number);
} while (number > 0);

// Nested Loops

int j, k;
for (j = 1; j <= 2; ++j) {
  printf("Outer: %d\n", j);

  for (k = 1; k <= 3; ++k) {
    printf(" Inner: %d\n", k);
  }
}

// User Input

int userNum;
printf("Type a number: \n");
scanf("%d", &userNum);
printf("Your number is: %d", userNum);
 
// Arithmetic Operators:
// + (Addition)
// - (Subtraction)
// * (Multiplication)
// / (Division)
// % (Modulus)
// ++ (Increment)
// -- (Decrement)

// Logical Operators:
// && (AND)
// || (OR)
// ! (NOT)

// Comparison Operators:
// == (Equal to)
// != (Not equal) use !+= without the + to convert it.
// > (Greater than)
// < (Less than)
// >= (Greater than or equal to)
// <= (Less than or equal to)
  
// Data types and specifiers:

// int (2 or 4 bytes): Stores whole numbers, without decimals. For example, 1.

// float (4 bytes): Stores fractional numbers, containing one or more decimals. Is sufficient for storing 6-7 decimal digits.

// double (8 bytes): Pretty much the same as a float but can store 15 decimal digits.

// char (1 byte): Stores a single character/letter/number, or ASCII values

// Format Specifiers:

// %d or %i is for data type int

// %f or %F is for data type float

// %lf is for data type double

// %c is for data type char

// %s used for strings (text).
return 0;
}
