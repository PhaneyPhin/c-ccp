#include <iostream>
#include <cstdio>
using namespace std;
int main(){


    int x=2,y=3;

    int sum=x+y;
    int diff=y-x;
    float div=y/((float)x);
    int part=y%x;
    printf("C print:\n");
    printf("sum=%d\n",sum);
    printf("diff=%d\n",diff);
    printf("div=%f\n",div);
    printf("part=%d\n",part);

    cout<<"C++ print\n";
    cout<<"sum="<<sum<<"\n";
    cout<<"diff="<<diff<<"\n";
    cout<<"div="<<div<<"\n";
    cout<<"part"<<part<<"\n";
    return 0;
}
//sum=4

