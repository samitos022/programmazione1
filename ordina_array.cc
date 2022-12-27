// SORT_ARRAY( array, dimensione dell'array)

void sort_array(int * array, int len_array) {
  for (int i=0; i<len_array; i++) {
    for (int j=i+1; j<len_array; j++) {
      if (array[i] > array[j]) {
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
      }
    }
  }
}
