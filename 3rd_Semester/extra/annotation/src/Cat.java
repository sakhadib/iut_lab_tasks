@VeryImportant
public class Cat {
    public Cat(){}

    @RunNow(times = 4)
    public void meow() {
        System.out.println("meow");
    }

    public void purr() {
        System.out.println("purr");
    }
}
