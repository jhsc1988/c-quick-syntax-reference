C Quick Syntax Reference - Source Code

*** Hello World ***

#include <stdio.h>
 
int main(void) {
  printf("Hello World");
  return 0;
}

*** Compile and Run ***

#include <stdio.h>
 
int main(void) {
  printf("Hello World"); 
  getchar();
}

/* multi-line
   comment */

// single-line comment

*** Variables ***

int main(void) 
{
  /* Declaring variables */
  int myInt;
  int _myInt32; /* allowed */
  int 32Int;    /* incorrect (starts with number) */
  int my Int;   /* incorrect (contains space) */
  int Int@32;   /* incorrect (contains special character) */
  int int;      /* incorrect (reserved keyword) */

  /* Assigning variables */
  int x = 1, y = 2, z;
  int a = x;
  myInt = 50;
}

/* Printing variables */
#include <stdio.h>

int main() {
  int x = 5;
  printf("x is %d and 2+3 is %d", x, 2+3);
}

/* Integer types */
char  myChar  = 0; /* -128   to +127 */
short myShort = 0; /* -32768 to +32767 */
int   myInt   = 0; /* -2^31  to +2^31-1 */
long  myLong  = 0; /* -2^31  to +2^31-1 */
long long myLL = 0;/* -2^63  to +2^63-1 */

int myDec = 50    /* decimal notation */
int myOct = 062;  /* octal notation (0) */
int myHex = 0x32; /* hexadecimal notation (0x) */

/* Sizeof */
#include <stdio.h>

int main(void) {
  size_t s = sizeof(int);
  printf("%zu", s); /* "4" (C99) */
  printf("%Iu", s); /* "4" (Visual Studio) */
}

/* Signed and unsigned */
signed char  myChar;   /* -128   to +127 */
signed short myShort;  /* -32768 to +32767 */
signed int   myInt;    /* -2^31  to +2^31-1 */
signed long  myLong;   /* -2^31  to +2^31-1 */
signed long long myLL; /* -2^63  to +2^63-1 */

unsigned char  uChar;   /* 0 to 255 */
unsigned short uShort;  /* 0 to 65535 */
unsigned int   uInt;    /* 0 to 2^32-1 */
unsigned long  uLong;   /* 0 to 2^32-1 */
unsigned long long uLL; /* 0 to 2^64-1 */

unsigned int uInt = 0;
printf("%u", uInt); /* "0" */

/* Sized integers */
#include <stdint.h>

/* Signed exact-width integers */
int8_t  iSmall;  /* 8 bits */
int16_t iMedium; /* 16 bits */
int32_t iLarge;  /* 32 bits */
int64_t iHuge;   /* 64 bits */

/* Unsigned exact-width integers */
uint8_t  uSmall;  /* 8 bits */
uint16_t uMedium; /* 16 bits */
uint32_t uLarge;  /* 32 bits */
uint64_t uHuge;   /* 64 bits */

/* Visual Studio signed exact-width integers */
__int8  iSmall;  /* 8 bits */
__int16 iMedium; /* 16 bits */
__int32 iLarge;  /* 32 bits */
__int64 iHuge;   /* 64 bits */

/* Floating-point types */
float myFloat;    /* ~7 digits */
double myDouble;  /* ~15 digits */
long double myLD; /* typically same as double */

float myFloat = 12345.678;
printf("%f", myFloat); /* "12345.677734" */

double fDec = 1.23;
double fExp = 3e2;   /* 3*10^2 = 300 */
double fHex = 0xAp2; /* 10*2^2 = 40 */

/* Literal suffixes */
int i = 10;
long l = 10L;
unsigned long ul = 10UL;

float f = 1.23F;
double d = 1.23;
long double ld = 1.23L;

/* Char type */
char c = 'x'; /* assigns 120 (ASCII for x) */
printf("%c", c); /* "x" */
printf("%d", c); /* "120" */

/* Bool type */
#include <stdbool.h>
bool b = true; /* true value */
_Bool b = 0; /* false value */

/* Variable scope */
int globalVar; /* global variable - initialized to 0 */

int main(void) { 
  int localVar; /* local variable - uninitialized */
  int localVar2 = 0; /* initialized to 0 */
}

*** Operators ***

/* Arithmetic Operators */
float x = 3 + 2; /* 5 - addition */
      x = 3 - 2; /* 1 - subtraction */
      x = 3 * 2; /* 6 - multiplication */
      x = 3 / 2; /* 1 - division */
      x = 3 % 2; /* 1 - modulus (division remainder) */

