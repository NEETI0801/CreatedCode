using System.Data;
using MySql.Data.MySqlClient;
using StudentApp.Models;

namespace StudentApp.Repository
{
    public interface IStudentRepository
    {

        // get all the student's data from the database
        List<Student> getAllData();
    }
}
