import java.lang.annotation.*;

@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
public @interface DevelopmentHistory {
    int version() default 1;
    String developer();
    String tester() default " ";
}
