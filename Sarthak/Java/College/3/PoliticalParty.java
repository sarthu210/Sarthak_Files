import java.util.*;

class PoliticalParty
{
	String name;
	int total_MLAs;
	int total_MLCs;
	int total_MPs;
	Scanner sc = new Scanner(System.in);

	void partDetial()
	{
	   System.out.println("Enter the name of party: ");
       name = sc.nextLine();

       System.out.println("Enter the total number of MLAs: ");
       total_MLAs = sc.nextInt();

       System.out.println("Enter the total number of MLCs: ");
       total_MLCs = sc.nextInt();

       System.out.println("Enter the total number of MPs: ");
       total_MPs = sc.nextInt();
	}

	void disPlay()
	{
		System.out.println("Name of party is, "+name);
		System.out.println("Total number of MLAs are, "+total_MLAs);
		System.out.println("Total number of MLCs are, "+total_MLCs);
		System.out.println("Total number of MPs, "+total_MPs);

	}


}