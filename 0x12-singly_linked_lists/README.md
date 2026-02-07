# 0x12. C - Singly Linked Lists

## Author
Okoye Chijioke Henry  
WinMingle Community C Training

---

## 📚 Project Description
This project introduces the concept of **singly linked lists** in C.

We learn:

- When and why to use linked lists vs arrays
- How to create nodes dynamically using malloc
- How to insert nodes at beginning and end
- How to traverse and print a list
- How to free allocated memory properly
- How constructors work in C
- Basic 64-bit assembly with NASM

---

## 🧠 Data Structure Used
```c
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

