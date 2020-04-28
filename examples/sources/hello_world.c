/*
**      W O R K S H O P    M A K E F I L E
**
** Corentin COUTRET-ROZET
** https://github.com/sheiiva/Workshop_Makefile
**
*/

#include "sources.h"

int hello_world(void)
{
    return (write(1, "Hello world!", 12));
}