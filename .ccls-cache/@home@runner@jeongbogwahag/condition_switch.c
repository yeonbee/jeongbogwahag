#include <stdio.h> 

main(){
int o;
printf("당신이 좋아하는 과일은 무엇인가요? 아래의 번호를 선택해주세요.\n");
printf("사과=1, 딸기=2, 복숭아=3, 포도=4, 모두 좋아하지 않는다=0\n");
printf("선택한 번호를 입력해주세요: ");
  scanf("%d", &o);
switch(o){
case 1:
  printf("사과를 좋아하는군요!\n");
  break;
case 2:
  printf("딸기를 좋아하는군요!\n");
  break;
case 3:
  printf("복숭아를 좋아하는군요!\n");
  break;
case 4:
  printf("포도를 좋아하는군요!\n");
  break;
default:
  printf("당신은 아마도 과일을 좋아하지 않는 것 같군요!\n");
}}