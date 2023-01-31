#include <iostream>
#include <string>


template<typename type>
size_t hash_summarizer(type *array, int n)
{
  std::hash<type> hash;
  size_t super_hash = 0;
  for (int i=0; i < n; ++i)
  {
    super_hash+=(hash(array[i]));
    
  }
  return super_hash;
}


int main()
{
  int n;
  std::cout << "Enter size of double array: ";
  std::cin >> n;
  double *a = new double[n];
  //std::string *a = new std::string[n];
  std::cout <<"\nEnter data:\n\n";
  for (int i=0; i<n; ++i)
  {
    std::cout << "[" << i << "]: ";
    std::cin >> a[i];
  }
  std::cout << "\nHash:        " << hash_summarizer(a,n)
            << "\nHash repeat: " << hash_summarizer(a,n);
}