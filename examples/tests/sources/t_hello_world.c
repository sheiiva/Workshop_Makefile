/*
**      W O R K S H O P    M A K E F I L E
**
** Corentin COUTRET-ROZET
** https://github.com/sheiiva/Workshop_Makefile
**
*/

#include "crifunc.h"
#include "sources.h"

Test(hello_world, with_stdout_redirect, .init=redirect_all_std)
{
    int value = hello_world();

    cr_assert_stdout_eq_str("Hello world!");
    cr_assert_eq(value, 12);
}