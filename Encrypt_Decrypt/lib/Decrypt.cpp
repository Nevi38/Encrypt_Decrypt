using namespace std;

int STRING_INT(string a)
{
    int sum = 0;
    
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '-')
            continue;
        
        sum *= 10;
        sum += (int)a[i] - 48;
    }
    
    if (a[0] == '-')
        sum = 0 - sum;
    
    return sum;
}

void split_String (char charRemove, string xau, string B[], int &allIndex)
{
    allIndex = 0;
    int len = xau.length();
    int temp;
    
    int resume = 0;     // cause do not know the number of loop stops, so I set the variable resume = 0
    bool isResume = true;
      
    while (isResume)
    { 
        for (int j = resume; j < len; j++)
        {
            if (xau[j] == charRemove)
            {
                resume = j + 1; // if remove + 1 then empty
                break;
            }
            
            B[allIndex] += xau[j];
            temp = j;
        }
        
        allIndex++;
        
        if (temp == (len - 1))      // if go to last element then stop
            isResume = false;
    }
}

string Decrypt(string xau, int Key)
{
    string B[1000];
    int allIndex;
    
    split_String(' ', xau, B, allIndex);     // split_String(char charRemove, string xau, string B[], int nB)
    
    string s = "";
    
    for (int i = 0; i < allIndex; i++)
    {
        s += (char)(STRING_INT(B[i]) - Key);     // convert STRING TO INTEGER AND CONVERT INTEGER TO CHAR
    }

    return s;
}
