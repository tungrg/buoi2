//
//  linked_list.c
//  DemoLinkedList
//
//  Created by TungDT on 7/10/20.
//  Copyright © 2020 macOne. All rights reserved.
//
 
#include "linked_list.h"
#include "menu.h"
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
 
node* create_node(const Data data)
{
    node *n = (node*) malloc(sizeof(node));
    n->data = data;
    n->next = NULL;
    n->prev = NULL;
    return n;
}
int is_empty(node* const head)
{
    return head == NULL;
}
 
void add(node **head, const Data data)
{
    node *n = create_node(data);
    if (is_empty(*head)) {
    	*head = n;
	} else {
		node** iter = head;
		while(*iter.next != NULL && *iter.data.price < data.price) {
			iter = iter.next;
		}
        insert_after(iter, n);
    }
}


void insert_after(node** prev, node* new_node) {
	new_node->next = prev->next;
	prev->next = new_node;
	new_node->prev = prev;
	if (new_node->next != NULL) {
		new_node->next->prev = new_node;
	}
}

void remove_node (node** head, node* target) {
	if(*head == NULL || target == NULL) {
		return;
	}
	if(*head == target) {
		*head = target.next;
	}
	if (target.next != NULL) {
		target.next.prev = target.prev;
	}
	if(target.prev != NULL) {
		target.prev.next = target.next;
	}
	free(target);
}

node* find_by_id(node* const head, char[] id) {
	node* p = head;
	while(p!= null) {
		if (!strcmp(p.data.id,id)) {
			return p;
		}
		head = p.next;
	}
}

node* find_by_price(node* const head, int price) {
	node* p = head;
	while(p != NULL) {
		if (p.data.price < price) {
			if (abs(p.prev.data.price - price) < abs(p.prev.data.price - price)){
				return p.prev;
			}
			return p;
		}
		p = p.next;
	}
}

void print_list_recursive(node* head, bool increasing) {
	if (is_empty(head)) {
		return;
	}
	if (increasing) {
		print_product_info(node* head);		
	}
	print_list_recursive(head.next)
	if (!increasing) {
		print_product_info(node* head);		
	}
}

 
void clear_list(node **head)
{
    if (is_empty(*head)) return;
    while (*head != NULL)
    {
        node *p = *head;
        *head = p->next;
        free(p);
    }
}
