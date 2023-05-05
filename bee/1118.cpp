#include<bits/stdc++.h>
using namespace std;
int main()
{
    float num,sum,p,k;
    sum = p = k = 0;
    while(true)
    {
        cin>>num;
        if(num < 0.0 || num > 10.0)
            cout<<"nota invalida"<<endl;
        else
        {
            sum += num;
            p++;
            if(p==2)
            {
                sum/=2;
                printf("media = %.2lf\n",sum);
                cout<<"novo calculo (1-sim 2-nao)"<<endl;
                while(true)
                {
                    cin>>num;
                    if((int)num==1)
                    {
                        sum = p = 0;
                        k=1;
                        break;
                    }
                    else if((int)num==2)
                        return 0;
                    else
                        cout<<"novo calculo (1-sim 2-nao)"<<endl;
                }
            }
        }
    }
    return 0;
}