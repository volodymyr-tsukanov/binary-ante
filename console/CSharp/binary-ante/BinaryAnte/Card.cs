using System;
using VT.Types.Binary;

namespace VT.BinaryAnte
{
	public class Card
	{
		private long Id;
		private Binary Value;


		public Card(BinaryType type){
			Id = new Identifier().NextId();
			Value = new Binary(type);
		}
		public Card(BinaryType type, Identifier identifier){
			Id = identifier.NextId();
			Value = new Binary(type);
		}


		long GetId(){
			return Id;
		}


		public string ToString(){
			return Id + ":" + Value.ToString();
		}
	}
}
