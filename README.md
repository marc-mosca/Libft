<div align="center">
<pre>
█   ▀█▀ █▀▄ █▀▀ ▀█▀
█    █  █▀▄ █▀▀  █ 
▀▀▀ ▀▀▀ ▀▀  ▀    ▀ 
-------------------
My first C library.
</pre>
</div>

C programming can be very tedious when one doesn’t have access to the highly useful standard functions.
This project is about understanding the way these functions work, implementing and learning to use them.
Your will create your own library. It will be helpful since you will use it in your next C school assignments.

## Features

To begin, you must redo a set of functions from the libc.
Your functions will have the same prototypes and implement the same behaviors as the originals.
They must comply with the way they are defined in their man. 
The only difference will be their names.
They will begin with the 'ft_' prefix. For instance, strlen becomes ft_strlen.

You must write your own function implementing the following original ones.
They do not require any external functions:

- isalpha
- isdigit
-  isalnum
-  isascii
-  isprint
-  strlen
-  memset
-  bzero
-  memcpy
-  memmove
-  strlcpy
-  strlcat
-  toupper
-  tolower
-  strchr
-  strrchr
-  strncmp
-  memchr
-  memcmp
-  strnstr
-  atoi

In order to implement the two following functions, you will use `malloc()`:

- calloc
- strdup

In this second part, you must develop a set of functions that are either not in the libc, or that are part of it but in a different form.

- substr
- strjoin
- strtrim
- split
- itoa
- strmapi
- striteri
- putchar_fd
- putstr_fd
- putendl_fd
- putnbr_fd

### Bonus

Functions to manipulate memory and strings is very useful.
But you will soon discover that manipulating lists is even more useful.

Implement the following functions in order to easily use your lists:

- lstnew
- lstadd_front
- lstsize
- lstlast
- lstadd_back
- lstdelone
- lstclear
- lstiter
- lstmap

## Usage

To get help with available commands:

```shell
make help
```

&nbsp;

First things first, you need to compile the project:

```shell
make all
```

Now you can use the `libft` library in all your projects by adding it to the compilation of your project.

## Contributing

1. Fork it (<https://github.com/marc-mosca/Libft/fork>)
2. Create your feature branch (`git checkout -b feature/fooBar`)
3. Commit your changes (`git commit -am 'Add some fooBar'`)
4. Push to the branch (`git push origin feature/fooBar`)
5. Create a new Pull Request

## Contact

You can email me at mmosca@student.42lyon.fr.

<p align=center> <sub> Created while eating 🍿 by Marc MOSCA ©2024</sub></p>
