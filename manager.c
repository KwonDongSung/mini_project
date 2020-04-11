#include "manager.h"
void listproduct(Product *p, int count){
for (int i = 0 ; i<count ; i++){
	if(p[i].price == -1) continue;
        printf("%d. ", i+1);
        readproduct(p[i]);
	printf("\n");
}
printf ("\n");
}


int selectdatano(Product *p, int count){
int num ; 
listproduct(p, count);
printf ("번호는 (취소:0)?");
scanf("%d" ,&num);
return num;
