package interview70;

import java.util.HashMap;
import java.util.Map;

public class RomanToInteger {
    public int romanToInt(String s) {
        int ans = 0;
        Map<Character, Integer> m = new HashMap<>();
        m.put('I', 1);
        m.put('V', 5);
        m.put('X', 10);
        m.put('L', 50);
        m.put('C', 100);
        m.put('D', 500);
        m.put('M', 1000);

        for (int i = 0; i < s.length(); ++i) {
            if (i == (s.length() - 1)) {
                return ans + m.get(s.charAt(i));
            }
            else if (m.get(s.charAt(i)) >= m.get(s.charAt(i + 1))) {
                ans += m.get(s.charAt(i));
            }
            else {
                ans -= m.get(s.charAt(i));
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        RomanToInteger solution = new RomanToInteger();
        System.out.println(solution.romanToInt("III"));
        System.out.println(solution.romanToInt("LVIII"));
    }
}
