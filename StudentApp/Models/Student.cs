namespace StudentApp.Models
{
    public class Student
    {
        // properties
        public int student_Id { get; set; }
        public string student_name { get; set; }
        public string student_email { get; set; }

        public string mobile_number { get; set; }
        public string student_address{ get; set; }

        public DateTime? admission_date { get; set; }

        public decimal? fees { get; set; }

        public string status { get; set; }

        // default ctor
        public Student()
        {
            
        }

        public Student(int student_id,string student_name,string student_email,string mobile_number,string student_address,string admission_date)
        {
            
        }

        // parametrized ctor
        /*  public Student(int studentId, string name, string email, string password, string status)
          {
              this.studentId = studentId;
              this.name = name;
              this.email = email; 
              this.password = password;
              this.status = status;
          }*/

    }
}
