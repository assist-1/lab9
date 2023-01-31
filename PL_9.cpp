#include <iostream>
#include <string>


std::hash<std::string> hash;

template<typename type>
size_t hash_summarizer(type *array, int n)
{
  size_t super_hash = 0;
  for (int i=0; i < n; ++i)
  {
    super_hash+=(i*hash(std::to_string(array[i])));
    
  }
  return hash(std::to_string(super_hash));
}

size_t hash_summarizer(std::string *array, int n)
{
  size_t super_hash = 0;
  for (int i=0; i < n; ++i)
  {
    super_hash+=(i*hash(array[i]));
    
  }
  return hash(std::to_string(super_hash));
}


int main()
{
  int n;
  std::cout << "Enter size of array: ";
  std::cin >> n;
  //double *a = new double[n];
  //std::string *a = new std::string[n];
  char *a = new char[n];
  std::cout <<"\nEnter data:\n\n";
  for (int i=0; i<n; ++i)
  {
    std::cout << "[" << i << "]: ";
    std::cin >> a[i];
  }
  std::cout << "\nHash:        " << hash_summarizer(a,n)
            << "\nHash repeat: " << hash_summarizer(a,n);
}