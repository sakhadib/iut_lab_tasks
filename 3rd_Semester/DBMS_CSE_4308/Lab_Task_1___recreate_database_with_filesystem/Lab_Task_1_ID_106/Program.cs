using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_Task_1_ID_106
{
    internal class Program
    {
        static void Main(string[] args)
        {
            admin admin = new admin();

            admin.load_students();
            admin.load_grade();
            //admin.show_students();
            Console.WriteLine("type 'commands' to see the commands");
            string cmd = "";
            while(true)
            {
                
                Console.Write("\n\ncmd > ");
                cmd = Console.ReadLine();
                if(cmd == "exit")
                {
                    Console.WriteLine("Application Closed. Press Any Key and enter to close the console");
                    break;
                }

                else if (cmd.Contains("show_avg_gpa"))
                {
                    Console.WriteLine("\n\n\nShowing Avarage GPA for students\n");
                    admin.show_avg_gpa();
                }

                else if (cmd.Contains("add_grade"))
                {
                    int id = new int();
                    double gpa = new double();
                    int sem = new int();
                    Console.WriteLine("id...");
                    try { id = Convert.ToInt32(Console.ReadLine());} catch(Exception ex) { Console.WriteLine(ex.Message); }
                    Console.WriteLine("gpa...");
                    try { gpa = Convert.ToDouble(Console.ReadLine()); } catch (Exception ex) { Console.WriteLine(ex.Message); }
                    Console.WriteLine("Semester...");
                    try { sem = Convert.ToInt32(Console.ReadLine()); } catch (Exception ex) { Console.WriteLine(ex.Message); }

                    if (admin.exist(id))
                    {
                        if(gpa >= 2.5 && gpa <= 4)
                        {
                            grades gq = new grades(id, gpa, sem);
                            admin.add_grade(gq);
                        }
                        else
                        {
                            Console.WriteLine("GPA value is not Valid");
                        }
                    }
                    else
                    {
                        Console.WriteLine("Student Not Found");
                    }
                }

                else if (cmd.Contains("lowest_gpa"))
                {
                    Console.WriteLine("\nProvide Student ID...");
                    int id = Convert.ToInt32(Console.ReadLine());

                    admin.lowest_gpa(id);
                }

                else if (cmd.Contains("command"))
                {
                    string vcmd = "\nexit \t\t:\tTo exit the application\n"
                        + "lowest_gpa\t:\tTo find the lowest gpa and semester for a specific student\n"
                        + "show_avg_gpa\t:\tTo Show Avarage GPA of all students\n"
                        + "add_grade\t:\tTo Add new grade to a student\n"
                        + "clear\t\t:\tTo clear the console";

                    Console.WriteLine(vcmd);
                }

                else if (cmd.Contains("clear"))
                {
                    Console.Clear();
                }

                else
                {
                    
                    string vcmd = "\nValid Commands Are...\n\n"
                        + "exit \t\t:\tTo exit the application\n" 
                        + "lowest_gpa\t:\tTo find the lowest gpa and semester for a specific student\n"
                        + "show_avg_gpa\t:\tTo Show Avarage GPA of all students\n"
                        + "add_grade\t:\tTo Add new grade to a student\n"
                        + "clear\t\t:\tTo clear the console";

                    Console.WriteLine(vcmd);
                }
            }

            Console.ReadLine();

        }
    }
}
