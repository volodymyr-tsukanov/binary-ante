using System;
using VT.Types.Binary;

namespace VT.BinaryAnte
{
	public class Deck
	{
		private Binary deck, top;


		public Deck (BinaryType type){
			deck = new Binary(type);
			top = new Binary((BinaryType)((int)(type)-1));
		}
	}
}

