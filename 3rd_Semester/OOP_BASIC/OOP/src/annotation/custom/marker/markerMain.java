package annotation.custom.marker;

public class markerMain {
    public static void main(String[] args) {
        //importantCheck();
        //run();
    }






    public static void importantCheck(){
        cat myCat = new cat();
        dog myDog = new dog();

        boolean isCatImportant = myCat.getClass().isAnnotationPresent(veryImportant.class);
        boolean isDogImportant = myDog.getClass().isAnnotationPresent(veryImportant.class);

        if(isCatImportant){
            System.out.println("Cat is important!");
        }
        else{
            System.out.println("Cat is not important!");
        }

        if(isDogImportant){
            System.out.println("Dog is important!");
        }
        else{
            System.out.println("Dog is not important!");
        }
    }


    public static void run(){
        cat myCat = new cat();
        dog myDog = new dog();

        for(java.lang.reflect.Method m : myCat.getClass().getMethods()){
            if(m.isAnnotationPresent(runnow.class)){
                try{
                    m.invoke(myCat);
                }
                catch(Exception e){
                    System.out.println("Exception: " + e);
                }
            }
        }

        for(java.lang.reflect.Method m : myDog.getClass().getMethods()){
            if(m.isAnnotationPresent(runnow.class)){
                try{
                    m.invoke(myDog);
                }
                catch(Exception e){
                    System.out.println("Exception: " + e);
                }
            }
        }

    }
}