x = 3 / (float)2; /* 1.5 */

/* Combined assignment operators */
int x = 0;
    x += 5; /* x = x+5; */
    x -= 5; /* x = x-5; */
    x *= 5; /* x = x*5; */
    x /= 5; /* x = x/5; */
    x %= 5; /* x = x%5; */

/* Increment and decrement operators */
x++; /* x = x+1; */
x--; /* x = x-1; */

x++; /* post-increment */
x--; /* post-decrement */
++x; /* pre-increment */
--x; /* pre-decrement */

int x, y;
x = 5; y = x++; /* y=5, x=6 */
x = 5; y = ++x; /* y=6, x=6 */

/* Comparison operators */
int x = (2 == 3); /* 0 - equal to */
    x = (2 != 3); /* 1 - not equal to */
    x = (2 > 3);  /* 0 - greater than */
    x = (2 < 3);  /* 1 - less than */
    x = (2 >= 3); /* 0 - greater than or equal to */
    x = (2 <= 3); /* 1 - less than or equal to */

/* Logical operators */
int x = (1 && 0); /* 0 - logical and */
    x = (1 || 0); /* 1 - logical or  */
    x = !(1);     /* 0 - logical not */

#include <stdbool.h>
/* … */
bool x = (true && false); /* false - logical and */
     x = (true || false); /* true  - logical or  */
     x = !(true);         /* false - logical not */

/* Bitwise operators */
int x = 5 & 4;  /* 101 & 100 = 100 (4) - and */
    x = 5 | 4;  /* 101 | 100 = 101 (5) - or */
    x = 5 ^ 4;  /* 101 ^ 100 = 001 (1) - xor */
    x = 4 << 1; /* 100 << 1  =1000 (8) - left shift */
    x = 4 >> 1; /* 100 >> 1  =  10 (2) - right shift */
    x = ~4;     /* ~00000100 = 11111011 (-5) - invert */

int x=5; x &= 4;  /* 101 & 100 = 100 (4) - and */
    x=5; x |= 4;  /* 101 | 100 = 101 (5) - or */
    x=5; x ^= 4;  /* 101 ^ 100 = 001 (1) - xor */
    x=4; x <<= 1; /* 100 << 1  =1000 (8) - left shift */
    x=4; x >>= 1; /* 100 >> 1  =  10 (2) - right shift */

*** Pointers ***

/* Creating pointers */
int* p; /* pointer to an integer */
int *q; /* alternative syntax */

int i = 10;
p = &i; /* address of i assigned to p */

/* Dereferencing pointers */
printf("Address of i: %p \n", p); /* ex. 0017FF1C */
printf("Value of i: %d",  *p); /* 10 */

p = &i;  /* address of i assigned to p */
*p = 20; /* value of i changed through p */
int* p2 = p; /* copy address stored in p */

/* Pointing to a pointer */
int** r = &p; /* pointer to pointer */
printf("Address of p: %p \n",  r); /* ex. 0017FF28 */
printf("Address of i: %p \n", *r); /* ex. 0017FF1C */
printf("Value of i: %d",  **r); /* 20 */

/* Null pointer */
if (p != 0) { *p = 10; } /* check for null pointer */

#include <stdio.h>
/* … */
if (p != NULL) { *p = 10; }

*** Arrays ***

/* Array declaration and allocation */
int myArray[3]; /* integer array with 3 elements */

/* Array assignment */
myArray[0] = 1;
myArray[1] = 2;
myArray[2] = 3;

int myArray[3] = { 1, 2, 3 };
int myArray[] = { 1, 2, 3 }; /* alternative */

printf("%d", myArray[0]); /* 1 */

/* Multi-Dimensional Arrays */
int mArray[2][2] = { { 0, 1 }, { 2, 3 } };
mArray[0][0] = 0;
mArray[0][1] = 1;
int mArray[2][2] = { 0, 1, 2, 3 }; /* alternative */

/* Arrays and pointers */
*(myArray+1) = 10; /* myArray[1] = 10; */

int* ptr = &myArray;
printf("Address of myArray[0]: %p \n", ptr); /* ex. 0028FF14 */
ptr++;
printf("Address of myArray[1]: %p", ptr); /* ex. 0028FF18 */

/* Array size */
int myArray[2] = { 1, 2 };
myArray[2] = 3; /* out of bounds */
int length = sizeof(myArray) / sizeof(int); /* 2 */

*** Strings ***

