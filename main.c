#include <stdio.h>

int numentrada;
char letraentrada;
char letradesplazada;

void leerdata(int desplazamiento, char letra) {
	
	printf("Intoduzca la letra a desplazar: \n");
	scanf("%c", &letra);
	printf("Intoduzca el desplazamiento: \n");
	scanf("%d", &desplazamiento);
}


char desplazarletra(int desplazamiento, char letra) {
	letradesplazada = letraentrada + desplazamiento;

	return letradesplazada;
}



int main() {
	
	leerdata(numentrada, letraentrada);
	desplazarletra(numentrada,letraentrada);
	printf("%c",letradesplazada);

	return 0;
	
}

