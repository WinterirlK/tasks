#include <stdbool.h>
#include <string.h>



bool is_pangram(const char *str_in) {
  int length = strlen(str_in);
  int liczba,male,wielkie;
  bool elo;
  for(int i = 0;i<26;i++){
    wielkie = i+65;
    male = i+97;
    for(int j=0;j<length;j++){
      elo = false;
      liczba = str_in[j];
      
          if(!(liczba>64&&liczba<91 || liczba>96&&liczba<123)){
            continue;
          }
      
      if(liczba == wielkie || liczba == male){
        elo = true;
        break;
      }
      
    }
    if(!elo){
      return false;
    }
  }
  
  return true;
  
    //  <----  hajime!

}
