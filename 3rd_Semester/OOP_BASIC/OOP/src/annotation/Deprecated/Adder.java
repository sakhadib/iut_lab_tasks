package annotation.Deprecated;

public class Adder {
    @Deprecated
    public int add(int a, int b) {
        if(a > b && a > 0 && b > 0){
            return a + b;
        }
        else{
            return b + a;
        }
    }

    public int newadd(int a, int b) {
        return a+b;
    }
}
