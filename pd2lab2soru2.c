#include <stdio.h>
#include <stdlib.h>

/* Boy ve kilo bilgisini alarak vücut kitle indeksini hesaplayan kitleIndeks isimli bir fonksiyon yazýnýz. Bu fonksiyon aþaðýda
verilen tabloya göre deðer döndürmektedir. Yazdýðýnýz fonksiyonu main fonksiyonunda çaðýrarak kullanýn ve bir
program yazýnýz. Programýn örnek çalýþmasý þekilde verildiði gibi olmalýdýr. Vücut kitle indeksi hesabý aþaðýda verilmiþtir*/


int kitleIndeks(float boy,float kilo){
	
 float vucutkitleindeks=kilo/boy*boy;	
	
if(vucutkitleindeks<=18 && vucutkitleindeks>0){
	
	return 1;
}	
	
else if(vucutkitleindeks>19 && vucutkitleindeks<25){
	return 2;
}	
	
	else if(vucutkitleindeks<30 && vucutkitleindeks>26){
		return 3;
	}
	
	else{
		return 4;
	}	
	
}








int main() {
float boyy,kiloo,vki;	
printf("boyunuzu giriniz");	
scanf("%f",&boyy);	
	
printf("kilonuzu giriniz");	
scanf("%f",&kiloo);	
vki=kitleIndeks(kiloo,boyy);	
if(vki==1){
	
	
	printf("zayif");
}	
	
else if(vki==2){
	printf("normal");
}	
	
	else if(vki==3){
		printf("kilolu");
	}
	
	else{
		printf("obez");
	}
	
	
	
	return 0;
}
