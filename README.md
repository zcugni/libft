# Libft

The libft is a 42 project which consist of coding our own version of existing functions. 
We use it for all of our C project, and i've been improving mine with each one. 
This is the "final" version, with some modification on the original functions and a lot of new ones.

I divided the functions into 7 sections :
* Str : for anything related to string
* Lst : for anything relation to list
* Tree : An implementation of a red-black tree
* Mem : Generally function dealing with void *
* IO : Anything reading or writing
* Ft_printf : my implementation of printf (which is an old project, so it's quite flawed. I'll update it one day).
* Misc : anything else

I won't detailed everything, just what differ from the initial project or seem interesting.

## Str

### Ft_strdel
Normally, this function only frees a string and put it's pointer to NULL, but I decided to also clear it's memory by first putting each char at NULL.
I know even the original functions like free and memdel don't do this, but I find it a lot cleaner and it also make it easier to debug.

### Added functions :

* Ft_strjoin_free : Like ft_strjoin, it concatenate two string into a new malloc'ed one, but this time, it also frees the string used for concatenation if needed.
* Ft_strsub_free : Same idea, it works like ft_strsub (which return a new string with only a part of the original) but can also free the string if needed.
* Ft_strsplit_white : Split at any type of whitespaces (the ft_strsplit only take one character for the split, so it's annoying for the whitespace).  ------>> est-ce que je devrais pas juste faire une version plus general qui peut prendre plusieurs separateurs ?

## List

### Ft_lstnew
```
t_list	*ft_lstnew(void const *content, size_t content_size, int need_malloc)
```

This function let us add a new node to a list. Initially, the content of the new node was always malloc and the original content copied into it, which i found excessive.
I added a parameter to decide if it needed to be copied, or if we could keep a pointer to it.

### Ft_lstdel :
```
void	ft_lstdel(t_list **alst, void (*del)(void *))
```
To follow the change on creation, I also needed to update the way I clear a list.
I now free the content only if a function is given to do it.
(I also got rid of the content_size parameter needed by said function, because I often simply pass "free" as the del function).

### Added functions :

* Ft_lstcpy : Makes a copy of a list
* Ft_lstappend : Add a new node at the end of the list instead of the beginning
* Ft_lstpop : Return the first element of the list and remove it from the list
* Ft_lstlen : Return the length of a list
* lst_to_str : Copy a list into a string
* bubble_sort_lst : Sort a list using the bubble_sort algorithm (I know it's definitly not efficient, but I was looking for a quick fix when I used it).
* Ft_lstfindi : If found in the list, return the index of the element, if not, return -1
* Les autres à voir [...]

## Tree

I made some functions to create, use and clear a black-red tree. It can take numerical or alphabetical index. (detaille plus ?).

## IO
```
void	exit_error(char *msg, int code)
```
We had a lot of discussion at school on how much we should free. 
Some thinks that we should free everything, and others that we should only free what we'll loss and let the OS take care of the rest.
I'm with the second team, but I did some team project (like Corewar), where I followed my collegues on their "free everything" way. 
I find it to be a big hassle without need, so I implemented my way of doing this in my Libft.
This is why, wherever there can be a malloc error of something of the sort, I use Exit_error, which directly output an error and exit the program on the spot. 
(----> mieux expliquer et rajouter errno).

## Misc

### Ft_atoi_harsh
```
long long	ft_atoi_harsh(char *str, int accept_neg, int return_value, int is_int)
```

I find that atoi does not have enough option, so I coded my version, which can be harsher and more precise. 
It return long long, but we can force it to return an error if we overpass the int.
It can accept or refuse negative number and we can set the return value we want for when an error occurs.

### Itoa_base (a changer)


