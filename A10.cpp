/* 
�D�ئW��:�@�~10
�s�@:�f�a�� 
�ק�/�������:2019/4/7
*/

#include<stdio.h>
#include<stdlib.h>
void Factorization(int);
int main(void){
	int input_num;
	int divisor; //�Q����
	printf("�п�J�Ʀr:");
	scanf(" %d",&input_num);
	
	Factorization(input_num);
	
	return 0;
	system("pause");
}
void Factorization(int input_num){
	int divisor=2; //�Q���� 
	while(input_num/divisor>=1){  //�]������
	 
		if(input_num%divisor==0){
			
			if(input_num/divisor==1){
				printf("%d",divisor);
				break;
			}
			
			input_num/=divisor;
			printf("%d*",divisor);
			
		}
		
		else{    //����㰣�Q����+1 
			divisor+=1;
		}
		
	}
}
