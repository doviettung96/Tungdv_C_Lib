# Tungdv_C_Lib
This is my own library for Data structure and Algorithm
Language: C

# Usage
## For algorithm
1. After clone this repository, jump into directory Algorithm by "cd Algorithm"
2. Then type: "make" 
3. "cd ../TestAlgo"
4. "make"
5. "./test"

## For data structure
Do the same but instead of Algorithm, jump into DataStructure folder and type "make", 
then jump to TestData type "make". Finally type "./test_stack"

# Helpful information
By typing make, you will run the default command in "makefile". 
For library, ex: Algorithm, make will build a library *.a,
copy to Implementation and copy the header files to Header.
In the root directory, "make" will compile test.c with all including library 
into an executable file test.
