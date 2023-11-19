package annotation.custom.single;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

@Target(ElementType.METHOD)  // can only be used on methods
@Retention(RetentionPolicy.RUNTIME)  // will be available at runtime
public @interface RunNow {
    int times() default 1;  // default value is 1
}
