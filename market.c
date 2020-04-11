#include "manager.h"

int main(){
Product p[100];
int current = 0;
int count = 0, menu;
count = loadproduct(p);
current = count;
while (1){
menu = selectMenu();
if (menu == 0) break;
if (menu == 1 || menu == 3 || menu == 4){
if (count == 0) continue;}
if (menu == 1) {
#ifdef DEBUG
printf ("debug[market.c] : call listproduct()\n");
#endif
if (count>0){
listproduct(p,current);
continue;
}
else 
printf ("데이터가 없습니다!\n");
}
else if (menu == 2){
#ifdef DEBUG
printf ("debug[market.c] : call addproduct()\n");
#endif
count += addproduct(&p[current++]);
continue;
}
else if (menu == 3) {
#ifdef DEBUG
printf ("debug[market.c] : call updateproduct()\n");
#endif
int no = selectdatano(p , current);
if (no == 0){
printf("=> 취소됨!"); continue;
}
updateproduct(&p[no-1]);
continue;
}
else if (menu == 4) {
#ifdef DEBUG
printf ("debug[market.c] : call deleteproduct()\n");
#endif
int no = selectdatano(p , current);
if (no == 0){
printf ("=> 취소됨!"); continue;
}
int delete;
printf ("정말로 삭제하시겠습니까?(삭제 :1)");
scanf ("%d", &delete);
if (delete == 1) 
if (deleteproduct(&p[no-1])) count --;
continue;
}
else if (menu==5){
#ifdef DEBUG
printf ("debug[market.c] : call saveproduct()\n");
#endif
if (count==0)
printf ("데이터가 없습니다!\n");
else
saveproduct(p,current);
}
else if (menu==6){
#ifdef DEBUG
printf ("debug[market.c] : call searchname()\n");
#endif
searchname(p,current);}
}
printf("종료됨!\n");
return 0;
}
