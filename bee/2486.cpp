#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n&&n){
            int num,total=0;
            string str;
        for(int i=0;i<n;i++){ 
            cin>>num;
    //creates a new input after inputting int
            cin.ignore();
            getline(cin,str);
        
            if(str=="suco de laranja"){ 
            total=total+(num*120);
            }
            else if(str=="morango fresco"){ 
            total=total+(num*85);
            }
            else if(str=="mamao"){ 
            total=total+(num*85);
            }
            else if(str=="goiaba vermelha"){ 
            total=total+(num*70);
            }
            else if(str=="manga"){ 
            total=total+(num*56);
            }
            else if(str=="laranja"){ 
            total=total+(num*50);
            }
            else if(str=="brocolis"){ 
            total=total+(num*34);
            }
        }
            if(total<110){
                
                cout<<"Mais "<<110-total<<" mg"<<endl;
            }
            else if(total>130){
                
                cout<<"Menos "<<total-130<<" mg"<<endl;
            }
            else{ 
                cout<<total<<" mg"<<endl;
            }
    }
}