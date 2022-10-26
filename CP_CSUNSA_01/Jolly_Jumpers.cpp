#include <iostream>
#include <vector>

using namespace std;
// typedef long long ll; //definir tipo de dato..

int main(){
    
    ios::sync_with_stdio(false); //desabilita sincronizacion entre flujos estandar C/C++.
    cin.tie(NULL); //desata cin de cout..
    
    long n;
    while (cin >> n) { //mientras sea un numero..
        vector<long>v(n);
        for (auto &i : v ) {
            cin>>i;
        }
        vector<bool>seen(n,false); //vector de comprobacion..
        for (int i=1; i<n; i++) {
            long diferencia = abs(v[i]-v[i-1]);
            if (diferencia>=0 and diferencia<n) {
                seen[diferencia] = true;
            }
        }
        
        bool rpta=true;
        for(int i=1;i<n;i++){
            rpta &= seen[i];
        }
    
        if(rpta==true){
            cout<<"Jolly"<<endl;
        }else{
            cout<<"Not Jolly"<<endl;
        }
    }
    
    return 0;
}
