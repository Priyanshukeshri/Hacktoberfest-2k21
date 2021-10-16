package package2;

public class Employee {
    int eid;
    String ename;
    double esalary;

    public Employee(int id, String name, double salary) {
        eid = id;
        ename = name;
        esalary = salary;
    }

    public void addSalary(int sal) {
        this.esalary += sal;
    }

    public void showData() {
        System.out.println(this.eid + "  " + this.ename + "  " + this.esalary);
    }
}
