public class bus extends vehicle implements drivable
{
    String name = "BUS";
    public void accelarate(){
        System.out.println("Accelarating " + this.name);
    }
}
