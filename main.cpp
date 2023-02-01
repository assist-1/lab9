#include <iostream>

using namespace std;

template<typename t>
void find(t task[], int len){
  t maks = task[0];
  t mini = task[0];
  for(int i = 0; i < len; ++i){
    if (task[i] > maks)  maks = task[i];
    else if (task[i] < mini) mini = task[i];
  }
  cout << "Biggest element: " << maks << endl << "Smallest element: " << mini << endl;
}

int main(){
  char first[] = {'b' , 'a', 'c'};
  int second[] = {15, 13, 185, 16};
  double third[] = {11, 10.5, 13.3, 155};
  find(first,sizeof(first)/sizeof(first[0]));
  find(second,sizeof(second)/sizeof(second[0]));
  find(third,sizeof(third)/sizeof(third[0]));
  return 0;
}
