import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("\n******** Simple Calculator ***********");

        int firstNumber = 0;
        int secondNumber = 0;

        // Get the first number
        while (true) {
            System.out.print("\nEnter the first number: ");
            try {
                firstNumber = scanner.nextInt();
                break;
            } catch (Exception e) {
                System.out.println("Error: Please enter a valid integer!");
                scanner.next(); // Clear invalid input
            }
        }

        // Get the second number
        while (true) {
            System.out.print("Enter the second number: ");
            try {
                secondNumber = scanner.nextInt();
                break;
            } catch (Exception e) {
                System.out.println("Error: Please enter a valid integer!");
                scanner.next(); // Clear invalid input
            }
        }

        while (true) {
            System.out.println("\n-------------------------------------");
            System.out.println("01. Addition");
            System.out.println("02. Subtraction");
            System.out.println("03. Multiplication");
            System.out.println("04. Division");
            System.out.println("05. Modulus (Remainder)");
            System.out.println("06. Exit");
            System.out.println("-------------------------------------");
            System.out.print("Enter number for your choice: ");

            int choice;

            // Get the user's choice
            try {
                choice = scanner.nextInt();
            } catch (Exception e) {
                System.out.println("Error: Please enter a valid choice (1-6)!");
                scanner.next(); // Clear invalid input
                continue;
            }

            switch (choice) {
                case 1:
                    System.out.println("\n-------------------------------------");
                    System.out.println("Your Answer is: " + (firstNumber + secondNumber));
                    System.out.println("-------------------------------------");
                    break;
                case 2:
                    System.out.println("\n-------------------------------------");
                    System.out.println("Your Answer is: " + (firstNumber - secondNumber));
                    System.out.println("-------------------------------------");
                    break;
                case 3:
                    System.out.println("\n-------------------------------------");
                    System.out.println("Your Answer is: " + (firstNumber * secondNumber));
                    System.out.println("-------------------------------------");
                    break;
                case 4:
                    if (secondNumber == 0) {
                        System.out.println("\nError: Division by zero is not allowed!");
                    } else {
                        System.out.println("\n-------------------------------------");
                        System.out.println("Your Answer is: " + (firstNumber / secondNumber));
                        System.out.println("-------------------------------------");
                    }
                    break;
                case 5:
                    if (secondNumber == 0) {
                        System.out.println("\nError: Modulus by zero is not allowed!");
                    } else {
                        System.out.println("\n-------------------------------------");
                        System.out.println("Your Answer is: " + (firstNumber % secondNumber));
                        System.out.println("-------------------------------------");
                    }
                    break;
                case 6:
                    System.out.println("Exiting the program. Goodbye!");
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice! Please enter a number between 1 and 6.");
            }
        }
    }
}
