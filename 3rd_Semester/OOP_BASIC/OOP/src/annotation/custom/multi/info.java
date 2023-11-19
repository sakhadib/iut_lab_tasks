package annotation.custom.multi;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

@Target({ElementType.CONSTRUCTOR,
         ElementType.FIELD,
         ElementType.LOCAL_VARIABLE,
         ElementType.METHOD,
         ElementType.PACKAGE,
         ElementType.PARAMETER,
         ElementType.TYPE})

@Retention(RetentionPolicy.RUNTIME)

public @interface info {
    String author() default "unknown";
    String date() default "unknown";
    String description() default "This is something.";
}
