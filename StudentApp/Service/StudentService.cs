using StudentApp.Models;
using StudentApp.Repository;

namespace StudentApp.Service
{
    public class StudentService : IStudentService
    {
        public List<Student> getAllStudents()
        {
            IStudentRepository repository = new StudentRepository();
            return repository.getAllData();
        }
    }
}
