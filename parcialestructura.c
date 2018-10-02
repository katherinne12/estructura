//parcial repestido luis alberto Lopez Hernandez

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//declaracion de variables
	int fil=0;
	int colum=0;
	int i =0;
	int J =0;

	
	
	//tamaño de las matrices
	int matrizB[fil][colum];
	int matrizA[fil][colum];
	 
    printf("Introduzca un numero  para las filas de A: ");
    scanf("%d", &fil);
    printf("Introduzca un numero  pra las columnas de A: ");
    scanf("%d", &colum);
     
    printf("Introduzca un numero  para las filas de B: ");
    scanf("%d", &fil);
    printf("Introduzca un numero  para las columnas de B: ");
    scanf("%d", &colum);
    
    //ingresando los valores a las matrices
    printf("\n\n Ingrese valores a la MATRIZ A \n");
 
    for (int i=0;i<fil;i++)
    {
        for (int j=0;j<colum;j++)
        {
          
            scanf("%d", &matrizA[i][j]);
        }
      printf("\n\n");
    }
       
    printf("\n\n Ingrese valores a la MATRIZ B \n");
 
    for (int i=0;i<fil;i++)
    {
        for (int j=0;j<colum;j++)
        {
          
            scanf("%d", &matrizB[i][j]);
        }
      printf("\n\n");
    } 
    
     
         }
    
    





 
  
  
