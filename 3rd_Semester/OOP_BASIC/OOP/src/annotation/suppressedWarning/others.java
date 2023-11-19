package annotation.suppressedWarning;
import java.util.ArrayList;
import java.util.List;

public class others {
    public others(){}

    @SuppressWarnings({"unchecked", "rawtypes", "unused"})
    public void uncheckedWarningExample()  // unused warning here
    {
        List<String> list = new ArrayList(); // unchecked warning here and Raw type warning also
        list.add("test");
        list.add("10");

        for (String str : list) {
            System.out.println(str);
        }
    }

    @SuppressWarnings({"cast", "unused"})
    public void castWarningExample(int object) {
        double x = (double)object; // Compiler would normally warn here
        x = x / 5;
    }

    @SuppressWarnings("divzero")
    public void divZeroWarningExample() {
        int a = 10;
        int b = 0;
        int c = a / b; // Compiler would normally warn here
    }

    @SuppressWarnings("empty")
    public void emptyWarningExample() {
        // Compiler would normally warn here

    }

    @SuppressWarnings("fallthrough")
    public void fallthroughWarningExample(int x) {
        switch (x) {
            case 1:
                System.out.println("x is 1");
                // break; // Compiler would normally warn here
            case 2:
                System.out.println("x is 2");
                //break;
            default:
                System.out.println("x is neither 1 nor 2");
        }
    }

}
