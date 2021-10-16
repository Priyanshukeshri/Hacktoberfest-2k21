import package1.Book;
import package2.Employee;
// import package3.*;

public class MyClass 
{
    public static void main(String args[]) 
    {
        // class From Package 1
        Book b1 = new Book(101, "Java", 123.44);
        Book b2 = new Book(102, "Python", 345.44);
        System.out.println("\n\n##### Books Detail: #####\n");
        b1.showData();
        b2.showData();

        // Class From Package 2
        Employee e1 = new Employee(101, "Rampal Chauhan", 54345.55);
        Employee e2 = new Employee(102, "Abhishek Bhatt", 56424.55);
        System.out.println("\n\n##### Employees Detail: #####\n");
        e1.showData();
        e2.showData();

        // Class From Package 3
        Student s1 = new Student(101, "Rohit Kanojiya");
        Student s2 = new Student(102, "Pardeep Narwal");

        // Test t1 = new Test(101, "Rohit Kanojiya", 80);
        // Test t2 = new Test(102, "Pardeep Narwal", 70);

        // Sport sp1 = new Sport(101, "Rohit Kanojiya", 90);
        // Sport sp2 = new Sport(102, "Pardeep Narwal", 85);

        // System.out.println("\n\n##### Student Detail: #####\n");
         
        // System.out.println(s1.getRoll() + "  " + s1.getName() + "  " + t1.getMark() + "  " + sp1.getScore());
        // System.out.println(s2.getRoll() + "  " + s2.getName() + "  " + t2.getMark() + "  " + sp2.getScore());
    }
}
