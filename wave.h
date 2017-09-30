#ifndef WAVE_H
#define WAVE_H

/*
namespace race have class Wave
*/
namespace race{
	class Wave{
		//private attributes
		private:
			int interval;
			int waveTotal;
			int start;
		//public attributes
		public:
			~Wave();
			Wave();
			Wave(int interval,int waveTotal,int start);
			void setInterval(int interval);
			void setWaveTotal(int waveTotal);
			void setStart(int start);
			int getInterval();
			int getWaveTotal();
			int getStart();
			void Start();
	};
}

#endif
