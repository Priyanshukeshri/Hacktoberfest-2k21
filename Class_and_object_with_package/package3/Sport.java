package package3;

public class Sport extends Student {
    protected int score;

    public Sport() {
        super();
        this.score = 0;
    }

    public Sport(int roll, String name, int score){
        super(roll, name);
        this.score = score;
    }

    public void setScore(int s) {
        this.score = s;
    }

    public int getScore() {
        return this.score;
    }
}

