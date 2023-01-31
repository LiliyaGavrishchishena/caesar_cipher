#include<iostream>
 
using namespace std;
 
int main() {
    char text[100], ch;
    int i, key;
    cout << "Enter a text you want to encrypt ---> ";
    cin.getline(text, 100);
    cout << "Enter key: ";
    cin >> key;
    for(i = 0; text[i] != '\0'; ++i){
        ch = text[i];
        if(ch >= 'a' && ch <= 'z'){
            ch = ch + key;
            if(ch > 'z'){
                ch = ch - 'z' + 'a' - 1;
            }
            text[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
            if(ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
            }
            text[i] = ch;
        }
    }
    cout << "Encrypted text: " << text;

    return 0;
}