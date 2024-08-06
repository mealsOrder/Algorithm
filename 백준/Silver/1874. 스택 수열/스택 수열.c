#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100000
char res[SIZE*2];
int stack[SIZE];
int top=-1;

int main(){
	int n,i,num=1,idx=0,res_idx=0;
	scanf("%d",&n);
	int *arr=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	while(1){
		if(top==-1||stack[top]<arr[idx]){
			stack[++top]=num++;
			res[res_idx++]='+';
		}
		else if(stack[top]==arr[idx]){
			top--;
			res[res_idx++]='-';
			idx++;
		}
		else{
			printf("NO\n");
			return 0;
		}
		if(res_idx==n*2)break;
	}
	for(i=0;i<res_idx;i++){
		printf("%c\n",res[i]);
	}
	free(arr);
	return 0;
}