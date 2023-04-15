#include <iostream>
using namespace std;

int main() {
    float a=0,b=0,x=0,y=0,z=0;
    bool c=0,d=0,e=0;
    cin>>a>>b>>x>>y;

    c=((x<0)and(y>0));
    d=((x>=0)and(y<=0));
    e=((c==0)and(d==0));

    if (c==1){z=(a*x)-(b*y);}
    if (d==1){z=(a*x*x)-(b*y);}
    if (e==1){z=(a*x)+(b*y*y);}

    cout<<z<<endl;
    return 0;
}
