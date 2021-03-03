import java.util.Scanner;

public class DiceExperiment {
    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);
        System.out.print("Enter number of dice: ");
        int n = userInput.nextInt();
        System.out.print("Enter number of rolls: ");
        int rolls = userInput.nextInt();

        int[] results = new int[n * 6 + 1];

        for (int i = 0; i < rolls; i++) {
            int outcome = rollDice(n);
            results[outcome]++;
        }
        System.out.println();
        printResults(results);
    }

    public static int rollSingle() {
        return (int) (Math.random() * 6) + 1;
    }

    public static int rollDice(int n) {
        int outcome = 0;

        for (int i = 0; i < n; i++) {
            outcome += rollSingle();
        }

        return outcome;
    }

    public static void printResults(int[] results) {
        System.out.println("Results of Experiment");
        System.out.println("-------------------");
        System.out.printf("%-7s|%7s\n", "Roll", "Count");
        System.out.println("-------------------");
        int maxNumber = 0;
        int maxValue = 0;
        for (int i = 0; i < results.length; i++) {
            if (results[i] != 0) {
                System.out.printf("%-7d|%7d\n", i, results[i]);

                if (results[i] > maxValue) {
                    maxValue = results[i];
                    maxNumber = i;
                }
            }
        }
        System.out.println("-------------------");
        System.out.println("Most likely rolls: " + maxNumber);
    }
}
