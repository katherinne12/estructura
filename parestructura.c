




   
   
    #include<stdio.h>
    
    int main {
        
        double [][]A = {{1,2,6,0,3},{4,5,7,8,3},{1,10,8.3,2},{8,7,9,5,4}};
        double maximofilas[]={-999,-999,-999,-999};
                double minimocolumnas []={999,999,999,999,999};
                
                int i ,j ;
                
                for (i=0; i<4; i++){
                for (j=0; j<5; j++){
                    
                    if ( A [i][j]> maximofilas [i])
                        maximofilas[i]= A[i][j];
                    
                    if ( A [i][j]<minimocolumnas [j])
                        minimocolumnas[j]= A[i][j];
                }
                   
                } 
                for (i=0; i<4; i++){
                for (j=0; j<5; j++){ 
                    
                    if (maximofilas[i] == minimocolumnas[j])
                       printf("punto de silla en:"+i+","+j);
                    
                }
                }
    } 
    
}
