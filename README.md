# Libft

The libft is a 42 project which consist of coding our own version of libc functions and special functions asked by the school.
We use it for all of our C project, and I've been improving mine with each one. 
This is the "final" version, with some modification on the original functions and a lot of new ones.

I divided the functions into 7 sections :
* Str : for anything related to string
* Lst : for anything relation to list
* Tree : An implementation of a red-black tree
* Mem : Generally function dealing with void *
* IO : Anything reading or writing
* Ft_printf : my implementation of printf (which is an old project, so it's quite flawed. I'll update it one day and won'tbe describing it here).
* Misc : anything else

I won't detailed everything, just what differ from the initial project or seem interesting. All the functions that aren't in the libc have a descriptive comment in their files. The one starting with "ft_" were asked by default by the project, the ones starting with "m_" are mine, or modified version of the project ones.
(Except for get_next_line, which was a project by itself, that I also modified a bit).

## Error gestion
There was a lot of discussion at school on how much we should free. Some thinks that we should free everything, and the others only what we'll loss and let the OS handle the rest. I'm on the second team, I followed the rules of the first one for a team project (Corewar) and I found it to be an useless hassle.

This libft follows my way of doing things, so wherever there's an error (from a malloc for example), I only free what is really necessary and exit the program on the spot with an error message. I mostly use the global variable errno, and strerror to print the needed message.

## Free gestion
We needed to do some functions to free a memory area or a string for example. Initially, we were suppose to only free it and set the pointer to NULL, but I decided to go all the way and first reset all the memory to be freed to NULL. I find it to be cleaner like this and it makes it easier to debug afterwards.

## Typical change
A lot of the modification I did to the original functions came to adding some more parameter to define if something needed to be malloc'ed, freed, etc. In short, to make them more versatile.

## Tree

I made some functions to create, use and clear a black-red tree. It can take numerical or alphabetical index. (to detail)

## Things to improve
* Redo ft_printf
* Code itoa without list
* Code a version of ft_strsplit that takes multiples separators instead of just one
