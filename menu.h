#ifndef menu_h
#define menu_h
#define _CRT_SECURE_NO_WARNINGS

#include "linked_list.h"

void print_menu_main(int* lenh);
void print_menu_add(node** head);
node* print_menu_find_by_id(node* const head);
void print_menu_delete(node** head);
void print_menu_edit_stock(node* head);
void print_menu_search_by_price(node* head);
void print_menu_show_list(node* head);
#endif /* linked_list_h */