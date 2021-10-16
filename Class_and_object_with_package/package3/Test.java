package package3;

public class Test extends Student {
    protected int mark;

    public Test() {
        super();
        this.mark = 0;
    }

    public Test(int roll, String name, int mark) {
        super(roll, name);
        this.mark = mark;
    }

    public void setMark(int m) {
        this.mark = m;
    }

    public int getMark() {
        return this.mark;
    }
}
