import java.util.*;

public class Main {
    public static void main(String[] args) {

        Comparator<person> comp = (p1, p2) -> p1.age > p2.age ? 1 : p1.age < p2.age ? -1 : 0;

        List<person> pers = new ArrayList<>();
        //add 5 person
        pers.add(new person("rahim", 20));
        pers.add(new person("karim", 10));
        pers.add(new person("Jodu", 60));
        pers.add(new person("Modhu", 40));
        pers.add(new person("Josim", 30));

        Collections.sort(pers, comp);

        for(person p : pers) {
            System.out.println(p.name + " " + p.age);
        }

    }
}