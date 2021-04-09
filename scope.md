# Scope 

Objects, functions, macros and other C language identifiers have a scope which delimits
the contiguous region where they can be accessed. C has four types of scope:

* File scope
* Block scope
* Function scope
* Function prototype scope

The scope of an object or function identifier is deteremined by where it is declared.
If the declaration is outside any block or parameter list, the identifier has a __file
scope__, which means the scope is the entire text file in which it appears as well as
any files included after that point.

If the declaration appears inside a block or within the list of parameters, it has a 
__block scope__, meaning that the identifier it declares is accessible only within the block.

If the declaration appears within the list of parameter declarations in a function prototype 
(not part of a function definition), the identifier has a __function prototype scope__, which terminates
at the end of the function declarator. The __function scope__ is the area between the 
opening { of a function definition and it's closing }. 

A label name is the only kind of identifier that has a __function scope__. When scopes 
are nested, the inner scopes have access to the outscopes but not vice versa.

If you declare the same identifier in both the inner scope and an outer scope, the identifier
declared in the outer scope is hidden by the identifier withing the inner scope, which takes
precedence.

```c
int j;                           // file scope of j begins 

void f(int i) {                  // block scope of i begins 
  int j = 1;                     // block scope of j begins; hides file-scope j 
  i++;                           // refers to the function parameter
  for (int i = 0; i < 2; i++) {  // block scope of loop-local i begins
    int j = 2;                   // block scope of the inner j begins; hides outer j  
    printf("%d\n", j);           // inner j is in scope, prints 2
  }                              // block scope of the inner i and j ends
  printf("%d\n", j);             // the outer j is in scope, prints 1
}                                // The block scope of i and j ends

void g(int j);                   // j has function prototype scope; hides file-scope
```

NOTE: Identifiers in large scopes should have longer, descriptive names that are unlikely 
to be hidden in nested scopes. 




