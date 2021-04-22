# Type Qualifiers

All the types examined so far have been unqualified types. Types can be qualified by using one of the following qualifiers:

* `const`
* `volatile`
* `restrict`

Each one of these qualifier change the behaviours when accessing objects of the qualified type.

## `const `

Objects which are declared with the `const` qualifier are not modifiable. They aren't assignable but can have constant initializers.

```c
const int i = 1; // Const qualified integer
i = 2; // ERROR: i is const-quialified
```

It is possible to accidentally convince your compiler to change a `const`-qualified object for you. 

```c
const int i = 1; // object of const-qualified type
int *ip = (int *)&i;
*ip = 2; // Undefined behaviour
```

C allows you to modify an object that is pointed to by a `const`-qualified pointer by casting the `const` away, provided that the original object was not declared `const`:

```c
int i = 12;
const int j = 12;
const int *ip = &i;
const int *jp = &j;
*(int *)ip = 42; // Ok
*(int *)jp = 42; // Undefined behaviour
```

## `volatile` 

Objects of `volatile`-qualified types serve a special purpose. Static `volatile`-qualified objects are used to mode memory-mapped input/output (I/O) ports, and static constant `volatile`-qualified objects model memory-mapped input ports such as a real-time clock. 

In the following code, the compiler must generate instructions to read the value from port and then write this value back to port:

```c	
volatile int port;
port = port;
```

Without the `volatile` qualification, the compiler would see this as a `no-op` (a programming statement that does nothing) and potentially eliminate both the read and the write. Unlike in Java and other programming languages, `volatile`-qualified types in C should not be used for sychronization between threads.

## `restrict`

Then `restrict`-qualified pointer is used to promote optimisation. Objects indirectly accessed through a pointer frequently cannot be fully optimised because of potential aliasing, which occurs when more than one pointer refers to the same object. Aliasing can inhibit optimisations because the compiler can't tell if portions of an object can change values when another apperently unrelated object is modified. For example:

The following function copies n bytes from the storage referenced by `q` to the storage referenced by `p`. The function parameters `p` and `q` are both `restrict`-qualified pointers:

```c
void f(unsigned int n, int * restrict p, int * restrict q) 
{
    while (n-- > 0) 
    {
        *p++ = *q++;
    }
}
```

Because both `p` and `q` are `restrict`-qualified pointers, the compiler can assume that an object accessed through one of the pointer parameters is not also accessed through the other. The compiler can make this assessment based solely on the parameter declarations without analyzing the function body. 

Although using `restrict`-qualified pointers can result in more efficient code, you must ensure that the pointers do not refer to over-lapping memory to prevent undefined behaviour.



