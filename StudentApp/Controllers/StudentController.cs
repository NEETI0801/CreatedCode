using Microsoft.AspNetCore.Mvc;
using Org.BouncyCastle.Security;
using StudentApp.Service;
using StudentApp.Models;
using System.Text.Json.Nodes;

namespace StudentApp.Controllers
{
    public class StudentController : Controller
    {
       // display method
        public IActionResult Display()
        {
            StudentService studentService = new StudentService();
            List<Student> students1 = studentService.getAllStudents();

             this.ViewData["students"] = students1;
            //   return Json(students1);
            return View(students1);
        }


    }
}
