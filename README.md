*This project has been created as part of the 42 curriculum by mbardeau*
# FT_PRINTF - 42 Project

## Description
The **ft_printf** project is about recoding our own version of the famous `printf()` function from the C standard library. The main goal is to discover and master the use of variadic functions (handling a variable number of arguments) while structuring clean, modular, and extensible code.

The generated library (`libftprintf.a`) supports the following mandatory conversions:
* `%c` : Prints a single character.
* `%s` : Prints a string.
* `%p` : Prints a void pointer in hexadecimal format.
* `%d` / `%i` : Prints a decimal (base 10) number.
* `%u` : Prints an unsigned decimal (base 10) number.
* `%x` : Prints a number in hexadecimal (base 16) lowercase format.
* `%X` : Prints a number in hexadecimal (base 16) uppercase format.
* `%%` : Prints a percent sign.

---

## Instructions

### Compilation
The project comes with a `Makefile` that complies with the required rules (`all`, `clean`, `fclean`, `re`, and creating the library using the `ar` command without `libtool`) using `-Wall`, `-Wextra`, and `-Werror` flags.

To compile the library:
```bash
make
```
To clean intermediate object files:
```bash
make clean
```
To remove all generated files (objects and library):
```bash
make fclean
```
To recompile everything from scratch:
```bash
make re
```
## Usage
Include the header file in your C programs:
```C
#include "ft_printf.h"
```
Then link your executable with the libftprintf.a archive generated at the root of the repository.

## Algorithm and Technical Choices
- **Modular Approach**: Each format specifier (c, s, p, d/i, u, x, X, %) is isolated in its own dedicated function (ft_print_char.c, ft_print_nbr.c, etc.), ensuring great readability and easy maintenance.
- **Base Conversion Utility**: A central utility function `ft_putnbr_base` handles the recursive printing of any unsigned integer (`unsigned long long`) based on a character set passed as a parameter (base 10, lowercase base 16, uppercase base 16). This effectively shares code across `%d`, `%i`, `%u`, `%x`, `%X`, and `%p`.
- **Argument Handling and Return Counter**: The main `ft_printf` function initializes a `va_list` via `va_start`, parses the format string character by character, intercepts the `%` sign, dispatches to the corresponding sub-function, and accumulates the total number of characters written to return the exact character count required by the prototype.

## Resources and AI Usage
- **Documentation & References**:
  - `printf` manual pages (`man 3 printf`)
  - Official documentation on variable argument lists in C (`<stdarg.h>`)
  - CppReference and Geeksforgeeks
- **Artificial Intelligence Usage**:
	- Help formulate the project's README.md documentation.