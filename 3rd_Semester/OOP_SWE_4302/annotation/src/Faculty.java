import java.util.List;
import java.util.ArrayList;

@DevelopmentHistory(version = 1, developer = "Adib Sakhawat", tester = "Khalid Hasan")
public class Faculty {
    public String name;
    public String Designation;
    public double salary;

    List<Course> courses = new ArrayList<Course>();

    @DevelopmentHistoryWithReviewer(version = 1, developer = "Adib Sakhawat", reviewer = {"Khalid Hasan", "Hamim Saad"})
    public Faculty(String name, String Designation, double salary, List<Course> courses) {
        this.name = name;
        this.Designation = Designation;
        this.salary = salary;
        this.courses = courses;
    }

    @DevelopmentHistoryWithReviewer(version = 1, developer = "Adib Sakhawat", reviewer = {"Khalid Hasan", "Hamim Saad"})
    public Faculty(String name, String Designation, double salary) {
        this.name = name;
        this.Designation = Designation;
        this.salary = salary;
    }

    @DevelopmentHistoryWithReviewer(version = 1, developer = "Adib Sakhawat", reviewer = {"Kasshaf Labib", "Mir Sayad"})
    public void teach(Course course) {
        courses.add(course);
        System.out.println("Teaching " + course.course_name);
    }

    @DevelopmentHistoryWithReviewer(version = 1, developer = "Adib Sakhawat", reviewer = {"Tahsin Islam", "Hasibur Alif"})
    public void research(String topic) {
        System.out.println("Researching " + topic);
    }

}
