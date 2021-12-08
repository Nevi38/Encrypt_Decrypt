#include <string>

using namespace std;

string Encrypt(string a, int Xkey)
{
	string s = "";
	
	int len = a.length();
    
    char b[len];  
     
    for (int i = 0; i < len; i++)
        b[i] = a[i];
      
    for (int i = 0; i < len; i++)
    {
        b[i] += Xkey;
        s += to_string(b[i] + 0) + " "; 
    }
    
    return s;
}
