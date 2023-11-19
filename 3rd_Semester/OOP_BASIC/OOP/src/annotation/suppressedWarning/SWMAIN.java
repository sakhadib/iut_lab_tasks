package annotation.suppressedWarning;

public class SWMAIN {

    @SuppressWarnings("deprecation")
    public static void main(String[] args) {
        Subtractor subtractor = new Subtractor();
        System.out.println(subtractor.subtract(10, 5));
        System.out.println(subtractor.newSubtract(10, 5));
    }
}


/*
Here it is important to note that the @SuppressWarnings annotation
is applicable only for the source code and not for the compiled class file.

Also, here we do not get any warning for the Subtract method because we have
suppressed the warning using @SuppressWarnings annotation.
*/