# LibFT - C Standard Library Implementation

A custom implementation of various C standard library functions as part of the 42 curriculum.

## 📚 Function Overview

### String Functions
- `ft_strlen` - Calculate string length
- `ft_strchr`, `ft_strrchr` - Locate character in string
- `ft_strncmp` - Compare two strings
- `ft_strlcpy`, `ft_strlcat` - Size-bounded string copying and concatenation
- `ft_strnstr` - Locate a substring in a string
- `ft_strdup` - Create a duplicate of a string
- `ft_strjoin` - Concatenate two strings
- `ft_strtrim` - Trim characters from string
- `ft_split` - Split string into array using delimiter
- `ft_strmapi` - Apply function to each character
- `ft_striteri` - Apply function to each character with index

### Memory Functions
- `ft_memset` - Fill memory with constant byte
- `ft_bzero` - Zero a byte string
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area with overlap handling
- `ft_memchr` - Scan memory for a character
- `ft_memcmp` - Compare memory areas
- `ft_calloc` - Allocate and zero-initialize array

### Character Functions
- `ft_isalpha` - Check for alphabetic character
- `ft_isdigit` - Check for digit
- `ft_isalnum` - Check for alphanumeric character
- `ft_isascii` - Check for ASCII character
- `ft_isprint` - Check for printable character
- `ft_toupper` - Convert to uppercase
- `ft_tolower` - Convert to lowercase

### Conversion Functions
- `ft_atoi` - Convert string to integer
- `ft_itoa` - Convert integer to string

### File Descriptor Functions
- `ft_putchar_fd` - Output char to file descriptor
- `ft_putstr_fd` - Output string to file descriptor
- `ft_putendl_fd` - Output string with newline to file descriptor
- `ft_putnbr_fd` - Output number to file descriptor

### Linked List Functions (Bonus)
- `ft_lstnew` - Create new list node
- `ft_lstadd_front` - Add node at beginning
- `ft_lstadd_back` - Add node at end
- `ft_lstsize` - Count list elements
- `ft_lstlast` - Get last node
- `ft_lstdelone` - Delete single node
- `ft_lstclear` - Delete list and nodes
- `ft_lstiter` - Apply function to all nodes
- `ft_lstmap` - Create new list applying function

## 🛠️ Usage

1. Clone the repository
2. Run `make` to compile the library
3. Link with your project using `-lft`

## 📝 Example

```c
#include "libft.h"

int main(void)
{
    char *str = "Hello, World!";
    size_t len = ft_strlen(str);
    ft_putstr_fd(str, 1);
    return (0);
}
```

## 🔍 Testing

- Run `make` to compile the library
- Run `make clean` to remove object files
- Run `make fclean` to remove object files and library
- Run `make re` to recompile everything

## 📜 License

This project is part of the 42 curriculum and is provided as-is.
