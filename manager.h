#include <stdio.h>
#include <string.h>
#include "product.h"

void listproduct(Product *p, int count);
int selectdatano(Product *p, int count);
void saveproduct(Product *p, int count);
int loadproduct(Product *p);
void searchname(Product *p, int count);
void searchprice(Product *p, int count);
void searchstar(Product *p, int count);
int chooseby();
