/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
namespace copy{
vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
vector<string> symbols = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

 string intToRoman(int num) {
    string sb;
    // Loop through each symbol, stopping if num becomes 0.
    for (int i = 0; i < values.size() && num >= 0; i++) {
        // Repeat while the current symbol still fits into num.
        while (values[i] <= num) {
            num -= values[i];
            sb+=symbols[i];
        }
    }
    return sb;
}
} // end of namespace copy



class Solution {
public:
    string intToRoman(int num) {
        return copy::intToRoman(num);
        
    }
};