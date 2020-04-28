/*
**      W O R K S H O P    M A K E F I L E
**
** Corentin COUTRET-ROZET
** https://github.com/sheiiva/Workshop_Makefile
**
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
