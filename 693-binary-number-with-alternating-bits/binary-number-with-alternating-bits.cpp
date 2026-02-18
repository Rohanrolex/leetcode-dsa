class Solution {
public:
string decToBinary(int n) {
    
    string bin = "";
    while (n > 0) {
        // checking the mod 
		int bit = n%2;
      	bin.push_back('0' + bit);
        n /= 2;
    }
    
    // reverse the string 
	reverse(bin.begin(), bin.end());
    return bin;
}
    bool hasAlternatingBits(int n) {
      string p =   decToBinary(n);
       
       for(int i =1 ;i<p.size();i++){
          if(p[i] == p[i-1]) return false;
       }

 return true;
    }
};