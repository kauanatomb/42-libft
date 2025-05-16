# libft

A custom implementation of common C standard library functions, developed as part of the 42 school curriculum. The goal is to gain a deeper understanding of memory management, pointer arithmetic, and low-level programming concepts.

## About

`libft` is a foundational C library that reimplements a subset of the C standard library functions. It includes functions for memory manipulation, string processing, character checks, and linked list operations. It is built from scratch without relying on external libraries.

This project includes:

### Libc Functions
Reimplementations of basic standard library functions such as:

- `memset`, `memcpy`, `memmove`, `memcmp`
- `strlen`, `strchr`, `strrchr`, `strnstr`, `strncmp`
- `atoi`, `isalpha`, `isdigit`, `toupper`, `tolower`

### Additional Functions

- `substr`, `strjoin`, `strtrim`, `split`
- `itoa`, `strmapi`, `striteri`
- `calloc`, `strdup`

### Bonus Part (Linked List)

- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
- `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Usage

1. Clone this repository:

```bash
git clone https://github.com/kauanatomb/42-libft.git
cd libft
```

2. Compilation

```bash
make
```
> This will generate libft.a, a static library ready to be linked with your projects.

To remove all compiled files:
```bash
make fclean
```
