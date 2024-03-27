#include<stdio.h>




int main (void){
	int x=5;
	
	if (x==5)                      // if(x==5){}
	printf("YES ");
	printf(" OK");
	
}



// trick (1)
/*
int main (void){
	int x=4;
	
	if(x=5){printf("YES");}
	
	
}
*/



// trick (2)
/*
int main (void){
	int x=4;
	
	if (x==5);
	printf("YES");	
}
	
*/


// trick (3)
/*
int main (void){
	int x=4;
	
	if (x==5)
	printf("YES ");
	printf(" OK");
	
}


*/