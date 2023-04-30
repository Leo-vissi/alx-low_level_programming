************************************** 0x12. C - Singly linked lists ************************************

                         For this project, we expect you to look at this concept:

                                 - Data Structures
info to tasks project :
0. Print list.
     -Prototype: size_t print_list(const list_t *h);
     -Return: the number of nodes
     -Format: see example
     -If str is NULL, print [0] (nil)
     -You are allowed to use printf
1. List length.
     -Prototype: size_t list_len(const list_t *h);
2. Add node.
     -Prototype: list_t *add_node(list_t **head, const char *str);
     -Return: the address of the new element, or NULL if it failed
     -str needs to be duplicated
     -You are allowed to use strdup
3. Add node at the end.
     -Prototype: list_t *add_node_end(list_t **head, const char *str);
     -Return: the address of the new element, or NULL if it failed
     -str needs to be duplicated
     -You are allowed to use strdup
4. Free list.
     -Prototype: void free_list(list_t *head);
5. this party to tasks advanced (100; 101).
                              **********************************************
