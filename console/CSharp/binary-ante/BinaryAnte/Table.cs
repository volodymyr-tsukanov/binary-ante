using System;
using System.Collections.Generic;
using VT.Utils;

namespace VT.BinaryAnte
{
	public class Table
	{
		int Id;
		Rules rules;
		Deck deck;
		Player[] players;

		protected Identifier identifier;


		public Table(Identifier identifier){
			Id = identifier.NextId(Identifier.SIZE.SMALL);
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


		public int GetId(){
			return Id;
		}
		public Identifier GetIdentifier(){
			return identifier;
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


		public class Converter : Saver.SaveInstance {
			public List<string> To(Object data){
				return null;
			}

			public Object From(List<string> data){
				return null;
			}
		}
	}
}
