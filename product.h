#include <stdio.h> 
#include <string.h> 
typedef struct{
    char name[20]; 
    int mass; 
    int price;
    float ppt;
    int star; 
} Product;

int addproduct(Product *p); 
void readproduct(Product p); 
int updateproduct(Product *p); 
int deleteproduct(Product *p); 
int selectMenu(); 
