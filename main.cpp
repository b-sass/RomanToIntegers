#include <iostream>

using namespace std;

/*
convert roman numerals to integers 
Examples:
"III" = 3
"IV" = 4
"IX" = 9

roman numbers: 
(I V X L C M)
IV = 4
IX = 9
XL = 40
XC = 90
CD = 400
CM = 900

*/
class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        s += " ";
        cout << "roman: " << s << endl;
        for(int i = 0; i < s.length() - 1; i++){
            char letter = s[i];     //Get character of index i

            switch(letter){
                case 'M':
                    sum += 1000;
                    break;
                case 'D':
                    sum += 500;
                    break;
                case 'C':
                    if(s[i+1] == 'M'){sum += 900; i++;}
                    else if(s[i+1] == 'D'){sum += 400; i++;}
                    else{sum+=100;}
                    break;
                case 'L':
                    sum += 50;
                    break;
                case 'X':
                    if(s[i+1] == 'C'){sum += 90; i++;}
                    else if(s[i+1] == 'L'){sum += 40; i++;}
                    else{sum+=10;}
                    break;
                case 'V':
                    sum += 5;
                    break;
                case 'I':
                    if(s[i+1] == 'X'){sum += 9; i++;}
                    else if(s[i+1] == 'V'){sum += 4; i++;}
                    else{sum++;}
                    break;
            cout << sum << endl;
            }
        }
        return sum;
    }
};
int main(){
    

    Solution sol;

    //tests
    /*

    "MMMDCCXXIV" = 3724
    "CMXCIX" = 999
    "MCMXCIV" = 1994
    */



    int x = sol.romanToInt("MMMDCCXXIV");
    cout << x;
}
