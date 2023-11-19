package annotation.suppressedWarning;

public class Subtractor {

    @Deprecated
    public int subtract(int a, int b) {
        if(a < b) {
            throw new IllegalArgumentException("a should be greater than b");
        }
        return a - b;
    }

    public int newSubtract(int a, int b) {
        return a - b;
    }
}
