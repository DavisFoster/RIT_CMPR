%%
% Name: Davis Foster
% Assignment: 2
% Section: 2
%

%function random0

function ran = random0(n, m)
	global ISEED
	switch(nargin)
		case 1
			m = n;
        case 2
           m = m;
           n = n;    
    end
           
	n = round(n);
	n = abs(n);
	m = round(m);
	m = abs(m);
	for ii = 1:n
    	for jj = 1:m
        	ISEED = mod(8121 * ISEED + 28411, 134456);
        	ran(ii, jj) = (ISEED / 134456);
    	end
	end			
end


%%
% Name: Davis Foster
% Assignment: Matlab 2 
% Section: 2 
%


%function seed

function seed(new_seed)
	global ISEED
	new_seed = round(new_seed);
	ISEED = abs(new_seed);
end	



