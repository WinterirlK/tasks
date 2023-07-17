#include <stddef.h>
#include <string.h>
#include <stdlib.h>

int *parse (const char *program)
{
  int liczba = 0;
  int length = strlen(program);
	int licznik = 0;
  int *done = (int *)malloc(length * sizeof(int));
  
  for(int i =0;i<length;i++){
    if(program[i]!='i'&& program[i]!='d'&& program[i]!='s'&& program[i]!='o'){
      continue;
    }
    if(program[i]=='i'){
      liczba += 1;
    }
    if(program[i]=='d'){
      liczba -= 1;
    }
    if(program[i]=='s'){
      liczba = liczba * liczba;
    }
    if(program[i]=='o'){
      done[licznik]=liczba;
      licznik++;
    }
    
  }
  
  return done;
	return NULL;
}
