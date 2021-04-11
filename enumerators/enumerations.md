# Enumerations

An enumeration, or enum, allows you to define a type that assigns names (enumerators) 
to integer values in cases with an enumerable set of constant values. E.g: 

```c
enum day { sun, mon, tue, wed, thu, fri, sat };
enum cardinal_points { north = 0, east = 90, south = 180, west = 270 };
enum months { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
```
Each element of the enumerator is called an enumeration constant.

If you don't specify a value for the first enumerator with the = operator, the value of 
its enumeration constant will be 0, and each subsequent enumerator without an = increments
the value of the previous enumeration constant by 1.

For the months enumerator, the first month is given a value of 1 and each subsequent enumerator
that isn't specifically assigned a value will be incremented by 1.
