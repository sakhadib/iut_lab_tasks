import java.sql.*;
public class task_3 {
    public static void main(String args[]) {
        String Username = "your_username";
        String Password = "your_password";
        String URL = "jdbc:oracle:thin:@localhost:1521:xe";

        String Query = "SELECT * FROM Student";



        try {
            Class.forName("oracle.jdbc.driver.OracleDriver");
            Connection connection = DriverManager.getConnection(URL, Username, Password);


            Statement statement = connection.createStatement();
            ResultSet rs = statement.executeQuery(Query);

            ResultSetMetaData rsmd = rs. getMetaData () ;
            for ( int i = 1; i <= rsmd . getColumnCount () ; i ++) {
                System . out . println ( rsmd . getColumnName (i) + " - " + rsmd . getColumnTypeName (i)) ;
            }
        }
        catch (SQLException e) {
            System.out.println(e);
        }
        catch (ClassNotFoundException e) {
            System.out.println(e);
        }
    }
}
