#include "product.h"

int selectMenu(){
int menu;
printf("\n메뉴를 선택하세요\n");
printf("1. 상품조회\n");
printf("2. 상품추가\n");
printf("3. 상품수정\n");
printf("4. 상품삭제\n");
printf("5. 파일저장\n");
printf("6. 상품검색\n");
printf("0. 종료\n\n");
printf("=> 원하는 메뉴는? ");
scanf("%d",&menu);
    return menu;
}

int addproduct(Product *p){
double ppt = 0;
printf("제품명: ");
scanf("\n %[^\n]",p->name);
getchar();
printf("무게: ");
scanf("%d",&p->mass);
getchar();
printf("가격: ");
scanf("%d",&p->price);
printf("별점: ");
scanf("%d",&p->star);
ppt =(double)p->price/p->mass * 10;
p->ppt = ppt;
printf("=> 추가됨!\n");
return 1;
}

void readproduct(Product p){
printf("\n%s %dg\n", p.name,p.mass);
printf("%d원\n",p.price);
printf("10g당: %.2f원\n",p.ppt);
for(int i=1;i<=p.star;i++){
printf("★");
}
printf("\n");
}

int updateproduct(Product *p){
double ppt = 0;
printf("제품명: ");
scanf("\n %[^\n]",p->name);
getchar();
printf("무게: ");
scanf("%d",&p->mass);
printf("가격: ");
scanf("%d",&p->price);
printf("별점: ");
scanf("%d",&p->star);
printf("=> 추가됨!\n");
ppt = (double)p->price/p->mass * 10;
p->ppt = ppt;
return 1;
}

int deleteproduct(Product *p){
p -> price = -1;
p -> mass = -1;
p -> ppt = -1;
p -> star = -1;
printf("=>삭제됨!!\n");
}

