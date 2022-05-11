
# Symbol Table

A symbol table, or Symtable, is an important method for storing many pieces of information in large
scale software translation systems such as compilers. The symbol information is stored as bindings, each
of which consists of a key and a value.



## Authors

- [@Siva Krishna Mothukuri](https://github.com/mSivaKrishRace)


## Demo

This is a small project works on Ubuntu/Linux platform with CPP compiler installed. We need to run the Symbol_table_derived_2.cpp file in which the main function is included. For auto compilation you can run the makefile or with the cmake
![Steps for auto compile](https://github.com/mSivaKrishRace/Symbol_table/imgs/auto_run_Sym_table.png)

This Symbol_table is implemented using the Linked Lists
Running the Symbol_table_derived_2.cpp describes the different options as metioned below:
1. Create New_SymbolTable 
2. Free_SymbolTable 
3. Get_Length 
4. Add New_SymbolTable Node
5. Replace Value 
6. Search 
7. Get Value 
8. Remove Node 
9. Symbol Map 
10. Exit

### 1. Create New_SymbolTable
Choosing New_SymbolTable creates the New Symbol_table

### 2. Free_SymbolTable
To delete entire existing Symbol_table by deleting all nodes and free the space provided to Symbol_table

### 3. Get_Length
To get the Length of existing Symbol_table i.e, the count of number of nodes that are inserted and available till now.
### 4. Add New_SymbolTable Node
Choosing Add New_SymbolTable Node inserts the Symbol_table with the input values that are to be mentioned by user.
```
Enter the Key:
Enter the Value:
```

### 5. Replace Value
To Replace the new Value with the old Value for the existing key in the Symbol_table
```
Enter the Key:
Enter the New Value to replace:
```

### 6. Search 
To search for a particular key whether exists in Symbol_table or not.

```
"Enter the Key to search:
```
Outputs the following if related Key provided by user exists in Symbol_table
```
Element found:
```
otherwise, if the input key is not found, then the Output will be:
```
Element NOT found:
```

### 7. Get Value
To get the Value for the provided key by the user.
```
"Enter the Key to get respective value:
```
Output the Value if key exists, otherwise returns respective key doesn't exists.

### 8. Remove Node
To Remove any Node in the existing Symbol_table through the key.
```
"Enter the Key:
```

### 9. Symbol Map
### Exit
To exit from the all provided options of Symbol_table


## Running
Here are the simple steps provide to run in terminal on Ubuntu/Linux platform manually
- Initially, the path to the folder has to be set. With proper path specification to the root folder, follow commends as shown below 
create the build directory/folder
```
$ mkdir build
```
To check whether the build dir is created, run
```
$ls
```
Now, move to the src folder where the CMakeLists.txt file is included and run
the commands
```
$ cd src/
$ cmake ..
$ make
```
## gtest
Running the test file Symbol_table_test.cpp as different testcases considered in the file for testing.
```
g++ Symbol_table_test.cpp -lgtest -lgtest_main -o Symbol_table_test.out
```


## Acknowledgements

 - [Symbol Table](http://en.wikipedia.org/wiki/Symbol_table)
 - [Linked List](http://en.wikipedia.org/wiki/Linked_list)
 - [Opaque Pointer](http://en.wikipedia.org/wiki/Opaque_pointer)