char myString[] = "Hi";
char myString[3] = { 'H', 'i', '\0' };
printf("%s", myString); /* "Hi" */

char* ptr = "Hi";
printf("%s", ptr); /* "Hi" */

/* Escape characters */
printf("First line\nSecond line");

char line = '\n';   /* escape code */
     line = '\012'; /* octal notation */
     line = '\x0A'; /* hexadecimal notation */

/* String functions */
#include <stdio.h>
#include <string.h>

int main(void) {
  char s1[12] = "Hello";
  char s2[12] = "World";
  int result;

  /* Append s2 to s1 */
  strcat(s1, s2); /* s1 = "HelloWorld" */

  /* Copy s1 into s2 */
  strcpy(s2, s1); /* s2 = "HelloWorld" */

  /* Compare s1 and s2 */
  result = strcmp(s1, s2); /* 0 (equal) */

  /* Length of s1 (excluding null char) */
  result = strlen(s1); /* 10 */

  /* Allocated size for s1 */
  result = sizeof(s1); /* 12 */
}

*** Conditionals ***

/* If statement
int x = 0;

if (x < 1) {
  printf("x < 1");
}
else if (x > 1) {
  printf("x > 1");
}
else {
  printf("x == 1");
}

if (x < 1)
  printf("x < 1");
else if (x > 1)
  printf("x > 1");
else
  printf("x == 1");

/* Switch statement */
switch (x) {
  case 0: printf("x is 0"); break;
  case 1: printf("x is 1"); break;
  default: printf("x is not 0 or 1"); break;
}

/* Ternary operator */
x = (x < 0.5) ? 0 : 1;

*** Loops ***

/* While loop */
int i = 0;
while (i < 10) { 
  printf("%d", i++); /* 0-9 */
}

/* Do-while loop */
int j = 0;
do { 
  printf("%d", j++); /* 0-9 */
} while (j < 10);

/* For loop */
int k;
for (k = 0; k < 10; k++) { 
  printf("%d", k); /* 0-9 */
}

for (int k = 0; k < 10; k++) { 
  printf("%d", k); /* 0-9 */
}

for (;;) { /* infinite loop */ }

/* Break and continue */
int i;
for (i = 0; i < 10; i++)
{
  if (i == 2) continue;   /* start next iteration */
  else if (i == 5) break; /* end loop */
  printf("%d", i);        /* "0134" */
}

/* Goto statement */
goto myLabel; /* jump to label */
/* … */
myLabel:      /* label declaration */

*** Functions ***

/* Defining functions */
void myFunction(void) {
  printf("Hello World");
}

/* Calling functions */
int main(void) {
  myFunction(); /* "Hello World" */
}

/* Function parameters */
void sum(int a, int b) {
  int sum = a + b;
  printf("%d", sum);
}

/* Void parameter */
void foo(void) {} /* accepts no arguments */
void bar() {} /* accepts an unknown number of arguments */

/* Return statement */
int getSum(int a, int b) {
  return a + b;
}

int main(void) {
  printf("%d", getSum(5, 10)); /* "15" */
  return 0; /* optional */ 
}

void dummy(void) { return; }

/* Forward declaration */
void myFunction(int a); /* prototype */
void myFunction(int); /* alternative */

int main(void) {
  myFunction(0);
}

void myFunction(int a) {}

/* Variable parameter lists */
#include <stdio.h> 
#include <stdarg.h>

int sum(int num, ...) { 
  va_list args; /* variable argument list */
  int sum = 0, i = 0;

  va_start(args, num); /* initialize argument list */

  for (i = 0; i < num; i++) /* loop through arguments */
    sum += va_arg(args, int); /* get next argument */

  va_end(args); /* free memory */
  return sum;
} 

int main(void) { 
  printf("Sum of 1+2+3 = %d", sum(3,1,2,3)); /* 6 */
}

/* Pass by value */
#include <stdio.h>
 
void set(int i) { i = 1; }
 
int main(void) {
  int x = 0;
  set(x);
  printf("%d", x); /* "0" */
}

/* Pass by address */
void set(int* i) { *i = 1; }

int main(void) {
  int x = 0; 
  set(&x);
  printf("%d", x); /* "1" */
}

/* Passing arrays */
void set(int a[]) { a[0] = 1; }

int main(void) {
  int x[] = { 0 };
  set(x);
  printf("%d", x[0]); /* "1" */
}

/* Return by value or address */
int byVal(int i) { return i + 1; }

int main(void) {
  int a = 10;
  printf("%d", byVal(a)); /* "11" */
}

