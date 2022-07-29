// my solution
class Solution {
public:
    string addBinary(string a, string b) {
        string c;
        int carry = 0;
        if(a.length() < b.length()){
            string t=a;a=b;b=t;
        }

        for(int i=b.length()-1;i>=0;i--){
            if(b.back() == '1' && a.back() == '1'){
                if(carry == 0){
                    carry = 1;
                    // cout<<"<";
                    c += '0';
                }
                else{
                    c += '1';
                }
            }

            else if(b.back() == '1'){
                if(carry == 0){
                    c += b.back();
                }
                else{
                    c += '0';
                }
            }
            else if(b.back() = '0'){
                if(carry == 0){
                    cout<<a.back()<<endl;
                    c += a.back();
                }
                else{
                    if(a.back() == '0'){
                        carry = 0;
                        c += '1';
                    }
                    else{
                        c += '0';
                    }
                }
            }
            b.pop_back();
            a.pop_back();
        }

        int k = a.length();
        // cout<<k<<"\n";

        while(k > 0){
            if(carry == 0)
                c += a.back();
            else{
                if(a.back() == '0'){
                    c += '1';
                    carry = 0;
                }
                else{
                    c += '0';
                }
            }
            a.pop_back();
            k--;
        }

        if(carry == 1)
            c += '1';

        reverse(c.begin(),c.end());
        return c;
    }
};

// solution 2
class Solution2{
public:
    string addBinary(string a, string b) {

        int carry=0;

        int i=a.length()-1;
        int j=b.length()-1;

        string ans="";

        while(i>=0 || j>=0 || carry>0){

            int sum;
            sum=carry;

            if(i>=0){
                sum += a[i]-'0';
                i--;
            }

            if(j>=0){
                sum += b[j]-'0';
                j--;
            }

            carry = (sum>1)?1:0;

            sum = sum%2;

            ans.append(to_string(sum));
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};