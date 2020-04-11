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
int loadproduct(Product *p){
    FILE *fp;
int count = 0;
    fp = fopen("product.txt","rt");
    if (fp == NULL){
        printf("=> 파일없음!!\n");
        return 0;
    }
    for(; ; count++){
        fscanf(fp,"%d %d %f %d %[^\n]", &p[count].price , &p[count].mass, &p[count].ppt,&p[count].star,p[count].name);
        if (feof(fp)) break;
    }
    fclose(fp);
    printf ("=>로딩 성공!\n");
    return count;
}
void searchname(Product *p, int count){
    int scount = 0;
    char search[20];
    printf("검색할 이름은? ");
    scanf("\n %[^\n]", search);
    for (int i=0; i<count; i++){
        if(p[i].price != -1){
            if (strstr(p[i].name, search)){
                printf("%d. ",i+1);
readproduct(p[i]);
                scount++;
            }
        }
    }
    if(scount == 0)printf("=> 검색된 데이터 없음!");
    printf("\n");
}
void searchprice(Product *p, int count){
    int scount = 0;
    int search;
    printf("원하는 가격은? ");
    scanf("\n %d", &search);
    for (int i=0; i<count; i++){
        if(p[i].price != -1){
            if (p[i].price ==  search){
                printf("%d. ",i+1);
                readproduct(p[i]);
                scount++;
            }
        }
    }
    if(scount == 0)printf("=> 검색된 데이터 없음!");
    printf("\n");
}
void searchstar(Product *p, int count){
    int scount = 0;
    int star;
    printf("원하는 별점은? ");
    scanf("\n %d", &star);
    for (int i=0; i<count; i++){
        if(p[i].price != -1){
if (p[i].star ==  star){
                printf("%d. ",i+1);
                readproduct(p[i]);
                scount++;
            }
        }
    }
    if(scount == 0)printf("=> 검색된 데이터 없음!");
    printf("\n");
}

int chooseby(){
int choose;
printf("1.이름 , 2.가격 , 3.별점, 0.취소\n");
printf("어떤 방법으로 검색하시겠습니까? ");
scanf ("%d" , &choose);
return choose;
}

