#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j;
    scanf("%d", &t);
    char str[50];
    for( i=0; i<t; i++){
        int count = 0;
        scanf("%s", str);
        for( j=0; j<strlen(str); j++){
            if(str[j]=='('){
                count++;
            }else{
                count--;
            }
            if(count<0){
                printf("NO\n");
                break;
            }
        }
        if(count==0){
            printf("YES\n");
        }else if(count > 0){
            printf("NO\n");
        }
    }
    return 0;
}
