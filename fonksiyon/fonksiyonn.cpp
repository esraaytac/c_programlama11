#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 10 adet sayý girildiðinde 10 elemanlý 4lük matris

void dizi(int matris[][4], int size){
	
int i, j ;

for (i= 0; i <size; i ++){
	
		for (j= 0; j<4; j++){
			
			printf("%d ", matris[i][j]);
			
		}
		printf("\n");
}



		
	
	
	
	
}











int main() {
	
	int matrisler[3][4];
	int i, j ;
	
	printf("sayilari giriniz:");
	
	for (i= 0; i <3; i ++){
	
		for (j= 0; j<4; j++){
			
			scanf("%d", &matrisler[i][j]);
		}
} 
	
	dizi (matrisler,3);
	
	
	return 0;
}
