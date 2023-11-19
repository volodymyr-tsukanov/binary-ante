using System;

namespace binary_ante
{
	public enum BinaryType { bin4=4, bin8=8, bin12=12, bin16=16, bin20=20, bin24=24, bin28=28, bin32=32 };


	public class Binary
	{
		private BinaryType Type;
		private int Value;


		public Binary(){
			Type = BinaryType.bin8;
			SetValue(randRange(0, (int)Math.Pow(2, (int)Type)));
		}
		public Binary(BinaryType type){
			this.Type = type;
			SetValue(randRange(0, (int)Math.Pow(2, (int)type)));
		}
		public Binary(BinaryType type, int decValue){
			this.Type = type;
			SetValue(decValue);
		}


		public void SetValue(int decValue){
			int max = (int)Math.Pow(2, (int)Type);
			if(decValue < max){
				Value = decValue;
			} else Value = decValue % (max-1);
		}


		int RandRange(int min, int max){
			return new Random().Next(min, max);
		}

		public int ToDec(){
			return Value;
		}
		override public string ToString(){
			string s = "";

			int num = Value;
			while (num >= 1) {
				s = (num % 2).ToString() + s;
				num /= 2;
			}
			while (s.Length < (int) Type)
				s = "0" + s;

			return s;
		}
	}
}

