package annotation.override;

public class MyTime_1 extends timePrinter{
    public MyTime_1() {

    }

    @Override
    public void printTime() {
        System.out.println("Now time is 9 AM.");
    }

}
