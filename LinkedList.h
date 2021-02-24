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

// **************************************************
//  # Author: Bonnel Maxime
//  # Modified time: 2021-02-24 14:05:46
//  # Description: Initialisation of a new linked list
// **************************************************
struct linkedList * newLinkedList();

// **************************************************
//  # Author: Bonnel Maxime
//  # Modified time: 2021-02-24 14:05:46
//  # Description: Creation of a new link
// **************************************************
struct link * newLink(int data);

// **************************************************
//  # Author: Bonnel Maxime
//  # Modified time: 2021-02-24 14:05:46
//  # Description: Simple function to display a linked list
// **************************************************
int displayLinkedList(struct linkedList * LinkedList);

// **************************************************
//  # Author: Bonnel Maxime
//  # Modified time: 2021-02-24 14:05:46
//  # Description: Function to add a link at the end of the linked list
// **************************************************
int addLink(struct linkedList * LinkedList, struct link * Link);

// **************************************************
//  # Author: Bonnel Maxime
//  # Modified time: 2021-02-24 14:05:46
//  # Description: Function to remove a link in a linked list
// **************************************************
int rmlink(struct linkedList * LinkedList, struct link * Link);

// **************************************************
//  # Author: Bonnel Maxime
//  # Modified time: 2021-02-24 14:05:46
//  # Description: Function to switch two following link in the linked list
// **************************************************
int switchLink(struct linkedList * LinkedList, struct link * fLink, struct link * sLink);