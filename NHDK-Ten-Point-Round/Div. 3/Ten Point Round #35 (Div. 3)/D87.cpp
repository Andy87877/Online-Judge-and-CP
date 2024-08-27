#include <iostream>
#include <cmath>
using namespace std;
int main(){ 
    string password;
    cin >> password;
    int running = 7, numbering = 0, a = 0, b = 0, c = 0;
    bool acheck = false, bcheck = false;
    string s = "";
    while(running < password.size()){
        if(1 <= (password[running] - '0') && (password[running] - '0') <= 9){
            s += password[running];
            numbering = 1;
        }else{
            if(numbering == 1){
                numbering = -1;
            }
        }
        if(numbering == -1){
            if(!acheck){
                for(int i = 0; i < s.size(); i++){
                    a += (s[i] - '0') * pow(10, s.size()-i-1);
                }
                acheck = true;
                running += 12;
            }else if(!bcheck){
                for(int i = 0; i < s.size(); i++){
                    b += (s[i] - '0') * pow(10, s.size()-i-1);
                }
                bcheck = true;
                running += 6;
            }else{
                for(int i = 0; i < s.size(); i++){
                    c += (s[i] - '0') * pow(10, s.size()-i-1);
                }
                break;
            }
            s = "";
            numbering = 0;
            continue;
        }
        running++;
    }
    cout << a << " " << b << " " << c << '\n';
}