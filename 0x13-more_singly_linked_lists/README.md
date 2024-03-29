# 0x13. C - More singly linked lists
## Notes
In creating a singly linked list DS, the actual name is used in declaration, for example for SLL:

```c
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
```
Below is used to create a new node:
```c
struct listint_s *new = (listint_s *)malloc(sizeof(struct listint_s));
```

or an alias from the struct i.e created using typedef keyword, in this case listint_t:

	listint_t *new = (listint_s *)malloc(sizeof(struct listint_s));

function prototype: ```
listint_t *add_nodeint(listint_t **head, const int n);```

takes in pointer to pointer of head for correct head address derefrencing:

```
listint_t *head;

add_nodeint(&head, 4);
```
&head gives pointer to pointer of head node of SLL.

## Links

## Tasks
