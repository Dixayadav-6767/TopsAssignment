#include<stdio.h>
int main() {
	int cost_price, sell_price, profit, loss;
	printf("Enter the cost_price:");
	scanf("\n %d", &cost_price);
	
	printf("Enter the sell_price:");
	scanf("\n %d", &sell_price);
	
	profit = sell_price - cost_price;
	loss = cost_price - sell_price;
	
	if(sell_price > cost_price){
		printf("its is a profit and %d is the profit amount.",profit);
	} else { 
		printf("its is a loss and %d is the loss amount.",loss);
	}
}