int* byAdr(int* i) { (*i)++; return i; }
 
int main(void) {
  int a = 10;
  int *p = byAdr(&a);
  printf("%d", *p); /* "11" */
}

/* Inline functions */
inline int increment(int a) { return ++a; }

int main(void) {
  int i;
  for(i = 0; i < 100;) {
    i = increment(i);
  }
}
 
*** Typedef ***

typedef unsigned char BYTE;
BYTE b; /* unsigned char */

typedef struct { int points; } score;
score a, b, c;
a.points = 10;
 
*** Enum ***

enum color { RED, GREEN, BLUE };

int main(void) {
  enum color c = RED;
}

/* Example */
enum color { RED, GREEN, BLUE } c, d;

int main(void) {
  switch(c) {
    case RED:   break;
    case GREEN: break;
    case BLUE:  break;
  }
}

/* Omitted identifier */
enum { RED, GREEN, BLUE } c;

/* Enum constant values */
enum color {
  RED   /* 0 */
  GREEN /* 1 */
  BLUE  /* 2 */
};

enum color {
  RED   = 5,         /* 5 */
  GREEN = RED,       /* 5 */
  BLUE  = GREEN + 2, /* 7 */
  ORANGE             /* 8 */
};

/* Enum conversions */
int i = RED;
enum color c = i;
           c = (enum color)i;

enum speed { SLOW, NORMAL, FAST }; /* global enum */

int main(void) {
  enum color { RED, GREEN, BLUE }; /* local enum */
}

*** Struct ***

/* Defining structs */
struct point {
  int x, y;
};

/* Struct objects */
int main(void) {
  struct point p; /* object declaration */
}

struct /* unnamed struct */
{
  int x, y;
} a, b; /* object declarations */

/* Typedef shortcut */
typedef struct point point;

struct point {
  int x, y;
};

int main(void) {
  point p; /* struct omitted */
}

/* Member access */
int main(void) {
  point p;
  p.x = 1;
  p.y = 2;
}

/* Aggregate initialization */
struct point {
  int x, y;
} r = { 1, 2 }; /* assigns x and y */
 
int main(void) {
  point p = { 1, 2 };
}

int main(void) {
  point p = { .y = 2, .x = 1 }; /* C99 */
}

/* Struct pointers */
int main(void) {
  point p = { 1, 2 };
  point r = p; /* copies field values */
}

void init_struct(point* a) {
  (*a).x = 1;
  (*a).y = 2;
}

int main(void) {
  point p;
  point* r = &p;

  init_struct(&p);
  r->x = 1; /* same as (*r).x = 1; */
}

/* Bit fields */
struct my_bits
{
  unsigned short f1 : 1;
  unsigned short f2 : 1;
  unsigned short id : 10;
} a;

int main(void) {
  printf("%d bytes", sizeof(a)); /* "2 bytes" */
}

*** Union ***

union mix {
  char c;  /* 1 byte */
  short s; /* 2 bytes */
  int i;   /* 4 bytes */
};

int main(void) {
  union mix m;
  m.c = 0xFF; /* set first 8 bits */
  m.s = 0;    /* reset first 16 bits */
}

union mix {
  char c[4];                  /* 4 bytes */
  struct { short hi, lo; } s; /* 4 bytes */
  int i;                      /* 4 bytes */
} m;

*** Type Conversions ***

/* Implicit conversions */
long l = 5;   /* int -> long */
double d = l; /* long -> double */
double d = 5 + 2.5; /* int -> double */

/* Promotion */
long l = 5;   /* int promoted to long */
double d = l; /* long promoted to double */

/* Demotion */
int i = 10.5; /* warning: possible loss of data */
char c = i;   /* warning: possible loss of data */

/* Explicit cast */
int i = (int)10.5; /* double demoted to int */
char c = (char)i;  /* int demoted to char */

*** Storage Classes ***

/* Auto */
int main(void) {
  auto int localVar; /* auto variable */
}

/* Register */
int main(void) {
  register int counter; /* register variable */
}

/* External functions */
/* app.c */
extern void foo(void); /* declared function */

int main(void) {
  foo(); /* external function call */
}

/* func.c */
void foo(void) {} /* defined function */

/* External variables */
/* app.c */
int globalVar; /* defined variable */

int main(void) {
  globalVar = 1;
}

/* func.c */
extern int globalVar; /* declared variable */

int foo(void) {
  globalVar++;
}

