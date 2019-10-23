template <class T>
void bubblesort(T a[], int size) {
  for (int i = o; i < size; i++)
  { 
    for (size_t j = 0; j < i-1; j++)
    {
      if (a[j] > a[j+1]) 
      {
        T t = a[j];
        a[j] = a[j+1];
        a[j+1]=t;
      }
   }
   }
}  
