using System;
using VT.Types.Binary;

namespace VT.BinaryAnte
{
	public class Card
	{
		private int Id;
		private Binary Value;


		public Card(Identifier identifier){
			Id = identifier.NextId(Identifier.SIZE.LARGE);
			Value = new Binary(Id);
		}
		public Card(BinaryType type, Identifier identifier){
			Id = identifier.NextId(Identifier.SIZE.LARGE);
			Value = new Binary(Id, type);
		}


		long GetId(){
			return Id;
		}


		public string ToString(){
			return Id + ":" + Value.ToString();
		}
	}
}
