#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Arama islemini yapacak fonksiyon
int LineerSearch(int *arr,int ElemanSayisi,int AranacakEleman){
	
	int i;
	int sonuc;
	
	for(i=0;i<ElemanSayisi;i++){
		
		if(arr[i]==AranacakEleman)
			return 1;
	}	
	return 0;
}

int main(int argc, char *argv[]) {
		
		// Tanimlamalar
		int ElemanSayisi,AranacakSayi;
		int *dizi;
		int i,sonuc;
		
		// Dizi olusturulur
		printf("dizinin boyutunu gir: ");
		scanf("%d",&ElemanSayisi);
		dizi= (int *)malloc(sizeof(int)*ElemanSayisi);
		
		// Dizinin elemanlari verilir
		printf("\n");
		for(i=0;i<ElemanSayisi;i++){
			
			printf("%d. elemani giriniz: ",i+1);
			scanf("%d",&dizi[i]);
		}
		
		// Aranacak sayi alinir
		printf("\nAranacak sayiyi giriniz: ");
		scanf("%d",&AranacakSayi);
		
		// Fonksiyon cagrilir ve arama sonucu yazilir
		sonuc= LineerSearch(dizi,ElemanSayisi,AranacakSayi);
		 
		if(sonuc==1)
			printf("\nAradiginiz eleman dizide var.");
		
		else
			printf("\nAradiginiz eleman dizide yok.");
		
		free(dizi);
	return 0;
}
