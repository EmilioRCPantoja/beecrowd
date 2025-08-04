import java.util.Scanner;
public class App {
    public static void main(String[] args) throws Exception 
    {
        Scanner input= new Scanner(System.in);

        int A = Integer.parseInt(input.nextLine());
        int B = Integer.parseInt(input.nextLine());

        int x = A + B;

        System.out.print("X = ");
        System.out.println(x);

    }
}
