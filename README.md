# cplusplus
Learn C++ and Learn it well!

## a statement is equivalent to a sentence in C++ and instead of it being terminated with a period '.', it is terminated by a ';'. 

## Variables can have a variety of types:
   1. Integers (int), a variable type stores only single integers with 'no' decimals. Must be at least 16 bits long
   2. Character (char), refers to a 'single' character like 'a' and is 8 bits long 
   3. float, stores floating point values such as '3.14' - usually 32bits long
   4. doubles, similar to floats but with twice the precision - usually 64 bits long
   5. Boolean (bool), stores true/false values 
   6. void, cannot store data directly, but acts a bit like a place holder, represents the absence of type
   7. wchar_t, a wide character type 

## Statements
  1. there are 3 types of statements:
      + assignment statements
      + declaration statements
      + output statements 

  Note: before a variable can be used, it must first be 'declared' with a declaration statement. 
  A declaration statement gives a name and type to a place in memory where a specific 'value' is held: 
    ex. 
    // Declaration Statement 
    double y; 

    // Assignment Statement 
    y = 20.5

    // Output Statement
    std::cout << y; 

    + When a declaration and assignment happens at the 'same' time, this is called 'initialization'. 
      - double y = 20.5; 

    + variables can also be 'declared' together like:
      - double x,y,z; which declares x,y,z as double or decimal numbers
