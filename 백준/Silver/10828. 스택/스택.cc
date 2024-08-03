#include<stdio.h>
#include<string.h>
int stack[100001];
int count=0;

void Push(int n){
	stack[count]=n;
	count++;
}

void Pop(){
	if(count != 0){
		count--;
		printf("%d\n",stack[count]);
		stack[count]=0;
	} else{
		printf("-1\n");
	}
}

void Top(){
	if(count != 0){
		printf("%d\n",stack[count-1]);
	} else{
		printf("-1\n");
	}
}

void Empty(){
	if(count != 0){
		printf("0\n");
	} else{
		printf("1\n");
	}
}

void Size(){
	printf("%d\n",count);
}

int main(){
	int stackSize,i,n;
	char command[10];
	scanf("%d",&stackSize);
	int stack[stackSize];
	
	for(i=0;i<stackSize;i++){
		scanf("%s",command);
		if(!strcmp(command,"push")){
			scanf("%d",&n);
			Push(n);
		}else if(!strcmp(command,"top")){
			Top();
		}else if(!strcmp(command,"size")){
			Size();
		}else if(!strcmp(command,"empty")){
			Empty();
		}else{
			Pop();
		}
	}
	return 0;
}