# Swapping two numbers

## There are two different techniques.

### Swap Numbers Using Temporary Variable

~~~~
#include <stdio.h>
int main() 
{
  int a, b, temp;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);

  /* value of first is assigned to temp */
  temp = a;

  /* value of second is assigned to first */
  a = b;

  /* value of temp (initial value of first) is assigned to second */
  b = temp;

  printf("\nAfter swapping, first number = %d\n", a);
  printf("After swapping, second number = %d\n", b);
  return 0;
}
~~~~

* The temp variable is assigned the value of the first variable.
* Then, the value of the first variable is assigned to the second variable.
* Finally, the temp (which holds the initial value of first) is assigned to second. This completes the swapping process.

### Swap Numbers Without Using Temporary Variable

~~~~
#include <stdio.h>
int main() 
{
  int a, b;
  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);

  /* swapping */

  /* a = (initial_a - initial_b) */
  a = a - b;   

  /* b = (initial_a - initial_b) + initial_b = initial_a */
  b = a + b;

  /* a = initial_a - (initial_a - initial_b) = initial_b */
  a = b - a;

  printf("After swapping, a = %d\n", a);
  printf("After swapping, b = %d\n", b);

  return 0;
}
~~~~

#### The reason for swapping numbers without using a temporary variable is to save bytes.
