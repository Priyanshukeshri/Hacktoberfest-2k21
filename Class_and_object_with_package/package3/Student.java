package package3;

public class Student {
    protected int roll;
    protected String name;

    public Student() {
        this.roll = 0;
        this.name = "";
    }

    public Student(int roll, String name) {
        this.roll = roll;
        this.name = name;
    }

    public void setRoll(int r) {
        this.roll = r;
    }

    public void setName(String n) {
        this.name = n;
    }

    public int getRoll() {
        return this.roll;
    }

    public String getName() {
        return this.name;
    }
}