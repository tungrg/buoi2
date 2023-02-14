//
//  main.c
//  DemoLinkedList
//
//  Created by TungDT on 7/10/20.
//  Copyright © 2020 macOne. All rights reserved.
//
 
#include <stdio.h>
#include "linked_list.h"
 
int main(int argc, const char * argv[]) {
	
	node* list = NULL;
	int lenh;
    system("clear");
    do {
        run_func(&lenh, &list);
    } while (lenh != 5);
    
    return 0;
//    node* list = NULL;
//    add_head(&list, 1);
//    add_head(&list, 2);
//    add_head(&list, 3);
//    add_head(&list, 4);
// 
//    print_list(list);
// 
//    remove_head(&list);
//    print_list(list);
// 
//    clear_list(&list);
//    print_list(list);
// 
//    return 0;
}
