using System;
using VT.Types.Binary;

namespace VT.BinaryAnte
{
	public class Player
	{
		int Id;
		int Score;


		public Player(Table table){
			Id = table.GetIdentifier().NextId(Identifier.SIZE.LARGE);
		}


		public int GetId(){
			return Id;
		}
		public int GetScore(){
			return Score;
		}


		public string ToString(){
			return "Player " + Id + ":" + "}";
		}
	}
}
