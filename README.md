# print.hpp 

[![Build Status](https://travis-ci.org/illescasDaniel/print.hpp.svg?branch=master)](https://travis-ci.org/illescasDaniel/print.hpp)
[![Version](https://img.shields.io/badge/version-v1.7-green.svg)](https://github.com/illescasDaniel/print.hpp/releases)
[![license](https://img.shields.io/github/license/mashape/apistatus.svg?maxAge=2592000)](https://github.com/illescasDaniel/print.hpp/blob/master/LICENCE)  

With the 'evt::print()' function you can display information easily.  
The 'to_string' function let you convert ANY data container (like std::vector) to string.
<br></br>

Syntax examples
-----

· **print:**  
```c++
print(const Type& value, const Args& ...args);
```

· Example:  
```c++
print("This is a number:", 23123); // Output -> This is a number: 23123
```

<br></br>
· **to_string for containers like `std::vector`, `std::array`, etc:**  
```c++
to_string(const container& cont); 
```

· Example using both functions:  
```c++
print("My vector:", to_string(vector)); // Possible output -> My vector: [1, 2, 3]

// or:
print("My vector:", vector);
```

<br></br>
· **to_string for classic arrays:**  
```c++
to_string(const T * array, size_t size);
```

· Example:  
```c++
print(to_string(array, 5));
```

<br></br>
· **to_string for matrices:**  
```c++
to_string(const Type& matrix, size_t rows, size_t cols);
```

· Example:  
```c++
print(to_string(matrix, rows, cols)); // An output -> [[1, 2], [3, 4], [5, 6]]
```

<br></br>
How to compile:
-----
```bash
g++ -std=c++14 main.cpp -I . // Where "." is the folder containing "print.hpp"
```
