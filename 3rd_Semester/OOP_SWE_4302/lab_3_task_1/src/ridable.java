public class ridable implements Ivehicle, Ifuel
{
    String name;
    String fuel_type;
    boolean started = false;
    public ridable(String name, String fuel_type){
        this.name = name;
        this.fuel_type = fuel_type;
    }

    public ridable(String name){
        this.name = name;
    }
    public void start(){
        if(!started){
            System.out.println( this.name + " Started");
            started = true;
        }
        else{
            System.out.println(this.name + " Already started");
        }
    }
    public void stop(){
        if(started){
            System.out.println(this.name + " Stopped");
            started = false;
        }
        else{
            System.out.println(this.name + " Already Stopped");
        }

    }

    public String get_fuel_type(){
        return this.name + " uses " + fuel_type;
    }
}
