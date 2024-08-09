#include<stdio.h>

int main(){
	int n,box=0;
	scanf("%d",&n);
	
	box=n/5;
	if(n%5 != 0){
		for(;box>=0;box--){
			if( (n-5*box)%3 == 0){
				box+=(n-5*box)/3;
				break;
			}
		}
	}
	printf("%d",box);
	return 0;
}