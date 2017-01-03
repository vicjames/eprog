#include<stdio.h>
int main(){
	int i=232000000;
	int num=0;
	while(i<232000000){
	        i++;
			if (i%2 == 0 && i%3 == 0 && i%5 == 0 && i%11 == 0 && i%12 == 0 && i%13 == 0 && i%14 == 0 && i%15 == 0 && i%16 == 0 && i%17 == 0 && i%18 == 0 && i%19 == 0){
				num=num+1;
			}	
	   } 
		printf("%d",num);				
}
