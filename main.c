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
		printf("a�� %d��° ���� %d, b�� %d�� ° ���� %d �Դϴ�.", i, a[i], i, b[i]);
		flag_same = 0;}
 }
 
 if(flag_same == 1)
	printf("�迭�� ���� ���� �����ϴ�.\n"); 
    
    /*if(a==b)
		  printf("�迭�� ���� ���� �����ϴ�.\n");
		else
		  printf("�迭�� �ٸ� ���� �����ϴ�.\n"); */

 system("PAUSE");	
 return 0;
}
