package annotation.custom.multi;
import java.lang.reflect.Method;

public class multiMain {
    public static void main(String[] args) {
        run();
    }

    public static void run(){
        shop myShop = new shop();

        for(Method m : myShop.getClass().getMethods()){
            if(m.isAnnotationPresent(info.class)){
                info i = m.getAnnotation(info.class);

                String s = "Method: " + m.getName() + "\nInfo :-  " + i.author() + " ,  " + i.date() + " ,  " + i.description() + "\n";
                System.out.println(s);
            }
        }
    }
}
