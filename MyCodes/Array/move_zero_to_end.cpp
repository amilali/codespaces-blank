void d_a(int arr[], int &n)
{
  int index=0;
  for(int i=0; i<n; i++)
    {
      if(arr[i] != arr[i+1])
      {
        arr[index++] = arr[i];
      }
    }
  n=index;
}
