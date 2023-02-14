//
//  main.c
//  DemoLinkedList
//
//  Created by TungDT on 7/10/20.
//  Copyright � 2020 macOne. All rights reserved.
//
 
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "menu.h"

int main(int argc, const char * argv[]) {
	
	node* list = NULL;
	int lenh;
    
    do {
        //system("cls");
        print_menu_main(&lenh);
        switch (lenh)
        {
        case 1:
            print_menu_add(&list);
            break;
        case 2:
            print_menu_delete(&list);
            break;
        case 3:
            print_menu_edit_stock(list);
        case 4:
            print_menu_search_by_price(list);
        case 5:
            print_menu_show_list(list);
        default:
            break;
        }
    } while (lenh != 6);
    
    return 0;
}
