#include <stdio.h>
int main(){
    int a;
    int sum=0;
    int count=0;
    while(1){
	printf("Enter number");
	scanf("%d",&a);
	if(a==0){
		break;
	}
	sum=sum+a;
	count++;
		

    }
    printf("sum = %d avg = %d\n",sum,sum/count);
    
    return 0;
    





}
