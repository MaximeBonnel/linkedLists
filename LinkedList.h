// ---- Structures ----
typedef struct link {
    int data;
    struct link * nextLink;
} Link;

typedef struct linkedList {
    struct link * head;
    int size;
    struct link * tail;
} LinkedList;

// ---- Functions ----

struct linkedList * newLinkedList();

struct link * newLink(int data);

int displayLinkedList(struct linkedList * LinkedList);

int addLink(struct linkedList * LinkedList, struct link * Link);

int rmlink(struct linkedList * LinkedList, struct link * Link);

int switchLink(struct linkedList * LinkedList, struct link * fLink, struct link * sLink);