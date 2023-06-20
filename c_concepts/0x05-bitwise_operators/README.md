# Bitwise Operators in C

* In C, bitwise operators are used to perform operations at the bit level, manipulating individual bits of integral data types. These operators work on the binary representation of numbers. They are particularly useful in low-level programming, embedded systems, and working with hardware or binary data. C provides the following bitwise operators:

## Bitwise AND (&)
* The bitwise AND operator performs a bitwise AND operation on each pair of corresponding bits of two operands. It sets a bit to 1 only if both bits are 1; otherwise, it sets the bit to 0.
~~~~
unsigned int a = 5;  // Binary: 0101
unsigned int b = 3;  // Binary: 0011
unsigned int result = a & b;  // Binary: 0001 (Decimal: 1)
~~~~

## Bitwise OR (|)
* The bitwise OR operator performs a bitwise OR operation on each pair of corresponding bits of two operands. It sets a bit to 1 if at least one of the bits is 1.
~~~~
unsigned int a = 5;  // Binary: 0101
unsigned int b = 3;  // Binary: 0011
unsigned int result = a | b;  // Binary: 0111 (Decimal: 7)
~~~~

## Bitwise XOR (^)
* The bitwise XOR (exclusive OR) operator performs a bitwise XOR operation on each pair of corresponding bits of two operands. It sets a bit to 1 if the two bits are different (one is 0 and the other is 1).
~~~~
unsigned int a = 5;  // Binary: 0101
unsigned int b = 3;  // Binary: 0011
unsigned int result = a ^ b;  // Binary: 0110 (Decimal: 6)
~~~~

## Bitwise NOT (~)
* The bitwise NOT operator is a unary operator that performs a bitwise complement operation on the operand. It flips each bit from 0 to 1 and vice versa.
~~~~
unsigned int a = 5;  // Binary: 0000 0000 0000 0101
unsigned int result = ~a;  // Binary: 1111 1111 1111 1010 (Decimal: -6)
~~~~

## Bitwise left shift (<<)
* The bitwise left shift operator shifts the bits of the left operand to the left by a specified number of positions. It effectively multiplies the value by 2 raised to the power of the shift amount.
~~~~
unsigned int a = 5;  // Binary: 0000 0000 0000 0101
unsigned int result = a << 2;  // Binary: 0000 0000 0001 0100 (Decimal: 20)
~~~~

## Bitwise right shift (>>)
* The bitwise right shift operator shifts the bits of the left operand to the right by a specified number of positions. It effectively divides the value by 2 raised to the power of the shift amount.
~~~~
unsigned int a = 20;  // Binary: 0000 0000 0001 0100
unsigned int result = a >> 2;  // Binary: 0000 0000 0000 0101 (Decimal: 5)
~~~~

### Bitwise operators are particularly useful when working with low-level operations, such as manipulating individual bits, setting or clearing flags, or performing optimizations that involve bit-level representations of data.

