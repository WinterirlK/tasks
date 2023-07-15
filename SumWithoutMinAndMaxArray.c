#include <stddef.h>

int sum(int* numbers, int numbersCount)
{
  if(numbersCount <= 2 || numbers == NULL){
    return 0;
  }
  
  for(int i = 0;i<numbersCount-1;i++){
    for(int j = 0;j<numbersCount-i-1;j++){
      if(numbers[j]>numbers[j+1]){
      int temp = numbers[j];
      numbers[j] = numbers[j+1];
      numbers[j+1] = temp;  
      }
    }
  }
  int suma = 0;
  for(int k = 1; k<numbersCount-1;k++){
    suma += numbers[k];
  }
  
  return suma;
}
