package annotation.custom.single;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

public class umbridge {
    public umbridge(){
    }

    @RunNow(times=3)
    public void shout(){
        System.out.println("I am Dolores Umbridge! POTTER!...");
    }
}
