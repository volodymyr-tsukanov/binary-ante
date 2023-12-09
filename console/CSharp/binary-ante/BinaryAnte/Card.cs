using System;
using VT.Types.Binary;

namespace VT.BinaryAnte
{
	public class Card
	{
		int Id;
		Binary Value;


		public Card(Identifier identifier){
			Id = identifier.NextId(Identifier.SIZE.HUGE2);
			Value = new Binary(Id);
		}
		public Card(BinaryType type, Identifier identifier){
			Id = identifier.NextId(Identifier.SIZE.LARGE);
			Value = new Binary(Id, type);
		}


		public int GetId(){
			return Id;
		}
		public Binary GetValue(){
			return Value.Clone();
		}


		public string ToString(){
			return Id + ":" + Value.ToString();
		}
	}
}
