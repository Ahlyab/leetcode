class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2==1) {
            return false;
        }
        
        stack<char> stack;
        std::stack<char> stack2;
        for(char ch : s) {
            if(ch == '(' || ch == '{' || ch == '[') {
                stack.push(ch);
            }else{
                stack2.push(ch);
                if(stack.empty()){
                    return false;
                }else{
                    char top = stack.top();
                    char top2 = stack2.top();
                    if(top2 == ')' && top == '(' || top2 == '}' && top == '{' || top2 == ']' && top == '[' ){
                        stack.pop();
                        stack2.pop();
                    }

                    
                }
            }
        }
        

        if(stack.empty() && stack2.empty())
            return true;
        return false;
    }
};
