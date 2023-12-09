using System;
using System.Collections.Generic;

namespace VT.Utils
{
	public class Saver
	{
		public bool Save(){
			return false;
		}

		public bool Load(){
			return false;
		}


		public interface SaveInstance {
			List<string> To(Object data);
			Object From(List<string> data);
		}
	}
}
