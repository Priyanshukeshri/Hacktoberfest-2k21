package package1;

public class Book {
  int id;
  String name;
  double price;

  public Book(int id, String name, double price) {
    this.id = id;
    this.name = name;
    this.price = price;
  }

  public void showData() {
    System.out.println(this.id + "  " + this.name + "  " + this.price);
  }
}