/* Static */
/* Only visible within this compilation unit */
static int myInt;
static void myFunc(void) {}

/* Store number of calls to this function */
void myFunc(void) {
  static int count = 0;
  count++;
}

/* Volatile */
volatile int var; /* recommended order */
int volatile var; /* alternative order */

volatile int ext = 0;

void poll(void) {
  while(ext == 0) {}
}

*** Constants ***

/* Constant variables */
const int var = 5;   /* recommended order */
int const var2 = 10; /* alternative order */

/* Constant pointers */
int myPointee;
int* const p = &myPointee; /* constant pointer */
const int* q = &var;       /* constant pointee */
const int* const r = &var; /* constant pointer & pointee */
int* s = &var;             /* error: const to non-const assignment */

/* Constant parameters */
void foo(const int *x) {
  if (x != NULL) {
    int i = *x; /* allowed */
    *x = 1;     /* compile-time error */
  }
}

*** Preprocessor ***

/* Including source files */
#include <stdio.h> /* search library directory */
#include "myfile.h" /* search current, then default */

#include "c:\myfile.h" /* absolute path */
#include "..\myfile.h" /* relative path */

/* Define */
#define PI 3.14 /* macro definition */
float f = PI; /* f = 3.14 */

/* Undefine */
#undef PI // undefine
#undef PI // allowed

/* Predefined macros */
printf("Error in %s at line %d", __FILE__, __LINE__);

/* Macro functions */
#define SQUARE(x) ((x)*(x))
int x = SQUARE(2); /* 4 */
int x = SQUARE(2); /* 4 */

#define SQUARE(x) x*x
int x = SQUARE(1+1); /* 1+1*1+1 = 3 */

#define MAX(a,b)  \
            a>b ? \
            a:b

/* Conditional compilation */
#define DEBUG_LEVEL 3 
#if DEBUG_LEVEL > 2
 /* … */
#endif

#if DEBUG_LEVEL > 2
 /* … */
#elif DEBUG_LEVEL == 2
 /* … */
#else
 /* … */
#endif

#if 0
 /* Removed from compilation */
#endif

/* Compile if defined */
#define DEBUG
#if defined DEBUG
 /* … */
#elif !defined DEBUG
 /* … */
#endif

#ifdef DEBUG
 /* … */
#endif
 
#ifndef DEBUG
 /* … */
#endif

/* Error and warning */
#error "Compilation aborted"
#warning "Function X is deprecated, use Y instead"

/* Line */
#line 5 "myapp.c"

/* Pragma */
#pragma message "Compiling " __FILE__ "…" /* Show compiler message */

*** Memory Management ***

#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* Malloc */
  char* ptr = malloc(5 * sizeof(char)); /* dynamic memory allocation */

  if (ptr == NULL) {
    return -1; /* no memory allocated, exit function */
  }

  /* Increase size of memory block */
  char *new_ptr = realloc(ptr, 10 * sizeof(char)); 

  /* On failure, free memory and exit */
  if (new_ptr == NULL) {
    free(ptr);
    return -1;
  }
  /* On success, update pointer */
  else {
    ptr = new_ptr;
  } 

  free(ptr); /* release allocated memory */
  ptr = NULL; /* null pointer */
}

/* Void pointer */
int main()
{
  int i;
  char c;

  void *vptr = &i;
  *((int*)vptr) = 1;

  vptr = &c;
  *((char*)vptr) = 'a';
}

*** Command Line Arguments ***

#include <stdio.h>

int main(int argc, char *argv[]) {
  int i;
  for(i=0; i < argc; i++) {
    printf("Argument %d is: %s\n", i, argv[i]);
  }
}

*** Headers ***

/* func.c */
void myFunc(void) { 
  /* … */
}

/* app.c - Without header */
int main(void) {
  myFunc(); /* error: myFunc identifier not found */
}

/* app.c - With prototype */
void myFunc(void); /* prototype */

int main(void) {
  myFunc(); /* ok */
}

/* app.c - With header */
#include "func.h"

int main(void) {
  myFunc(); /* ok */
}

/* func.h */
void myFunc(void); /* prototype */

/* app.h - Interface */
#define DEBUG 0
const double PI = 3.14;
typedef unsigned long ulong;
void myFunc(void); /* prototype */
extern int myGlobal;
int myGlobal = 0;
inline void inlineFunc(void) {}

/* app.h - Stand alone */
#include <stddef.h>
void mySize(size_t);

/* app.h - Include guard */
#ifndef APP_H
#define APP_H
/* … */
#endif
