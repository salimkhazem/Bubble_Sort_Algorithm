#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h> 


void BubbleSort(int *array, int N ); // Definition of the Prototype of Bubble Sort function 
int main () {

int N =10;  
int intermediate=0;  
int Array[10]={4,-1,8 , 12, -6, 23, 2 , 28, 24, 33} ; 
printf("###### Array before Sort ########\n"); 
for (int i=0; i<N; ++i) {
    printf("%4d", Array[i]); 
}

BubbleSort(Array,N); 
printf("\n###### Array after Sort ########\n"); 

for (int i=0; i<N; ++i) {
    printf("%4d", Array[i]); 
}
printf("\n");


    return 0 ; 
}

void BubbleSort(int *array,int N) {
    int pass=0; 
    bool permutation = true ; 
    int current; 
    while (permutation) {
        permutation=false; 
        pass ++ ; 
        for (current=0;current < N-pass ; current++ ){
            if (array[current]>array[current+1]) 
            {
                permutation = true; 
                int temp=array[current]; 
                array[current]=array[current+1]; 
                array[current+1]=temp; 

                }

        }
    }

}