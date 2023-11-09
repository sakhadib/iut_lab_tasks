public class Employee {
    public String firstName;
    public String lastName;
    public String postalCode;
    public String street;
    public String district;
    public int age;
    public String designation;
    public double remuneration;

    public Employee(String firstName, String lastName, String postalCode, String street, String district, int age, String designation, double remuneration) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.postalCode = postalCode;
        this.street = street;
        this.district = district;
        this.age = age;
        this.designation = designation;
        this.remuneration = remuneration;
    }

    public String getPostalCode() {
        return postalCode;
    }
}
