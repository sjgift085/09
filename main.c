#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(int argc, char *argv[])
{
 int i;
 int a[SIZE] = {1,2,3,4,5};
 int b[SIZE] = {1,2,3,4,5};
 int flag_same = 1;

 for(i=0; i<SIZE; i++){
  if(a[i] != b[i]){
		printf("a의 %d번째 값은 %d, b의 %d번 째 값은 %d 입니다.", i, a[i], i, b[i]);
		flag_same = 0;}
 }
 
 if(flag_same == 1)
	printf("배열은 같은 값을 가집니다.\n"); 
    
    /*if(a==b)
		  printf("배열은 같은 값을 가집니다.\n");
		else
		  printf("배열은 다른 값을 가집니다.\n"); */

 system("PAUSE");	
 return 0;
}
