#include <stdio.h>

struct Product {
    int pro_id;
    char pro_name[30];
    float pro_price;
    int pro_qty;
    float pro_discount;
};

int main() {
    int N;

    printf("Enter the number of products: ");
    scanf("%d", &N);

    struct Product products[N];
	int i;
    for (i = 0; i < N; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        printf("Product ID: ");
        scanf("%d", &products[i].pro_id);
        printf("Product Name: ");
        scanf("%s", products[i].pro_name);
        printf("Product Price: ");
        scanf("%f", &products[i].pro_price);
        printf("Product Quantity: ");
        scanf("%d", &products[i].pro_qty);
        printf("Product Discount: ");
        scanf("%f", &products[i].pro_discount);
    }
}

    

