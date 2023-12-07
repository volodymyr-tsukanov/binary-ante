using System;

namespace VT.BinaryAnte
{
	public class Table
	{
		private int Id;
		private Rules rules;
		private Deck deck;


		public Table(Identifier identifier){
			Id = identifier.NextId(true);
			rules = Rules.DEFAULT;
			deck = new Deck();
		}
		public Table(Rules rules, Identifier identifier){
			Id = identifier.NextId(true);
			this.rules = rules;
			deck = new Deck();
		}


		public void Print(){
			Console.Write("Table " + Id + ": ");
		}
	}
}
