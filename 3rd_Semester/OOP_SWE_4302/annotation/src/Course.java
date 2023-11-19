
@DevelopmentHistory(version = 1, developer = "Adib Sakhawat", tester = "Khalid Hasan")
public class Course {
    public int course_code;
    public String course_name;
    public int course_credit;
    public CourseType course_type;

    @DevelopmentHistoryWithReviewer(version = 1, developer = "Adib Sakhawat", reviewer = {"Khalid Hasan", "Hamim Saad"})
    public Course(int course_code, String course_name, int course_credit, CourseType course_type) {
        this.course_code = course_code;
        this.course_name = course_name;
        this.course_credit = course_credit;
        this.course_type = course_type;
    }
}

