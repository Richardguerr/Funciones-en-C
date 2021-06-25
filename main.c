#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int iscousing(int);
void concambios(int*,int*);

void sincambio(int numOne, int numtwo){
	numOne = numOne*numtwo;
	numtwo = pow(numtwo , 2);
	
	printf("Internamente numOne = %d numTwo=%d \n", numOne,numtwo);
}

int main() {
	
	int numone,numtwo;
	
	printf("Digite el numero uno: ");
	scanf("%d", &numone);
	
	printf("Digite el numero dos: ");
	scanf("%d", &numtwo);
	
	printf("El numero %d  %s", numone , iscousing(numone)? "es primo \n":"no es primo \n" );
	
	printf("El MCD de %d y %d es: %d \n" , numone,numtwo,calcMCD( numone < numtwo ? numone : numtwo , numone > numtwo ? numone : numtwo ));

	sincambio(numone,numtwo);
	printf("Externamente sin cambios numOne= %d , numTwo=%d \n" ,numone,numtwo);
	
	concambios(&numone,&numtwo);
	printf("Externamente con cambios numOne= %d  numTwo=%d \n" ,numone,numtwo);
	
	return 0;
}

void concambios(int *numuno , int *numdos){
	
	*numuno = *numuno * *numdos;
	*numdos = pow(*numdos,2);
	
	printf("Internamente numOne = %d numTwo=%d \n", *numuno,*numdos);
}

int iscousing (int num){
	
	int cousing = 1;
	int con = 2;
	while(con <= num/2 && cousing){
		cousing=!(num % con++ ==0);
	}
	
	return cousing;
}

int calcMCD(int div,int divz){
	
	if(div % divz ==0){

			return divz;
	}

	
	return calcMCD(divz, div%divz);
}


