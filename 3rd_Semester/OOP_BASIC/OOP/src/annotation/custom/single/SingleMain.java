package annotation.custom.single;
import java.lang.reflect.Method;

public class SingleMain {
    public static void main(String[] args) {
        run();
    }

    public static void run(){
        umbridge myUmbridge = new umbridge();

        for(Method m : myUmbridge.getClass().getMethods()){
            if(m.isAnnotationPresent(RunNow.class)){
                try{
                    RunNow rn = m.getAnnotation(RunNow.class);
                    for(int i = 0; i < rn.times(); i++){
                        m.invoke(myUmbridge);
                    }
                }
                catch(Exception e){
                    System.out.println("Exception: " + e);
                }
            }
        }
    }
}
