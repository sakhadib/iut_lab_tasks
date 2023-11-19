package annotation.Deprecated;

public class main {
    public static void main(String[] args) {
        Adder adder = new Adder();
        System.out.println(adder.add(1, 2)); // Giving Warning that it is Deprecated
        System.out.println(adder.newadd(1, 2));
    }
}
