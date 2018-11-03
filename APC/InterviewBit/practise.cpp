#include<iostream>
using namespace std;

string getString(int d) {
    if(d==2)
        return "abc";
    if(d==3)
        return "def";
    if(d==4)
        return "ghi";
    if(d==5)
        return "jkl";
    if(d==6)
        return "mno";
    if(d==7)
        return "pqrs";
    if(d==8)
        return "tuv";
    if(d==9)
        return "wxyz";
        
}

string* keypad(int input, int outputSize) {
    if(input==0)
    {
        string* output = new string[1];
        output[0] = "";
        return output;
    }
    int lastDigit = input%10;
    int smallerNumber = input/10;

    int smallOutputSize;
    string* smallOutput = keypad(smallerNumber, smallOutputSize);
    string lastDigitChars = getString(lastDigit);
    string* output = new string[smallOutputSize* lastDigitChars.size()];

    int k=0;
    for(int i=0;i<lastDigitChars.size();i++) {
        for(int j=0;j<smallOutputSize;j++)
        {
            output[k]  =  smallOutput[j] + lastDigitChars[i];
            k++;
        }
    }
    outputSize = smallOutputSize * lastDigitChars.size();
    return output;
}

int main() 
{
    int size;
    string* res = keypad(23, size);
    for(int )
}