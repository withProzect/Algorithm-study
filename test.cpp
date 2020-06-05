#include <stdio.h>

int main(){
int c,a,b;

scanf("%d",&c);
for(int i=0;i<c;i++){
	scanf("%d %d",&a,&b);
	printf("Case #%d: %d\n",i+1,a+b);
}
}
