using MySql.Data.MySqlClient;
using StudentApp.Models;
using System.Reflection.Metadata.Ecma335;

namespace StudentApp.Repository
{
    public class StudentRepository : IStudentRepository
    {
       public List<Student> getAllData()
        {

            // create list for students
            List<Student> students = new List<Student>();

            // create connection string
            string conString = @"server=localhost; port=3306; username=root; password=neeti; database=studentmvc";

            MySqlConnection connection = new MySqlConnection(conString);

            string query = "select * from student";

            try
            {
                // open the connection
                connection.Open();
                MySqlCommand command = new MySqlCommand(query, connection); 
                MySqlDataReader reader = command.ExecuteReader();

                while (reader.Read())
                {
                    int id = int.Parse(reader["studentId"].ToString());
                    string name = reader["Name"].ToString();
                    string email = reader["email"].ToString();
                    string status = reader["status"].ToString();

                    // instance of student
                    Student stud = new Student();
                    stud.studentId = id;
                    stud.name = name;
                    stud.email = email;
                    stud.status = status;

                    students.Add(stud);

                }

                reader.Close(); 
            }
            catch (Exception ex)
            {
                throw ex;
            }
            finally{

                if (connection.State != System.Data.ConnectionState.Closed)
                {
                    connection.Close();
                }
            }

            return students;

        }


    }
}
