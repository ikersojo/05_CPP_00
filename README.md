# 05_CPP_00
---

## Introducción:
El objetivo de estos módulos es presentarte la Programación orientada a objetos.
Este será el puto de partida de tu viaje en C++. Hay muchas opciones para aprender
POO. Decidimos elegir C++ ya que se deriva de tu viejo amigo C y para mantener las
cosas simples, debido a la complejidad del lenguaje tu código deberá compilar con el
estándar C++98.

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
