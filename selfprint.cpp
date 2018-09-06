#include<iostream>
using namespace std;
string f(string x){
 for(auto it=x.begin();it!=x.end();it++){
  if(*it==95) *it=10;else if(*it==47) *it=34;else if(*it==45) *it=95;
 }
 return x;
}
int main(){
 string a=" string s=/#include<iostream>-using namespace std;-string f(string x){- for(auto it=x.begin();it!=x.end();it++){-  if(*it==95) *it=10;else if(*it==47) *it=34;else if(*it==45) *it=95;- }- return x;-}-int main(){- string a=/;_ s=f(s);_ s+=34;s+=a;s+=34;s+=f(/;-/);_ s+=f(a);_ s+=f(/ cout<<s;- return 0;-}-/);_";
 string s="#include<iostream>_using namespace std;_string f(string x){_ for(auto it=x.begin();it!=x.end();it++){_  if(*it==95) *it=10;else if(*it==47) *it=34;else if(*it==45) *it=95;_ }_ return x;_}_int main(){_ string a=";
 s=f(s);
 s+=34;s+=a;s+=34;s+=f(";_");
 s+=f(a);
 s+=f(" cout<<s;_ return 0;_}_");
 cout<<s;
 return 0;
}

