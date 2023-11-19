package annotation.custom.marker;

//@veryImportant
public class cat {
    public cat(){

    }

    public void meow(){
        System.out.println("The cat says Meow!");
    }

    @runnow
    public void purr(){
        System.out.println("The cat says Purr!");
    }

    public void hiss(){
        System.out.println("The cat says Hiss!");
    }

    @runnow
    public void scratch(){
        System.out.println("The cat says Scratch!");
    }

}
