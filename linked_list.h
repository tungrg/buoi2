//
//  linked_list.h
//  DemoLinkedList
//
//  Created by TungDT on 7/10/20.
//  Copyright © 2020 macOne. All rights reserved.
//
 
#ifndef linked_list_h
#define linked_list_h
 
typedef struct str_node * link;
typedef struct Data {
	char id[10];
    char name[30];
    int price;
    int stock;
} Data;
typedef struct str_node
{
	Data data;
    link next;
    link prev;
} node;
 
 
node* create_node(const Data data);
int is_empty(node* const head);
void add(node **head, const Data data);
void remove_node (node** head, node* target);
void print_list_recursive(node* head, bool increasing)
void clear_list(node **head);
 
 
#endif /* linked_list_h */
