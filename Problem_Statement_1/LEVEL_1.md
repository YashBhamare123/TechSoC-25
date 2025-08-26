#include <iostream>
#include <string>
using namespace std;

//let shift to be 5 
// 'A' → 'F'
// 'B' → 'G'  
// 'C' → 'H'
// ...
// 'X' → 'C' (wraps around)
// 'Y' → 'D' (wraps around)
// 'Z' → 'E' (wraps around)
void encode(string a){
    string ans= "";
    for(int i=0;i<a.length();i++){
        if(a[i]>=65 && a[i]<=90){
            int num = int(a[i]) + 5;
            if(num>90){
                num = num-26;
                ans += char(num);
            }else{
                ans += char(num);
            }
        }else if(a[i]>=97 && a[i]<=122){
            int num = int(a[i]) + 5;
            if(num>122){
                num=num-26;
                ans += char(num);
            }else{
                ans += char(num);
            }
        }else{
            ans += a[i];
        }
        
    }
    cout<<ans<<endl;
}

void decode(string a){
    string ans= "";
    for(int i=0;i<a.length();i++){
        if(a[i]>=65 && a[i]<=90){
            int num = int(a[i]) - 5;
            if(num<65){
                num = num+26;
                ans += char(num);
            }else{
                ans += char(num);
            }
        }else if(a[i]>=97 && a[i]<=122){
            int num = int(a[i]) - 5;
            if(num<97){
                num=num+26;
                ans += char(num);
            }else{
                ans += char(num);
            }
        }else{
            ans += a[i];
        }
        
    }
    cout<<ans<<endl;
}

int main(){
    string z="HELLO WORLD";
    string d="MJQQT BTWQI";
    encode(z);
    decode(d);
     

}
