import java.util.Scanner;
import java.util.Stack;
class ParanthesisValid{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String input=sc.nextLine();
        Stack<Character> st=new Stack<>();
        for(char ch:input.toCharArray()){
            if(ch=='{') st.push('}');
            else if(ch=='[') st.push(']');
            else if(ch=='(') st.push(')');
            else if(ch=='}' || ch==']' || ch==')'){
                if(ch==st.peek()) st.pop();
            }
        }
        if(st.isEmpty()) System.out.println("Paranthesis is valid");
        else System.out.println("Not valid");
    }
}