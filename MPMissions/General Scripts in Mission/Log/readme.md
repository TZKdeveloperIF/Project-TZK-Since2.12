# 2.01 VBS commands
2.01 provides few operators from VBS. Below are details about them summarized basing on practice and BIS document about VBS2
+ loadConfig
    + Syntax: **loadConfig** filename  
    + Parameters: filename: String
    + Return Value: File  
    + Creates a config file and loads it from the file. If file inexist it'll **create a new config**
        + It seems we thus unnecessary to use *newConfig* command.
+ saveConfig
    + Syntax: config **saveConfig** filename  
    + Parameters: config: Config
    + filename: String
    + Return Value: Nothing  
    + Save config to specific file
+ openClass
    + Syntax: class **openClass** classname  
    + Parameters: class: Config 
    + classname: String
    + Return Value: File  
    + *An message box will appear if classname inexist*
+ addValue
    + classname **addValue** [valuename,valuecontent]  
    + Parameters: classname: Config 
    + valuename: String 
    + valuecontent: String, Number or Array 
    + *If value name (key) exists, its value will be updated.*
+ getValue
    + Syntax: class **getValue** name  
    + Parameters: class: Config 
    + name: String
    + Return Value: Number, String or Array - value, as saved via addValue 
    + *This value will return "" if name inexist*. This is good since we need an silence command in reading config unlike **openClass**.
+ addClass
    + Syntax: configfile **addClass** newClass  
    + Parameters: configfile: Config 
    + newclass: String
    + Return Value: Config  
    + *If value name (key) exists, this command won't effects.*
