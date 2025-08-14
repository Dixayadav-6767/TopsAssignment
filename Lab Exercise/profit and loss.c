#include<stdio.h>
int main() {
	float cp, sp, profit, loss, percent;
	
	printf("enter a cp:");
	scanf("%f", &cp);
	
	printf("enter a sp:");
	scanf("%f", &sp);
	
	
	profit = (sp-cp) > 0 ? (sp-cp) : 0;
	loss = (cp-sp) > 0 ? (cp-sp) : 0;
	
	percent = (profit > 0) ? (profit / cp * 100) :
	        (loss > 0) ? (loss / cp * 100) : 0;
	        
 	(profit > 0) ? printf("profit = %.2f\nprofit percentage = %.2f%%\n", profit, percent): 
	(loss > 0) ? printf("loss = %.2f\nloss percentage = %.2f%%\n", loss, percent): printf("No profit or No loss\n");
	
	
	
}
