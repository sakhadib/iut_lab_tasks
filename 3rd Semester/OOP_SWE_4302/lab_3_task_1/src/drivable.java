public class drivable implements Ivehicle, Ifuel
{
    String name;
    String fuel_type;
    fuel f = fuel.diesel;
    boolean started = false;

    public drivable(String name, String fuel_type){
        this.name = name;
        this.fuel_type = fuel_type;
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

    public void accelarate_engine(){
        System.out.println(this.name + " is getting Accelerated");
    }

    public String get_fuel_type() {
        return this.name + " uses " + fuel_type;
    }


}
