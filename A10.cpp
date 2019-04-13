/* 
題目名稱:作業10
製作:呂家明 
修改/完成日期:2019/4/7
*/

#include<stdio.h>
#include<stdlib.h>
void Factorization(int);
int main(void){
	int input_num;
	int divisor; //被除數
	printf("請輸入數字:");
	scanf(" %d",&input_num);
	
	Factorization(input_num);
	
	return 0;
	system("pause");
}
void Factorization(int input_num){
	int divisor=2; //被除數 
	while(input_num/divisor>=1){  //因式分解
	 
		if(input_num%divisor==0){
			
			if(input_num/divisor==1){
				printf("%d",divisor);
				break;
			}
			
			input_num/=divisor;
			printf("%d*",divisor);
			
		}
		
		else{    //不能整除被除數+1 
			divisor+=1;
		}
		
	}
}
