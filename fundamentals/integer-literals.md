## Integer Literals

An integer literal can be a decimal, octal or hexedecimal constant. A prefix
or radix specifies the base "0x" || "0X" for hexedecimal, 0 for octal and 
nothing for decimal 

```c
212    // legal
231u   // legal
0xFeeL // legal
078    // illegal: 8 is not an octal digit
032UU  // illegal: cannot repeat a suffix
```

```c
85         // decimal
0213       // octal 
0x4b       // hexadecimal 
30         // int 
30u        // unsigned int 
30l        // long 
30ul       // unsigned long
```
