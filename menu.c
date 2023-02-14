#include "menu.h"
#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>



void print_menu_main(int* lenh) {
	int index;
	printf("Menu:\n");
    printf("  1.Them mot san pham\n");
    printf("  2.Xoa mot san pham\n");
    printf("  3.Sua so luong ton kho cua mot san pham\n");
    printf("  4.Tim kiem mot san pham\n");
    printf("  5.In danh sach san pham\n");
    printf("  6.Thoat\n");
    printf("Vui long chon lenh: ");
    scanf("%d", &index);
    *lenh = index;
}

void print_menu_add(node** head) {
    Data temp;
	printf("1.Nhap ma san pham: ");
    scanf("%9s", temp.id);
    printf("2.Nhap ten san pham: ");
    scanf("%29s",temp.name);
    printf("3.Nhap gia ban: ");
    scanf("%d", &temp.price);
    printf("4.Nhap so luong hang ton kho: ");
    scanf("%d",&temp.stock);
    node* param_node = create_node(temp);
    add(head, temp);
}

node* print_menu_find_by_id(node* const head) {
    char id [10];
    printf("Nhap ma san pham muon xoa: ");
    scanf("%s", &id);
    return find_by_id(head, id);
}

void print_menu_delete(node** head) {
    node* node_to_delete = print_menu_find_by_id(*head);
    if (node_to_delete != NULL) {
        remove_node(head, node_to_delete);
    }
    else {
        printf("Ma san pham khong ton tai trong danh sach san pham\n");
        system("pause");
    }
}


void print_menu_edit_stock(node* head) {
    node* node_to_delete = print_menu_find_by_id(head);
    if (node_to_delete != NULL) {
        int stock;
        printf("Nhap so luong hang ton kho: ");
        scanf("%d", &stock);
        node_to_delete->data.stock = stock;
    } else {
        printf("Ma san pham khong ton tai trong danh sach san pham\n");
        system("pause");
    }
}



void print_menu_search_by_price(node* head) {
    int search_price;
    printf("Nhap gia san pham can tim: ");
    scanf("%d", &search_price);
    node* result = find_by_price(head, search_price);
    if (result->prev == NULL) {
        printf("Khong co can duoi.\n");
    } else {
        print_product_info(result->prev);
    }
    print_product_info(result);
    if (result->next == NULL) {
        printf("Khong co can tren.\n");
    } else {
        print_product_info(result->next);
    }
}


void print_menu_show_list(node* head) {
    int lenh;
    printf("Nhap 1 neu muon in san pham theo gia tang dan.\nNhap 0 neu muon in san pham theo gia giam dan.\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d",&lenh);
    print_list_recursive(head,lenh);
}