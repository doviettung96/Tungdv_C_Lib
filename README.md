# Tungdv_C_Lib
This is my own library for Data structure and Algorithm
Language: C

# Usage
## For algorithm
1. After clone this repository, jump into directory Algorithm by ``cd Algorithm``
2. Then type: ``make`` 
3. ``cd ../TestAlgo``
4. ``make``
5. ``./test``

## For data structure
Do the same but instead of Algorithm, jump into DataStructure folder and type ``make``, 
then jump to TestData/List (or Stack or Queue) type ``make``. Finally type ``./test``

# Helpful information
- By typing make, you will run the default command in ``makefile``. 
- For library, ex: Algorithm, make will build a library *.a,
copy to Implementation and copy the header files to Header.
- In the root directory, ``make`` will compile test.c with all including library 
into an executable file test.

# Pointer

## Warning 
- Pointer is address, it point to address of 1 variable
- Only assign value to the value of pointer (*p) after allocation 
``
*p = (int *)malloc(sizeof(int));
``
or you could just: 
``
p = &a;
``
- Otherwise, error will occur (segmentation fault- core dumpted).

## Pointer and value
- Pass pointer to a function, inside that function, change the value, after function finish, value changed.
- Pass pointer to a function, inside that function, change address of the pointer, after function finish, nothing changed. To change address of pointer passed to a function, use pointer to pointer ``**``.

## NULL pointer is the same as uninitialized pointer, can not be value-assigned