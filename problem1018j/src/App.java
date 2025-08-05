import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        int ValorOri, ValorF, i;
        int nota[] = {100, 50, 20, 10, 5, 2, 1};
        int cont;

        Scanner input = new Scanner(System.in);

        ValorOri = input.nextInt();
        ValorF = ValorOri;

        System.out.println(ValorOri);

        for(i = 0; i < 7; i++)
        {
            cont = ValorF / nota[i];
            ValorF = ValorF % nota[i];
            System.out.printf("%d nota(s) de R$ %d,00\n", cont, nota[i]);
        }

    }
}
