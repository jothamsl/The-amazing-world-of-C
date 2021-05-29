# Assembly
The Assembly instructions in Intel syntax generally follow this style: 

`Operation <destination>, <source>`

The destination and source values will either be a register, a memory address or a value.
The operations are usually intuitive mnemonics: The `mov` operation will move a value from
the source to the destination, `sub` will subtract, `inc` will increment etc. For example, the
instructions below will move the value from ESP to EBP and then subtract 8 from ESP (storing the result in ESP)
```assembly
8048375:         89 e5      mov  ebp, esp
8048377:         83 ec 08   sub  esp, 0x8
```

There are also operations that are used to control the flow of execution. The `cmp` operation
is used to compare values, and basically any operation beginning with "j" is used to jump to a 
different part of the code (depending on the result of the comparison). 
