# Doubly Linked List Implementation

This repository contains code for implementing a doubly linked list in C. A doubly linked list is a type of linked list in which each node contains a data part and two pointers to the next and previous nodes in the sequence.

## Implemented Functions

1. **Create List**: Initializes a new doubly linked list.
2. **Append**: Adds a new node to the end of the list.
3. **Remove Last**: Removes the last node from the list.


## Testing with Ceedling
This project uses Ceedling for unit testing C code. To make the setup easier, we use a Docker container that includes all the necessary tools and dependencies.

## Prerequisites
Make sure you have Docker installed on your system. You can download it from here.

### Running Tests

```bash
// clone the repository
// into the directory
// If you are in ./Linked_List/
docker run -it --rm -v ${pwd}/Linked_List:/home/dev/project throwtheswitch/madsciencelab

```
