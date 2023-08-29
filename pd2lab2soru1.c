#include <stdio.h>
#include <stdlib.h>

/* klavyeden ogrenci sayýsý (en fazla 100) ve ders gecme notunu alarak bu bilgileri tanýmlanacak "hesapla" fonksiyonuna gonderen bir "main"
fonksiyonu hazýrlayýnýz."hesapla"  fonksiyonu kendisine gelen ogrenci sayýsý kadar notu klavyeden okuyarak 100 elemanlý bir diziye kaydetmeli ve gecme notuna 
gore kac tane ogrencinin dersten kaldýgýný bularak fonksiyondan geri dondururken sýnýf ortalamasýný da ekrana yazdýrmalýdýr. */


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
