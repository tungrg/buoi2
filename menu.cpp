#include "menu.h"

void print_menu_main() {
	printf("Menu:\n");
    printf("  1.Them mot san pham\n");
    printf("  2.Xoa mot san pham\n");
    printf("  3.Sua so luong ton kho cua mot san pham\n");
    printf("  4.Tim kiem mot san pham\n");
    printf("  5.In danh sach san pham.\n");
    printf("Vui long chon lenh: ");
}

void print_menu_add() {
	printf("1.Nhap ma san pham: ");
    scanf("%19s", arg.name);
    printf("2.Nhap ten san pham : ");
    scanf("%d",&arg.birth_year);
    printf("3.Nhap gia ban: ");
    scanf("%f",&arg.gpa);
    printf("4. Nhap so luong hang ton kho: ");
    
    list_student[list_student_size++] = arg;
    getchar();
    return;
}

void print_product_info(node* arg) {
	printf(" - Ma san pham: %s\n", head.data.id);
	printf(" - Ten san pham: %s\n", head.data.name);
	printf(" - Gia ban: %d\n", head.data.price);
	printf(" - So luong ton kho: %d\n", head.data.stock);
}

void
