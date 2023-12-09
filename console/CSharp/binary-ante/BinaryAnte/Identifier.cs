using System;

namespace VT.BinaryAnte
{
	public class Identifier
	{
		private long Id;

		private const int DEFAULT_SIZE = 100;
		public enum SIZE { MICRO = 1, MINI = 10, TINY = 100, SMALL = 1000, NORMAL = 10000, LARGE = 100000, HUGE2 = 1000000, HUGE3 = 10000000 };


		public Identifier(){
			Id = DateTime.UtcNow.Ticks;
		}
		protected Identifier(long Id){
			this.Id = Id;
		}


		public long NextId(){
			return Id++;
		}
		public int NextId(SIZE size){
			return (int)(Id++ % (DEFAULT_SIZE*(int)size));
		}
	}
}