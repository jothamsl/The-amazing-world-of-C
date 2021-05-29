Typedefs are used to declare an alias for an existing type; it never creates a new type. E.g 
each of the following declarations creates a new type alias:

```c
typedef unsigned int uint_type; 
typedef signed char schar_type, *schar_p, (*fp)(void);
```

On the first line, we declare uint_type as an alias for the type ```unsigned int```. On the 
second line, we declare ```schar_type``` as an alias for ```signed char```, ```schar_p``` as an alias for 
```signed char *```, and ```fp``` as an alias for ```signed char (*)```

Identifiers that end in _t in the standard headers are type definitions (aliases for existing types).
Generally speaking you should not follow this convention in your own code because the C standard reserves 
all identifiers that follow this paradigm reserves all identifiers that end in _t.
