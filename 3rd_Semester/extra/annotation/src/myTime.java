public class myTime extends TimePrinter{
    public myTime(){}

    @Override
    public void printTime() {
        System.out.println("The time is: 9 PM");
    }

    @Deprecated
    public int add(int a, int b) {
        return a + b;
    }
}
