using System;

namespace VT.BinaryAnte
{
	public class Table
	{
		int Id;
		Rules rules;
		Deck deck;

		protected Identifier identifier;


		public Table(Identifier identifier){
			Id = identifier.NextId(Identifier.SIZE.TINY);
			rules = Rules.DEFAULT;
			this.identifier = identifier;
			Initialize();
		}
		public Table(Rules rules, Identifier identifier){
			Id = identifier.NextId(Identifier.SIZE.SMALL);
			this.rules = rules;
			this.identifier = identifier;
			Initialize();
		}


		void Initialize(){
			switch (rules){
			case Rules.NOT_SET:
			case Rules.DEFAULT:
				deck = new Deck(52, identifier);
				break;
			}
		}


		public void Print(){
			Console.Write("Table " + Id + ":{\n ");
			deck.Print();
			Console.WriteLine("}");
		}
	}
}
