import java.util.Scanner;
public class App {
    public static void main(String[] args) throws Exception {
        double area = 0, pi = 3.14159;

        Scanner input  = new Scanner(System.in);

        double raio = input.nextDouble();

        area = pi * raio * raio;

        System.out.printf("A=%.4f\n", area);

    }
}
