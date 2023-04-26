import java.util.*;

class BankAccount
{
int acc_no;
String name;
double balance;
Scanner sc = new Scanner(System.in);


	void userData()
	{
       System.out.println("Enter the name: ");
       name = sc.nextLine();

       System.out.println("Enter the account number: ");
       acc_no = sc.nextInt();

       System.out.println("Enter the balance: ");
       balance = sc.nextDouble();
	}

	void disPlay()
	{
		System.out.println("Name is, "+name);
		System.out.println("Account number is, "+acc_no);
		System.out.println("Balance is, "+balance);

	}

	



}