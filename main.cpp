#include<iostream>
using std::cout;
template<typename type>
int check(type *a,int n){
    int f=0;
    for(int i=0;i<n-1;++i){
        if (a[i]>a[i+1]){
            if (f==0 || f==-1)
                f=-1;
            else
            return 0;
        }
        else if(a[i]<a[i+1]){
            if (f==0 || f==1)
                f=1;
            else
            return 0;
        }
    }
    for(int i=0;i<n-1;++i){
        if (a[i]==a[i+1]){
            f==1?f=2:f=-2;
            return f;
        }
    }
    return f;
}
// функция check возвращает -1 если массив отсортирован по убыванию -2 по невозрастанию, 1 если по возраствнию, 2 по неубыванию, 0 в противном случае
void out(int x){
    if(x==0){
        std::cout<<"массив не отсортирован"<<'\n';
    }
    if(x==1){
        std::cout<<"массив отсортирован по возрастанию"<<'\n';
    }
    if(x==-1){
        std::cout<<"массив отсортирован по убыванию"<<'\n';
    }
    if(x==-2){
        std::cout<<"массив отсортирован по невозрастанию"<<'\n';
    }
    if(x==2){
        std::cout<<"массив отсортирован по неубыванию"<<'\n';
    }
    

}
int main(){
    const int n=5;
    // int a[n]={1,2,3,4,5};
    int a[n]={1,1,1,1,1};
    float b[n]={5.5,4.3,2.8,2.2,1.22};
    char c[n]={'a','c','b','e','f'};
    double d[n]={1.2, 1.2,1.2,3.0,4.5};
    out(check<int>(a,n));
    out(check<float>(b,n));
    out(check<char>(c,n));
    out(check<double>(d,n));
    return 0;
}
