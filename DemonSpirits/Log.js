class Log {
	constructor(logger) {
		this.logger = logger;
	}

	 set Level(level) {
			this.logger = level;
			return logger;
	 }

	 get Level() {
		 return Level
	 }
		
	 Errors(message) {
		if (this.logger == 0)
		{
			return(message)
		}
	 }

	 Warn(message) {
		if (this.logger == 1)
		{
			return(message)
		}
	 }

	 Info(message) {
		if (this.logger == 2)
		{
			return(message)
		}
	}
}

logger = { _ERROR : 0, _WARN : 1, _INFO : 2 } 

const logger1 = new Log(logger._INFO ); 
console.log(logger1.Errors('[ERROR]: Read all about it bitch'));
console.log(logger1.Warn('[WARNING]: Come check on this bitch'));
console.log(logger1.Info('[INFO]: Here is a brief Infomericial')); 
