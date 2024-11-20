package interview70;

import java.util.Map;
import java.util.HashMap;
import java.util.Stack;

public class ValidParentheses {
    public boolean isValid(String s) {
        Stack<Character> st = new Stack<>();
        Map<Character, Character> m = new HashMap<>();
        m.put(')', '(');
        m.put(']', '[');
        m.put('}', '{');

        for (int i = 0; i < s.length(); ++i) {
            if (!m.containsKey(s.charAt(i))) {
                st.push(s.charAt(i));
            } else if (st.isEmpty() || !st.peek().equals(m.get(s.charAt(i))) ) {
                return false;
            } else {
                st.pop();
            }
        }

        return st.isEmpty();
    }

    public static void main(String[] args) {
        ValidParentheses solution = new ValidParentheses();
        System.out.println(solution.isValid("{}[[()]]{}(){"));
    }
}
