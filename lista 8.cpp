#include <stdio.h>

int main(){
	int x;
	
	scanf("%d",&x);
	inv(x);
	
}
int inv(int n){
	
	if(n==1)
	return n/10*10;
	else
	return inv(n/10);
	

}
