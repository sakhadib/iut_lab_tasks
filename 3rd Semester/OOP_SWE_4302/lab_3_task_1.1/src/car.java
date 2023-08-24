public class car extends vehicle implements drivable
{
    String name = "CAR";

    public car(){}
    public void accelarate(){
        System.out.println("Accelarating " + this.name);
    }
}
