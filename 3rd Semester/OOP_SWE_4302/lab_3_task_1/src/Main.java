public class Main {
    public static void main(String[] args) {
        drivable bus = new drivable("bus", "petrol");
        bus.start();
        bus.start();
        bus.stop();
        System.out.println(bus.get_fuel_type());
        bus.accelarate_engine();

        ridable cycle = new ridable("cycle");
        cycle.start();
        cycle.stop();
        cycle.stop();

        ridable bike = new ridable("Bike", "Gasoline");
        bike.start();
        System.out.println(bike.get_fuel_type());
        bike.stop();
    }
}