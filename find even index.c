int find_even_index(const int *values, int length) {
  for (int i = 0; i < length; i++) {
    int left = 0;
    int right = 0;
    
    // Obliczanie sumy elementów po lewej stronie
    for (int j = 0; j < i; j++) {
      left += values[j];
    }
    
    // Obliczanie sumy elementów po prawej stronie
    for (int k = i + 1; k < length; k++) {
      right += values[k];
    }
    
    // Sprawdzenie warunku równości sum
    if (left == right) {
      return i;
    }
  }
  
  // Jeśli nie znaleziono indeksu spełniającego warunek
  return -1;
}
