public class person implements Comparable<person> {
    public String name;
    public int age;

    public person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public int compareTo(person that) {
        if(this.age > that.age) {
            return 1;
        } else if(this.age < that.age) {
            return -1;
        } else {
            return 0;
        }
    }
}
