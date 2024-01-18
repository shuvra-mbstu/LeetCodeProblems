class Solution {
public:
    
    vector<string> lessThan20 = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
        vector<string> tens = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety", "Hundred" }; 
        vector<string> thousands = { "", " Thousand", " Million"," Billion" };
    
    string numberToWords(int num) {
        
        if(num ==0 ) return "Zero";
        
        string res = "";
        
        int i=0;
        
        while(num){
            if(num % 1000) res = helper(num % 1000) + thousands[i] + (res.size() ? " " : "") + res;
            
            num /= 1000;
            i++;
        }
            
            return res;
    }
    
    string helper(int num){
        if(num>=100) return lessThan20[num/100] + " " + tens[10] +  (num % 100 ? " " : "")  + helper(num%100);
            
        if(num>=20) return tens[num/10] + (num % 10 ? " " : "") + helper(num % 10);
            
        return lessThan20[num];
        
    }
};