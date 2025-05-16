#include<stdio.h>
char s[1000005];
int main(){
	int a=0,i=0,t=0;
    int n;
    scanf("%d",&n);
	scanf("%s",s);
	while(s[i]=='F'){
		i++;
	}
	for(;i<n;i++){
		if(s[i]=='M')t++;
		else a=a+1>t?a+1:t;
	}
	printf("%d",a);
}