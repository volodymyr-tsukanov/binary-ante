using System;
using VT.Types.Binary;

namespace VT.BinaryAnte
{
	public class Deck
	{
		int Id;
		Card[] deck;


		public Deck(int deckSize, Identifier identifier){
			Id = identifier.NextId(Identifier.SIZE.NORMAL);
			deck = new Card[deckSize];
			for(int i = 0; i < deckSize; i++) deck[i] = new Card(identifier);
		}
		public Deck(int deckSize, BinaryType cardType, Identifier identifier){
			Id = identifier.NextId(Identifier.SIZE.NORMAL);
			deck = new Card[deckSize];
			for(int i = 0; i < deckSize; i++) deck[i] = new Card(cardType, identifier);
		}


		public int GetId(){
			return Id;
		}

		public int GetSize(){
			return deck.Length;
		}

		public Card GetTop(){
			return deck[0];
		}
		public Card Get(int position){
			if (position < deck.Length)
				return deck[position];
			else
				return null;
		}


		public void Toss(){
			for (int i = 0; i < deck.Length; i += 2) {
				Random r = new Random();
				int pos1 = r.Next() % (deck.Length - 1), pos2 = r.Next() % (deck.Length - 1);
				Card holder = deck[pos1];
				deck[pos1] = deck[pos2];
				deck[pos2] = holder;
			}
		}

		public void Print(){
			Console.Write("Deck " + Id + ":{ ");
			for(int i = 0; i < deck.Length; i++) Console.Write(deck[i].ToString() + " ");
			Console.WriteLine("\tTop: " + deck[0].ToString() + "}");
		}

		public void Clear(){
			deck = null;
		}
	}
}
