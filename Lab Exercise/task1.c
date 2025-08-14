#include<stdio.h>
int main(){
	int whether;
	printf("\n enter the number:");
	scanf("%d", &whether);
	
	if(whether >= 10){
		goto HeavyRainfall;
	} else{
		goto Rainfall;
	} 
	
	HeavyRainfall:{
	printf("\n %d is HeavyRainfall",whether);
	return;
	} 
	Rainfall:{
	printf("\n %d is Rainfall", whether);
	return;
	}
}
