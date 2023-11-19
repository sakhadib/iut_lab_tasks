import java.lang.annotation.*;

@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target({ElementType.TYPE, ElementType.METHOD, ElementType.CONSTRUCTOR})
public @interface DevelopmentHistoryWithReviewer {
    int version() default 1;
    String developer();
    String tester() default " ";
    String[] reviewer();
}
