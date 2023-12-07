using System;

namespace VT.BinaryAnte
{
	public class Identifier
	{
		private long Id;


		public Identifier(){
			Id = DateTime.UtcNow.Ticks;
		}


		public long NextId(){
			return Id++;
		}
		public int NextId(bool _short){
			return (int)(Id++ % 10000);
		}
	}
}