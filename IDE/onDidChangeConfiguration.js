// Add below lines to onDidChangeConfiguration
	if (vsc_variables.settings.sqf.enableARES) { patterns.push({ "include": "#ARES" }); }
    sqfProject.validationRegExPatterns.push({ 'cmd': 'NetworkID', 'regex': /(\b)(NetworkID)(\b)/g, 'msg': '[ARES] NetworkID returns an array containing number. Using this command driectly is unsuuggested. Uses GenNetIdStr.sqf instead.' });