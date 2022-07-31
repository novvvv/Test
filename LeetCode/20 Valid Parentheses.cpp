class Solution {
public:
    bool isValid(string_view s) {
        stack<char> stk;
        for(const auto& i : s){
            if(!stk.empty() && (i == ')' || i == ']' || i == '}')){
                if(i == ')' && stk.top() == '(') stk.pop();
                else if(i == ']' && stk.top() == '[') stk.pop();
                else if(i == '}' && stk.top() == '{') stk.pop();
                else stk.push(i);
            }
            else{
                stk.push(i);
            }
        }
        if(stk.empty()) return true;
        else return false;
    }
};
