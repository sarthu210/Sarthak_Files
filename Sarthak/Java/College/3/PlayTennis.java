import java.util.*;

class PlayTennis
{
	public static void main(String args[])
	{
		Tennis player1 = new Tennis();
		player1.tennisData();
		player1.disPlay();

		Tennis player2 = new Tennis();
		player2.tennisData();
		player2.disPlay();

		Tennis player3 = new Tennis();
		player3.tennisData();
		player3.disPlay();

		if(player1.total_championships>player2.total_championships && player1.total_championships>player3.total_championships)
		{
			System.out.println("Real Champion is " + player1.player_name);
		}

		else if(player2.total_championships>player1.total_championships && player2.total_championships>player3.total_championships)
		{
			System.out.println("Real Champion is " + player2.player_name);
		}

		else
		{
			System.out.println("Real Champion is " + player3.player_name);
		}
	}
}