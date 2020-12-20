#include <bits/stdc++.h>

using namespace std;

long convertToNumeric(string input)
{
    long output(0);
    const int alphaSize(26);
    
    for(int i = 0; i < input.size(); i++)
    {
        output = alphaSize * output + (input[i] - 'A' + 1);
    }
    
    return output;
}


string convertToAlphabet(long input)
{
    const int alphabetSize(26);
    string output("");

    while(input > 0)
    {
        char letter = 'Z';
        long inputMod = input % alphabetSize;
        
        if(inputMod > 0)
        {
            letter = 'A' + inputMod - 1;
        }
            else
            {
                input -= alphabetSize;
            }
        
        input = input / alphabetSize;
        output = letter + output;
    }

    return output;
}

int main()
{
    int n; 
    cin >> n;
    cin.ignore();
    
    while(n--)
    {
        string line; getline(cin, line);
        bool coordinates(0);
        
        if(line[0] == 'R' 
           && ('0' <= line[1] 
           && line[1] <= '9') 
           && 1 < line.find('C') 
           && line.find('C') < line.size() - 1)
        {
            coordinates = 1;
        }

        if(coordinates)
        {
            int cPos = line.find('C');
            string rowString = line.substr(1, cPos - 1);  
            string colString = line.substr(cPos + 1);
            long col = atol(colString.c_str());
            
            cout <<  convertToAlphabet(col) << rowString << endl;
        }
            else
            {  
                string rowString = "";
                string colString = "";
    
                for(int i = 0; i < line.size(); i++)
                {
                    if('0' <= line[i] && line[i] <= '9')
                    {
                        colString = line.substr(i);
                        break;
                    }
                        else
                        {
                            rowString += line[i];
                        }
                }
                
                cout << "R" << colString << "C" <<  convertToNumeric(rowString) << endl;
            }
    }

    return 0;
}
