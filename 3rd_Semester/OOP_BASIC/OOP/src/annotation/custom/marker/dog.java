package annotation.custom.marker;

@veryImportant
public class dog {
    public dog(){

    }

    public void bark(){
        System.out.println("Dog is Barking!");
    }

    public void growl(){
        System.out.println("Dog is Growling!");
    }

    @runnow
    public void bite(){
        System.out.println("Dog is Biting!");
    }

    @runnow
    public void scratch(){
        System.out.println("Dog is Scratching!");
    }


}
