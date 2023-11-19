import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

public class Main {
public static void main(String[] args) throws InvocationTargetException, IllegalAccessException {
    Cat myCat = new Cat();

    for(Method method : myCat.getClass().getMethods()) {
        if(method.isAnnotationPresent(RunNow.class)) {
            RunNow rn = method.getAnnotation(RunNow.class);
            for(int i = 0; i < rn.times(); i++){
                method.invoke(myCat);
            }
        }
    }
}

}