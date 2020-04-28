Workshop Makefile
===

Language:   C


This folder contains some dumb `.c` files used as examples to understand how to manage a repository architecture with Makefile.s.

Here is the architecture of the folder:

```
.
|_ include
|     \_ sources.h
|_ sources
|     |_ hello_world.c
|     |_ main.c
|     \_ Makefile
|_ tests
|     |_ generic
|     |     \_ redirect.c
|     |_ include
|     |     \_ crifunc.h
|     |_ sources
|     |     \_ t_hello_world.c
|     \_ Makefile
\_ Makefile
```


## USAGE:

> rules: `all`, `tests_run`, `clean`, `fclean`, `re`


Author [**Corentin COUTRET-ROZET**](https://github.com/sheiiva)