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

void saveproduct(Product *p, int count){
        FILE *fp;
        fp = fopen("product.txt","wt");
        for (int i =0; i<count; i++){
        if(p[i].price != -1)
        fprintf(fp,"%d %d %f %d %s\n", p[i].price,p[i].mass,p[i].ppt,p[i].star, p[i].name);
}
        fclose(fp);
        printf("저장됨!!\n");
}

