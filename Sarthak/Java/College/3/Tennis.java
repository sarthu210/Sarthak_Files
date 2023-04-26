import java.util.*;

class Tennis
{
	String player_name;
	String country_name;
	int total_championships;
	Scanner sc = new Scanner(System.in);

	void tennisData()
	{
	   System.out.println("Enter the player name: ");
       player_name = sc.nextLine();

       System.out.println("Enter the country name: ");
       country_name = sc.nextLine();

       System.out.println("Enter the total number of championships: ");
       total_championships = sc.nextInt();
	}

	void disPlay()
	{
		System.out.println("Name of player is, "+player_name);
		System.out.println("Name of the country is, "+country_name);
		System.out.println("Total champions are, "+total_championships);

	}


}