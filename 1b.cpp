#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll convertToNumeric(string str)
{

    ll output(0);
    const ll alphaSize(26);

    for(ll k = 0; k < str.size(); k++)
        output = alphaSize * output + (str[k] - 'A' + 1);
    
    return output;
}

string convertToAlpha(ll input)
{
    const ll alphaSize(26);
    string output("");

    while(input > 0)
    {
        char letter = 'Z';
        ll inputMod = input % alphaSize;
        
        if(inputMod > 0)
            letter = 'A' + inputMod - 1;
        else
            input -= alphaSize;
        
        input = input / alphaSize;
        output = letter + output;
    }

    return output;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;

        bool coordinates(0);
        if(str[0] == 'R' && ('0' <= str[1] && str[1] <= '9') && 1 < str.find('C') && str.find('C') < str.size() - 1)
            coordinates = 1;

        if(coordinates)
        {
            ll cPos = str.find('C');
            string rowString = str.substr(1, cPos - 1), colString = str.substr(cPos + 1);  
            ll col = atol(colString.c_str());
            cout <<  convertToAlpha(col) << rowString;
        }
        else
        {            
            string rowString = "", colString = "";

            for(int k = 0; k < str.size(); k++)
                if('0' <= str[k] && str[k] <= '9')
                {
                    colString = str.substr(k);
                    break;
                }
                else
                    rowString += str[k];

            cout << "R" << colString << "C" <<  convertToNumeric(rowString);
        }

        cout << "\n";
    }

    cout << "\n";

    return 0;
}