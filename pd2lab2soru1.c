#include <stdio.h>
#include <stdlib.h>

/* klavyeden ogrenci say�s� (en fazla 100) ve ders gecme notunu alarak bu bilgileri tan�mlanacak "hesapla" fonksiyonuna gonderen bir "main"
fonksiyonu haz�rlay�n�z."hesapla"  fonksiyonu kendisine gelen ogrenci say�s� kadar notu klavyeden okuyarak 100 elemanl� bir diziye kaydetmeli ve gecme notuna 
gore kac tane ogrencinin dersten kald�g�n� bularak fonksiyondan geri dondururken s�n�f ortalamas�n� da ekrana yazd�rmal�d�r. */


 int hesapla(int  ogrsay,int  gecmenot){
 	int gecenogr=0, toplam=0 ;
 int dizi[100];		
int i;
 for(i=1;i<=ogrsay;i++){
 printf("%d. ogrenci notunu giriniz",i);	
 scanf("%d",&dizi[i]);	
 if(gecmenot<=dizi[i]){
 	
 gecenogr++	;
 toplam+=dizi[i];
 }
 	
 }	
 printf(" sinif ortalamasi %d ",toplam/ogrsay);	
 	return gecenogr;
 }
int main() {
int   ogrsay,gecmenot,ogrnot;
printf("ogrenci sayisi giriniz");	
	scanf("%d",&ogrsay);	
if(ogrsay>100 && ogrsay<=0){
printf("yanlissss");

}
else {


printf ("gecme notu giriniz");	
	scanf("%d",&gecmenot);

int gecen=hesapla(ogrsay,gecmenot);
	
printf("kalan ogrenci sayisi %d",ogrsay-gecen);	

	
}		
	return 0;
}
