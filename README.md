# 05_CPP_00
---

## Introducción:
The goal of these modules is to introduce you to Object-Oriented Programming. This will be the starting point of your C++ journey. Many languages are recommended to learn OOP. We decided to choose C++ since it’s derived from your old friend C. Because this is a complex language, and in order to keep things simple, your code will comply with the C++98 standard.


## General Instructions
- Unless otherwise specified, always en with '\n'.
- Forbidden Functions: `*printf()`, `*alloc()` y `free()`.
- Forbidden the use of `using namespace <ns_name>`.
- Forbidden other libraries: `STL`, `C++11`, `Boost`, `<algorithm>`
- NO leaks when using `new`.

### Compilation flags:
```sh
-Wall -Wextra -Werror -std=c++98
```

### Class Definition:
- Naming: `UpperCamelCase`
- Files should include a single Class definition, and be named same as the class (e.g.: **ClassName.hpp/ClassName.h**)
- Definition following **Orthodox Canonical Class Form (OCCF)**. In C++98 (and C++03) the OCCF had four different methods that the C++ compiler is willing to generate:
	- Default constructor
	- Copy constructor
	- Destructor
	- Copy assignment operator

- Header files should be able to use independently. Use `include guards`.
```cpp
#ifndef FOO_BAR_BAZ_H_
# define FOO_BAR_BAZ_H_
...
#endif  // FOO_BAR_BAZ_H_
```
