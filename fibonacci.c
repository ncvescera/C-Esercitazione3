void fibonacci(int array[], int dim){
  array[0] = 1;
  array[1] = 1;

  for(int i = 1; i < dim; i++)
    array[i+1] = array[i]+array[i-1];

  return;
}
