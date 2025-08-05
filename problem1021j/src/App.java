import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        double ValorOri, dinh;
        int notas[] = {10000, 5000, 2000, 1000, 500, 200};
        int moedas[] = {100, 50, 25, 10, 5, 1};

        int i, qntd, ValorF;

        Scanner input = new Scanner(System.in);

        ValorOri = input.nextFloat();

        ValorF = (int) (ValorOri * 100 + 0.5f);

        System.out.println("NOTAS:");

        for(i = 0; i < 6; i++)
        {
            qntd = ValorF / notas[i];
            ValorF = ValorF % notas[i];
            dinh = (float) (notas[i]/100);
            System.out.printf("%d nota(s) de R$ %.2f\n", qntd, dinh);
        }

        System.out.println("MOEDAS:");

        for(i = 0; i < 6; i++)
        {
            qntd = ValorF / moedas[i];
            ValorF = ValorF % moedas[i];
            dinh = (double)(moedas[i] / 100.0);
            System.out.printf("%d moeda(s) de R$ %.2f\n", qntd, dinh); 
        }

    }
}
