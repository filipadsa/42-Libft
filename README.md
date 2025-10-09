 ___        ___   ________   ________  _________   
|\  \      |\  \ |\   __  \ |\  _____\|\___   ___\ 
\ \  \     \ \  \\ \  \|\ /_\ \  \__/ \|___ \  \_| 
 \ \  \     \ \  \\ \   __  \\ \   __\     \ \  \  
  \ \  \____ \ \  \\ \  \|\  \\ \  \_|      \ \  \ 
   \ \_______\\ \__\\ \_______\\ \__\        \ \__\
    \|_______| \|__| \|_______| \|__|         \|__|

My very first C library


# 🧩 Libft

My very first C library — reimplementing and extending standard libc functions.
Developed as part of the **42** curriculum.

---

## 🧠 Overview

`libft` is a custom library written in C that reimplements essential functions from the standard C library (`libc`) and adds additional utilities.
It serves as the foundation for future 42 projects by providing a consistent, personal standard library.

---

## ⚙️ Contents

### **Part 1 – Libc Functions**
Reimplementation of standard C functions (with the `ft_` prefix):

isalpha isdigit isalnum isascii isprint
strlen memset bzero memcpy memmove
strlcpy strlcat toupper tolower strchr
strrchr strncmp memchr memcmp strnstr
atoi calloc strdup


### **Part 2 – Additional Functions**
String and memory manipulation helpers:

ft_substr ft_strjoin ft_strtrim
ft_split ft_itoa ft_strmapi
ft_striteri ft_putchar_fd ft_putstr_fd
ft_putendl_fd ft_putnbr_fd


### **Bonus – Linked List Utilities**
Implementation of a generic singly linked list using:
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
``

List manipulation functions include:

ft_lstnew     ft_lstadd_front ft_lstsize
ft_lstlast    ft_lstadd_back  ft_lstdelone
ft_lstclear   ft_lstiter      ft_lstmap

🧪 Usage

Clone and compile:

git clone https://github.com/filipadsa/Libft.git
cd Libft
make

Include it in your C project:

#include "libft.h"

Compile your program with the library:

cc main.c -L. -lft -I.

Clean build files:

make clean     # remove object files
make fclean    # remove object files + libft.a
make re        # rebuild everything

🧩 Notes

    All functions are Norminette-compliant.

    Only standard headers and allowed external functions (malloc, free, write) are used.

    Makefile includes rules: all, clean, fclean, re, and bonus.
