package Client;
import Com.DS.*;

public class BalancedParenthesis {
    public boolean compare(char a, char b) {
        if(a == '(' && b== ')')
            return true;
        if(a == '{' && b == '}')
            return true;
        if(a=='[' && b == ']')
            return true;
        return false;
    }
    public static void main(String[] args) {
        Stack stk = new Stack(10);
        String str = "[{()}]";
        for(int i=0;i<str.length();i++) {
            // System.out.println(str.charAt(i));
            if(str.charAt(i) == '{')
                stk.push(str.charAt(i));
            else if(str.charAt(i) == '(')
                stk.push(str.charAt(i));
            else if(str.charAt(i) == '[')
                stk.push(str.charAt(i));
            else
            {
                char b = stk.peek();
                System.out.println(b);
                // System.out.println(str);
                if(str.charAt(i) == ')' && b == '(')
                    stk.pop();
                else if(str.charAt(i) == '}' && b == '{')
                    stk.pop();
                else if(str.charAt(i) ==']' && b == '[')
                    stk.pop();                
                else
                    stk.push(str.charAt(i));
            }
            stk.printStack();
            System.out.println();
        }
        if(stk.isEmpty()==true)
            System.out.println("Balanced");
        else
            System.out.println("UnBalanced");

    }
}