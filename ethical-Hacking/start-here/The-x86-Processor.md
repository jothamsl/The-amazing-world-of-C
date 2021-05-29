## The x86 Processor 

The x86 processor has several registers, which are like internal variables
for the processor. On Linux, GDB can be used to debug compiled programs by examining the program's
memory, step through the program and view processor registers.

__RUN:__ ``gdb -q ./obj-dump`` -> ``break main`` -> ``run`` -> ``info registers``<br/> 

The first four registers are known as general purpose registers. They are called:<br/>
The **Accumulator**, **Counter**, **Data** and **Base** registers, respectively. They are used
for a variety of purposes, but they mainly act as temporary variables for the CPU
when it is executing machine instructions.

The Second four registers are also general-purpose registers, but they are sometimes
known as pointers and indexes. These stand for **Stack Pointer**, **Base Pointer**, 
**Source index** and **Destination index**. The first two registers are called pointers
because they store 32-bit addresses, which essentially point to that location in memory, while
the last two registers are also technically pointers, which are commonly used to point to the source
and destination when data needs to be read or written to.

The (RIP [In my case]) is the **Instruction pointer** register, which points to
the  current instruction the processor is reading. Like a child pointing his finger
at each word as he reads, the processor reads each instruction using the (RIP) register as its
finger. Naturally, this register is quite important and will be used a lot while debugging.

The remaining EFLAGS register actually consists of several bit flags that are used for 
comparisons and memory segmentations. The actual memory is split into several different
segments, which will be discussed later, and these registers keep track of that. 


